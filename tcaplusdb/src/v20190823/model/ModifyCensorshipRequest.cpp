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

#include <tencentcloud/tcaplusdb/v20190823/model/ModifyCensorshipRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

ModifyCensorshipRequest::ModifyCensorshipRequest() :
    m_clusterIdHasBeenSet(false),
    m_censorshipHasBeenSet(false),
    m_uinsHasBeenSet(false)
{
}

string ModifyCensorshipRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_censorshipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Censorship";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_censorship, allocator);
    }

    if (m_uinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uins.begin(); itr != m_uins.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCensorshipRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyCensorshipRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyCensorshipRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t ModifyCensorshipRequest::GetCensorship() const
{
    return m_censorship;
}

void ModifyCensorshipRequest::SetCensorship(const int64_t& _censorship)
{
    m_censorship = _censorship;
    m_censorshipHasBeenSet = true;
}

bool ModifyCensorshipRequest::CensorshipHasBeenSet() const
{
    return m_censorshipHasBeenSet;
}

vector<string> ModifyCensorshipRequest::GetUins() const
{
    return m_uins;
}

void ModifyCensorshipRequest::SetUins(const vector<string>& _uins)
{
    m_uins = _uins;
    m_uinsHasBeenSet = true;
}

bool ModifyCensorshipRequest::UinsHasBeenSet() const
{
    return m_uinsHasBeenSet;
}


