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

#include <tencentcloud/wedata/v20210820/model/IntegrationInstanceLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

IntegrationInstanceLog::IntegrationInstanceLog() :
    m_logInfoHasBeenSet(false)
{
}

CoreInternalOutcome IntegrationInstanceLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogInfo") && !value["LogInfo"].IsNull())
    {
        if (!value["LogInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationInstanceLog.LogInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logInfo = string(value["LogInfo"].GetString());
        m_logInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntegrationInstanceLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logInfo.c_str(), allocator).Move(), allocator);
    }

}


string IntegrationInstanceLog::GetLogInfo() const
{
    return m_logInfo;
}

void IntegrationInstanceLog::SetLogInfo(const string& _logInfo)
{
    m_logInfo = _logInfo;
    m_logInfoHasBeenSet = true;
}

bool IntegrationInstanceLog::LogInfoHasBeenSet() const
{
    return m_logInfoHasBeenSet;
}

