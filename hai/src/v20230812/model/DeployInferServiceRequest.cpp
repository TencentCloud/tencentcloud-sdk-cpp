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

#include <tencentcloud/hai/v20230812/model/DeployInferServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

DeployInferServiceRequest::DeployInferServiceRequest() :
    m_serviceMetaDataHasBeenSet(false),
    m_computeInfoHasBeenSet(false),
    m_deploymentConfigsHasBeenSet(false),
    m_hyperParamHasBeenSet(false),
    m_networkSettingHasBeenSet(false)
{
}

string DeployInferServiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceMetaDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceMetaData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceMetaData.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_computeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_computeInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_deploymentConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploymentConfigs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deploymentConfigs.begin(); itr != m_deploymentConfigs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_hyperParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HyperParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hyperParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_networkSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkSetting";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_networkSetting.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


ServiceMetaData DeployInferServiceRequest::GetServiceMetaData() const
{
    return m_serviceMetaData;
}

void DeployInferServiceRequest::SetServiceMetaData(const ServiceMetaData& _serviceMetaData)
{
    m_serviceMetaData = _serviceMetaData;
    m_serviceMetaDataHasBeenSet = true;
}

bool DeployInferServiceRequest::ServiceMetaDataHasBeenSet() const
{
    return m_serviceMetaDataHasBeenSet;
}

ComputeInfo DeployInferServiceRequest::GetComputeInfo() const
{
    return m_computeInfo;
}

void DeployInferServiceRequest::SetComputeInfo(const ComputeInfo& _computeInfo)
{
    m_computeInfo = _computeInfo;
    m_computeInfoHasBeenSet = true;
}

bool DeployInferServiceRequest::ComputeInfoHasBeenSet() const
{
    return m_computeInfoHasBeenSet;
}

vector<DeploymentConfig> DeployInferServiceRequest::GetDeploymentConfigs() const
{
    return m_deploymentConfigs;
}

void DeployInferServiceRequest::SetDeploymentConfigs(const vector<DeploymentConfig>& _deploymentConfigs)
{
    m_deploymentConfigs = _deploymentConfigs;
    m_deploymentConfigsHasBeenSet = true;
}

bool DeployInferServiceRequest::DeploymentConfigsHasBeenSet() const
{
    return m_deploymentConfigsHasBeenSet;
}

HyperParam DeployInferServiceRequest::GetHyperParam() const
{
    return m_hyperParam;
}

void DeployInferServiceRequest::SetHyperParam(const HyperParam& _hyperParam)
{
    m_hyperParam = _hyperParam;
    m_hyperParamHasBeenSet = true;
}

bool DeployInferServiceRequest::HyperParamHasBeenSet() const
{
    return m_hyperParamHasBeenSet;
}

NetworkSetting DeployInferServiceRequest::GetNetworkSetting() const
{
    return m_networkSetting;
}

void DeployInferServiceRequest::SetNetworkSetting(const NetworkSetting& _networkSetting)
{
    m_networkSetting = _networkSetting;
    m_networkSettingHasBeenSet = true;
}

bool DeployInferServiceRequest::NetworkSettingHasBeenSet() const
{
    return m_networkSettingHasBeenSet;
}


