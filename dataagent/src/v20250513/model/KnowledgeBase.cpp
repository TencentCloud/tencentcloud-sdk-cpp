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

#include <tencentcloud/dataagent/v20250513/model/KnowledgeBase.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

KnowledgeBase::KnowledgeBase() :
    m_knowledgeBaseIdHasBeenSet(false),
    m_knowledgeBaseNameHasBeenSet(false),
    m_knowledgeBaseDescHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_fileNumHasBeenSet(false),
    m_datasourceIdsHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeBase::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KnowledgeBaseId") && !value["KnowledgeBaseId"].IsNull())
    {
        if (!value["KnowledgeBaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeBase.KnowledgeBaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeBaseId = string(value["KnowledgeBaseId"].GetString());
        m_knowledgeBaseIdHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeBaseName") && !value["KnowledgeBaseName"].IsNull())
    {
        if (!value["KnowledgeBaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeBase.KnowledgeBaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeBaseName = string(value["KnowledgeBaseName"].GetString());
        m_knowledgeBaseNameHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeBaseDesc") && !value["KnowledgeBaseDesc"].IsNull())
    {
        if (!value["KnowledgeBaseDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeBase.KnowledgeBaseDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeBaseDesc = string(value["KnowledgeBaseDesc"].GetString());
        m_knowledgeBaseDescHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeBase.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeBase.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("FileNum") && !value["FileNum"].IsNull())
    {
        if (!value["FileNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeBase.FileNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileNum = value["FileNum"].GetInt64();
        m_fileNumHasBeenSet = true;
    }

    if (value.HasMember("DatasourceIds") && !value["DatasourceIds"].IsNull())
    {
        if (!value["DatasourceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KnowledgeBase.DatasourceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["DatasourceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_datasourceIds.push_back((*itr).GetString());
        }
        m_datasourceIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeBase::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_knowledgeBaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeBaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_knowledgeBaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_knowledgeBaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeBaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_knowledgeBaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_knowledgeBaseDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeBaseDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_knowledgeBaseDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileNum, allocator);
    }

    if (m_datasourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_datasourceIds.begin(); itr != m_datasourceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string KnowledgeBase::GetKnowledgeBaseId() const
{
    return m_knowledgeBaseId;
}

void KnowledgeBase::SetKnowledgeBaseId(const string& _knowledgeBaseId)
{
    m_knowledgeBaseId = _knowledgeBaseId;
    m_knowledgeBaseIdHasBeenSet = true;
}

bool KnowledgeBase::KnowledgeBaseIdHasBeenSet() const
{
    return m_knowledgeBaseIdHasBeenSet;
}

string KnowledgeBase::GetKnowledgeBaseName() const
{
    return m_knowledgeBaseName;
}

void KnowledgeBase::SetKnowledgeBaseName(const string& _knowledgeBaseName)
{
    m_knowledgeBaseName = _knowledgeBaseName;
    m_knowledgeBaseNameHasBeenSet = true;
}

bool KnowledgeBase::KnowledgeBaseNameHasBeenSet() const
{
    return m_knowledgeBaseNameHasBeenSet;
}

string KnowledgeBase::GetKnowledgeBaseDesc() const
{
    return m_knowledgeBaseDesc;
}

void KnowledgeBase::SetKnowledgeBaseDesc(const string& _knowledgeBaseDesc)
{
    m_knowledgeBaseDesc = _knowledgeBaseDesc;
    m_knowledgeBaseDescHasBeenSet = true;
}

bool KnowledgeBase::KnowledgeBaseDescHasBeenSet() const
{
    return m_knowledgeBaseDescHasBeenSet;
}

string KnowledgeBase::GetCreator() const
{
    return m_creator;
}

void KnowledgeBase::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool KnowledgeBase::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string KnowledgeBase::GetCreateTime() const
{
    return m_createTime;
}

void KnowledgeBase::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool KnowledgeBase::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t KnowledgeBase::GetFileNum() const
{
    return m_fileNum;
}

void KnowledgeBase::SetFileNum(const int64_t& _fileNum)
{
    m_fileNum = _fileNum;
    m_fileNumHasBeenSet = true;
}

bool KnowledgeBase::FileNumHasBeenSet() const
{
    return m_fileNumHasBeenSet;
}

vector<string> KnowledgeBase::GetDatasourceIds() const
{
    return m_datasourceIds;
}

void KnowledgeBase::SetDatasourceIds(const vector<string>& _datasourceIds)
{
    m_datasourceIds = _datasourceIds;
    m_datasourceIdsHasBeenSet = true;
}

bool KnowledgeBase::DatasourceIdsHasBeenSet() const
{
    return m_datasourceIdsHasBeenSet;
}

