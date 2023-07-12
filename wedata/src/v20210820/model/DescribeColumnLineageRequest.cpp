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

#include <tencentcloud/wedata/v20210820/model/DescribeColumnLineageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeColumnLineageRequest::DescribeColumnLineageRequest() :
    m_directionHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_inputDepthHasBeenSet(false),
    m_outputDepthHasBeenSet(false),
    m_extParamsHasBeenSet(false),
    m_ignoreTempHasBeenSet(false)
{
}

string DescribeColumnLineageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_direction.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_data.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_inputDepthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputDepth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_inputDepth, allocator);
    }

    if (m_outputDepthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputDepth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_outputDepth, allocator);
    }

    if (m_extParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extParams.begin(); itr != m_extParams.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_ignoreTempHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreTemp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ignoreTemp, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeColumnLineageRequest::GetDirection() const
{
    return m_direction;
}

void DescribeColumnLineageRequest::SetDirection(const string& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool DescribeColumnLineageRequest::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

ColumnLineageInfo DescribeColumnLineageRequest::GetData() const
{
    return m_data;
}

void DescribeColumnLineageRequest::SetData(const ColumnLineageInfo& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool DescribeColumnLineageRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

int64_t DescribeColumnLineageRequest::GetInputDepth() const
{
    return m_inputDepth;
}

void DescribeColumnLineageRequest::SetInputDepth(const int64_t& _inputDepth)
{
    m_inputDepth = _inputDepth;
    m_inputDepthHasBeenSet = true;
}

bool DescribeColumnLineageRequest::InputDepthHasBeenSet() const
{
    return m_inputDepthHasBeenSet;
}

int64_t DescribeColumnLineageRequest::GetOutputDepth() const
{
    return m_outputDepth;
}

void DescribeColumnLineageRequest::SetOutputDepth(const int64_t& _outputDepth)
{
    m_outputDepth = _outputDepth;
    m_outputDepthHasBeenSet = true;
}

bool DescribeColumnLineageRequest::OutputDepthHasBeenSet() const
{
    return m_outputDepthHasBeenSet;
}

vector<RecordField> DescribeColumnLineageRequest::GetExtParams() const
{
    return m_extParams;
}

void DescribeColumnLineageRequest::SetExtParams(const vector<RecordField>& _extParams)
{
    m_extParams = _extParams;
    m_extParamsHasBeenSet = true;
}

bool DescribeColumnLineageRequest::ExtParamsHasBeenSet() const
{
    return m_extParamsHasBeenSet;
}

bool DescribeColumnLineageRequest::GetIgnoreTemp() const
{
    return m_ignoreTemp;
}

void DescribeColumnLineageRequest::SetIgnoreTemp(const bool& _ignoreTemp)
{
    m_ignoreTemp = _ignoreTemp;
    m_ignoreTempHasBeenSet = true;
}

bool DescribeColumnLineageRequest::IgnoreTempHasBeenSet() const
{
    return m_ignoreTempHasBeenSet;
}


