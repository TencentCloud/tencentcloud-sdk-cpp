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

#include <tencentcloud/iecp/v20210914/model/ApplicationTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

ApplicationTemplate::ApplicationTemplate() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_workloadKindHasBeenSet(false),
    m_manageUrlHasBeenSet(false),
    m_distributeTimeHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationTemplate.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationTemplate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationTemplate.Source` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetUint64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("WorkloadKind") && !value["WorkloadKind"].IsNull())
    {
        if (!value["WorkloadKind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationTemplate.WorkloadKind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadKind = string(value["WorkloadKind"].GetString());
        m_workloadKindHasBeenSet = true;
    }

    if (value.HasMember("ManageUrl") && !value["ManageUrl"].IsNull())
    {
        if (!value["ManageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationTemplate.ManageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manageUrl = string(value["ManageUrl"].GetString());
        m_manageUrlHasBeenSet = true;
    }

    if (value.HasMember("DistributeTime") && !value["DistributeTime"].IsNull())
    {
        if (!value["DistributeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationTemplate.DistributeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_distributeTime = string(value["DistributeTime"].GetString());
        m_distributeTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_workloadKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadKind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadKind.c_str(), allocator).Move(), allocator);
    }

    if (m_manageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_distributeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DistributeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_distributeTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ApplicationTemplate::GetId() const
{
    return m_id;
}

void ApplicationTemplate::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ApplicationTemplate::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ApplicationTemplate::GetName() const
{
    return m_name;
}

void ApplicationTemplate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ApplicationTemplate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ApplicationTemplate::GetSource() const
{
    return m_source;
}

void ApplicationTemplate::SetSource(const uint64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ApplicationTemplate::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string ApplicationTemplate::GetWorkloadKind() const
{
    return m_workloadKind;
}

void ApplicationTemplate::SetWorkloadKind(const string& _workloadKind)
{
    m_workloadKind = _workloadKind;
    m_workloadKindHasBeenSet = true;
}

bool ApplicationTemplate::WorkloadKindHasBeenSet() const
{
    return m_workloadKindHasBeenSet;
}

string ApplicationTemplate::GetManageUrl() const
{
    return m_manageUrl;
}

void ApplicationTemplate::SetManageUrl(const string& _manageUrl)
{
    m_manageUrl = _manageUrl;
    m_manageUrlHasBeenSet = true;
}

bool ApplicationTemplate::ManageUrlHasBeenSet() const
{
    return m_manageUrlHasBeenSet;
}

string ApplicationTemplate::GetDistributeTime() const
{
    return m_distributeTime;
}

void ApplicationTemplate::SetDistributeTime(const string& _distributeTime)
{
    m_distributeTime = _distributeTime;
    m_distributeTimeHasBeenSet = true;
}

bool ApplicationTemplate::DistributeTimeHasBeenSet() const
{
    return m_distributeTimeHasBeenSet;
}

