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

#include <tencentcloud/cvd/v20201104/model/UnbindInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

UnbindInstancesRequest::UnbindInstancesRequest() :
    m_instanceRegionHasBeenSet(false),
    m_bindInfosHasBeenSet(false)
{
}

string UnbindInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_bindInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindInfos.begin(); itr != m_bindInfos.end(); ++itr, ++i)
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


string UnbindInstancesRequest::GetInstanceRegion() const
{
    return m_instanceRegion;
}

void UnbindInstancesRequest::SetInstanceRegion(const string& _instanceRegion)
{
    m_instanceRegion = _instanceRegion;
    m_instanceRegionHasBeenSet = true;
}

bool UnbindInstancesRequest::InstanceRegionHasBeenSet() const
{
    return m_instanceRegionHasBeenSet;
}

vector<BindInfo> UnbindInstancesRequest::GetBindInfos() const
{
    return m_bindInfos;
}

void UnbindInstancesRequest::SetBindInfos(const vector<BindInfo>& _bindInfos)
{
    m_bindInfos = _bindInfos;
    m_bindInfosHasBeenSet = true;
}

bool UnbindInstancesRequest::BindInfosHasBeenSet() const
{
    return m_bindInfosHasBeenSet;
}


