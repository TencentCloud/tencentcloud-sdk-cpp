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

#include <tencentcloud/dlc/v20210125/model/DescribeDataEnginePythonSparkImagesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeDataEnginePythonSparkImagesRequest::DescribeDataEnginePythonSparkImagesRequest() :
    m_childImageVersionIdHasBeenSet(false)
{
}

string DescribeDataEnginePythonSparkImagesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_childImageVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChildImageVersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_childImageVersionId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDataEnginePythonSparkImagesRequest::GetChildImageVersionId() const
{
    return m_childImageVersionId;
}

void DescribeDataEnginePythonSparkImagesRequest::SetChildImageVersionId(const string& _childImageVersionId)
{
    m_childImageVersionId = _childImageVersionId;
    m_childImageVersionIdHasBeenSet = true;
}

bool DescribeDataEnginePythonSparkImagesRequest::ChildImageVersionIdHasBeenSet() const
{
    return m_childImageVersionIdHasBeenSet;
}


