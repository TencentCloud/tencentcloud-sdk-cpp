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

#include <tencentcloud/ccc/v20200210/model/StaffStatusExtra.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

StaffStatusExtra::StaffStatusExtra() :
    m_typeHasBeenSet(false),
    m_directHasBeenSet(false)
{
}

CoreInternalOutcome StaffStatusExtra::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatusExtra.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Direct") && !value["Direct"].IsNull())
    {
        if (!value["Direct"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatusExtra.Direct` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_direct = string(value["Direct"].GetString());
        m_directHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StaffStatusExtra::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_directHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direct";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_direct.c_str(), allocator).Move(), allocator);
    }

}


string StaffStatusExtra::GetType() const
{
    return m_type;
}

void StaffStatusExtra::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool StaffStatusExtra::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string StaffStatusExtra::GetDirect() const
{
    return m_direct;
}

void StaffStatusExtra::SetDirect(const string& _direct)
{
    m_direct = _direct;
    m_directHasBeenSet = true;
}

bool StaffStatusExtra::DirectHasBeenSet() const
{
    return m_directHasBeenSet;
}

