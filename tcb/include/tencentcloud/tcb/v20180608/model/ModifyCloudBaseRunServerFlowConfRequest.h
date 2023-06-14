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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYCLOUDBASERUNSERVERFLOWCONFREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYCLOUDBASERUNSERVERFLOWCONFREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseRunVersionFlowItem.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * ModifyCloudBaseRunServerFlowConf请求参数结构体
                */
                class ModifyCloudBaseRunServerFlowConfRequest : public AbstractModel
                {
                public:
                    ModifyCloudBaseRunServerFlowConfRequest();
                    ~ModifyCloudBaseRunServerFlowConfRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取服务名称
                     * @return ServerName 服务名称
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置服务名称
                     * @param _serverName 服务名称
                     * 
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取流量占比
                     * @return VersionFlowItems 流量占比
                     * 
                     */
                    std::vector<CloudBaseRunVersionFlowItem> GetVersionFlowItems() const;

                    /**
                     * 设置流量占比
                     * @param _versionFlowItems 流量占比
                     * 
                     */
                    void SetVersionFlowItems(const std::vector<CloudBaseRunVersionFlowItem>& _versionFlowItems);

                    /**
                     * 判断参数 VersionFlowItems 是否已赋值
                     * @return VersionFlowItems 是否已赋值
                     * 
                     */
                    bool VersionFlowItemsHasBeenSet() const;

                    /**
                     * 获取流量类型（URL_PARAMS / FLOW / HEADERS)
                     * @return TrafficType 流量类型（URL_PARAMS / FLOW / HEADERS)
                     * 
                     */
                    std::string GetTrafficType() const;

                    /**
                     * 设置流量类型（URL_PARAMS / FLOW / HEADERS)
                     * @param _trafficType 流量类型（URL_PARAMS / FLOW / HEADERS)
                     * 
                     */
                    void SetTrafficType(const std::string& _trafficType);

                    /**
                     * 判断参数 TrafficType 是否已赋值
                     * @return TrafficType 是否已赋值
                     * 
                     */
                    bool TrafficTypeHasBeenSet() const;

                    /**
                     * 获取操作备注
                     * @return OperatorRemark 操作备注
                     * 
                     */
                    std::string GetOperatorRemark() const;

                    /**
                     * 设置操作备注
                     * @param _operatorRemark 操作备注
                     * 
                     */
                    void SetOperatorRemark(const std::string& _operatorRemark);

                    /**
                     * 判断参数 OperatorRemark 是否已赋值
                     * @return OperatorRemark 是否已赋值
                     * 
                     */
                    bool OperatorRemarkHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * 流量占比
                     */
                    std::vector<CloudBaseRunVersionFlowItem> m_versionFlowItems;
                    bool m_versionFlowItemsHasBeenSet;

                    /**
                     * 流量类型（URL_PARAMS / FLOW / HEADERS)
                     */
                    std::string m_trafficType;
                    bool m_trafficTypeHasBeenSet;

                    /**
                     * 操作备注
                     */
                    std::string m_operatorRemark;
                    bool m_operatorRemarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYCLOUDBASERUNSERVERFLOWCONFREQUEST_H_
