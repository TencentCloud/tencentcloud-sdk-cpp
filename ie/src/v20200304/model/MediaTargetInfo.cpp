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

#include <tencentcloud/ie/v20200304/model/MediaTargetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

MediaTargetInfo::MediaTargetInfo() :
    m_fileNameHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_targetVideoInfoHasBeenSet(false),
    m_resultListSaveTypeHasBeenSet(false)
{
}

CoreInternalOutcome MediaTargetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaTargetInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaTargetInfo.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("TargetVideoInfo") && !value["TargetVideoInfo"].IsNull())
    {
        if (!value["TargetVideoInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaTargetInfo.TargetVideoInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetVideoInfo.Deserialize(value["TargetVideoInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetVideoInfoHasBeenSet = true;
    }

    if (value.HasMember("ResultListSaveType") && !value["ResultListSaveType"].IsNull())
    {
        if (!value["ResultListSaveType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaTargetInfo.ResultListSaveType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultListSaveType = string(value["ResultListSaveType"].GetString());
        m_resultListSaveTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaTargetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_targetVideoInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetVideoInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetVideoInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resultListSaveTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultListSaveType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultListSaveType.c_str(), allocator).Move(), allocator);
    }

}


string MediaTargetInfo::GetFileName() const
{
    return m_fileName;
}

void MediaTargetInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool MediaTargetInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string MediaTargetInfo::GetFormat() const
{
    return m_format;
}

void MediaTargetInfo::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool MediaTargetInfo::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

TargetVideoInfo MediaTargetInfo::GetTargetVideoInfo() const
{
    return m_targetVideoInfo;
}

void MediaTargetInfo::SetTargetVideoInfo(const TargetVideoInfo& _targetVideoInfo)
{
    m_targetVideoInfo = _targetVideoInfo;
    m_targetVideoInfoHasBeenSet = true;
}

bool MediaTargetInfo::TargetVideoInfoHasBeenSet() const
{
    return m_targetVideoInfoHasBeenSet;
}

string MediaTargetInfo::GetResultListSaveType() const
{
    return m_resultListSaveType;
}

void MediaTargetInfo::SetResultListSaveType(const string& _resultListSaveType)
{
    m_resultListSaveType = _resultListSaveType;
    m_resultListSaveTypeHasBeenSet = true;
}

bool MediaTargetInfo::ResultListSaveTypeHasBeenSet() const
{
    return m_resultListSaveTypeHasBeenSet;
}

