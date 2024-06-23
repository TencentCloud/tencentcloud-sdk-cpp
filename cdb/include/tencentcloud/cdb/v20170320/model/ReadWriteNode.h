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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_READWRITENODE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_READWRITENODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 集群版 RW 节点的配置。
                */
                class ReadWriteNode : public AbstractModel
                {
                public:
                    ReadWriteNode();
                    ~ReadWriteNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取RW 节点所在可用区。
                     * @return Zone RW 节点所在可用区。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置RW 节点所在可用区。
                     * @param _zone RW 节点所在可用区。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取升级集群版实例时，如果要调整只读节点可用区，需要指定节点id。
                     * @return NodeId 升级集群版实例时，如果要调整只读节点可用区，需要指定节点id。
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置升级集群版实例时，如果要调整只读节点可用区，需要指定节点id。
                     * @param _nodeId 升级集群版实例时，如果要调整只读节点可用区，需要指定节点id。
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                private:

                    /**
                     * RW 节点所在可用区。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 升级集群版实例时，如果要调整只读节点可用区，需要指定节点id。
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_READWRITENODE_H_
