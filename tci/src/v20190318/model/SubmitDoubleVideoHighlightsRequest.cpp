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

#include <tencentcloud/tci/v20190318/model/SubmitDoubleVideoHighlightsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

SubmitDoubleVideoHighlightsRequest::SubmitDoubleVideoHighlightsRequest() :
    m_fileContentHasBeenSet(false),
    m_libIdsHasBeenSet(false),
    m_functionsHasBeenSet(false),
    m_personInfoListHasBeenSet(false),
    m_frameIntervalHasBeenSet(false),
    m_personIdsHasBeenSet(false),
    m_simThresholdHasBeenSet(false),
    m_teacherFileContentHasBeenSet(false)
{
}

string SubmitDoubleVideoHighlightsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileContent.c_str(), allocator).Move(), allocator);
    }

    if (m_libIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_libIds.begin(); itr != m_libIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_functionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Functions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_functions.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_personInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_personInfoList.begin(); itr != m_personInfoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_frameIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_frameInterval, allocator);
    }

    if (m_personIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_personIds.begin(); itr != m_personIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_simThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_simThreshold, allocator);
    }

    if (m_teacherFileContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeacherFileContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_teacherFileContent.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitDoubleVideoHighlightsRequest::GetFileContent() const
{
    return m_fileContent;
}

void SubmitDoubleVideoHighlightsRequest::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool SubmitDoubleVideoHighlightsRequest::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

vector<string> SubmitDoubleVideoHighlightsRequest::GetLibIds() const
{
    return m_libIds;
}

void SubmitDoubleVideoHighlightsRequest::SetLibIds(const vector<string>& _libIds)
{
    m_libIds = _libIds;
    m_libIdsHasBeenSet = true;
}

bool SubmitDoubleVideoHighlightsRequest::LibIdsHasBeenSet() const
{
    return m_libIdsHasBeenSet;
}

DoubleVideoFunction SubmitDoubleVideoHighlightsRequest::GetFunctions() const
{
    return m_functions;
}

void SubmitDoubleVideoHighlightsRequest::SetFunctions(const DoubleVideoFunction& _functions)
{
    m_functions = _functions;
    m_functionsHasBeenSet = true;
}

bool SubmitDoubleVideoHighlightsRequest::FunctionsHasBeenSet() const
{
    return m_functionsHasBeenSet;
}

vector<PersonInfo> SubmitDoubleVideoHighlightsRequest::GetPersonInfoList() const
{
    return m_personInfoList;
}

void SubmitDoubleVideoHighlightsRequest::SetPersonInfoList(const vector<PersonInfo>& _personInfoList)
{
    m_personInfoList = _personInfoList;
    m_personInfoListHasBeenSet = true;
}

bool SubmitDoubleVideoHighlightsRequest::PersonInfoListHasBeenSet() const
{
    return m_personInfoListHasBeenSet;
}

int64_t SubmitDoubleVideoHighlightsRequest::GetFrameInterval() const
{
    return m_frameInterval;
}

void SubmitDoubleVideoHighlightsRequest::SetFrameInterval(const int64_t& _frameInterval)
{
    m_frameInterval = _frameInterval;
    m_frameIntervalHasBeenSet = true;
}

bool SubmitDoubleVideoHighlightsRequest::FrameIntervalHasBeenSet() const
{
    return m_frameIntervalHasBeenSet;
}

vector<string> SubmitDoubleVideoHighlightsRequest::GetPersonIds() const
{
    return m_personIds;
}

void SubmitDoubleVideoHighlightsRequest::SetPersonIds(const vector<string>& _personIds)
{
    m_personIds = _personIds;
    m_personIdsHasBeenSet = true;
}

bool SubmitDoubleVideoHighlightsRequest::PersonIdsHasBeenSet() const
{
    return m_personIdsHasBeenSet;
}

double SubmitDoubleVideoHighlightsRequest::GetSimThreshold() const
{
    return m_simThreshold;
}

void SubmitDoubleVideoHighlightsRequest::SetSimThreshold(const double& _simThreshold)
{
    m_simThreshold = _simThreshold;
    m_simThresholdHasBeenSet = true;
}

bool SubmitDoubleVideoHighlightsRequest::SimThresholdHasBeenSet() const
{
    return m_simThresholdHasBeenSet;
}

string SubmitDoubleVideoHighlightsRequest::GetTeacherFileContent() const
{
    return m_teacherFileContent;
}

void SubmitDoubleVideoHighlightsRequest::SetTeacherFileContent(const string& _teacherFileContent)
{
    m_teacherFileContent = _teacherFileContent;
    m_teacherFileContentHasBeenSet = true;
}

bool SubmitDoubleVideoHighlightsRequest::TeacherFileContentHasBeenSet() const
{
    return m_teacherFileContentHasBeenSet;
}


