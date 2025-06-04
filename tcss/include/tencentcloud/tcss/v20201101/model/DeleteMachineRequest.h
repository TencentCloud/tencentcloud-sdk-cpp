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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEMACHINEREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEMACHINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DeleteMachine请求参数结构体
                */
                class DeleteMachineRequest : public AbstractModel
                {
                public:
                    DeleteMachineRequest();
                    ~DeleteMachineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户端Uuid
                     * @return Uuid 客户端Uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置客户端Uuid
                     * @param _uuid 客户端Uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取超级节点唯一id
                     * @return NodeUniqueIds 超级节点唯一id
                     * 
                     */
                    std::vector<std::string> GetNodeUniqueIds() const;

                    /**
                     * 设置超级节点唯一id
                     * @param _nodeUniqueIds 超级节点唯一id
                     * 
                     */
                    void SetNodeUniqueIds(const std::vector<std::string>& _nodeUniqueIds);

                    /**
                     * 判断参数 NodeUniqueIds 是否已赋值
                     * @return NodeUniqueIds 是否已赋值
                     * 
                     */
                    bool NodeUniqueIdsHasBeenSet() const;

                    /**
                     * 获取uuid列表
                     * @return UUIDs uuid列表
                     * 
                     */
                    std::vector<std::string> GetUUIDs() const;

                    /**
                     * 设置uuid列表
                     * @param _uUIDs uuid列表
                     * 
                     */
                    void SetUUIDs(const std::vector<std::string>& _uUIDs);

                    /**
                     * 判断参数 UUIDs 是否已赋值
                     * @return UUIDs 是否已赋值
                     * 
                     */
                    bool UUIDsHasBeenSet() const;

                private:

                    /**
                     * 客户端Uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 超级节点唯一id
                     */
                    std::vector<std::string> m_nodeUniqueIds;
                    bool m_nodeUniqueIdsHasBeenSet;

                    /**
                     * uuid列表
                     */
                    std::vector<std::string> m_uUIDs;
                    bool m_uUIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEMACHINEREQUEST_H_
