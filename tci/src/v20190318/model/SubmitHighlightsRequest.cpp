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

#include <tencentcloud/tci/v20190318/model/SubmitHighlightsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

SubmitHighlightsRequest::SubmitHighlightsRequest() :
    m_functionsHasBeenSet(false),
    m_fileContentHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_libIdsHasBeenSet(false),
    m_frameIntervalHasBeenSet(false),
    m_keywordsLanguageHasBeenSet(false),
    m_keywordsStringsHasBeenSet(false),
    m_maxVideoDurationHasBeenSet(false),
    m_simThresholdHasBeenSet(false)
{
}

string SubmitHighlightsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_functionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Functions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_functions.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_fileContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileContent.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
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

    if (m_frameIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_frameInterval, allocator);
    }

    if (m_keywordsLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeywordsLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_keywordsLanguage, allocator);
    }

    if (m_keywordsStringsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeywordsStrings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keywordsStrings.begin(); itr != m_keywordsStrings.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maxVideoDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxVideoDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxVideoDuration, allocator);
    }

    if (m_simThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_simThreshold, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


HLFunction SubmitHighlightsRequest::GetFunctions() const
{
    return m_functions;
}

void SubmitHighlightsRequest::SetFunctions(const HLFunction& _functions)
{
    m_functions = _functions;
    m_functionsHasBeenSet = true;
}

bool SubmitHighlightsRequest::FunctionsHasBeenSet() const
{
    return m_functionsHasBeenSet;
}

string SubmitHighlightsRequest::GetFileContent() const
{
    return m_fileContent;
}

void SubmitHighlightsRequest::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool SubmitHighlightsRequest::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

string SubmitHighlightsRequest::GetFileType() const
{
    return m_fileType;
}

void SubmitHighlightsRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool SubmitHighlightsRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

vector<string> SubmitHighlightsRequest::GetLibIds() const
{
    return m_libIds;
}

void SubmitHighlightsRequest::SetLibIds(const vector<string>& _libIds)
{
    m_libIds = _libIds;
    m_libIdsHasBeenSet = true;
}

bool SubmitHighlightsRequest::LibIdsHasBeenSet() const
{
    return m_libIdsHasBeenSet;
}

int64_t SubmitHighlightsRequest::GetFrameInterval() const
{
    return m_frameInterval;
}

void SubmitHighlightsRequest::SetFrameInterval(const int64_t& _frameInterval)
{
    m_frameInterval = _frameInterval;
    m_frameIntervalHasBeenSet = true;
}

bool SubmitHighlightsRequest::FrameIntervalHasBeenSet() const
{
    return m_frameIntervalHasBeenSet;
}

int64_t SubmitHighlightsRequest::GetKeywordsLanguage() const
{
    return m_keywordsLanguage;
}

void SubmitHighlightsRequest::SetKeywordsLanguage(const int64_t& _keywordsLanguage)
{
    m_keywordsLanguage = _keywordsLanguage;
    m_keywordsLanguageHasBeenSet = true;
}

bool SubmitHighlightsRequest::KeywordsLanguageHasBeenSet() const
{
    return m_keywordsLanguageHasBeenSet;
}

vector<string> SubmitHighlightsRequest::GetKeywordsStrings() const
{
    return m_keywordsStrings;
}

void SubmitHighlightsRequest::SetKeywordsStrings(const vector<string>& _keywordsStrings)
{
    m_keywordsStrings = _keywordsStrings;
    m_keywordsStringsHasBeenSet = true;
}

bool SubmitHighlightsRequest::KeywordsStringsHasBeenSet() const
{
    return m_keywordsStringsHasBeenSet;
}

int64_t SubmitHighlightsRequest::GetMaxVideoDuration() const
{
    return m_maxVideoDuration;
}

void SubmitHighlightsRequest::SetMaxVideoDuration(const int64_t& _maxVideoDuration)
{
    m_maxVideoDuration = _maxVideoDuration;
    m_maxVideoDurationHasBeenSet = true;
}

bool SubmitHighlightsRequest::MaxVideoDurationHasBeenSet() const
{
    return m_maxVideoDurationHasBeenSet;
}

double SubmitHighlightsRequest::GetSimThreshold() const
{
    return m_simThreshold;
}

void SubmitHighlightsRequest::SetSimThreshold(const double& _simThreshold)
{
    m_simThreshold = _simThreshold;
    m_simThresholdHasBeenSet = true;
}

bool SubmitHighlightsRequest::SimThresholdHasBeenSet() const
{
    return m_simThresholdHasBeenSet;
}


