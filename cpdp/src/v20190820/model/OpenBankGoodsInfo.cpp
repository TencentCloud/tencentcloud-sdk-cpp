/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/cpdp/v20190820/model/OpenBankGoodsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

OpenBankGoodsInfo::OpenBankGoodsInfo() :
    m_goodsNameHasBeenSet(false),
    m_goodsDetailHasBeenSet(false),
    m_goodsDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome OpenBankGoodsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GoodsName") && !value["GoodsName"].IsNull())
    {
        if (!value["GoodsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankGoodsInfo.GoodsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_goodsName = string(value["GoodsName"].GetString());
        m_goodsNameHasBeenSet = true;
    }

    if (value.HasMember("GoodsDetail") && !value["GoodsDetail"].IsNull())
    {
        if (!value["GoodsDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankGoodsInfo.GoodsDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_goodsDetail = string(value["GoodsDetail"].GetString());
        m_goodsDetailHasBeenSet = true;
    }

    if (value.HasMember("GoodsDescription") && !value["GoodsDescription"].IsNull())
    {
        if (!value["GoodsDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankGoodsInfo.GoodsDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_goodsDescription = string(value["GoodsDescription"].GetString());
        m_goodsDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpenBankGoodsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_goodsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_goodsName.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_goodsDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_goodsDescription.c_str(), allocator).Move(), allocator);
    }

}


string OpenBankGoodsInfo::GetGoodsName() const
{
    return m_goodsName;
}

void OpenBankGoodsInfo::SetGoodsName(const string& _goodsName)
{
    m_goodsName = _goodsName;
    m_goodsNameHasBeenSet = true;
}

bool OpenBankGoodsInfo::GoodsNameHasBeenSet() const
{
    return m_goodsNameHasBeenSet;
}

string OpenBankGoodsInfo::GetGoodsDetail() const
{
    return m_goodsDetail;
}

void OpenBankGoodsInfo::SetGoodsDetail(const string& _goodsDetail)
{
    m_goodsDetail = _goodsDetail;
    m_goodsDetailHasBeenSet = true;
}

bool OpenBankGoodsInfo::GoodsDetailHasBeenSet() const
{
    return m_goodsDetailHasBeenSet;
}

string OpenBankGoodsInfo::GetGoodsDescription() const
{
    return m_goodsDescription;
}

void OpenBankGoodsInfo::SetGoodsDescription(const string& _goodsDescription)
{
    m_goodsDescription = _goodsDescription;
    m_goodsDescriptionHasBeenSet = true;
}

bool OpenBankGoodsInfo::GoodsDescriptionHasBeenSet() const
{
    return m_goodsDescriptionHasBeenSet;
}

