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

#include <tencentcloud/market/v20191010/model/FlowProductRemindRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Market::V20191010::Model;
using namespace std;

FlowProductRemindRequest::FlowProductRemindRequest() :
    m_providerUinHasBeenSet(false),
    m_signIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_totalFlowHasBeenSet(false),
    m_leftFlowHasBeenSet(false),
    m_flowUnitHasBeenSet(false)
{
}

string FlowProductRemindRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_providerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_providerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_signIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_signId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_totalFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalFlow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_totalFlow.c_str(), allocator).Move(), allocator);
    }

    if (m_leftFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftFlow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_leftFlow.c_str(), allocator).Move(), allocator);
    }

    if (m_flowUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowUnit.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string FlowProductRemindRequest::GetProviderUin() const
{
    return m_providerUin;
}

void FlowProductRemindRequest::SetProviderUin(const string& _providerUin)
{
    m_providerUin = _providerUin;
    m_providerUinHasBeenSet = true;
}

bool FlowProductRemindRequest::ProviderUinHasBeenSet() const
{
    return m_providerUinHasBeenSet;
}

string FlowProductRemindRequest::GetSignId() const
{
    return m_signId;
}

void FlowProductRemindRequest::SetSignId(const string& _signId)
{
    m_signId = _signId;
    m_signIdHasBeenSet = true;
}

bool FlowProductRemindRequest::SignIdHasBeenSet() const
{
    return m_signIdHasBeenSet;
}

string FlowProductRemindRequest::GetResourceId() const
{
    return m_resourceId;
}

void FlowProductRemindRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool FlowProductRemindRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string FlowProductRemindRequest::GetTotalFlow() const
{
    return m_totalFlow;
}

void FlowProductRemindRequest::SetTotalFlow(const string& _totalFlow)
{
    m_totalFlow = _totalFlow;
    m_totalFlowHasBeenSet = true;
}

bool FlowProductRemindRequest::TotalFlowHasBeenSet() const
{
    return m_totalFlowHasBeenSet;
}

string FlowProductRemindRequest::GetLeftFlow() const
{
    return m_leftFlow;
}

void FlowProductRemindRequest::SetLeftFlow(const string& _leftFlow)
{
    m_leftFlow = _leftFlow;
    m_leftFlowHasBeenSet = true;
}

bool FlowProductRemindRequest::LeftFlowHasBeenSet() const
{
    return m_leftFlowHasBeenSet;
}

string FlowProductRemindRequest::GetFlowUnit() const
{
    return m_flowUnit;
}

void FlowProductRemindRequest::SetFlowUnit(const string& _flowUnit)
{
    m_flowUnit = _flowUnit;
    m_flowUnitHasBeenSet = true;
}

bool FlowProductRemindRequest::FlowUnitHasBeenSet() const
{
    return m_flowUnitHasBeenSet;
}


