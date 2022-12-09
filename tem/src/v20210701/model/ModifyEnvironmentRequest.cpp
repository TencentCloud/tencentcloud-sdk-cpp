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

#include <tencentcloud/tem/v20210701/model/ModifyEnvironmentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

ModifyEnvironmentRequest::ModifyEnvironmentRequest() :
    m_environmentIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_vpcHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_sourceChannelHasBeenSet(false),
    m_envTypeHasBeenSet(false)
{
}

string ModifyEnvironmentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environmentName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vpc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpc.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sourceChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceChannel, allocator);
    }

    if (m_envTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyEnvironmentRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void ModifyEnvironmentRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool ModifyEnvironmentRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string ModifyEnvironmentRequest::GetEnvironmentName() const
{
    return m_environmentName;
}

void ModifyEnvironmentRequest::SetEnvironmentName(const string& _environmentName)
{
    m_environmentName = _environmentName;
    m_environmentNameHasBeenSet = true;
}

bool ModifyEnvironmentRequest::EnvironmentNameHasBeenSet() const
{
    return m_environmentNameHasBeenSet;
}

string ModifyEnvironmentRequest::GetDescription() const
{
    return m_description;
}

void ModifyEnvironmentRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyEnvironmentRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyEnvironmentRequest::GetVpc() const
{
    return m_vpc;
}

void ModifyEnvironmentRequest::SetVpc(const string& _vpc)
{
    m_vpc = _vpc;
    m_vpcHasBeenSet = true;
}

bool ModifyEnvironmentRequest::VpcHasBeenSet() const
{
    return m_vpcHasBeenSet;
}

vector<string> ModifyEnvironmentRequest::GetSubnetIds() const
{
    return m_subnetIds;
}

void ModifyEnvironmentRequest::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool ModifyEnvironmentRequest::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

int64_t ModifyEnvironmentRequest::GetSourceChannel() const
{
    return m_sourceChannel;
}

void ModifyEnvironmentRequest::SetSourceChannel(const int64_t& _sourceChannel)
{
    m_sourceChannel = _sourceChannel;
    m_sourceChannelHasBeenSet = true;
}

bool ModifyEnvironmentRequest::SourceChannelHasBeenSet() const
{
    return m_sourceChannelHasBeenSet;
}

string ModifyEnvironmentRequest::GetEnvType() const
{
    return m_envType;
}

void ModifyEnvironmentRequest::SetEnvType(const string& _envType)
{
    m_envType = _envType;
    m_envTypeHasBeenSet = true;
}

bool ModifyEnvironmentRequest::EnvTypeHasBeenSet() const
{
    return m_envTypeHasBeenSet;
}


