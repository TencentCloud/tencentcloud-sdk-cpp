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

#include <tencentcloud/es/v20180416/model/SettingDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

SettingDetail::SettingDetail() :
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_adviseHasBeenSet(false)
{
}

CoreInternalOutcome SettingDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettingDetail.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettingDetail.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Advise") && !value["Advise"].IsNull())
    {
        if (!value["Advise"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettingDetail.Advise` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advise = string(value["Advise"].GetString());
        m_adviseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SettingDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_adviseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Advise";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advise.c_str(), allocator).Move(), allocator);
    }

}


string SettingDetail::GetKey() const
{
    return m_key;
}

void SettingDetail::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool SettingDetail::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string SettingDetail::GetValue() const
{
    return m_value;
}

void SettingDetail::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool SettingDetail::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string SettingDetail::GetAdvise() const
{
    return m_advise;
}

void SettingDetail::SetAdvise(const string& _advise)
{
    m_advise = _advise;
    m_adviseHasBeenSet = true;
}

bool SettingDetail::AdviseHasBeenSet() const
{
    return m_adviseHasBeenSet;
}

