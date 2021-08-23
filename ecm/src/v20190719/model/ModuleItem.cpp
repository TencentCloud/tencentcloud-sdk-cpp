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

#include <tencentcloud/ecm/v20190719/model/ModuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

ModuleItem::ModuleItem() :
    m_nodeInstanceNumHasBeenSet(false),
    m_moduleHasBeenSet(false)
{
}

CoreInternalOutcome ModuleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeInstanceNum") && !value["NodeInstanceNum"].IsNull())
    {
        if (!value["NodeInstanceNum"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModuleItem.NodeInstanceNum` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nodeInstanceNum.Deserialize(value["NodeInstanceNum"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nodeInstanceNumHasBeenSet = true;
    }

    if (value.HasMember("Module") && !value["Module"].IsNull())
    {
        if (!value["Module"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModuleItem.Module` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_module.Deserialize(value["Module"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_moduleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModuleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeInstanceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeInstanceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nodeInstanceNum.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_module.ToJsonObject(value[key.c_str()], allocator);
    }

}


NodeInstanceNum ModuleItem::GetNodeInstanceNum() const
{
    return m_nodeInstanceNum;
}

void ModuleItem::SetNodeInstanceNum(const NodeInstanceNum& _nodeInstanceNum)
{
    m_nodeInstanceNum = _nodeInstanceNum;
    m_nodeInstanceNumHasBeenSet = true;
}

bool ModuleItem::NodeInstanceNumHasBeenSet() const
{
    return m_nodeInstanceNumHasBeenSet;
}

Module ModuleItem::GetModule() const
{
    return m_module;
}

void ModuleItem::SetModule(const Module& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool ModuleItem::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

