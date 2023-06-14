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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCENODE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCENODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/InstanceClusterNode.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 实例节点
                */
                class InstanceNode : public AbstractModel
                {
                public:
                    InstanceNode();
                    ~InstanceNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例 ID。
                     * @return Id 实例 ID。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置实例 ID。
                     * @param _id 实例 ID。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取节点详细信息。
                     * @return InstanceClusterNode 节点详细信息。
                     * 
                     */
                    std::vector<InstanceClusterNode> GetInstanceClusterNode() const;

                    /**
                     * 设置节点详细信息。
                     * @param _instanceClusterNode 节点详细信息。
                     * 
                     */
                    void SetInstanceClusterNode(const std::vector<InstanceClusterNode>& _instanceClusterNode);

                    /**
                     * 判断参数 InstanceClusterNode 是否已赋值
                     * @return InstanceClusterNode 是否已赋值
                     * 
                     */
                    bool InstanceClusterNodeHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 节点详细信息。
                     */
                    std::vector<InstanceClusterNode> m_instanceClusterNode;
                    bool m_instanceClusterNodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCENODE_H_
