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

#include <tencentcloud/dts/v20211206/model/SkippedItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

SkippedItem::SkippedItem() :
    m_dbHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome SkippedItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Db") && !value["Db"].IsNull())
    {
        if (!value["Db"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkippedItem.Db` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_db = string(value["Db"].GetString());
        m_dbHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkippedItem.Table` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_table = string(value["Table"].GetString());
        m_tableHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkippedItem.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkippedItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Db";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_db.c_str(), allocator).Move(), allocator);
    }

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_table.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

}


string SkippedItem::GetDb() const
{
    return m_db;
}

void SkippedItem::SetDb(const string& _db)
{
    m_db = _db;
    m_dbHasBeenSet = true;
}

bool SkippedItem::DbHasBeenSet() const
{
    return m_dbHasBeenSet;
}

string SkippedItem::GetTable() const
{
    return m_table;
}

void SkippedItem::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool SkippedItem::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

string SkippedItem::GetReason() const
{
    return m_reason;
}

void SkippedItem::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool SkippedItem::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

