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

#include <tencentcloud/dlc/v20210125/model/DatabaseResponseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace rapidjson;
using namespace std;

DatabaseResponseInfo::DatabaseResponseInfo() :
    m_databaseNameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false)
{
}

CoreInternalOutcome DatabaseResponseInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DatabaseResponseInfo.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Error("response `DatabaseResponseInfo.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsArray())
            return CoreInternalOutcome(Error("response `DatabaseResponseInfo.Properties` is not array type"));

        const Value &tmpValue = value["Properties"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Property item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_properties.push_back(item);
        }
        m_propertiesHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DatabaseResponseInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DatabaseResponseInfo.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatabaseResponseInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_databaseNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

}


string DatabaseResponseInfo::GetDatabaseName() const
{
    return m_databaseName;
}

void DatabaseResponseInfo::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool DatabaseResponseInfo::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string DatabaseResponseInfo::GetComment() const
{
    return m_comment;
}

void DatabaseResponseInfo::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool DatabaseResponseInfo::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

vector<Property> DatabaseResponseInfo::GetProperties() const
{
    return m_properties;
}

void DatabaseResponseInfo::SetProperties(const vector<Property>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool DatabaseResponseInfo::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

string DatabaseResponseInfo::GetCreateTime() const
{
    return m_createTime;
}

void DatabaseResponseInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DatabaseResponseInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DatabaseResponseInfo::GetModifiedTime() const
{
    return m_modifiedTime;
}

void DatabaseResponseInfo::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool DatabaseResponseInfo::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

