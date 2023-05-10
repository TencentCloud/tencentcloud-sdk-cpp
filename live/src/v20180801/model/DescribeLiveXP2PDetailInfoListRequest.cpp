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

#include <tencentcloud/live/v20180801/model/DescribeLiveXP2PDetailInfoListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeLiveXP2PDetailInfoListRequest::DescribeLiveXP2PDetailInfoListRequest() :
    m_queryTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_streamNamesHasBeenSet(false),
    m_dimensionHasBeenSet(false)
{
}

string DescribeLiveXP2PDetailInfoListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_queryTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryTime.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_type.begin(); itr != m_type.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_streamNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_streamNames.begin(); itr != m_streamNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimension";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dimension.begin(); itr != m_dimension.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeLiveXP2PDetailInfoListRequest::GetQueryTime() const
{
    return m_queryTime;
}

void DescribeLiveXP2PDetailInfoListRequest::SetQueryTime(const string& _queryTime)
{
    m_queryTime = _queryTime;
    m_queryTimeHasBeenSet = true;
}

bool DescribeLiveXP2PDetailInfoListRequest::QueryTimeHasBeenSet() const
{
    return m_queryTimeHasBeenSet;
}

vector<string> DescribeLiveXP2PDetailInfoListRequest::GetType() const
{
    return m_type;
}

void DescribeLiveXP2PDetailInfoListRequest::SetType(const vector<string>& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeLiveXP2PDetailInfoListRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> DescribeLiveXP2PDetailInfoListRequest::GetStreamNames() const
{
    return m_streamNames;
}

void DescribeLiveXP2PDetailInfoListRequest::SetStreamNames(const vector<string>& _streamNames)
{
    m_streamNames = _streamNames;
    m_streamNamesHasBeenSet = true;
}

bool DescribeLiveXP2PDetailInfoListRequest::StreamNamesHasBeenSet() const
{
    return m_streamNamesHasBeenSet;
}

vector<string> DescribeLiveXP2PDetailInfoListRequest::GetDimension() const
{
    return m_dimension;
}

void DescribeLiveXP2PDetailInfoListRequest::SetDimension(const vector<string>& _dimension)
{
    m_dimension = _dimension;
    m_dimensionHasBeenSet = true;
}

bool DescribeLiveXP2PDetailInfoListRequest::DimensionHasBeenSet() const
{
    return m_dimensionHasBeenSet;
}


