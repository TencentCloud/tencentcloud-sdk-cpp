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

#include <tencentcloud/cvm/v20170312/model/ConfigureChcDeployVpcRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ConfigureChcDeployVpcRequest::ConfigureChcDeployVpcRequest() :
    m_chcIdsHasBeenSet(false),
    m_deployVirtualPrivateCloudHasBeenSet(false),
    m_deploySecurityGroupIdsHasBeenSet(false),
    m_chcDeployExtraConfigHasBeenSet(false)
{
}

string ConfigureChcDeployVpcRequest::ToJsonString() const
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


vector<string> ConfigureChcDeployVpcRequest::GetChcIds() const
{
    return m_chcIds;
}

void ConfigureChcDeployVpcRequest::SetChcIds(const vector<string>& _chcIds)
{
    m_chcIds = _chcIds;
    m_chcIdsHasBeenSet = true;
}

bool ConfigureChcDeployVpcRequest::ChcIdsHasBeenSet() const
{
    return m_chcIdsHasBeenSet;
}

VirtualPrivateCloud ConfigureChcDeployVpcRequest::GetDeployVirtualPrivateCloud() const
{
    return m_deployVirtualPrivateCloud;
}

void ConfigureChcDeployVpcRequest::SetDeployVirtualPrivateCloud(const VirtualPrivateCloud& _deployVirtualPrivateCloud)
{
    m_deployVirtualPrivateCloud = _deployVirtualPrivateCloud;
    m_deployVirtualPrivateCloudHasBeenSet = true;
}

bool ConfigureChcDeployVpcRequest::DeployVirtualPrivateCloudHasBeenSet() const
{
    return m_deployVirtualPrivateCloudHasBeenSet;
}

vector<string> ConfigureChcDeployVpcRequest::GetDeploySecurityGroupIds() const
{
    return m_deploySecurityGroupIds;
}

void ConfigureChcDeployVpcRequest::SetDeploySecurityGroupIds(const vector<string>& _deploySecurityGroupIds)
{
    m_deploySecurityGroupIds = _deploySecurityGroupIds;
    m_deploySecurityGroupIdsHasBeenSet = true;
}

bool ConfigureChcDeployVpcRequest::DeploySecurityGroupIdsHasBeenSet() const
{
    return m_deploySecurityGroupIdsHasBeenSet;
}

ChcDeployExtraConfig ConfigureChcDeployVpcRequest::GetChcDeployExtraConfig() const
{
    return m_chcDeployExtraConfig;
}

void ConfigureChcDeployVpcRequest::SetChcDeployExtraConfig(const ChcDeployExtraConfig& _chcDeployExtraConfig)
{
    m_chcDeployExtraConfig = _chcDeployExtraConfig;
    m_chcDeployExtraConfigHasBeenSet = true;
}

bool ConfigureChcDeployVpcRequest::ChcDeployExtraConfigHasBeenSet() const
{
    return m_chcDeployExtraConfigHasBeenSet;
}


