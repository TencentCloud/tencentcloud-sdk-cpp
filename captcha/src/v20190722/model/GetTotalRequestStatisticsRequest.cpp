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

#include <tencentcloud/captcha/v20190722/model/GetTotalRequestStatisticsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

GetTotalRequestStatisticsRequest::GetTotalRequestStatisticsRequest() :
    m_startTimeStrHasBeenSet(false),
    m_endTimeStrHasBeenSet(false),
    m_dimensionHasBeenSet(false)
{
}

string GetTotalRequestStatisticsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startTimeStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeStr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTimeStr.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeStr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTimeStr.c_str(), allocator).Move(), allocator);
    }

    if (m_dimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimension";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dimension.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetTotalRequestStatisticsRequest::GetStartTimeStr() const
{
    return m_startTimeStr;
}

void GetTotalRequestStatisticsRequest::SetStartTimeStr(const string& _startTimeStr)
{
    m_startTimeStr = _startTimeStr;
    m_startTimeStrHasBeenSet = true;
}

bool GetTotalRequestStatisticsRequest::StartTimeStrHasBeenSet() const
{
    return m_startTimeStrHasBeenSet;
}

string GetTotalRequestStatisticsRequest::GetEndTimeStr() const
{
    return m_endTimeStr;
}

void GetTotalRequestStatisticsRequest::SetEndTimeStr(const string& _endTimeStr)
{
    m_endTimeStr = _endTimeStr;
    m_endTimeStrHasBeenSet = true;
}

bool GetTotalRequestStatisticsRequest::EndTimeStrHasBeenSet() const
{
    return m_endTimeStrHasBeenSet;
}

string GetTotalRequestStatisticsRequest::GetDimension() const
{
    return m_dimension;
}

void GetTotalRequestStatisticsRequest::SetDimension(const string& _dimension)
{
    m_dimension = _dimension;
    m_dimensionHasBeenSet = true;
}

bool GetTotalRequestStatisticsRequest::DimensionHasBeenSet() const
{
    return m_dimensionHasBeenSet;
}


