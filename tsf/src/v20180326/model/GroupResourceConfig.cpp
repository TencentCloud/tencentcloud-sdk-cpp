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

#include <tencentcloud/tsf/v20180326/model/GroupResourceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

GroupResourceConfig::GroupResourceConfig() :
    m_containerHasBeenSet(false)
{
}

CoreInternalOutcome GroupResourceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Container") && !value["Container"].IsNull())
    {
        if (!value["Container"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GroupResourceConfig.Container` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_container.Deserialize(value["Container"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_containerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupResourceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_containerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Container";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_container.ToJsonObject(value[key.c_str()], allocator);
    }

}


ContainerGroupResourceConfig GroupResourceConfig::GetContainer() const
{
    return m_container;
}

void GroupResourceConfig::SetContainer(const ContainerGroupResourceConfig& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool GroupResourceConfig::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

