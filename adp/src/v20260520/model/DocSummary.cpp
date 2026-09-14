/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/adp/v20260520/model/DocSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DocSummary::DocSummary() :
    m_categoryPathHasBeenSet(false),
    m_docIdHasBeenSet(false),
    m_knowledgeScopeHasBeenSet(false),
    m_lifecycleHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_operatorInfoHasBeenSet(false),
    m_taskStatusHasBeenSet(false)
{
}

CoreInternalOutcome DocSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CategoryPath") && !value["CategoryPath"].IsNull())
    {
        if (!value["CategoryPath"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DocSummary.CategoryPath` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_categoryPath.Deserialize(value["CategoryPath"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_categoryPathHasBeenSet = true;
    }

    if (value.HasMember("DocId") && !value["DocId"].IsNull())
    {
        if (!value["DocId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocSummary.DocId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docId = string(value["DocId"].GetString());
        m_docIdHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeScope") && !value["KnowledgeScope"].IsNull())
    {
        if (!value["KnowledgeScope"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DocSummary.KnowledgeScope` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_knowledgeScope.Deserialize(value["KnowledgeScope"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_knowledgeScopeHasBeenSet = true;
    }

    if (value.HasMember("Lifecycle") && !value["Lifecycle"].IsNull())
    {
        if (!value["Lifecycle"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DocSummary.Lifecycle` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lifecycle.Deserialize(value["Lifecycle"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lifecycleHasBeenSet = true;
    }

    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DocSummary.Metadata` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metadata.Deserialize(value["Metadata"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metadataHasBeenSet = true;
    }

    if (value.HasMember("OperatorInfo") && !value["OperatorInfo"].IsNull())
    {
        if (!value["OperatorInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DocSummary.OperatorInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_operatorInfo.Deserialize(value["OperatorInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_operatorInfoHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DocSummary.TaskStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskStatus.Deserialize(value["TaskStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_categoryPath.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_docIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docId.c_str(), allocator).Move(), allocator);
    }

    if (m_knowledgeScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_knowledgeScope.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lifecycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lifecycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lifecycle.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metadata.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_operatorInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operatorInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskStatus.ToJsonObject(value[key.c_str()], allocator);
    }

}


CategoryPath DocSummary::GetCategoryPath() const
{
    return m_categoryPath;
}

void DocSummary::SetCategoryPath(const CategoryPath& _categoryPath)
{
    m_categoryPath = _categoryPath;
    m_categoryPathHasBeenSet = true;
}

bool DocSummary::CategoryPathHasBeenSet() const
{
    return m_categoryPathHasBeenSet;
}

string DocSummary::GetDocId() const
{
    return m_docId;
}

void DocSummary::SetDocId(const string& _docId)
{
    m_docId = _docId;
    m_docIdHasBeenSet = true;
}

bool DocSummary::DocIdHasBeenSet() const
{
    return m_docIdHasBeenSet;
}

KnowledgeScope DocSummary::GetKnowledgeScope() const
{
    return m_knowledgeScope;
}

void DocSummary::SetKnowledgeScope(const KnowledgeScope& _knowledgeScope)
{
    m_knowledgeScope = _knowledgeScope;
    m_knowledgeScopeHasBeenSet = true;
}

bool DocSummary::KnowledgeScopeHasBeenSet() const
{
    return m_knowledgeScopeHasBeenSet;
}

DocLifecycle DocSummary::GetLifecycle() const
{
    return m_lifecycle;
}

void DocSummary::SetLifecycle(const DocLifecycle& _lifecycle)
{
    m_lifecycle = _lifecycle;
    m_lifecycleHasBeenSet = true;
}

bool DocSummary::LifecycleHasBeenSet() const
{
    return m_lifecycleHasBeenSet;
}

DocMetadata DocSummary::GetMetadata() const
{
    return m_metadata;
}

void DocSummary::SetMetadata(const DocMetadata& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool DocSummary::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

DocOperator DocSummary::GetOperatorInfo() const
{
    return m_operatorInfo;
}

void DocSummary::SetOperatorInfo(const DocOperator& _operatorInfo)
{
    m_operatorInfo = _operatorInfo;
    m_operatorInfoHasBeenSet = true;
}

bool DocSummary::OperatorInfoHasBeenSet() const
{
    return m_operatorInfoHasBeenSet;
}

DocTaskStatus DocSummary::GetTaskStatus() const
{
    return m_taskStatus;
}

void DocSummary::SetTaskStatus(const DocTaskStatus& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool DocSummary::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

