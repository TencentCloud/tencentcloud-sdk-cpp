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

#include <tencentcloud/ssa/v20180608/model/AlertDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

AlertDetail::AlertDetail() :
    m_baseInfoHasBeenSet(false),
    m_detailHasBeenSet(false)
{
}

CoreInternalOutcome AlertDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BaseInfo") && !value["BaseInfo"].IsNull())
    {
        if (!value["BaseInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AlertDetail.BaseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_baseInfo.Deserialize(value["BaseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_baseInfoHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertDetail.Detail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detail = string(value["Detail"].GetString());
        m_detailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlertDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_baseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_baseInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detail.c_str(), allocator).Move(), allocator);
    }

}


AlertType AlertDetail::GetBaseInfo() const
{
    return m_baseInfo;
}

void AlertDetail::SetBaseInfo(const AlertType& _baseInfo)
{
    m_baseInfo = _baseInfo;
    m_baseInfoHasBeenSet = true;
}

bool AlertDetail::BaseInfoHasBeenSet() const
{
    return m_baseInfoHasBeenSet;
}

string AlertDetail::GetDetail() const
{
    return m_detail;
}

void AlertDetail::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool AlertDetail::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

