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

#include <tencentcloud/cme/v20191029/model/GenerateVideoSegmentationSchemeByAiRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

GenerateVideoSegmentationSchemeByAiRequest::GenerateVideoSegmentationSchemeByAiRequest() :
    m_platformHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string GenerateVideoSegmentationSchemeByAiRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GenerateVideoSegmentationSchemeByAiRequest::GetPlatform() const
{
    return m_platform;
}

void GenerateVideoSegmentationSchemeByAiRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool GenerateVideoSegmentationSchemeByAiRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string GenerateVideoSegmentationSchemeByAiRequest::GetProjectId() const
{
    return m_projectId;
}

void GenerateVideoSegmentationSchemeByAiRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool GenerateVideoSegmentationSchemeByAiRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string GenerateVideoSegmentationSchemeByAiRequest::GetOperator() const
{
    return m_operator;
}

void GenerateVideoSegmentationSchemeByAiRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool GenerateVideoSegmentationSchemeByAiRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


