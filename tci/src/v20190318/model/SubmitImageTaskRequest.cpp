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

#include <tencentcloud/tci/v20190318/model/SubmitImageTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

SubmitImageTaskRequest::SubmitImageTaskRequest() :
    m_fileContentHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_functionsHasBeenSet(false),
    m_lightStandardSetHasBeenSet(false),
    m_eventsCallBackHasBeenSet(false),
    m_frameIntervalHasBeenSet(false),
    m_librarySetHasBeenSet(false),
    m_maxVideoDurationHasBeenSet(false),
    m_simThresholdHasBeenSet(false)
{
}

string SubmitImageTaskRequest::ToJsonString() const
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

    if (m_eventsCallBackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventsCallBack";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventsCallBack.c_str(), allocator).Move(), allocator);
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


string SubmitImageTaskRequest::GetFileContent() const
{
    return m_fileContent;
}

void SubmitImageTaskRequest::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool SubmitImageTaskRequest::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

string SubmitImageTaskRequest::GetFileType() const
{
    return m_fileType;
}

void SubmitImageTaskRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool SubmitImageTaskRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

ImageTaskFunction SubmitImageTaskRequest::GetFunctions() const
{
    return m_functions;
}

void SubmitImageTaskRequest::SetFunctions(const ImageTaskFunction& _functions)
{
    m_functions = _functions;
    m_functionsHasBeenSet = true;
}

bool SubmitImageTaskRequest::FunctionsHasBeenSet() const
{
    return m_functionsHasBeenSet;
}

vector<LightStandard> SubmitImageTaskRequest::GetLightStandardSet() const
{
    return m_lightStandardSet;
}

void SubmitImageTaskRequest::SetLightStandardSet(const vector<LightStandard>& _lightStandardSet)
{
    m_lightStandardSet = _lightStandardSet;
    m_lightStandardSetHasBeenSet = true;
}

bool SubmitImageTaskRequest::LightStandardSetHasBeenSet() const
{
    return m_lightStandardSetHasBeenSet;
}

string SubmitImageTaskRequest::GetEventsCallBack() const
{
    return m_eventsCallBack;
}

void SubmitImageTaskRequest::SetEventsCallBack(const string& _eventsCallBack)
{
    m_eventsCallBack = _eventsCallBack;
    m_eventsCallBackHasBeenSet = true;
}

bool SubmitImageTaskRequest::EventsCallBackHasBeenSet() const
{
    return m_eventsCallBackHasBeenSet;
}

int64_t SubmitImageTaskRequest::GetFrameInterval() const
{
    return m_frameInterval;
}

void SubmitImageTaskRequest::SetFrameInterval(const int64_t& _frameInterval)
{
    m_frameInterval = _frameInterval;
    m_frameIntervalHasBeenSet = true;
}

bool SubmitImageTaskRequest::FrameIntervalHasBeenSet() const
{
    return m_frameIntervalHasBeenSet;
}

vector<string> SubmitImageTaskRequest::GetLibrarySet() const
{
    return m_librarySet;
}

void SubmitImageTaskRequest::SetLibrarySet(const vector<string>& _librarySet)
{
    m_librarySet = _librarySet;
    m_librarySetHasBeenSet = true;
}

bool SubmitImageTaskRequest::LibrarySetHasBeenSet() const
{
    return m_librarySetHasBeenSet;
}

int64_t SubmitImageTaskRequest::GetMaxVideoDuration() const
{
    return m_maxVideoDuration;
}

void SubmitImageTaskRequest::SetMaxVideoDuration(const int64_t& _maxVideoDuration)
{
    m_maxVideoDuration = _maxVideoDuration;
    m_maxVideoDurationHasBeenSet = true;
}

bool SubmitImageTaskRequest::MaxVideoDurationHasBeenSet() const
{
    return m_maxVideoDurationHasBeenSet;
}

double SubmitImageTaskRequest::GetSimThreshold() const
{
    return m_simThreshold;
}

void SubmitImageTaskRequest::SetSimThreshold(const double& _simThreshold)
{
    m_simThreshold = _simThreshold;
    m_simThresholdHasBeenSet = true;
}

bool SubmitImageTaskRequest::SimThresholdHasBeenSet() const
{
    return m_simThresholdHasBeenSet;
}


