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

#include <tencentcloud/cdwch/v20200915/model/InstanceConfigItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

InstanceConfigItem::InstanceConfigItem() :
    m_confKeyHasBeenSet(false),
    m_confValueHasBeenSet(false)
{
}

CoreInternalOutcome InstanceConfigItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfKey") && !value["ConfKey"].IsNull())
    {
        if (!value["ConfKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfigItem.ConfKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_confKey = string(value["ConfKey"].GetString());
        m_confKeyHasBeenSet = true;
    }

    if (value.HasMember("ConfValue") && !value["ConfValue"].IsNull())
    {
        if (!value["ConfValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfigItem.ConfValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_confValue = string(value["ConfValue"].GetString());
        m_confValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceConfigItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_confKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_confKey.c_str(), allocator).Move(), allocator);
    }

    if (m_confValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_confValue.c_str(), allocator).Move(), allocator);
    }

}


string InstanceConfigItem::GetConfKey() const
{
    return m_confKey;
}

void InstanceConfigItem::SetConfKey(const string& _confKey)
{
    m_confKey = _confKey;
    m_confKeyHasBeenSet = true;
}

bool InstanceConfigItem::ConfKeyHasBeenSet() const
{
    return m_confKeyHasBeenSet;
}

string InstanceConfigItem::GetConfValue() const
{
    return m_confValue;
}

void InstanceConfigItem::SetConfValue(const string& _confValue)
{
    m_confValue = _confValue;
    m_confValueHasBeenSet = true;
}

bool InstanceConfigItem::ConfValueHasBeenSet() const
{
    return m_confValueHasBeenSet;
}

