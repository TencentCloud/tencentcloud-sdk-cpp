/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cat/v20180409/model/ProbeTaskBasicConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

ProbeTaskBasicConfiguration::ProbeTaskBasicConfiguration() :
    m_nameHasBeenSet(false),
    m_targetAddressHasBeenSet(false)
{
}

CoreInternalOutcome ProbeTaskBasicConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeTaskBasicConfiguration.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TargetAddress") && !value["TargetAddress"].IsNull())
    {
        if (!value["TargetAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeTaskBasicConfiguration.TargetAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetAddress = string(value["TargetAddress"].GetString());
        m_targetAddressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProbeTaskBasicConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_targetAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetAddress.c_str(), allocator).Move(), allocator);
    }

}


string ProbeTaskBasicConfiguration::GetName() const
{
    return m_name;
}

void ProbeTaskBasicConfiguration::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ProbeTaskBasicConfiguration::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ProbeTaskBasicConfiguration::GetTargetAddress() const
{
    return m_targetAddress;
}

void ProbeTaskBasicConfiguration::SetTargetAddress(const string& _targetAddress)
{
    m_targetAddress = _targetAddress;
    m_targetAddressHasBeenSet = true;
}

bool ProbeTaskBasicConfiguration::TargetAddressHasBeenSet() const
{
    return m_targetAddressHasBeenSet;
}

