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

#include <tencentcloud/cvm/v20170312/model/ConfigureChcAssistVpcRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ConfigureChcAssistVpcRequest::ConfigureChcAssistVpcRequest() :
    m_chcIdsHasBeenSet(false),
    m_bmcVirtualPrivateCloudHasBeenSet(false),
    m_bmcSecurityGroupIdsHasBeenSet(false),
    m_deployVirtualPrivateCloudHasBeenSet(false),
    m_deploySecurityGroupIdsHasBeenSet(false),
    m_chcDeployExtraConfigHasBeenSet(false)
{
}

string ConfigureChcAssistVpcRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_chcIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChcIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_chcIds.begin(); itr != m_chcIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bmcVirtualPrivateCloudHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BmcVirtualPrivateCloud";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bmcVirtualPrivateCloud.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_bmcSecurityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BmcSecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bmcSecurityGroupIds.begin(); itr != m_bmcSecurityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_deployVirtualPrivateCloudHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployVirtualPrivateCloud";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deployVirtualPrivateCloud.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_deploySecurityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploySecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deploySecurityGroupIds.begin(); itr != m_deploySecurityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_chcDeployExtraConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChcDeployExtraConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_chcDeployExtraConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ConfigureChcAssistVpcRequest::GetChcIds() const
{
    return m_chcIds;
}

void ConfigureChcAssistVpcRequest::SetChcIds(const vector<string>& _chcIds)
{
    m_chcIds = _chcIds;
    m_chcIdsHasBeenSet = true;
}

bool ConfigureChcAssistVpcRequest::ChcIdsHasBeenSet() const
{
    return m_chcIdsHasBeenSet;
}

VirtualPrivateCloud ConfigureChcAssistVpcRequest::GetBmcVirtualPrivateCloud() const
{
    return m_bmcVirtualPrivateCloud;
}

void ConfigureChcAssistVpcRequest::SetBmcVirtualPrivateCloud(const VirtualPrivateCloud& _bmcVirtualPrivateCloud)
{
    m_bmcVirtualPrivateCloud = _bmcVirtualPrivateCloud;
    m_bmcVirtualPrivateCloudHasBeenSet = true;
}

bool ConfigureChcAssistVpcRequest::BmcVirtualPrivateCloudHasBeenSet() const
{
    return m_bmcVirtualPrivateCloudHasBeenSet;
}

vector<string> ConfigureChcAssistVpcRequest::GetBmcSecurityGroupIds() const
{
    return m_bmcSecurityGroupIds;
}

void ConfigureChcAssistVpcRequest::SetBmcSecurityGroupIds(const vector<string>& _bmcSecurityGroupIds)
{
    m_bmcSecurityGroupIds = _bmcSecurityGroupIds;
    m_bmcSecurityGroupIdsHasBeenSet = true;
}

bool ConfigureChcAssistVpcRequest::BmcSecurityGroupIdsHasBeenSet() const
{
    return m_bmcSecurityGroupIdsHasBeenSet;
}

VirtualPrivateCloud ConfigureChcAssistVpcRequest::GetDeployVirtualPrivateCloud() const
{
    return m_deployVirtualPrivateCloud;
}

void ConfigureChcAssistVpcRequest::SetDeployVirtualPrivateCloud(const VirtualPrivateCloud& _deployVirtualPrivateCloud)
{
    m_deployVirtualPrivateCloud = _deployVirtualPrivateCloud;
    m_deployVirtualPrivateCloudHasBeenSet = true;
}

bool ConfigureChcAssistVpcRequest::DeployVirtualPrivateCloudHasBeenSet() const
{
    return m_deployVirtualPrivateCloudHasBeenSet;
}

vector<string> ConfigureChcAssistVpcRequest::GetDeploySecurityGroupIds() const
{
    return m_deploySecurityGroupIds;
}

void ConfigureChcAssistVpcRequest::SetDeploySecurityGroupIds(const vector<string>& _deploySecurityGroupIds)
{
    m_deploySecurityGroupIds = _deploySecurityGroupIds;
    m_deploySecurityGroupIdsHasBeenSet = true;
}

bool ConfigureChcAssistVpcRequest::DeploySecurityGroupIdsHasBeenSet() const
{
    return m_deploySecurityGroupIdsHasBeenSet;
}

ChcDeployExtraConfig ConfigureChcAssistVpcRequest::GetChcDeployExtraConfig() const
{
    return m_chcDeployExtraConfig;
}

void ConfigureChcAssistVpcRequest::SetChcDeployExtraConfig(const ChcDeployExtraConfig& _chcDeployExtraConfig)
{
    m_chcDeployExtraConfig = _chcDeployExtraConfig;
    m_chcDeployExtraConfigHasBeenSet = true;
}

bool ConfigureChcAssistVpcRequest::ChcDeployExtraConfigHasBeenSet() const
{
    return m_chcDeployExtraConfigHasBeenSet;
}


