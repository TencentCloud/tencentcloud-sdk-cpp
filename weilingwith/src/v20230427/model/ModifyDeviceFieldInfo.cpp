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

#include <tencentcloud/weilingwith/v20230427/model/ModifyDeviceFieldInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

ModifyDeviceFieldInfo::ModifyDeviceFieldInfo() :
    m_wIDHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_valHasBeenSet(false)
{
}

CoreInternalOutcome ModifyDeviceFieldInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WID") && !value["WID"].IsNull())
    {
        if (!value["WID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyDeviceFieldInfo.WID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wID = string(value["WID"].GetString());
        m_wIDHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyDeviceFieldInfo.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Val") && !value["Val"].IsNull())
    {
        if (!value["Val"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyDeviceFieldInfo.Val` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_val = string(value["Val"].GetString());
        m_valHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyDeviceFieldInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wID.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_valHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Val";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_val.c_str(), allocator).Move(), allocator);
    }

}


string ModifyDeviceFieldInfo::GetWID() const
{
    return m_wID;
}

void ModifyDeviceFieldInfo::SetWID(const string& _wID)
{
    m_wID = _wID;
    m_wIDHasBeenSet = true;
}

bool ModifyDeviceFieldInfo::WIDHasBeenSet() const
{
    return m_wIDHasBeenSet;
}

string ModifyDeviceFieldInfo::GetKey() const
{
    return m_key;
}

void ModifyDeviceFieldInfo::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool ModifyDeviceFieldInfo::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string ModifyDeviceFieldInfo::GetVal() const
{
    return m_val;
}

void ModifyDeviceFieldInfo::SetVal(const string& _val)
{
    m_val = _val;
    m_valHasBeenSet = true;
}

bool ModifyDeviceFieldInfo::ValHasBeenSet() const
{
    return m_valHasBeenSet;
}

