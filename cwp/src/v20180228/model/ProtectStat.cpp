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

#include <tencentcloud/cwp/v20180228/model/ProtectStat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ProtectStat::ProtectStat() :
    m_nameHasBeenSet(false),
    m_numHasBeenSet(false)
{
}

CoreInternalOutcome ProtectStat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectStat.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Num") && !value["Num"].IsNull())
    {
        if (!value["Num"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectStat.Num` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_num = value["Num"].GetUint64();
        m_numHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProtectStat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_num, allocator);
    }

}


string ProtectStat::GetName() const
{
    return m_name;
}

void ProtectStat::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ProtectStat::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ProtectStat::GetNum() const
{
    return m_num;
}

void ProtectStat::SetNum(const uint64_t& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool ProtectStat::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

