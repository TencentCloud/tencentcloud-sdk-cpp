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

#include <tencentcloud/aca/v20210323/model/LoginOutResponseData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

LoginOutResponseData::LoginOutResponseData() :
    m_timestampHasBeenSet(false)
{
}

CoreInternalOutcome LoginOutResponseData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginOutResponseData.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoginOutResponseData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

}


int64_t LoginOutResponseData::GetTimestamp() const
{
    return m_timestamp;
}

void LoginOutResponseData::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool LoginOutResponseData::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

