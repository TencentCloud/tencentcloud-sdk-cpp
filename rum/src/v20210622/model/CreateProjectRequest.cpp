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

#include <tencentcloud/rum/v20210622/model/CreateProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

CreateProjectRequest::CreateProjectRequest() :
    m_nameHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_rateHasBeenSet(false),
    m_enableURLGroupHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_repoHasBeenSet(false),
    m_uRLHasBeenSet(false),
    m_descHasBeenSet(false)
{
}

string CreateProjectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_rateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rate.c_str(), allocator).Move(), allocator);
    }

    if (m_enableURLGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableURLGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableURLGroup, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_repoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Repo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repo.c_str(), allocator).Move(), allocator);
    }

    if (m_uRLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uRL.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateProjectRequest::GetName() const
{
    return m_name;
}

void CreateProjectRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateProjectRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateProjectRequest::GetInstanceID() const
{
    return m_instanceID;
}

void CreateProjectRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool CreateProjectRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string CreateProjectRequest::GetRate() const
{
    return m_rate;
}

void CreateProjectRequest::SetRate(const string& _rate)
{
    m_rate = _rate;
    m_rateHasBeenSet = true;
}

bool CreateProjectRequest::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

uint64_t CreateProjectRequest::GetEnableURLGroup() const
{
    return m_enableURLGroup;
}

void CreateProjectRequest::SetEnableURLGroup(const uint64_t& _enableURLGroup)
{
    m_enableURLGroup = _enableURLGroup;
    m_enableURLGroupHasBeenSet = true;
}

bool CreateProjectRequest::EnableURLGroupHasBeenSet() const
{
    return m_enableURLGroupHasBeenSet;
}

string CreateProjectRequest::GetType() const
{
    return m_type;
}

void CreateProjectRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateProjectRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateProjectRequest::GetRepo() const
{
    return m_repo;
}

void CreateProjectRequest::SetRepo(const string& _repo)
{
    m_repo = _repo;
    m_repoHasBeenSet = true;
}

bool CreateProjectRequest::RepoHasBeenSet() const
{
    return m_repoHasBeenSet;
}

string CreateProjectRequest::GetURL() const
{
    return m_uRL;
}

void CreateProjectRequest::SetURL(const string& _uRL)
{
    m_uRL = _uRL;
    m_uRLHasBeenSet = true;
}

bool CreateProjectRequest::URLHasBeenSet() const
{
    return m_uRLHasBeenSet;
}

string CreateProjectRequest::GetDesc() const
{
    return m_desc;
}

void CreateProjectRequest::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool CreateProjectRequest::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}


