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

#include <tencentcloud/wedata/v20210820/model/DiagnoseRep.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DiagnoseRep::DiagnoseRep() :
    m_contentHasBeenSet(false),
    m_tableHasBeenSet(false)
{
}

CoreInternalOutcome DiagnoseRep::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseRep.Content` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_content.Deserialize(value["Content"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseRep.Table` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_table.Deserialize(value["Table"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiagnoseRep::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_content.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_table.ToJsonObject(value[key.c_str()], allocator);
    }

}


Content DiagnoseRep::GetContent() const
{
    return m_content;
}

void DiagnoseRep::SetContent(const Content& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool DiagnoseRep::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

Table DiagnoseRep::GetTable() const
{
    return m_table;
}

void DiagnoseRep::SetTable(const Table& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool DiagnoseRep::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

