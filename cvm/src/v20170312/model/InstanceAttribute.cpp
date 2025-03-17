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

#include <tencentcloud/cvm/v20170312/model/InstanceAttribute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

InstanceAttribute::InstanceAttribute() :
    m_instanceIdHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

CoreInternalOutcome InstanceAttribute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttribute.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Attributes") && !value["Attributes"].IsNull())
    {
        if (!value["Attributes"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttribute.Attributes` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_attributes.Deserialize(value["Attributes"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_attributesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceAttribute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_attributesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attributes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_attributes.ToJsonObject(value[key.c_str()], allocator);
    }

}


string InstanceAttribute::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceAttribute::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceAttribute::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

Attribute InstanceAttribute::GetAttributes() const
{
    return m_attributes;
}

void InstanceAttribute::SetAttributes(const Attribute& _attributes)
{
    m_attributes = _attributes;
    m_attributesHasBeenSet = true;
}

bool InstanceAttribute::AttributesHasBeenSet() const
{
    return m_attributesHasBeenSet;
}

