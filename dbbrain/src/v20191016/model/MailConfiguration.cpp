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

#include <tencentcloud/dbbrain/v20191016/model/MailConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20191016::Model;
using namespace std;

MailConfiguration::MailConfiguration() :
    m_sendMailHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_healthStatusHasBeenSet(false),
    m_contactPersonHasBeenSet(false),
    m_contactGroupHasBeenSet(false)
{
}

CoreInternalOutcome MailConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SendMail") && !value["SendMail"].IsNull())
    {
        if (!value["SendMail"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MailConfiguration.SendMail` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sendMail = value["SendMail"].GetInt64();
        m_sendMailHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MailConfiguration.Region` is not array type"));

        const rapidjson::Value &tmpValue = value["Region"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_region.push_back((*itr).GetString());
        }
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("HealthStatus") && !value["HealthStatus"].IsNull())
    {
        if (!value["HealthStatus"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MailConfiguration.HealthStatus` is not array type"));

        const rapidjson::Value &tmpValue = value["HealthStatus"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_healthStatus.push_back((*itr).GetString());
        }
        m_healthStatusHasBeenSet = true;
    }

    if (value.HasMember("ContactPerson") && !value["ContactPerson"].IsNull())
    {
        if (!value["ContactPerson"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MailConfiguration.ContactPerson` is not array type"));

        const rapidjson::Value &tmpValue = value["ContactPerson"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_contactPerson.push_back((*itr).GetInt64());
        }
        m_contactPersonHasBeenSet = true;
    }

    if (value.HasMember("ContactGroup") && !value["ContactGroup"].IsNull())
    {
        if (!value["ContactGroup"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MailConfiguration.ContactGroup` is not array type"));

        const rapidjson::Value &tmpValue = value["ContactGroup"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_contactGroup.push_back((*itr).GetInt64());
        }
        m_contactGroupHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MailConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sendMailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendMail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendMail, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_region.begin(); itr != m_region.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_healthStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_healthStatus.begin(); itr != m_healthStatus.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_contactPersonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactPerson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_contactPerson.begin(); itr != m_contactPerson.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_contactGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_contactGroup.begin(); itr != m_contactGroup.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


int64_t MailConfiguration::GetSendMail() const
{
    return m_sendMail;
}

void MailConfiguration::SetSendMail(const int64_t& _sendMail)
{
    m_sendMail = _sendMail;
    m_sendMailHasBeenSet = true;
}

bool MailConfiguration::SendMailHasBeenSet() const
{
    return m_sendMailHasBeenSet;
}

vector<string> MailConfiguration::GetRegion() const
{
    return m_region;
}

void MailConfiguration::SetRegion(const vector<string>& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool MailConfiguration::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<string> MailConfiguration::GetHealthStatus() const
{
    return m_healthStatus;
}

void MailConfiguration::SetHealthStatus(const vector<string>& _healthStatus)
{
    m_healthStatus = _healthStatus;
    m_healthStatusHasBeenSet = true;
}

bool MailConfiguration::HealthStatusHasBeenSet() const
{
    return m_healthStatusHasBeenSet;
}

vector<int64_t> MailConfiguration::GetContactPerson() const
{
    return m_contactPerson;
}

void MailConfiguration::SetContactPerson(const vector<int64_t>& _contactPerson)
{
    m_contactPerson = _contactPerson;
    m_contactPersonHasBeenSet = true;
}

bool MailConfiguration::ContactPersonHasBeenSet() const
{
    return m_contactPersonHasBeenSet;
}

vector<int64_t> MailConfiguration::GetContactGroup() const
{
    return m_contactGroup;
}

void MailConfiguration::SetContactGroup(const vector<int64_t>& _contactGroup)
{
    m_contactGroup = _contactGroup;
    m_contactGroupHasBeenSet = true;
}

bool MailConfiguration::ContactGroupHasBeenSet() const
{
    return m_contactGroupHasBeenSet;
}

