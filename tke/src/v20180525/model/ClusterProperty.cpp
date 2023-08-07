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

#include <tencentcloud/tke/v20180525/model/ClusterProperty.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ClusterProperty::ClusterProperty() :
    m_nodeNameTypeHasBeenSet(false)
{
}

CoreInternalOutcome ClusterProperty::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeNameType") && !value["NodeNameType"].IsNull())
    {
        if (!value["NodeNameType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterProperty.NodeNameType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeNameType = string(value["NodeNameType"].GetString());
        m_nodeNameTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterProperty::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeNameTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNameType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeNameType.c_str(), allocator).Move(), allocator);
    }

}


string ClusterProperty::GetNodeNameType() const
{
    return m_nodeNameType;
}

void ClusterProperty::SetNodeNameType(const string& _nodeNameType)
{
    m_nodeNameType = _nodeNameType;
    m_nodeNameTypeHasBeenSet = true;
}

bool ClusterProperty::NodeNameTypeHasBeenSet() const
{
    return m_nodeNameTypeHasBeenSet;
}

