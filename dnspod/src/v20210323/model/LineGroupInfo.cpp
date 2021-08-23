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

#include <tencentcloud/dnspod/v20210323/model/LineGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

LineGroupInfo::LineGroupInfo() :
    m_lineIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_lineListHasBeenSet(false)
{
}

CoreInternalOutcome LineGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LineId") && !value["LineId"].IsNull())
    {
        if (!value["LineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineGroupInfo.LineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineId = string(value["LineId"].GetString());
        m_lineIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineGroupInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineGroupInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("LineList") && !value["LineList"].IsNull())
    {
        if (!value["LineList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LineGroupInfo.LineList` is not array type"));

        const rapidjson::Value &tmpValue = value["LineList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_lineList.push_back((*itr).GetString());
        }
        m_lineListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LineGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_lineListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_lineList.begin(); itr != m_lineList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string LineGroupInfo::GetLineId() const
{
    return m_lineId;
}

void LineGroupInfo::SetLineId(const string& _lineId)
{
    m_lineId = _lineId;
    m_lineIdHasBeenSet = true;
}

bool LineGroupInfo::LineIdHasBeenSet() const
{
    return m_lineIdHasBeenSet;
}

string LineGroupInfo::GetName() const
{
    return m_name;
}

void LineGroupInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LineGroupInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string LineGroupInfo::GetType() const
{
    return m_type;
}

void LineGroupInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool LineGroupInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> LineGroupInfo::GetLineList() const
{
    return m_lineList;
}

void LineGroupInfo::SetLineList(const vector<string>& _lineList)
{
    m_lineList = _lineList;
    m_lineListHasBeenSet = true;
}

bool LineGroupInfo::LineListHasBeenSet() const
{
    return m_lineListHasBeenSet;
}

