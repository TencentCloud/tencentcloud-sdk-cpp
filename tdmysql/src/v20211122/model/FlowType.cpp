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

#include <tencentcloud/tdmysql/v20211122/model/FlowType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

FlowType::FlowType() :
    m_flowNameHasBeenSet(false),
    m_flowDescHasBeenSet(false)
{
}

CoreInternalOutcome FlowType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowName") && !value["FlowName"].IsNull())
    {
        if (!value["FlowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowType.FlowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowName = string(value["FlowName"].GetString());
        m_flowNameHasBeenSet = true;
    }

    if (value.HasMember("FlowDesc") && !value["FlowDesc"].IsNull())
    {
        if (!value["FlowDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowType.FlowDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowDesc = string(value["FlowDesc"].GetString());
        m_flowDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_flowDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowDesc.c_str(), allocator).Move(), allocator);
    }

}


string FlowType::GetFlowName() const
{
    return m_flowName;
}

void FlowType::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool FlowType::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

string FlowType::GetFlowDesc() const
{
    return m_flowDesc;
}

void FlowType::SetFlowDesc(const string& _flowDesc)
{
    m_flowDesc = _flowDesc;
    m_flowDescHasBeenSet = true;
}

bool FlowType::FlowDescHasBeenSet() const
{
    return m_flowDescHasBeenSet;
}

