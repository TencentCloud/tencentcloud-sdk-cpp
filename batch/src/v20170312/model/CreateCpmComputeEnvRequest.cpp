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

#include <tencentcloud/batch/v20170312/model/CreateCpmComputeEnvRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

CreateCpmComputeEnvRequest::CreateCpmComputeEnvRequest() :
    m_computeEnvHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

string CreateCpmComputeEnvRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_computeEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeEnv";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_computeEnv.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_placementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placement.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


NamedCpmComputeEnv CreateCpmComputeEnvRequest::GetComputeEnv() const
{
    return m_computeEnv;
}

void CreateCpmComputeEnvRequest::SetComputeEnv(const NamedCpmComputeEnv& _computeEnv)
{
    m_computeEnv = _computeEnv;
    m_computeEnvHasBeenSet = true;
}

bool CreateCpmComputeEnvRequest::ComputeEnvHasBeenSet() const
{
    return m_computeEnvHasBeenSet;
}

Placement CreateCpmComputeEnvRequest::GetPlacement() const
{
    return m_placement;
}

void CreateCpmComputeEnvRequest::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool CreateCpmComputeEnvRequest::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

string CreateCpmComputeEnvRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateCpmComputeEnvRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateCpmComputeEnvRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}


