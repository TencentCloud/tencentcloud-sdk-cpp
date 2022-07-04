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

#include <tencentcloud/ie/v20200304/model/MediaCuttingTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

MediaCuttingTaskResult::MediaCuttingTaskResult() :
    m_listFileHasBeenSet(false),
    m_resultCountHasBeenSet(false),
    m_firstFileHasBeenSet(false),
    m_lastFileHasBeenSet(false),
    m_imageCountHasBeenSet(false)
{
}

CoreInternalOutcome MediaCuttingTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ListFile") && !value["ListFile"].IsNull())
    {
        if (!value["ListFile"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingTaskResult.ListFile` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_listFile.Deserialize(value["ListFile"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_listFileHasBeenSet = true;
    }

    if (value.HasMember("ResultCount") && !value["ResultCount"].IsNull())
    {
        if (!value["ResultCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingTaskResult.ResultCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resultCount = value["ResultCount"].GetInt64();
        m_resultCountHasBeenSet = true;
    }

    if (value.HasMember("FirstFile") && !value["FirstFile"].IsNull())
    {
        if (!value["FirstFile"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingTaskResult.FirstFile` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_firstFile.Deserialize(value["FirstFile"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_firstFileHasBeenSet = true;
    }

    if (value.HasMember("LastFile") && !value["LastFile"].IsNull())
    {
        if (!value["LastFile"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingTaskResult.LastFile` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lastFile.Deserialize(value["LastFile"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lastFileHasBeenSet = true;
    }

    if (value.HasMember("ImageCount") && !value["ImageCount"].IsNull())
    {
        if (!value["ImageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingTaskResult.ImageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageCount = value["ImageCount"].GetInt64();
        m_imageCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaCuttingTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_listFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_listFile.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resultCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultCount, allocator);
    }

    if (m_firstFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_firstFile.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lastFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lastFile.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageCount, allocator);
    }

}


TaskResultFile MediaCuttingTaskResult::GetListFile() const
{
    return m_listFile;
}

void MediaCuttingTaskResult::SetListFile(const TaskResultFile& _listFile)
{
    m_listFile = _listFile;
    m_listFileHasBeenSet = true;
}

bool MediaCuttingTaskResult::ListFileHasBeenSet() const
{
    return m_listFileHasBeenSet;
}

int64_t MediaCuttingTaskResult::GetResultCount() const
{
    return m_resultCount;
}

void MediaCuttingTaskResult::SetResultCount(const int64_t& _resultCount)
{
    m_resultCount = _resultCount;
    m_resultCountHasBeenSet = true;
}

bool MediaCuttingTaskResult::ResultCountHasBeenSet() const
{
    return m_resultCountHasBeenSet;
}

TaskResultFile MediaCuttingTaskResult::GetFirstFile() const
{
    return m_firstFile;
}

void MediaCuttingTaskResult::SetFirstFile(const TaskResultFile& _firstFile)
{
    m_firstFile = _firstFile;
    m_firstFileHasBeenSet = true;
}

bool MediaCuttingTaskResult::FirstFileHasBeenSet() const
{
    return m_firstFileHasBeenSet;
}

TaskResultFile MediaCuttingTaskResult::GetLastFile() const
{
    return m_lastFile;
}

void MediaCuttingTaskResult::SetLastFile(const TaskResultFile& _lastFile)
{
    m_lastFile = _lastFile;
    m_lastFileHasBeenSet = true;
}

bool MediaCuttingTaskResult::LastFileHasBeenSet() const
{
    return m_lastFileHasBeenSet;
}

int64_t MediaCuttingTaskResult::GetImageCount() const
{
    return m_imageCount;
}

void MediaCuttingTaskResult::SetImageCount(const int64_t& _imageCount)
{
    m_imageCount = _imageCount;
    m_imageCountHasBeenSet = true;
}

bool MediaCuttingTaskResult::ImageCountHasBeenSet() const
{
    return m_imageCountHasBeenSet;
}

