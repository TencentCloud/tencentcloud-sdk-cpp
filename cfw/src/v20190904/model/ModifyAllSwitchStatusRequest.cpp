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

#include <tencentcloud/cfw/v20190904/model/ModifyAllSwitchStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace rapidjson;
using namespace std;

ModifyAllSwitchStatusRequest::ModifyAllSwitchStatusRequest() :
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_idsHasBeenSet(false),
    m_changeTypeHasBeenSet(false),
    m_areaHasBeenSet(false)
{
}

string ModifyAllSwitchStatusRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_idsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_ids.begin(); itr != m_ids.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_changeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChangeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_changeType, allocator);
    }

    if (m_areaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_area.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyAllSwitchStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifyAllSwitchStatusRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyAllSwitchStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ModifyAllSwitchStatusRequest::GetType() const
{
    return m_type;
}

void ModifyAllSwitchStatusRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyAllSwitchStatusRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> ModifyAllSwitchStatusRequest::GetIds() const
{
    return m_ids;
}

void ModifyAllSwitchStatusRequest::SetIds(const vector<string>& _ids)
{
    m_ids = _ids;
    m_idsHasBeenSet = true;
}

bool ModifyAllSwitchStatusRequest::IdsHasBeenSet() const
{
    return m_idsHasBeenSet;
}

int64_t ModifyAllSwitchStatusRequest::GetChangeType() const
{
    return m_changeType;
}

void ModifyAllSwitchStatusRequest::SetChangeType(const int64_t& _changeType)
{
    m_changeType = _changeType;
    m_changeTypeHasBeenSet = true;
}

bool ModifyAllSwitchStatusRequest::ChangeTypeHasBeenSet() const
{
    return m_changeTypeHasBeenSet;
}

string ModifyAllSwitchStatusRequest::GetArea() const
{
    return m_area;
}

void ModifyAllSwitchStatusRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool ModifyAllSwitchStatusRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}


