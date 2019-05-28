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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYFLOWLOGATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYFLOWLOGATTRIBUTEREQUEST_H_

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
                * ModifyFlowLogAttribute请求参数结构体
                */
                class ModifyFlowLogAttributeRequest : public AbstractModel
                {
                public:
                    ModifyFlowLogAttributeRequest();
                    ~ModifyFlowLogAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私用网络ID或者统一ID，建议使用统一ID
                     * @return VpcId 私用网络ID或者统一ID，建议使用统一ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私用网络ID或者统一ID，建议使用统一ID
                     * @param VpcId 私用网络ID或者统一ID，建议使用统一ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取流日志唯一ID
                     * @return FlowLogId 流日志唯一ID
                     */
                    std::string GetFlowLogId() const;

                    /**
                     * 设置流日志唯一ID
                     * @param FlowLogId 流日志唯一ID
                     */
                    void SetFlowLogId(const std::string& _flowLogId);

                    /**
                     * 判断参数 FlowLogId 是否已赋值
                     * @return FlowLogId 是否已赋值
                     */
                    bool FlowLogIdHasBeenSet() const;

                    /**
                     * 获取流日志实例名字
                     * @return FlowLogName 流日志实例名字
                     */
                    std::string GetFlowLogName() const;

                    /**
                     * 设置流日志实例名字
                     * @param FlowLogName 流日志实例名字
                     */
                    void SetFlowLogName(const std::string& _flowLogName);

                    /**
                     * 判断参数 FlowLogName 是否已赋值
                     * @return FlowLogName 是否已赋值
                     */
                    bool FlowLogNameHasBeenSet() const;

                    /**
                     * 获取流日志实例描述
                     * @return FlowLogDescription 流日志实例描述
                     */
                    std::string GetFlowLogDescription() const;

                    /**
                     * 设置流日志实例描述
                     * @param FlowLogDescription 流日志实例描述
                     */
                    void SetFlowLogDescription(const std::string& _flowLogDescription);

                    /**
                     * 判断参数 FlowLogDescription 是否已赋值
                     * @return FlowLogDescription 是否已赋值
                     */
                    bool FlowLogDescriptionHasBeenSet() const;

                private:

                    /**
                     * 私用网络ID或者统一ID，建议使用统一ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 流日志唯一ID
                     */
                    std::string m_flowLogId;
                    bool m_flowLogIdHasBeenSet;

                    /**
                     * 流日志实例名字
                     */
                    std::string m_flowLogName;
                    bool m_flowLogNameHasBeenSet;

                    /**
                     * 流日志实例描述
                     */
                    std::string m_flowLogDescription;
                    bool m_flowLogDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYFLOWLOGATTRIBUTEREQUEST_H_
