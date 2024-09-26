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

#include <tencentcloud/vpc/v20170312/model/ResetHighPriorityRoutesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ResetHighPriorityRoutesRequest::ResetHighPriorityRoutesRequest() :
    m_highPriorityRouteTableIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_highPriorityRoutesHasBeenSet(false)
{
}

string ResetHighPriorityRoutesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_highPriorityRouteTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighPriorityRouteTableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_highPriorityRouteTableId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_highPriorityRoutesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighPriorityRoutes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_highPriorityRoutes.begin(); itr != m_highPriorityRoutes.end(); ++itr, ++i)
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


string ResetHighPriorityRoutesRequest::GetHighPriorityRouteTableId() const
{
    return m_highPriorityRouteTableId;
}

void ResetHighPriorityRoutesRequest::SetHighPriorityRouteTableId(const string& _highPriorityRouteTableId)
{
    m_highPriorityRouteTableId = _highPriorityRouteTableId;
    m_highPriorityRouteTableIdHasBeenSet = true;
}

bool ResetHighPriorityRoutesRequest::HighPriorityRouteTableIdHasBeenSet() const
{
    return m_highPriorityRouteTableIdHasBeenSet;
}

string ResetHighPriorityRoutesRequest::GetName() const
{
    return m_name;
}

void ResetHighPriorityRoutesRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ResetHighPriorityRoutesRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<HighPriorityRoute> ResetHighPriorityRoutesRequest::GetHighPriorityRoutes() const
{
    return m_highPriorityRoutes;
}

void ResetHighPriorityRoutesRequest::SetHighPriorityRoutes(const vector<HighPriorityRoute>& _highPriorityRoutes)
{
    m_highPriorityRoutes = _highPriorityRoutes;
    m_highPriorityRoutesHasBeenSet = true;
}

bool ResetHighPriorityRoutesRequest::HighPriorityRoutesHasBeenSet() const
{
    return m_highPriorityRoutesHasBeenSet;
}


