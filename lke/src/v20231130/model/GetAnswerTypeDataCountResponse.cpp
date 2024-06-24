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

#include <tencentcloud/lke/v20231130/model/GetAnswerTypeDataCountResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

GetAnswerTypeDataCountResponse::GetAnswerTypeDataCountResponse() :
    m_totalHasBeenSet(false),
    m_modelReplyCountHasBeenSet(false),
    m_knowledgeCountHasBeenSet(false),
    m_taskFlowCountHasBeenSet(false),
    m_searchEngineCountHasBeenSet(false),
    m_imageUnderstandingCountHasBeenSet(false),
    m_rejectCountHasBeenSet(false),
    m_sensitiveCountHasBeenSet(false),
    m_concurrentLimitCountHasBeenSet(false),
    m_unknownIssuesCountHasBeenSet(false)
{
}

CoreInternalOutcome GetAnswerTypeDataCountResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("ModelReplyCount") && !rsp["ModelReplyCount"].IsNull())
    {
        if (!rsp["ModelReplyCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelReplyCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_modelReplyCount = rsp["ModelReplyCount"].GetUint64();
        m_modelReplyCountHasBeenSet = true;
    }

    if (rsp.HasMember("KnowledgeCount") && !rsp["KnowledgeCount"].IsNull())
    {
        if (!rsp["KnowledgeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeCount = rsp["KnowledgeCount"].GetUint64();
        m_knowledgeCountHasBeenSet = true;
    }

    if (rsp.HasMember("TaskFlowCount") && !rsp["TaskFlowCount"].IsNull())
    {
        if (!rsp["TaskFlowCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskFlowCount = rsp["TaskFlowCount"].GetUint64();
        m_taskFlowCountHasBeenSet = true;
    }

    if (rsp.HasMember("SearchEngineCount") && !rsp["SearchEngineCount"].IsNull())
    {
        if (!rsp["SearchEngineCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchEngineCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_searchEngineCount = rsp["SearchEngineCount"].GetUint64();
        m_searchEngineCountHasBeenSet = true;
    }

    if (rsp.HasMember("ImageUnderstandingCount") && !rsp["ImageUnderstandingCount"].IsNull())
    {
        if (!rsp["ImageUnderstandingCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageUnderstandingCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageUnderstandingCount = rsp["ImageUnderstandingCount"].GetUint64();
        m_imageUnderstandingCountHasBeenSet = true;
    }

    if (rsp.HasMember("RejectCount") && !rsp["RejectCount"].IsNull())
    {
        if (!rsp["RejectCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RejectCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rejectCount = rsp["RejectCount"].GetUint64();
        m_rejectCountHasBeenSet = true;
    }

    if (rsp.HasMember("SensitiveCount") && !rsp["SensitiveCount"].IsNull())
    {
        if (!rsp["SensitiveCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveCount = rsp["SensitiveCount"].GetUint64();
        m_sensitiveCountHasBeenSet = true;
    }

    if (rsp.HasMember("ConcurrentLimitCount") && !rsp["ConcurrentLimitCount"].IsNull())
    {
        if (!rsp["ConcurrentLimitCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConcurrentLimitCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_concurrentLimitCount = rsp["ConcurrentLimitCount"].GetUint64();
        m_concurrentLimitCountHasBeenSet = true;
    }

    if (rsp.HasMember("UnknownIssuesCount") && !rsp["UnknownIssuesCount"].IsNull())
    {
        if (!rsp["UnknownIssuesCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnknownIssuesCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unknownIssuesCount = rsp["UnknownIssuesCount"].GetUint64();
        m_unknownIssuesCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetAnswerTypeDataCountResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_modelReplyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelReplyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modelReplyCount, allocator);
    }

    if (m_knowledgeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_knowledgeCount, allocator);
    }

    if (m_taskFlowCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFlowCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskFlowCount, allocator);
    }

    if (m_searchEngineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchEngineCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_searchEngineCount, allocator);
    }

    if (m_imageUnderstandingCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUnderstandingCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageUnderstandingCount, allocator);
    }

    if (m_rejectCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RejectCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rejectCount, allocator);
    }

    if (m_sensitiveCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveCount, allocator);
    }

    if (m_concurrentLimitCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConcurrentLimitCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_concurrentLimitCount, allocator);
    }

    if (m_unknownIssuesCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnknownIssuesCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unknownIssuesCount, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


uint64_t GetAnswerTypeDataCountResponse::GetTotal() const
{
    return m_total;
}

bool GetAnswerTypeDataCountResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

uint64_t GetAnswerTypeDataCountResponse::GetModelReplyCount() const
{
    return m_modelReplyCount;
}

bool GetAnswerTypeDataCountResponse::ModelReplyCountHasBeenSet() const
{
    return m_modelReplyCountHasBeenSet;
}

uint64_t GetAnswerTypeDataCountResponse::GetKnowledgeCount() const
{
    return m_knowledgeCount;
}

bool GetAnswerTypeDataCountResponse::KnowledgeCountHasBeenSet() const
{
    return m_knowledgeCountHasBeenSet;
}

uint64_t GetAnswerTypeDataCountResponse::GetTaskFlowCount() const
{
    return m_taskFlowCount;
}

bool GetAnswerTypeDataCountResponse::TaskFlowCountHasBeenSet() const
{
    return m_taskFlowCountHasBeenSet;
}

uint64_t GetAnswerTypeDataCountResponse::GetSearchEngineCount() const
{
    return m_searchEngineCount;
}

bool GetAnswerTypeDataCountResponse::SearchEngineCountHasBeenSet() const
{
    return m_searchEngineCountHasBeenSet;
}

uint64_t GetAnswerTypeDataCountResponse::GetImageUnderstandingCount() const
{
    return m_imageUnderstandingCount;
}

bool GetAnswerTypeDataCountResponse::ImageUnderstandingCountHasBeenSet() const
{
    return m_imageUnderstandingCountHasBeenSet;
}

uint64_t GetAnswerTypeDataCountResponse::GetRejectCount() const
{
    return m_rejectCount;
}

bool GetAnswerTypeDataCountResponse::RejectCountHasBeenSet() const
{
    return m_rejectCountHasBeenSet;
}

uint64_t GetAnswerTypeDataCountResponse::GetSensitiveCount() const
{
    return m_sensitiveCount;
}

bool GetAnswerTypeDataCountResponse::SensitiveCountHasBeenSet() const
{
    return m_sensitiveCountHasBeenSet;
}

uint64_t GetAnswerTypeDataCountResponse::GetConcurrentLimitCount() const
{
    return m_concurrentLimitCount;
}

bool GetAnswerTypeDataCountResponse::ConcurrentLimitCountHasBeenSet() const
{
    return m_concurrentLimitCountHasBeenSet;
}

uint64_t GetAnswerTypeDataCountResponse::GetUnknownIssuesCount() const
{
    return m_unknownIssuesCount;
}

bool GetAnswerTypeDataCountResponse::UnknownIssuesCountHasBeenSet() const
{
    return m_unknownIssuesCountHasBeenSet;
}


