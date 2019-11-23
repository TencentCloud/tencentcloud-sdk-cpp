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

#include <tencentcloud/yunjing/v20180228/model/MachineTag.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace rapidjson;
using namespace std;

MachineTag::MachineTag() :
    m_ridHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome MachineTag::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Rid") && !value["Rid"].IsNull())
    {
        if (!value["Rid"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MachineTag.Rid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rid = value["Rid"].GetInt64();
        m_ridHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `MachineTag.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MachineTag::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_ridHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Rid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rid, allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


int64_t MachineTag::GetRid() const
{
    return m_rid;
}

void MachineTag::SetRid(const int64_t& _rid)
{
    m_rid = _rid;
    m_ridHasBeenSet = true;
}

bool MachineTag::RidHasBeenSet() const
{
    return m_ridHasBeenSet;
}

string MachineTag::GetName() const
{
    return m_name;
}

void MachineTag::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MachineTag::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

