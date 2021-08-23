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

#include <tencentcloud/dnspod/v20210323/model/DomainShareInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

DomainShareInfo::DomainShareInfo() :
    m_shareToHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome DomainShareInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ShareTo") && !value["ShareTo"].IsNull())
    {
        if (!value["ShareTo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainShareInfo.ShareTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shareTo = string(value["ShareTo"].GetString());
        m_shareToHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainShareInfo.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainShareInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainShareInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_shareToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shareTo.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string DomainShareInfo::GetShareTo() const
{
    return m_shareTo;
}

void DomainShareInfo::SetShareTo(const string& _shareTo)
{
    m_shareTo = _shareTo;
    m_shareToHasBeenSet = true;
}

bool DomainShareInfo::ShareToHasBeenSet() const
{
    return m_shareToHasBeenSet;
}

string DomainShareInfo::GetMode() const
{
    return m_mode;
}

void DomainShareInfo::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DomainShareInfo::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string DomainShareInfo::GetStatus() const
{
    return m_status;
}

void DomainShareInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DomainShareInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

