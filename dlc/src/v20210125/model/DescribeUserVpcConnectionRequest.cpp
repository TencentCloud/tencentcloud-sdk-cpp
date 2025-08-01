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

#include <tencentcloud/dlc/v20210125/model/DescribeUserVpcConnectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeUserVpcConnectionRequest::DescribeUserVpcConnectionRequest() :
    m_engineNetworkIdHasBeenSet(false),
    m_dataEngineIdsHasBeenSet(false)
{
}

string DescribeUserVpcConnectionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_engineNetworkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineNetworkId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineNetworkId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataEngineIds.begin(); itr != m_dataEngineIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeUserVpcConnectionRequest::GetEngineNetworkId() const
{
    return m_engineNetworkId;
}

void DescribeUserVpcConnectionRequest::SetEngineNetworkId(const string& _engineNetworkId)
{
    m_engineNetworkId = _engineNetworkId;
    m_engineNetworkIdHasBeenSet = true;
}

bool DescribeUserVpcConnectionRequest::EngineNetworkIdHasBeenSet() const
{
    return m_engineNetworkIdHasBeenSet;
}

vector<string> DescribeUserVpcConnectionRequest::GetDataEngineIds() const
{
    return m_dataEngineIds;
}

void DescribeUserVpcConnectionRequest::SetDataEngineIds(const vector<string>& _dataEngineIds)
{
    m_dataEngineIds = _dataEngineIds;
    m_dataEngineIdsHasBeenSet = true;
}

bool DescribeUserVpcConnectionRequest::DataEngineIdsHasBeenSet() const
{
    return m_dataEngineIdsHasBeenSet;
}


