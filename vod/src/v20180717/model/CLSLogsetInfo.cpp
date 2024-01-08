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

#include <tencentcloud/vod/v20180717/model/CLSLogsetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CLSLogsetInfo::CLSLogsetInfo() :
    m_logsetIdHasBeenSet(false),
    m_logsetNameHasBeenSet(false)
{
}

CoreInternalOutcome CLSLogsetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSLogsetInfo.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("LogsetName") && !value["LogsetName"].IsNull())
    {
        if (!value["LogsetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSLogsetInfo.LogsetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetName = string(value["LogsetName"].GetString());
        m_logsetNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CLSLogsetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetName.c_str(), allocator).Move(), allocator);
    }

}


string CLSLogsetInfo::GetLogsetId() const
{
    return m_logsetId;
}

void CLSLogsetInfo::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool CLSLogsetInfo::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string CLSLogsetInfo::GetLogsetName() const
{
    return m_logsetName;
}

void CLSLogsetInfo::SetLogsetName(const string& _logsetName)
{
    m_logsetName = _logsetName;
    m_logsetNameHasBeenSet = true;
}

bool CLSLogsetInfo::LogsetNameHasBeenSet() const
{
    return m_logsetNameHasBeenSet;
}

