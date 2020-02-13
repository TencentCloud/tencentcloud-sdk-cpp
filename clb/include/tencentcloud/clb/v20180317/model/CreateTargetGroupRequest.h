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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATETARGETGROUPREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATETARGETGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/TargetGroupInstance.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * CreateTargetGroup请求参数结构体
                */
                class CreateTargetGroupRequest : public AbstractModel
                {
                public:
                    CreateTargetGroupRequest();
                    ~CreateTargetGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标组名称，限定50个字符
                     * @return TargetGroupName 目标组名称，限定50个字符
                     */
                    std::string GetTargetGroupName() const;

                    /**
                     * 设置目标组名称，限定50个字符
                     * @param TargetGroupName 目标组名称，限定50个字符
                     */
                    void SetTargetGroupName(const std::string& _targetGroupName);

                    /**
                     * 判断参数 TargetGroupName 是否已赋值
                     * @return TargetGroupName 是否已赋值
                     */
                    bool TargetGroupNameHasBeenSet() const;

                    /**
                     * 获取目标组的vpcid属性，不填则使用默认vpc
                     * @return VpcId 目标组的vpcid属性，不填则使用默认vpc
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置目标组的vpcid属性，不填则使用默认vpc
                     * @param VpcId 目标组的vpcid属性，不填则使用默认vpc
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取目标组的默认端口， 后续添加服务器时可使用该默认端口
                     * @return Port 目标组的默认端口， 后续添加服务器时可使用该默认端口
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置目标组的默认端口， 后续添加服务器时可使用该默认端口
                     * @param Port 目标组的默认端口， 后续添加服务器时可使用该默认端口
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取目标组绑定的后端服务器
                     * @return TargetGroupInstances 目标组绑定的后端服务器
                     */
                    std::vector<TargetGroupInstance> GetTargetGroupInstances() const;

                    /**
                     * 设置目标组绑定的后端服务器
                     * @param TargetGroupInstances 目标组绑定的后端服务器
                     */
                    void SetTargetGroupInstances(const std::vector<TargetGroupInstance>& _targetGroupInstances);

                    /**
                     * 判断参数 TargetGroupInstances 是否已赋值
                     * @return TargetGroupInstances 是否已赋值
                     */
                    bool TargetGroupInstancesHasBeenSet() const;

                private:

                    /**
                     * 目标组名称，限定50个字符
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                    /**
                     * 目标组的vpcid属性，不填则使用默认vpc
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 目标组的默认端口， 后续添加服务器时可使用该默认端口
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 目标组绑定的后端服务器
                     */
                    std::vector<TargetGroupInstance> m_targetGroupInstances;
                    bool m_targetGroupInstancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATETARGETGROUPREQUEST_H_
