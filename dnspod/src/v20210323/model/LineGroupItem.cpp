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

#include <tencentcloud/dnspod/v20210323/model/LineGroupItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

LineGroupItem::LineGroupItem() :
    m_domainIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_linesHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_updatedOnHasBeenSet(false)
{
}

CoreInternalOutcome LineGroupItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LineGroupItem.DomainId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = value["DomainId"].GetUint64();
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LineGroupItem.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineGroupItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Lines") && !value["Lines"].IsNull())
    {
        if (!value["Lines"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LineGroupItem.Lines` is not array type"));

        const rapidjson::Value &tmpValue = value["Lines"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_lines.push_back((*itr).GetString());
        }
        m_linesHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineGroupItem.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("UpdatedOn") && !value["UpdatedOn"].IsNull())
    {
        if (!value["UpdatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineGroupItem.UpdatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedOn = string(value["UpdatedOn"].GetString());
        m_updatedOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LineGroupItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainId, allocator);
    }

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

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedOn.c_str(), allocator).Move(), allocator);
    }

}


uint64_t LineGroupItem::GetDomainId() const
{
    return m_domainId;
}

void LineGroupItem::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool LineGroupItem::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

uint64_t LineGroupItem::GetId() const
{
    return m_id;
}

void LineGroupItem::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool LineGroupItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string LineGroupItem::GetName() const
{
    return m_name;
}

void LineGroupItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LineGroupItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> LineGroupItem::GetLines() const
{
    return m_lines;
}

void LineGroupItem::SetLines(const vector<string>& _lines)
{
    m_lines = _lines;
    m_linesHasBeenSet = true;
}

bool LineGroupItem::LinesHasBeenSet() const
{
    return m_linesHasBeenSet;
}

string LineGroupItem::GetCreatedOn() const
{
    return m_createdOn;
}

void LineGroupItem::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool LineGroupItem::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string LineGroupItem::GetUpdatedOn() const
{
    return m_updatedOn;
}

void LineGroupItem::SetUpdatedOn(const string& _updatedOn)
{
    m_updatedOn = _updatedOn;
    m_updatedOnHasBeenSet = true;
}

bool LineGroupItem::UpdatedOnHasBeenSet() const
{
    return m_updatedOnHasBeenSet;
}

