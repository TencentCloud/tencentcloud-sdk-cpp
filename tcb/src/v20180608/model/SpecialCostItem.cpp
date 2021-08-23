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

#include <tencentcloud/tcb/v20180608/model/SpecialCostItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

SpecialCostItem::SpecialCostItem() :
    m_reportDateHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome SpecialCostItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReportDate") && !value["ReportDate"].IsNull())
    {
        if (!value["ReportDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecialCostItem.ReportDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportDate = string(value["ReportDate"].GetString());
        m_reportDateHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecialCostItem.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("EnvId") && !value["EnvId"].IsNull())
    {
        if (!value["EnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecialCostItem.EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(value["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecialCostItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpecialCostItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_reportDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportDate.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string SpecialCostItem::GetReportDate() const
{
    return m_reportDate;
}

void SpecialCostItem::SetReportDate(const string& _reportDate)
{
    m_reportDate = _reportDate;
    m_reportDateHasBeenSet = true;
}

bool SpecialCostItem::ReportDateHasBeenSet() const
{
    return m_reportDateHasBeenSet;
}

string SpecialCostItem::GetUin() const
{
    return m_uin;
}

void SpecialCostItem::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool SpecialCostItem::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string SpecialCostItem::GetEnvId() const
{
    return m_envId;
}

void SpecialCostItem::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool SpecialCostItem::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string SpecialCostItem::GetStatus() const
{
    return m_status;
}

void SpecialCostItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SpecialCostItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

