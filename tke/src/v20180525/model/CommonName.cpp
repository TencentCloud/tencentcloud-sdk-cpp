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

#include <tencentcloud/tke/v20180525/model/CommonName.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

CommonName::CommonName() :
    m_subaccountUinHasBeenSet(false),
    m_cNHasBeenSet(false)
{
}

CoreInternalOutcome CommonName::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubaccountUin") && !value["SubaccountUin"].IsNull())
    {
        if (!value["SubaccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonName.SubaccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subaccountUin = string(value["SubaccountUin"].GetString());
        m_subaccountUinHasBeenSet = true;
    }

    if (value.HasMember("CN") && !value["CN"].IsNull())
    {
        if (!value["CN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonName.CN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cN = string(value["CN"].GetString());
        m_cNHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommonName::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subaccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubaccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subaccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_cNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cN.c_str(), allocator).Move(), allocator);
    }

}


string CommonName::GetSubaccountUin() const
{
    return m_subaccountUin;
}

void CommonName::SetSubaccountUin(const string& _subaccountUin)
{
    m_subaccountUin = _subaccountUin;
    m_subaccountUinHasBeenSet = true;
}

bool CommonName::SubaccountUinHasBeenSet() const
{
    return m_subaccountUinHasBeenSet;
}

string CommonName::GetCN() const
{
    return m_cN;
}

void CommonName::SetCN(const string& _cN)
{
    m_cN = _cN;
    m_cNHasBeenSet = true;
}

bool CommonName::CNHasBeenSet() const
{
    return m_cNHasBeenSet;
}

