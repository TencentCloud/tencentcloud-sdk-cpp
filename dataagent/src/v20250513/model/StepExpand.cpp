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

#include <tencentcloud/dataagent/v20250513/model/StepExpand.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

StepExpand::StepExpand() :
    m_titleHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cellIdsHasBeenSet(false)
{
}

CoreInternalOutcome StepExpand::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StepExpand.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StepExpand.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CellIds") && !value["CellIds"].IsNull())
    {
        if (!value["CellIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StepExpand.CellIds` is not array type"));

        const rapidjson::Value &tmpValue = value["CellIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cellIds.push_back((*itr).GetString());
        }
        m_cellIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StepExpand::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_cellIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CellIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cellIds.begin(); itr != m_cellIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string StepExpand::GetTitle() const
{
    return m_title;
}

void StepExpand::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool StepExpand::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string StepExpand::GetStatus() const
{
    return m_status;
}

void StepExpand::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool StepExpand::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> StepExpand::GetCellIds() const
{
    return m_cellIds;
}

void StepExpand::SetCellIds(const vector<string>& _cellIds)
{
    m_cellIds = _cellIds;
    m_cellIdsHasBeenSet = true;
}

bool StepExpand::CellIdsHasBeenSet() const
{
    return m_cellIdsHasBeenSet;
}

