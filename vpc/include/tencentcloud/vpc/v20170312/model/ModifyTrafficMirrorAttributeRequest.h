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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYTRAFFICMIRRORATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYTRAFFICMIRRORATTRIBUTEREQUEST_H_

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
                * ModifyTrafficMirrorAttribute请求参数结构体
                */
                class ModifyTrafficMirrorAttributeRequest : public AbstractModel
                {
                public:
                    ModifyTrafficMirrorAttributeRequest();
                    ~ModifyTrafficMirrorAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流量镜像实例ID
                     * @return TrafficMirrorId 流量镜像实例ID
                     * 
                     */
                    std::string GetTrafficMirrorId() const;

                    /**
                     * 设置流量镜像实例ID
                     * @param _trafficMirrorId 流量镜像实例ID
                     * 
                     */
                    void SetTrafficMirrorId(const std::string& _trafficMirrorId);

                    /**
                     * 判断参数 TrafficMirrorId 是否已赋值
                     * @return TrafficMirrorId 是否已赋值
                     * 
                     */
                    bool TrafficMirrorIdHasBeenSet() const;

                    /**
                     * 获取流量镜像实例名称
                     * @return TrafficMirrorName 流量镜像实例名称
                     * 
                     */
                    std::string GetTrafficMirrorName() const;

                    /**
                     * 设置流量镜像实例名称
                     * @param _trafficMirrorName 流量镜像实例名称
                     * 
                     */
                    void SetTrafficMirrorName(const std::string& _trafficMirrorName);

                    /**
                     * 判断参数 TrafficMirrorName 是否已赋值
                     * @return TrafficMirrorName 是否已赋值
                     * 
                     */
                    bool TrafficMirrorNameHasBeenSet() const;

                    /**
                     * 获取流量镜像实例描述信息
                     * @return TrafficMirrorDescription 流量镜像实例描述信息
                     * 
                     */
                    std::string GetTrafficMirrorDescription() const;

                    /**
                     * 设置流量镜像实例描述信息
                     * @param _trafficMirrorDescription 流量镜像实例描述信息
                     * 
                     */
                    void SetTrafficMirrorDescription(const std::string& _trafficMirrorDescription);

                    /**
                     * 判断参数 TrafficMirrorDescription 是否已赋值
                     * @return TrafficMirrorDescription 是否已赋值
                     * 
                     */
                    bool TrafficMirrorDescriptionHasBeenSet() const;

                private:

                    /**
                     * 流量镜像实例ID
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

                    /**
                     * 流量镜像实例名称
                     */
                    std::string m_trafficMirrorName;
                    bool m_trafficMirrorNameHasBeenSet;

                    /**
                     * 流量镜像实例描述信息
                     */
                    std::string m_trafficMirrorDescription;
                    bool m_trafficMirrorDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYTRAFFICMIRRORATTRIBUTEREQUEST_H_
