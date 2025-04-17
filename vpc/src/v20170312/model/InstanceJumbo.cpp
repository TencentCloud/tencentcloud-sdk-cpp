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

#include <tencentcloud/vpc/v20170312/model/InstanceJumbo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

InstanceJumbo::InstanceJumbo() :
    m_instanceIdHasBeenSet(false),
    m_jumboStateHasBeenSet(false)
{
}

CoreInternalOutcome InstanceJumbo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceJumbo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("JumboState") && !value["JumboState"].IsNull())
    {
        if (!value["JumboState"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceJumbo.JumboState` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_jumboState = value["JumboState"].GetBool();
        m_jumboStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceJumbo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_jumboStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumboState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jumboState, allocator);
    }

}


string InstanceJumbo::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceJumbo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceJumbo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

bool InstanceJumbo::GetJumboState() const
{
    return m_jumboState;
}

void InstanceJumbo::SetJumboState(const bool& _jumboState)
{
    m_jumboState = _jumboState;
    m_jumboStateHasBeenSet = true;
}

bool InstanceJumbo::JumboStateHasBeenSet() const
{
    return m_jumboStateHasBeenSet;
}

