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

#include <tencentcloud/bmlb/v20180625/model/ModifyLoadBalancerChargeModeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

ModifyLoadBalancerChargeModeRequest::ModifyLoadBalancerChargeModeRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_listenerSetHasBeenSet(false)
{
}

string ModifyLoadBalancerChargeModeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_listenerSet.begin(); itr != m_listenerSet.end(); ++itr, ++i)
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


string ModifyLoadBalancerChargeModeRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void ModifyLoadBalancerChargeModeRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool ModifyLoadBalancerChargeModeRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string ModifyLoadBalancerChargeModeRequest::GetPayMode() const
{
    return m_payMode;
}

void ModifyLoadBalancerChargeModeRequest::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool ModifyLoadBalancerChargeModeRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

vector<ModifyLoadBalancerChargeModeListener> ModifyLoadBalancerChargeModeRequest::GetListenerSet() const
{
    return m_listenerSet;
}

void ModifyLoadBalancerChargeModeRequest::SetListenerSet(const vector<ModifyLoadBalancerChargeModeListener>& _listenerSet)
{
    m_listenerSet = _listenerSet;
    m_listenerSetHasBeenSet = true;
}

bool ModifyLoadBalancerChargeModeRequest::ListenerSetHasBeenSet() const
{
    return m_listenerSetHasBeenSet;
}


