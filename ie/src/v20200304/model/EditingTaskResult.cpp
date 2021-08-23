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

#include <tencentcloud/ie/v20200304/model/EditingTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

EditingTaskResult::EditingTaskResult() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagTaskResultHasBeenSet(false),
    m_classificationTaskResultHasBeenSet(false),
    m_stripTaskResultHasBeenSet(false),
    m_highlightsTaskResultHasBeenSet(false),
    m_coverTaskResultHasBeenSet(false),
    m_openingEndingTaskResultHasBeenSet(false)
{
}

CoreInternalOutcome EditingTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EditingTaskResult.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EditingTaskResult.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TagTaskResult") && !value["TagTaskResult"].IsNull())
    {
        if (!value["TagTaskResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EditingTaskResult.TagTaskResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tagTaskResult.Deserialize(value["TagTaskResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tagTaskResultHasBeenSet = true;
    }

    if (value.HasMember("ClassificationTaskResult") && !value["ClassificationTaskResult"].IsNull())
    {
        if (!value["ClassificationTaskResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EditingTaskResult.ClassificationTaskResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_classificationTaskResult.Deserialize(value["ClassificationTaskResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_classificationTaskResultHasBeenSet = true;
    }

    if (value.HasMember("StripTaskResult") && !value["StripTaskResult"].IsNull())
    {
        if (!value["StripTaskResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EditingTaskResult.StripTaskResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_stripTaskResult.Deserialize(value["StripTaskResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_stripTaskResultHasBeenSet = true;
    }

    if (value.HasMember("HighlightsTaskResult") && !value["HighlightsTaskResult"].IsNull())
    {
        if (!value["HighlightsTaskResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EditingTaskResult.HighlightsTaskResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_highlightsTaskResult.Deserialize(value["HighlightsTaskResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_highlightsTaskResultHasBeenSet = true;
    }

    if (value.HasMember("CoverTaskResult") && !value["CoverTaskResult"].IsNull())
    {
        if (!value["CoverTaskResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EditingTaskResult.CoverTaskResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coverTaskResult.Deserialize(value["CoverTaskResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coverTaskResultHasBeenSet = true;
    }

    if (value.HasMember("OpeningEndingTaskResult") && !value["OpeningEndingTaskResult"].IsNull())
    {
        if (!value["OpeningEndingTaskResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EditingTaskResult.OpeningEndingTaskResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_openingEndingTaskResult.Deserialize(value["OpeningEndingTaskResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_openingEndingTaskResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EditingTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_tagTaskResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagTaskResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tagTaskResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_classificationTaskResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassificationTaskResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_classificationTaskResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_stripTaskResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StripTaskResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_stripTaskResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_highlightsTaskResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighlightsTaskResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_highlightsTaskResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_coverTaskResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverTaskResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coverTaskResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_openingEndingTaskResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpeningEndingTaskResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_openingEndingTaskResult.ToJsonObject(value[key.c_str()], allocator);
    }

}


string EditingTaskResult::GetTaskId() const
{
    return m_taskId;
}

void EditingTaskResult::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool EditingTaskResult::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t EditingTaskResult::GetStatus() const
{
    return m_status;
}

void EditingTaskResult::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EditingTaskResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

TagTaskResult EditingTaskResult::GetTagTaskResult() const
{
    return m_tagTaskResult;
}

void EditingTaskResult::SetTagTaskResult(const TagTaskResult& _tagTaskResult)
{
    m_tagTaskResult = _tagTaskResult;
    m_tagTaskResultHasBeenSet = true;
}

bool EditingTaskResult::TagTaskResultHasBeenSet() const
{
    return m_tagTaskResultHasBeenSet;
}

ClassificationTaskResult EditingTaskResult::GetClassificationTaskResult() const
{
    return m_classificationTaskResult;
}

void EditingTaskResult::SetClassificationTaskResult(const ClassificationTaskResult& _classificationTaskResult)
{
    m_classificationTaskResult = _classificationTaskResult;
    m_classificationTaskResultHasBeenSet = true;
}

bool EditingTaskResult::ClassificationTaskResultHasBeenSet() const
{
    return m_classificationTaskResultHasBeenSet;
}

StripTaskResult EditingTaskResult::GetStripTaskResult() const
{
    return m_stripTaskResult;
}

void EditingTaskResult::SetStripTaskResult(const StripTaskResult& _stripTaskResult)
{
    m_stripTaskResult = _stripTaskResult;
    m_stripTaskResultHasBeenSet = true;
}

bool EditingTaskResult::StripTaskResultHasBeenSet() const
{
    return m_stripTaskResultHasBeenSet;
}

HighlightsTaskResult EditingTaskResult::GetHighlightsTaskResult() const
{
    return m_highlightsTaskResult;
}

void EditingTaskResult::SetHighlightsTaskResult(const HighlightsTaskResult& _highlightsTaskResult)
{
    m_highlightsTaskResult = _highlightsTaskResult;
    m_highlightsTaskResultHasBeenSet = true;
}

bool EditingTaskResult::HighlightsTaskResultHasBeenSet() const
{
    return m_highlightsTaskResultHasBeenSet;
}

CoverTaskResult EditingTaskResult::GetCoverTaskResult() const
{
    return m_coverTaskResult;
}

void EditingTaskResult::SetCoverTaskResult(const CoverTaskResult& _coverTaskResult)
{
    m_coverTaskResult = _coverTaskResult;
    m_coverTaskResultHasBeenSet = true;
}

bool EditingTaskResult::CoverTaskResultHasBeenSet() const
{
    return m_coverTaskResultHasBeenSet;
}

OpeningEndingTaskResult EditingTaskResult::GetOpeningEndingTaskResult() const
{
    return m_openingEndingTaskResult;
}

void EditingTaskResult::SetOpeningEndingTaskResult(const OpeningEndingTaskResult& _openingEndingTaskResult)
{
    m_openingEndingTaskResult = _openingEndingTaskResult;
    m_openingEndingTaskResultHasBeenSet = true;
}

bool EditingTaskResult::OpeningEndingTaskResultHasBeenSet() const
{
    return m_openingEndingTaskResultHasBeenSet;
}

