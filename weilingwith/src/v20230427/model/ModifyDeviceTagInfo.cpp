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

#include <tencentcloud/weilingwith/v20230427/model/ModifyDeviceTagInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

ModifyDeviceTagInfo::ModifyDeviceTagInfo() :
    m_wIDHasBeenSet(false),
    m_nameSetHasBeenSet(false)
{
}

CoreInternalOutcome ModifyDeviceTagInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WID") && !value["WID"].IsNull())
    {
        if (!value["WID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyDeviceTagInfo.WID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wID = string(value["WID"].GetString());
        m_wIDHasBeenSet = true;
    }

    if (value.HasMember("NameSet") && !value["NameSet"].IsNull())
    {
        if (!value["NameSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyDeviceTagInfo.NameSet` is not array type"));

        const rapidjson::Value &tmpValue = value["NameSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nameSet.push_back((*itr).GetString());
        }
        m_nameSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyDeviceTagInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wID.c_str(), allocator).Move(), allocator);
    }

    if (m_nameSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nameSet.begin(); itr != m_nameSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ModifyDeviceTagInfo::GetWID() const
{
    return m_wID;
}

void ModifyDeviceTagInfo::SetWID(const string& _wID)
{
    m_wID = _wID;
    m_wIDHasBeenSet = true;
}

bool ModifyDeviceTagInfo::WIDHasBeenSet() const
{
    return m_wIDHasBeenSet;
}

vector<string> ModifyDeviceTagInfo::GetNameSet() const
{
    return m_nameSet;
}

void ModifyDeviceTagInfo::SetNameSet(const vector<string>& _nameSet)
{
    m_nameSet = _nameSet;
    m_nameSetHasBeenSet = true;
}

bool ModifyDeviceTagInfo::NameSetHasBeenSet() const
{
    return m_nameSetHasBeenSet;
}

