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

#include <tencentcloud/cdn/v20180606/model/CdnIpHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

CdnIpHistory::CdnIpHistory() :
    m_statusHasBeenSet(false),
    m_datetimeHasBeenSet(false)
{
}

CoreInternalOutcome CdnIpHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CdnIpHistory.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Datetime") && !value["Datetime"].IsNull())
    {
        if (!value["Datetime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CdnIpHistory.Datetime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datetime = string(value["Datetime"].GetString());
        m_datetimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CdnIpHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_datetimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Datetime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datetime.c_str(), allocator).Move(), allocator);
    }

}


string CdnIpHistory::GetStatus() const
{
    return m_status;
}

void CdnIpHistory::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CdnIpHistory::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CdnIpHistory::GetDatetime() const
{
    return m_datetime;
}

void CdnIpHistory::SetDatetime(const string& _datetime)
{
    m_datetime = _datetime;
    m_datetimeHasBeenSet = true;
}

bool CdnIpHistory::DatetimeHasBeenSet() const
{
    return m_datetimeHasBeenSet;
}

