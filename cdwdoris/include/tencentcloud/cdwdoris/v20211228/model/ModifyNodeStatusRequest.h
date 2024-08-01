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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYNODESTATUSREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYNODESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/NodeInfos.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * ModifyNodeStatus请求参数结构体
                */
                class ModifyNodeStatusRequest : public AbstractModel
                {
                public:
                    ModifyNodeStatusRequest();
                    ~ModifyNodeStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID，例如cdwch-xxxx
                     * @return InstanceId 集群ID，例如cdwch-xxxx
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID，例如cdwch-xxxx
                     * @param _instanceId 集群ID，例如cdwch-xxxx
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取节点信息
                     * @return NodeInfos 节点信息
                     * 
                     */
                    std::vector<NodeInfos> GetNodeInfos() const;

                    /**
                     * 设置节点信息
                     * @param _nodeInfos 节点信息
                     * 
                     */
                    void SetNodeInfos(const std::vector<NodeInfos>& _nodeInfos);

                    /**
                     * 判断参数 NodeInfos 是否已赋值
                     * @return NodeInfos 是否已赋值
                     * 
                     */
                    bool NodeInfosHasBeenSet() const;

                    /**
                     * 获取节点操作
                     * @return OperationCode 节点操作
                     * 
                     */
                    std::string GetOperationCode() const;

                    /**
                     * 设置节点操作
                     * @param _operationCode 节点操作
                     * 
                     */
                    void SetOperationCode(const std::string& _operationCode);

                    /**
                     * 判断参数 OperationCode 是否已赋值
                     * @return OperationCode 是否已赋值
                     * 
                     */
                    bool OperationCodeHasBeenSet() const;

                    /**
                     * 获取超时时间（秒）
                     * @return RestartTimeOut 超时时间（秒）
                     * 
                     */
                    std::string GetRestartTimeOut() const;

                    /**
                     * 设置超时时间（秒）
                     * @param _restartTimeOut 超时时间（秒）
                     * 
                     */
                    void SetRestartTimeOut(const std::string& _restartTimeOut);

                    /**
                     * 判断参数 RestartTimeOut 是否已赋值
                     * @return RestartTimeOut 是否已赋值
                     * 
                     */
                    bool RestartTimeOutHasBeenSet() const;

                private:

                    /**
                     * 集群ID，例如cdwch-xxxx
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 节点信息
                     */
                    std::vector<NodeInfos> m_nodeInfos;
                    bool m_nodeInfosHasBeenSet;

                    /**
                     * 节点操作
                     */
                    std::string m_operationCode;
                    bool m_operationCodeHasBeenSet;

                    /**
                     * 超时时间（秒）
                     */
                    std::string m_restartTimeOut;
                    bool m_restartTimeOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYNODESTATUSREQUEST_H_
