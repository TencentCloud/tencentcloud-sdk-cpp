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

#include <tencentcloud/cii/v20210408/model/StructureModifyItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cii::V20210408::Model;
using namespace std;

StructureModifyItem::StructureModifyItem() :
    m_pathHasBeenSet(false),
    m_machineHasBeenSet(false),
    m_manualHasBeenSet(false)
{
}

CoreInternalOutcome StructureModifyItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StructureModifyItem.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Machine") && !value["Machine"].IsNull())
    {
        if (!value["Machine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StructureModifyItem.Machine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machine = string(value["Machine"].GetString());
        m_machineHasBeenSet = true;
    }

    if (value.HasMember("Manual") && !value["Manual"].IsNull())
    {
        if (!value["Manual"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StructureModifyItem.Manual` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manual = string(value["Manual"].GetString());
        m_manualHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StructureModifyItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_machineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Machine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machine.c_str(), allocator).Move(), allocator);
    }

    if (m_manualHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manual";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manual.c_str(), allocator).Move(), allocator);
    }

}


string StructureModifyItem::GetPath() const
{
    return m_path;
}

void StructureModifyItem::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool StructureModifyItem::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string StructureModifyItem::GetMachine() const
{
    return m_machine;
}

void StructureModifyItem::SetMachine(const string& _machine)
{
    m_machine = _machine;
    m_machineHasBeenSet = true;
}

bool StructureModifyItem::MachineHasBeenSet() const
{
    return m_machineHasBeenSet;
}

string StructureModifyItem::GetManual() const
{
    return m_manual;
}

void StructureModifyItem::SetManual(const string& _manual)
{
    m_manual = _manual;
    m_manualHasBeenSet = true;
}

bool StructureModifyItem::ManualHasBeenSet() const
{
    return m_manualHasBeenSet;
}

