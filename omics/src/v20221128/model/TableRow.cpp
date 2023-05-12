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

#include <tencentcloud/omics/v20221128/model/TableRow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

TableRow::TableRow() :
    m_tableRowUuidHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

CoreInternalOutcome TableRow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableRowUuid") && !value["TableRowUuid"].IsNull())
    {
        if (!value["TableRowUuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableRow.TableRowUuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableRowUuid = string(value["TableRowUuid"].GetString());
        m_tableRowUuidHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableRow.Content` is not array type"));

        const rapidjson::Value &tmpValue = value["Content"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_content.push_back((*itr).GetString());
        }
        m_contentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableRow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableRowUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableRowUuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableRowUuid.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_content.begin(); itr != m_content.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string TableRow::GetTableRowUuid() const
{
    return m_tableRowUuid;
}

void TableRow::SetTableRowUuid(const string& _tableRowUuid)
{
    m_tableRowUuid = _tableRowUuid;
    m_tableRowUuidHasBeenSet = true;
}

bool TableRow::TableRowUuidHasBeenSet() const
{
    return m_tableRowUuidHasBeenSet;
}

vector<string> TableRow::GetContent() const
{
    return m_content;
}

void TableRow::SetContent(const vector<string>& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool TableRow::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

