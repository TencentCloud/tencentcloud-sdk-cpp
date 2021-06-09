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

#include <tencentcloud/cdb/v20170320/model/CreateDeployGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

CreateDeployGroupRequest::CreateDeployGroupRequest() :
    m_deployGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_affinityHasBeenSet(false),
    m_limitNumHasBeenSet(false),
    m_devClassHasBeenSet(false)
{
}

string CreateDeployGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deployGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deployGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_affinityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Affinity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_affinity.begin(); itr != m_affinity.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_limitNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limitNum, allocator);
    }

    if (m_devClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevClass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_devClass.begin(); itr != m_devClass.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDeployGroupRequest::GetDeployGroupName() const
{
    return m_deployGroupName;
}

void CreateDeployGroupRequest::SetDeployGroupName(const string& _deployGroupName)
{
    m_deployGroupName = _deployGroupName;
    m_deployGroupNameHasBeenSet = true;
}

bool CreateDeployGroupRequest::DeployGroupNameHasBeenSet() const
{
    return m_deployGroupNameHasBeenSet;
}

string CreateDeployGroupRequest::GetDescription() const
{
    return m_description;
}

void CreateDeployGroupRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateDeployGroupRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<int64_t> CreateDeployGroupRequest::GetAffinity() const
{
    return m_affinity;
}

void CreateDeployGroupRequest::SetAffinity(const vector<int64_t>& _affinity)
{
    m_affinity = _affinity;
    m_affinityHasBeenSet = true;
}

bool CreateDeployGroupRequest::AffinityHasBeenSet() const
{
    return m_affinityHasBeenSet;
}

int64_t CreateDeployGroupRequest::GetLimitNum() const
{
    return m_limitNum;
}

void CreateDeployGroupRequest::SetLimitNum(const int64_t& _limitNum)
{
    m_limitNum = _limitNum;
    m_limitNumHasBeenSet = true;
}

bool CreateDeployGroupRequest::LimitNumHasBeenSet() const
{
    return m_limitNumHasBeenSet;
}

vector<string> CreateDeployGroupRequest::GetDevClass() const
{
    return m_devClass;
}

void CreateDeployGroupRequest::SetDevClass(const vector<string>& _devClass)
{
    m_devClass = _devClass;
    m_devClassHasBeenSet = true;
}

bool CreateDeployGroupRequest::DevClassHasBeenSet() const
{
    return m_devClassHasBeenSet;
}


