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

#include <tencentcloud/wedata/v20210820/model/DescribeTableLineageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeTableLineageRequest::DescribeTableLineageRequest() :
    m_directionHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_inputDepthHasBeenSet(false),
    m_outputDepthHasBeenSet(false),
    m_extParamsHasBeenSet(false),
    m_ignoreTempHasBeenSet(false),
    m_recursiveSecondHasBeenSet(false)
{
}

string DescribeTableLineageRequest::ToJsonString() const
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

    if (m_recursiveSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecursiveSecond";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recursiveSecond, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTableLineageRequest::GetDirection() const
{
    return m_direction;
}

void DescribeTableLineageRequest::SetDirection(const string& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool DescribeTableLineageRequest::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

TableLineageInfo DescribeTableLineageRequest::GetData() const
{
    return m_data;
}

void DescribeTableLineageRequest::SetData(const TableLineageInfo& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool DescribeTableLineageRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

int64_t DescribeTableLineageRequest::GetInputDepth() const
{
    return m_inputDepth;
}

void DescribeTableLineageRequest::SetInputDepth(const int64_t& _inputDepth)
{
    m_inputDepth = _inputDepth;
    m_inputDepthHasBeenSet = true;
}

bool DescribeTableLineageRequest::InputDepthHasBeenSet() const
{
    return m_inputDepthHasBeenSet;
}

int64_t DescribeTableLineageRequest::GetOutputDepth() const
{
    return m_outputDepth;
}

void DescribeTableLineageRequest::SetOutputDepth(const int64_t& _outputDepth)
{
    m_outputDepth = _outputDepth;
    m_outputDepthHasBeenSet = true;
}

bool DescribeTableLineageRequest::OutputDepthHasBeenSet() const
{
    return m_outputDepthHasBeenSet;
}

vector<LineageParamRecord> DescribeTableLineageRequest::GetExtParams() const
{
    return m_extParams;
}

void DescribeTableLineageRequest::SetExtParams(const vector<LineageParamRecord>& _extParams)
{
    m_extParams = _extParams;
    m_extParamsHasBeenSet = true;
}

bool DescribeTableLineageRequest::ExtParamsHasBeenSet() const
{
    return m_extParamsHasBeenSet;
}

bool DescribeTableLineageRequest::GetIgnoreTemp() const
{
    return m_ignoreTemp;
}

void DescribeTableLineageRequest::SetIgnoreTemp(const bool& _ignoreTemp)
{
    m_ignoreTemp = _ignoreTemp;
    m_ignoreTempHasBeenSet = true;
}

bool DescribeTableLineageRequest::IgnoreTempHasBeenSet() const
{
    return m_ignoreTempHasBeenSet;
}

bool DescribeTableLineageRequest::GetRecursiveSecond() const
{
    return m_recursiveSecond;
}

void DescribeTableLineageRequest::SetRecursiveSecond(const bool& _recursiveSecond)
{
    m_recursiveSecond = _recursiveSecond;
    m_recursiveSecondHasBeenSet = true;
}

bool DescribeTableLineageRequest::RecursiveSecondHasBeenSet() const
{
    return m_recursiveSecondHasBeenSet;
}


