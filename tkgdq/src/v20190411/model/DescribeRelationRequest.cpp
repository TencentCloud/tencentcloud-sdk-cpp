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

#include <tencentcloud/tkgdq/v20190411/model/DescribeRelationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tkgdq::V20190411::Model;
using namespace std;

DescribeRelationRequest::DescribeRelationRequest() :
    m_leftEntityNameHasBeenSet(false),
    m_rightEntityNameHasBeenSet(false)
{
}

string DescribeRelationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_leftEntityNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftEntityName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_leftEntityName.c_str(), allocator).Move(), allocator);
    }

    if (m_rightEntityNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightEntityName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rightEntityName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRelationRequest::GetLeftEntityName() const
{
    return m_leftEntityName;
}

void DescribeRelationRequest::SetLeftEntityName(const string& _leftEntityName)
{
    m_leftEntityName = _leftEntityName;
    m_leftEntityNameHasBeenSet = true;
}

bool DescribeRelationRequest::LeftEntityNameHasBeenSet() const
{
    return m_leftEntityNameHasBeenSet;
}

string DescribeRelationRequest::GetRightEntityName() const
{
    return m_rightEntityName;
}

void DescribeRelationRequest::SetRightEntityName(const string& _rightEntityName)
{
    m_rightEntityName = _rightEntityName;
    m_rightEntityNameHasBeenSet = true;
}

bool DescribeRelationRequest::RightEntityNameHasBeenSet() const
{
    return m_rightEntityNameHasBeenSet;
}


