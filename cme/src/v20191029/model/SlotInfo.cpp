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

#include <tencentcloud/cme/v20191029/model/SlotInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

SlotInfo::SlotInfo() :
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_defaultMaterialIdHasBeenSet(false),
    m_durationHasBeenSet(false)
{
}

CoreInternalOutcome SlotInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SlotInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `SlotInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("DefaultMaterialId") && !value["DefaultMaterialId"].IsNull())
    {
        if (!value["DefaultMaterialId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SlotInfo.DefaultMaterialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultMaterialId = string(value["DefaultMaterialId"].GetString());
        m_defaultMaterialIdHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `SlotInfo.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlotInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultMaterialIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DefaultMaterialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_defaultMaterialId.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

}


int64_t SlotInfo::GetId() const
{
    return m_id;
}

void SlotInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SlotInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string SlotInfo::GetType() const
{
    return m_type;
}

void SlotInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SlotInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string SlotInfo::GetDefaultMaterialId() const
{
    return m_defaultMaterialId;
}

void SlotInfo::SetDefaultMaterialId(const string& _defaultMaterialId)
{
    m_defaultMaterialId = _defaultMaterialId;
    m_defaultMaterialIdHasBeenSet = true;
}

bool SlotInfo::DefaultMaterialIdHasBeenSet() const
{
    return m_defaultMaterialIdHasBeenSet;
}

double SlotInfo::GetDuration() const
{
    return m_duration;
}

void SlotInfo::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool SlotInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

