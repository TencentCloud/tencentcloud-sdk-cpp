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

#include <tencentcloud/dnspod/v20210323/model/LineGroupDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

LineGroupDetail::LineGroupDetail() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_linesHasBeenSet(false)
{
}

CoreInternalOutcome LineGroupDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LineGroupDetail.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineGroupDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Lines") && !value["Lines"].IsNull())
    {
        if (!value["Lines"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LineGroupDetail.Lines` is not array type"));

        const rapidjson::Value &tmpValue = value["Lines"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_lines.push_back((*itr).GetString());
        }
        m_linesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LineGroupDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_linesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lines";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_lines.begin(); itr != m_lines.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t LineGroupDetail::GetId() const
{
    return m_id;
}

void LineGroupDetail::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool LineGroupDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string LineGroupDetail::GetName() const
{
    return m_name;
}

void LineGroupDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LineGroupDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> LineGroupDetail::GetLines() const
{
    return m_lines;
}

void LineGroupDetail::SetLines(const vector<string>& _lines)
{
    m_lines = _lines;
    m_linesHasBeenSet = true;
}

bool LineGroupDetail::LinesHasBeenSet() const
{
    return m_linesHasBeenSet;
}

