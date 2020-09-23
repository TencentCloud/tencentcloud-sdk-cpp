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

#include <tencentcloud/redis/v20180412/model/ProxyNodes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace rapidjson;
using namespace std;

ProxyNodes::ProxyNodes() :
    m_nodeIdHasBeenSet(false)
{
}

CoreInternalOutcome ProxyNodes::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProxyNodes.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyNodes::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nodeIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

}


string ProxyNodes::GetNodeId() const
{
    return m_nodeId;
}

void ProxyNodes::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool ProxyNodes::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

