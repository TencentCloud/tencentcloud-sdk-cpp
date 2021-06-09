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

#include <tencentcloud/ecm/v20190719/model/ResetInstancesMaxBandwidthRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

ResetInstancesMaxBandwidthRequest::ResetInstancesMaxBandwidthRequest() :
    m_instanceIdSetHasBeenSet(false),
    m_maxBandwidthOutHasBeenSet(false),
    m_maxBandwidthInHasBeenSet(false)
{
}

string ResetInstancesMaxBandwidthRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIdSet.begin(); itr != m_instanceIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxBandwidthOut, allocator);
    }

    if (m_maxBandwidthInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBandwidthIn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxBandwidthIn, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ResetInstancesMaxBandwidthRequest::GetInstanceIdSet() const
{
    return m_instanceIdSet;
}

void ResetInstancesMaxBandwidthRequest::SetInstanceIdSet(const vector<string>& _instanceIdSet)
{
    m_instanceIdSet = _instanceIdSet;
    m_instanceIdSetHasBeenSet = true;
}

bool ResetInstancesMaxBandwidthRequest::InstanceIdSetHasBeenSet() const
{
    return m_instanceIdSetHasBeenSet;
}

int64_t ResetInstancesMaxBandwidthRequest::GetMaxBandwidthOut() const
{
    return m_maxBandwidthOut;
}

void ResetInstancesMaxBandwidthRequest::SetMaxBandwidthOut(const int64_t& _maxBandwidthOut)
{
    m_maxBandwidthOut = _maxBandwidthOut;
    m_maxBandwidthOutHasBeenSet = true;
}

bool ResetInstancesMaxBandwidthRequest::MaxBandwidthOutHasBeenSet() const
{
    return m_maxBandwidthOutHasBeenSet;
}

int64_t ResetInstancesMaxBandwidthRequest::GetMaxBandwidthIn() const
{
    return m_maxBandwidthIn;
}

void ResetInstancesMaxBandwidthRequest::SetMaxBandwidthIn(const int64_t& _maxBandwidthIn)
{
    m_maxBandwidthIn = _maxBandwidthIn;
    m_maxBandwidthInHasBeenSet = true;
}

bool ResetInstancesMaxBandwidthRequest::MaxBandwidthInHasBeenSet() const
{
    return m_maxBandwidthInHasBeenSet;
}


