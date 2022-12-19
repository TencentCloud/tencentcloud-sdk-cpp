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

#include <tencentcloud/ssl/v20191205/model/PreAuditInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

PreAuditInfo::PreAuditInfo() :
    m_totalPeriodHasBeenSet(false),
    m_nowPeriodHasBeenSet(false),
    m_managerIdHasBeenSet(false)
{
}

CoreInternalOutcome PreAuditInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalPeriod") && !value["TotalPeriod"].IsNull())
    {
        if (!value["TotalPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PreAuditInfo.TotalPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPeriod = value["TotalPeriod"].GetInt64();
        m_totalPeriodHasBeenSet = true;
    }

    if (value.HasMember("NowPeriod") && !value["NowPeriod"].IsNull())
    {
        if (!value["NowPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PreAuditInfo.NowPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nowPeriod = value["NowPeriod"].GetInt64();
        m_nowPeriodHasBeenSet = true;
    }

    if (value.HasMember("ManagerId") && !value["ManagerId"].IsNull())
    {
        if (!value["ManagerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreAuditInfo.ManagerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managerId = string(value["ManagerId"].GetString());
        m_managerIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PreAuditInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPeriod, allocator);
    }

    if (m_nowPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NowPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nowPeriod, allocator);
    }

    if (m_managerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_managerId.c_str(), allocator).Move(), allocator);
    }

}


int64_t PreAuditInfo::GetTotalPeriod() const
{
    return m_totalPeriod;
}

void PreAuditInfo::SetTotalPeriod(const int64_t& _totalPeriod)
{
    m_totalPeriod = _totalPeriod;
    m_totalPeriodHasBeenSet = true;
}

bool PreAuditInfo::TotalPeriodHasBeenSet() const
{
    return m_totalPeriodHasBeenSet;
}

int64_t PreAuditInfo::GetNowPeriod() const
{
    return m_nowPeriod;
}

void PreAuditInfo::SetNowPeriod(const int64_t& _nowPeriod)
{
    m_nowPeriod = _nowPeriod;
    m_nowPeriodHasBeenSet = true;
}

bool PreAuditInfo::NowPeriodHasBeenSet() const
{
    return m_nowPeriodHasBeenSet;
}

string PreAuditInfo::GetManagerId() const
{
    return m_managerId;
}

void PreAuditInfo::SetManagerId(const string& _managerId)
{
    m_managerId = _managerId;
    m_managerIdHasBeenSet = true;
}

bool PreAuditInfo::ManagerIdHasBeenSet() const
{
    return m_managerIdHasBeenSet;
}

