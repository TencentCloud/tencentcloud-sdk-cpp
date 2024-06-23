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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_NODEDISTRIBUTION_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_NODEDISTRIBUTION_H_

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
                * 独享集群CDB实例的节点分布情况
                */
                class NodeDistribution : public AbstractModel
                {
                public:
                    NodeDistribution();
                    ~NodeDistribution() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主实例Master节点所在主机ID或者只读实例所在主机ID
                     * @return Node 主实例Master节点所在主机ID或者只读实例所在主机ID
                     * 
                     */
                    std::string GetNode() const;

                    /**
                     * 设置主实例Master节点所在主机ID或者只读实例所在主机ID
                     * @param _node 主实例Master节点所在主机ID或者只读实例所在主机ID
                     * 
                     */
                    void SetNode(const std::string& _node);

                    /**
                     * 判断参数 Node 是否已赋值
                     * @return Node 是否已赋值
                     * 
                     */
                    bool NodeHasBeenSet() const;

                    /**
                     * 获取主实例第一Slave节点所在主机ID
                     * @return SlaveNodeOne 主实例第一Slave节点所在主机ID
                     * 
                     */
                    std::string GetSlaveNodeOne() const;

                    /**
                     * 设置主实例第一Slave节点所在主机ID
                     * @param _slaveNodeOne 主实例第一Slave节点所在主机ID
                     * 
                     */
                    void SetSlaveNodeOne(const std::string& _slaveNodeOne);

                    /**
                     * 判断参数 SlaveNodeOne 是否已赋值
                     * @return SlaveNodeOne 是否已赋值
                     * 
                     */
                    bool SlaveNodeOneHasBeenSet() const;

                    /**
                     * 获取主实例第二Slave节点所在主机ID
                     * @return SlaveNodeTwo 主实例第二Slave节点所在主机ID
                     * 
                     */
                    std::string GetSlaveNodeTwo() const;

                    /**
                     * 设置主实例第二Slave节点所在主机ID
                     * @param _slaveNodeTwo 主实例第二Slave节点所在主机ID
                     * 
                     */
                    void SetSlaveNodeTwo(const std::string& _slaveNodeTwo);

                    /**
                     * 判断参数 SlaveNodeTwo 是否已赋值
                     * @return SlaveNodeTwo 是否已赋值
                     * 
                     */
                    bool SlaveNodeTwoHasBeenSet() const;

                private:

                    /**
                     * 主实例Master节点所在主机ID或者只读实例所在主机ID
                     */
                    std::string m_node;
                    bool m_nodeHasBeenSet;

                    /**
                     * 主实例第一Slave节点所在主机ID
                     */
                    std::string m_slaveNodeOne;
                    bool m_slaveNodeOneHasBeenSet;

                    /**
                     * 主实例第二Slave节点所在主机ID
                     */
                    std::string m_slaveNodeTwo;
                    bool m_slaveNodeTwoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_NODEDISTRIBUTION_H_
