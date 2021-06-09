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

#include <tencentcloud/tci/v20190318/model/SubmitImageTaskPlusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

SubmitImageTaskPlusRequest::SubmitImageTaskPlusRequest() :
    m_fileContentHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_functionsHasBeenSet(false),
    m_lightStandardSetHasBeenSet(false),
    m_frameIntervalHasBeenSet(false),
    m_librarySetHasBeenSet(false),
    m_maxVideoDurationHasBeenSet(false),
    m_simThresholdHasBeenSet(false)
{
}

string SubmitImageTaskPlusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileContent.begin(); itr != m_fileContent.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_functionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Functions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_functions.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_lightStandardSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LightStandardSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lightStandardSet.begin(); itr != m_lightStandardSet.end(); ++itr, ++i)
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

    if (m_librarySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibrarySet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_librarySet.begin(); itr != m_librarySet.end(); ++itr)
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


vector<string> SubmitImageTaskPlusRequest::GetFileContent() const
{
    return m_fileContent;
}

void SubmitImageTaskPlusRequest::SetFileContent(const vector<string>& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool SubmitImageTaskPlusRequest::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

string SubmitImageTaskPlusRequest::GetFileType() const
{
    return m_fileType;
}

void SubmitImageTaskPlusRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool SubmitImageTaskPlusRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

ImageTaskFunction SubmitImageTaskPlusRequest::GetFunctions() const
{
    return m_functions;
}

void SubmitImageTaskPlusRequest::SetFunctions(const ImageTaskFunction& _functions)
{
    m_functions = _functions;
    m_functionsHasBeenSet = true;
}

bool SubmitImageTaskPlusRequest::FunctionsHasBeenSet() const
{
    return m_functionsHasBeenSet;
}

vector<LightStandard> SubmitImageTaskPlusRequest::GetLightStandardSet() const
{
    return m_lightStandardSet;
}

void SubmitImageTaskPlusRequest::SetLightStandardSet(const vector<LightStandard>& _lightStandardSet)
{
    m_lightStandardSet = _lightStandardSet;
    m_lightStandardSetHasBeenSet = true;
}

bool SubmitImageTaskPlusRequest::LightStandardSetHasBeenSet() const
{
    return m_lightStandardSetHasBeenSet;
}

int64_t SubmitImageTaskPlusRequest::GetFrameInterval() const
{
    return m_frameInterval;
}

void SubmitImageTaskPlusRequest::SetFrameInterval(const int64_t& _frameInterval)
{
    m_frameInterval = _frameInterval;
    m_frameIntervalHasBeenSet = true;
}

bool SubmitImageTaskPlusRequest::FrameIntervalHasBeenSet() const
{
    return m_frameIntervalHasBeenSet;
}

vector<string> SubmitImageTaskPlusRequest::GetLibrarySet() const
{
    return m_librarySet;
}

void SubmitImageTaskPlusRequest::SetLibrarySet(const vector<string>& _librarySet)
{
    m_librarySet = _librarySet;
    m_librarySetHasBeenSet = true;
}

bool SubmitImageTaskPlusRequest::LibrarySetHasBeenSet() const
{
    return m_librarySetHasBeenSet;
}

int64_t SubmitImageTaskPlusRequest::GetMaxVideoDuration() const
{
    return m_maxVideoDuration;
}

void SubmitImageTaskPlusRequest::SetMaxVideoDuration(const int64_t& _maxVideoDuration)
{
    m_maxVideoDuration = _maxVideoDuration;
    m_maxVideoDurationHasBeenSet = true;
}

bool SubmitImageTaskPlusRequest::MaxVideoDurationHasBeenSet() const
{
    return m_maxVideoDurationHasBeenSet;
}

double SubmitImageTaskPlusRequest::GetSimThreshold() const
{
    return m_simThreshold;
}

void SubmitImageTaskPlusRequest::SetSimThreshold(const double& _simThreshold)
{
    m_simThreshold = _simThreshold;
    m_simThresholdHasBeenSet = true;
}

bool SubmitImageTaskPlusRequest::SimThresholdHasBeenSet() const
{
    return m_simThresholdHasBeenSet;
}


