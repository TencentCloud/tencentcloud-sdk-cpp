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

#include <tencentcloud/tcaplusdb/v20190823/model/TagsInfoOfTable.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

TagsInfoOfTable::TagsInfoOfTable() :
    m_tableInstanceIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableGroupIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

CoreInternalOutcome TagsInfoOfTable::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableInstanceId") && !value["TableInstanceId"].IsNull())
    {
        if (!value["TableInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagsInfoOfTable.TableInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableInstanceId = string(value["TableInstanceId"].GetString());
        m_tableInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagsInfoOfTable.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TableGroupId") && !value["TableGroupId"].IsNull())
    {
        if (!value["TableGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagsInfoOfTable.TableGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableGroupId = string(value["TableGroupId"].GetString());
        m_tableGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TagsInfoOfTable.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfoUnit item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TagsInfoOfTable.Error` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_error.Deserialize(value["Error"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TagsInfoOfTable::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_error.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TagsInfoOfTable::GetTableInstanceId() const
{
    return m_tableInstanceId;
}

void TagsInfoOfTable::SetTableInstanceId(const string& _tableInstanceId)
{
    m_tableInstanceId = _tableInstanceId;
    m_tableInstanceIdHasBeenSet = true;
}

bool TagsInfoOfTable::TableInstanceIdHasBeenSet() const
{
    return m_tableInstanceIdHasBeenSet;
}

string TagsInfoOfTable::GetTableName() const
{
    return m_tableName;
}

void TagsInfoOfTable::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TagsInfoOfTable::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string TagsInfoOfTable::GetTableGroupId() const
{
    return m_tableGroupId;
}

void TagsInfoOfTable::SetTableGroupId(const string& _tableGroupId)
{
    m_tableGroupId = _tableGroupId;
    m_tableGroupIdHasBeenSet = true;
}

bool TagsInfoOfTable::TableGroupIdHasBeenSet() const
{
    return m_tableGroupIdHasBeenSet;
}

vector<TagInfoUnit> TagsInfoOfTable::GetTags() const
{
    return m_tags;
}

void TagsInfoOfTable::SetTags(const vector<TagInfoUnit>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool TagsInfoOfTable::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

ErrorInfo TagsInfoOfTable::GetError() const
{
    return m_error;
}

void TagsInfoOfTable::SetError(const ErrorInfo& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool TagsInfoOfTable::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

