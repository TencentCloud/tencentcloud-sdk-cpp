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

#include <tencentcloud/es/v20180416/model/BackingIndexMetaField.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

BackingIndexMetaField::BackingIndexMetaField() :
    m_indexNameHasBeenSet(false),
    m_indexStatusHasBeenSet(false),
    m_indexStorageHasBeenSet(false),
    m_indexPhraseHasBeenSet(false),
    m_indexCreateTimeHasBeenSet(false)
{
}

CoreInternalOutcome BackingIndexMetaField::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IndexName") && !value["IndexName"].IsNull())
    {
        if (!value["IndexName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackingIndexMetaField.IndexName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexName = string(value["IndexName"].GetString());
        m_indexNameHasBeenSet = true;
    }

    if (value.HasMember("IndexStatus") && !value["IndexStatus"].IsNull())
    {
        if (!value["IndexStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackingIndexMetaField.IndexStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexStatus = string(value["IndexStatus"].GetString());
        m_indexStatusHasBeenSet = true;
    }

    if (value.HasMember("IndexStorage") && !value["IndexStorage"].IsNull())
    {
        if (!value["IndexStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackingIndexMetaField.IndexStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_indexStorage = value["IndexStorage"].GetInt64();
        m_indexStorageHasBeenSet = true;
    }

    if (value.HasMember("IndexPhrase") && !value["IndexPhrase"].IsNull())
    {
        if (!value["IndexPhrase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackingIndexMetaField.IndexPhrase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexPhrase = string(value["IndexPhrase"].GetString());
        m_indexPhraseHasBeenSet = true;
    }

    if (value.HasMember("IndexCreateTime") && !value["IndexCreateTime"].IsNull())
    {
        if (!value["IndexCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackingIndexMetaField.IndexCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexCreateTime = string(value["IndexCreateTime"].GetString());
        m_indexCreateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackingIndexMetaField::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexName.c_str(), allocator).Move(), allocator);
    }

    if (m_indexStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_indexStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indexStorage, allocator);
    }

    if (m_indexPhraseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexPhrase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexPhrase.c_str(), allocator).Move(), allocator);
    }

    if (m_indexCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexCreateTime.c_str(), allocator).Move(), allocator);
    }

}


string BackingIndexMetaField::GetIndexName() const
{
    return m_indexName;
}

void BackingIndexMetaField::SetIndexName(const string& _indexName)
{
    m_indexName = _indexName;
    m_indexNameHasBeenSet = true;
}

bool BackingIndexMetaField::IndexNameHasBeenSet() const
{
    return m_indexNameHasBeenSet;
}

string BackingIndexMetaField::GetIndexStatus() const
{
    return m_indexStatus;
}

void BackingIndexMetaField::SetIndexStatus(const string& _indexStatus)
{
    m_indexStatus = _indexStatus;
    m_indexStatusHasBeenSet = true;
}

bool BackingIndexMetaField::IndexStatusHasBeenSet() const
{
    return m_indexStatusHasBeenSet;
}

int64_t BackingIndexMetaField::GetIndexStorage() const
{
    return m_indexStorage;
}

void BackingIndexMetaField::SetIndexStorage(const int64_t& _indexStorage)
{
    m_indexStorage = _indexStorage;
    m_indexStorageHasBeenSet = true;
}

bool BackingIndexMetaField::IndexStorageHasBeenSet() const
{
    return m_indexStorageHasBeenSet;
}

string BackingIndexMetaField::GetIndexPhrase() const
{
    return m_indexPhrase;
}

void BackingIndexMetaField::SetIndexPhrase(const string& _indexPhrase)
{
    m_indexPhrase = _indexPhrase;
    m_indexPhraseHasBeenSet = true;
}

bool BackingIndexMetaField::IndexPhraseHasBeenSet() const
{
    return m_indexPhraseHasBeenSet;
}

string BackingIndexMetaField::GetIndexCreateTime() const
{
    return m_indexCreateTime;
}

void BackingIndexMetaField::SetIndexCreateTime(const string& _indexCreateTime)
{
    m_indexCreateTime = _indexCreateTime;
    m_indexCreateTimeHasBeenSet = true;
}

bool BackingIndexMetaField::IndexCreateTimeHasBeenSet() const
{
    return m_indexCreateTimeHasBeenSet;
}

