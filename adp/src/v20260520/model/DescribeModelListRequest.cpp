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

#include <tencentcloud/adp/v20260520/model/DescribeModelListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DescribeModelListRequest::DescribeModelListRequest() :
    m_modelSceneHasBeenSet(false),
    m_spaceIdHasBeenSet(false)
{
}

string DescribeModelListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelScene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_modelScene, allocator);
    }

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeModelListRequest::GetModelScene() const
{
    return m_modelScene;
}

void DescribeModelListRequest::SetModelScene(const int64_t& _modelScene)
{
    m_modelScene = _modelScene;
    m_modelSceneHasBeenSet = true;
}

bool DescribeModelListRequest::ModelSceneHasBeenSet() const
{
    return m_modelSceneHasBeenSet;
}

string DescribeModelListRequest::GetSpaceId() const
{
    return m_spaceId;
}

void DescribeModelListRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool DescribeModelListRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}


