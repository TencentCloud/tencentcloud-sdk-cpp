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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_OPERATION_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_OPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 需要终止的操作
                */
                class Operation : public AbstractModel
                {
                public:
                    Operation();
                    ~Operation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作所在的分片名
                     * @return ReplicaSetName 操作所在的分片名
                     * 
                     */
                    std::string GetReplicaSetName() const;

                    /**
                     * 设置操作所在的分片名
                     * @param _replicaSetName 操作所在的分片名
                     * 
                     */
                    void SetReplicaSetName(const std::string& _replicaSetName);

                    /**
                     * 判断参数 ReplicaSetName 是否已赋值
                     * @return ReplicaSetName 是否已赋值
                     * 
                     */
                    bool ReplicaSetNameHasBeenSet() const;

                    /**
                     * 获取操作所在的节点名
                     * @return NodeName 操作所在的节点名
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置操作所在的节点名
                     * @param _nodeName 操作所在的节点名
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取操作序号
                     * @return OpId 操作序号
                     * 
                     */
                    int64_t GetOpId() const;

                    /**
                     * 设置操作序号
                     * @param _opId 操作序号
                     * 
                     */
                    void SetOpId(const int64_t& _opId);

                    /**
                     * 判断参数 OpId 是否已赋值
                     * @return OpId 是否已赋值
                     * 
                     */
                    bool OpIdHasBeenSet() const;

                private:

                    /**
                     * 操作所在的分片名
                     */
                    std::string m_replicaSetName;
                    bool m_replicaSetNameHasBeenSet;

                    /**
                     * 操作所在的节点名
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 操作序号
                     */
                    int64_t m_opId;
                    bool m_opIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_OPERATION_H_
