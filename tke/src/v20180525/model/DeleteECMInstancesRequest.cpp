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

#include <tencentcloud/tke/v20180525/model/DeleteECMInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DeleteECMInstancesRequest::DeleteECMInstancesRequest() :
    m_clusterIDHasBeenSet(false),
    m_ecmIdSetHasBeenSet(false)
{
}

string DeleteECMInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_ecmIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EcmIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ecmIdSet.begin(); itr != m_ecmIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteECMInstancesRequest::GetClusterID() const
{
    return m_clusterID;
}

void DeleteECMInstancesRequest::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool DeleteECMInstancesRequest::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

vector<string> DeleteECMInstancesRequest::GetEcmIdSet() const
{
    return m_ecmIdSet;
}

void DeleteECMInstancesRequest::SetEcmIdSet(const vector<string>& _ecmIdSet)
{
    m_ecmIdSet = _ecmIdSet;
    m_ecmIdSetHasBeenSet = true;
}

bool DeleteECMInstancesRequest::EcmIdSetHasBeenSet() const
{
    return m_ecmIdSetHasBeenSet;
}


