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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CLIENTCLUSTERMANAGERNODEINFO_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CLIENTCLUSTERMANAGERNODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * 客户侧集群管理节点信息
                */
                class ClientClusterManagerNodeInfo : public AbstractModel
                {
                public:
                    ClientClusterManagerNodeInfo();
                    ~ClientClusterManagerNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端节点IP
                     * @return NodeIp 客户端节点IP
                     * 
                     */
                    std::string GetNodeIp() const;

                    /**
                     * 设置客户端节点IP
                     * @param _nodeIp 客户端节点IP
                     * 
                     */
                    void SetNodeIp(const std::string& _nodeIp);

                    /**
                     * 判断参数 NodeIp 是否已赋值
                     * @return NodeIp 是否已赋值
                     * 
                     */
                    bool NodeIpHasBeenSet() const;

                    /**
                     * 获取节点Instance Id
                     * @return NodeInstanceId 节点Instance Id
                     * 
                     */
                    std::string GetNodeInstanceId() const;

                    /**
                     * 设置节点Instance Id
                     * @param _nodeInstanceId 节点Instance Id
                     * 
                     */
                    void SetNodeInstanceId(const std::string& _nodeInstanceId);

                    /**
                     * 判断参数 NodeInstanceId 是否已赋值
                     * @return NodeInstanceId 是否已赋值
                     * 
                     */
                    bool NodeInstanceIdHasBeenSet() const;

                    /**
                     * 获取初始密码
                     * @return InitialPassword 初始密码
                     * 
                     */
                    std::string GetInitialPassword() const;

                    /**
                     * 设置初始密码
                     * @param _initialPassword 初始密码
                     * 
                     */
                    void SetInitialPassword(const std::string& _initialPassword);

                    /**
                     * 判断参数 InitialPassword 是否已赋值
                     * @return InitialPassword 是否已赋值
                     * 
                     */
                    bool InitialPasswordHasBeenSet() const;

                private:

                    /**
                     * 客户端节点IP
                     */
                    std::string m_nodeIp;
                    bool m_nodeIpHasBeenSet;

                    /**
                     * 节点Instance Id
                     */
                    std::string m_nodeInstanceId;
                    bool m_nodeInstanceIdHasBeenSet;

                    /**
                     * 初始密码
                     */
                    std::string m_initialPassword;
                    bool m_initialPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CLIENTCLUSTERMANAGERNODEINFO_H_
