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

#include <tencentcloud/cms/v20190321/model/DeleteLibSamplesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

DeleteLibSamplesRequest::DeleteLibSamplesRequest() :
    m_sampleIDsHasBeenSet(false),
    m_libIDHasBeenSet(false),
    m_sampleContentsHasBeenSet(false)
{
}

string DeleteLibSamplesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sampleIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sampleIDs.begin(); itr != m_sampleIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_libIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_libID.c_str(), allocator).Move(), allocator);
    }

    if (m_sampleContentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleContents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sampleContents.begin(); itr != m_sampleContents.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DeleteLibSamplesRequest::GetSampleIDs() const
{
    return m_sampleIDs;
}

void DeleteLibSamplesRequest::SetSampleIDs(const vector<string>& _sampleIDs)
{
    m_sampleIDs = _sampleIDs;
    m_sampleIDsHasBeenSet = true;
}

bool DeleteLibSamplesRequest::SampleIDsHasBeenSet() const
{
    return m_sampleIDsHasBeenSet;
}

string DeleteLibSamplesRequest::GetLibID() const
{
    return m_libID;
}

void DeleteLibSamplesRequest::SetLibID(const string& _libID)
{
    m_libID = _libID;
    m_libIDHasBeenSet = true;
}

bool DeleteLibSamplesRequest::LibIDHasBeenSet() const
{
    return m_libIDHasBeenSet;
}

vector<string> DeleteLibSamplesRequest::GetSampleContents() const
{
    return m_sampleContents;
}

void DeleteLibSamplesRequest::SetSampleContents(const vector<string>& _sampleContents)
{
    m_sampleContents = _sampleContents;
    m_sampleContentsHasBeenSet = true;
}

bool DeleteLibSamplesRequest::SampleContentsHasBeenSet() const
{
    return m_sampleContentsHasBeenSet;
}


