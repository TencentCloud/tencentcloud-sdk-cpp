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

#include <tencentcloud/vod/v20180717/model/CreateImageSpriteTask2017.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateImageSpriteTask2017::CreateImageSpriteTask2017() :
    m_taskIdHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_imageSpriteUrlSetHasBeenSet(false),
    m_webVttUrlHasBeenSet(false)
{
}

CoreInternalOutcome CreateImageSpriteTask2017::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateImageSpriteTask2017.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateImageSpriteTask2017.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateImageSpriteTask2017.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateImageSpriteTask2017.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateImageSpriteTask2017.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateImageSpriteTask2017.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("ImageSpriteUrlSet") && !value["ImageSpriteUrlSet"].IsNull())
    {
        if (!value["ImageSpriteUrlSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateImageSpriteTask2017.ImageSpriteUrlSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageSpriteUrlSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageSpriteUrlSet.push_back((*itr).GetString());
        }
        m_imageSpriteUrlSetHasBeenSet = true;
    }

    if (value.HasMember("WebVttUrl") && !value["WebVttUrl"].IsNull())
    {
        if (!value["WebVttUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateImageSpriteTask2017.WebVttUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webVttUrl = string(value["WebVttUrl"].GetString());
        m_webVttUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateImageSpriteTask2017::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_errCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errCode, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_imageSpriteUrlSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSpriteUrlSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageSpriteUrlSet.begin(); itr != m_imageSpriteUrlSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_webVttUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebVttUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webVttUrl.c_str(), allocator).Move(), allocator);
    }

}


string CreateImageSpriteTask2017::GetTaskId() const
{
    return m_taskId;
}

void CreateImageSpriteTask2017::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CreateImageSpriteTask2017::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t CreateImageSpriteTask2017::GetErrCode() const
{
    return m_errCode;
}

void CreateImageSpriteTask2017::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool CreateImageSpriteTask2017::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string CreateImageSpriteTask2017::GetMessage() const
{
    return m_message;
}

void CreateImageSpriteTask2017::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool CreateImageSpriteTask2017::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string CreateImageSpriteTask2017::GetFileId() const
{
    return m_fileId;
}

void CreateImageSpriteTask2017::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool CreateImageSpriteTask2017::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

int64_t CreateImageSpriteTask2017::GetDefinition() const
{
    return m_definition;
}

void CreateImageSpriteTask2017::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool CreateImageSpriteTask2017::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

uint64_t CreateImageSpriteTask2017::GetTotalCount() const
{
    return m_totalCount;
}

void CreateImageSpriteTask2017::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool CreateImageSpriteTask2017::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<string> CreateImageSpriteTask2017::GetImageSpriteUrlSet() const
{
    return m_imageSpriteUrlSet;
}

void CreateImageSpriteTask2017::SetImageSpriteUrlSet(const vector<string>& _imageSpriteUrlSet)
{
    m_imageSpriteUrlSet = _imageSpriteUrlSet;
    m_imageSpriteUrlSetHasBeenSet = true;
}

bool CreateImageSpriteTask2017::ImageSpriteUrlSetHasBeenSet() const
{
    return m_imageSpriteUrlSetHasBeenSet;
}

string CreateImageSpriteTask2017::GetWebVttUrl() const
{
    return m_webVttUrl;
}

void CreateImageSpriteTask2017::SetWebVttUrl(const string& _webVttUrl)
{
    m_webVttUrl = _webVttUrl;
    m_webVttUrlHasBeenSet = true;
}

bool CreateImageSpriteTask2017::WebVttUrlHasBeenSet() const
{
    return m_webVttUrlHasBeenSet;
}

