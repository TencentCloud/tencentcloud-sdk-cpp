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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCENDPOINTSERVICEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCENDPOINTSERVICEATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyVpcEndPointServiceAttribute请求参数结构体
                */
                class ModifyVpcEndPointServiceAttributeRequest : public AbstractModel
                {
                public:
                    ModifyVpcEndPointServiceAttributeRequest();
                    ~ModifyVpcEndPointServiceAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取终端节点服务ID。
                     * @return EndPointServiceId 终端节点服务ID。
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 设置终端节点服务ID。
                     * @param EndPointServiceId 终端节点服务ID。
                     */
                    void SetEndPointServiceId(const std::string& _endPointServiceId);

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                    /**
                     * 获取VPCID。
                     * @return VpcId VPCID。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPCID。
                     * @param VpcId VPCID。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取终端节点服务名称。
                     * @return EndPointServiceName 终端节点服务名称。
                     */
                    std::string GetEndPointServiceName() const;

                    /**
                     * 设置终端节点服务名称。
                     * @param EndPointServiceName 终端节点服务名称。
                     */
                    void SetEndPointServiceName(const std::string& _endPointServiceName);

                    /**
                     * 判断参数 EndPointServiceName 是否已赋值
                     * @return EndPointServiceName 是否已赋值
                     */
                    bool EndPointServiceNameHasBeenSet() const;

                    /**
                     * 获取是否自动接受终端节点的连接请求。<ui><li>true：自动接受<li>false：不自动接受</ul>
                     * @return AutoAcceptFlag 是否自动接受终端节点的连接请求。<ui><li>true：自动接受<li>false：不自动接受</ul>
                     */
                    bool GetAutoAcceptFlag() const;

                    /**
                     * 设置是否自动接受终端节点的连接请求。<ui><li>true：自动接受<li>false：不自动接受</ul>
                     * @param AutoAcceptFlag 是否自动接受终端节点的连接请求。<ui><li>true：自动接受<li>false：不自动接受</ul>
                     */
                    void SetAutoAcceptFlag(const bool& _autoAcceptFlag);

                    /**
                     * 判断参数 AutoAcceptFlag 是否已赋值
                     * @return AutoAcceptFlag 是否已赋值
                     */
                    bool AutoAcceptFlagHasBeenSet() const;

                    /**
                     * 获取后端服务的ID，比如lb-xxx。
                     * @return ServiceInstanceId 后端服务的ID，比如lb-xxx。
                     */
                    std::string GetServiceInstanceId() const;

                    /**
                     * 设置后端服务的ID，比如lb-xxx。
                     * @param ServiceInstanceId 后端服务的ID，比如lb-xxx。
                     */
                    void SetServiceInstanceId(const std::string& _serviceInstanceId);

                    /**
                     * 判断参数 ServiceInstanceId 是否已赋值
                     * @return ServiceInstanceId 是否已赋值
                     */
                    bool ServiceInstanceIdHasBeenSet() const;

                private:

                    /**
                     * 终端节点服务ID。
                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                    /**
                     * VPCID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 终端节点服务名称。
                     */
                    std::string m_endPointServiceName;
                    bool m_endPointServiceNameHasBeenSet;

                    /**
                     * 是否自动接受终端节点的连接请求。<ui><li>true：自动接受<li>false：不自动接受</ul>
                     */
                    bool m_autoAcceptFlag;
                    bool m_autoAcceptFlagHasBeenSet;

                    /**
                     * 后端服务的ID，比如lb-xxx。
                     */
                    std::string m_serviceInstanceId;
                    bool m_serviceInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCENDPOINTSERVICEATTRIBUTEREQUEST_H_
