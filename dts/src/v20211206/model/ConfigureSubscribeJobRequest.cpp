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

#include <tencentcloud/dts/v20211206/model/ConfigureSubscribeJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

ConfigureSubscribeJobRequest::ConfigureSubscribeJobRequest() :
    m_subscribeIdHasBeenSet(false),
    m_subscribeModeHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_kafkaConfigHasBeenSet(false),
    m_subscribeObjectsHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_pipelineInfoHasBeenSet(false),
    m_extraAttrHasBeenSet(false)
{
}

string ConfigureSubscribeJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subscribeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subscribeId.c_str(), allocator).Move(), allocator);
    }

    if (m_subscribeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subscribeMode.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoints";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_endpoints.begin(); itr != m_endpoints.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_kafkaConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_kafkaConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_subscribeObjectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeObjects";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subscribeObjects.begin(); itr != m_subscribeObjects.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_pipelineInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PipelineInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pipelineInfo.begin(); itr != m_pipelineInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_extraAttrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraAttr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extraAttr.begin(); itr != m_extraAttr.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ConfigureSubscribeJobRequest::GetSubscribeId() const
{
    return m_subscribeId;
}

void ConfigureSubscribeJobRequest::SetSubscribeId(const string& _subscribeId)
{
    m_subscribeId = _subscribeId;
    m_subscribeIdHasBeenSet = true;
}

bool ConfigureSubscribeJobRequest::SubscribeIdHasBeenSet() const
{
    return m_subscribeIdHasBeenSet;
}

string ConfigureSubscribeJobRequest::GetSubscribeMode() const
{
    return m_subscribeMode;
}

void ConfigureSubscribeJobRequest::SetSubscribeMode(const string& _subscribeMode)
{
    m_subscribeMode = _subscribeMode;
    m_subscribeModeHasBeenSet = true;
}

bool ConfigureSubscribeJobRequest::SubscribeModeHasBeenSet() const
{
    return m_subscribeModeHasBeenSet;
}

string ConfigureSubscribeJobRequest::GetAccessType() const
{
    return m_accessType;
}

void ConfigureSubscribeJobRequest::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool ConfigureSubscribeJobRequest::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

vector<EndpointItem> ConfigureSubscribeJobRequest::GetEndpoints() const
{
    return m_endpoints;
}

void ConfigureSubscribeJobRequest::SetEndpoints(const vector<EndpointItem>& _endpoints)
{
    m_endpoints = _endpoints;
    m_endpointsHasBeenSet = true;
}

bool ConfigureSubscribeJobRequest::EndpointsHasBeenSet() const
{
    return m_endpointsHasBeenSet;
}

SubscribeKafkaConfig ConfigureSubscribeJobRequest::GetKafkaConfig() const
{
    return m_kafkaConfig;
}

void ConfigureSubscribeJobRequest::SetKafkaConfig(const SubscribeKafkaConfig& _kafkaConfig)
{
    m_kafkaConfig = _kafkaConfig;
    m_kafkaConfigHasBeenSet = true;
}

bool ConfigureSubscribeJobRequest::KafkaConfigHasBeenSet() const
{
    return m_kafkaConfigHasBeenSet;
}

vector<SubscribeObject> ConfigureSubscribeJobRequest::GetSubscribeObjects() const
{
    return m_subscribeObjects;
}

void ConfigureSubscribeJobRequest::SetSubscribeObjects(const vector<SubscribeObject>& _subscribeObjects)
{
    m_subscribeObjects = _subscribeObjects;
    m_subscribeObjectsHasBeenSet = true;
}

bool ConfigureSubscribeJobRequest::SubscribeObjectsHasBeenSet() const
{
    return m_subscribeObjectsHasBeenSet;
}

string ConfigureSubscribeJobRequest::GetProtocol() const
{
    return m_protocol;
}

void ConfigureSubscribeJobRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ConfigureSubscribeJobRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

vector<PipelineInfo> ConfigureSubscribeJobRequest::GetPipelineInfo() const
{
    return m_pipelineInfo;
}

void ConfigureSubscribeJobRequest::SetPipelineInfo(const vector<PipelineInfo>& _pipelineInfo)
{
    m_pipelineInfo = _pipelineInfo;
    m_pipelineInfoHasBeenSet = true;
}

bool ConfigureSubscribeJobRequest::PipelineInfoHasBeenSet() const
{
    return m_pipelineInfoHasBeenSet;
}

vector<KeyValuePairOption> ConfigureSubscribeJobRequest::GetExtraAttr() const
{
    return m_extraAttr;
}

void ConfigureSubscribeJobRequest::SetExtraAttr(const vector<KeyValuePairOption>& _extraAttr)
{
    m_extraAttr = _extraAttr;
    m_extraAttrHasBeenSet = true;
}

bool ConfigureSubscribeJobRequest::ExtraAttrHasBeenSet() const
{
    return m_extraAttrHasBeenSet;
}


