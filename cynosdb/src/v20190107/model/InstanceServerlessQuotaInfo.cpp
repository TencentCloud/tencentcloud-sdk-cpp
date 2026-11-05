/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cynosdb/v20190107/model/InstanceServerlessQuotaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

InstanceServerlessQuotaInfo::InstanceServerlessQuotaInfo() :
    m_instanceIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_maxCcuHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_enableTimeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceServerlessQuotaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceServerlessQuotaInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceServerlessQuotaInfo.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("MaxCcu") && !value["MaxCcu"].IsNull())
    {
        if (!value["MaxCcu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceServerlessQuotaInfo.MaxCcu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxCcu = value["MaxCcu"].GetDouble();
        m_maxCcuHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceServerlessQuotaInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EnableTime") && !value["EnableTime"].IsNull())
    {
        if (!value["EnableTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceServerlessQuotaInfo.EnableTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enableTime = string(value["EnableTime"].GetString());
        m_enableTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceServerlessQuotaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_maxCcuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCcu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxCcu, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_enableTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enableTime.c_str(), allocator).Move(), allocator);
    }

}


string InstanceServerlessQuotaInfo::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceServerlessQuotaInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceServerlessQuotaInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceServerlessQuotaInfo::GetInstanceType() const
{
    return m_instanceType;
}

void InstanceServerlessQuotaInfo::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InstanceServerlessQuotaInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

double InstanceServerlessQuotaInfo::GetMaxCcu() const
{
    return m_maxCcu;
}

void InstanceServerlessQuotaInfo::SetMaxCcu(const double& _maxCcu)
{
    m_maxCcu = _maxCcu;
    m_maxCcuHasBeenSet = true;
}

bool InstanceServerlessQuotaInfo::MaxCcuHasBeenSet() const
{
    return m_maxCcuHasBeenSet;
}

string InstanceServerlessQuotaInfo::GetStatus() const
{
    return m_status;
}

void InstanceServerlessQuotaInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceServerlessQuotaInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string InstanceServerlessQuotaInfo::GetEnableTime() const
{
    return m_enableTime;
}

void InstanceServerlessQuotaInfo::SetEnableTime(const string& _enableTime)
{
    m_enableTime = _enableTime;
    m_enableTimeHasBeenSet = true;
}

bool InstanceServerlessQuotaInfo::EnableTimeHasBeenSet() const
{
    return m_enableTimeHasBeenSet;
}

