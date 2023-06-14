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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_EXPOSESERVICEREQUEST_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_EXPOSESERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * ExposeService请求参数结构体
                */
                class ExposeServiceRequest : public AbstractModel
                {
                public:
                    ExposeServiceRequest();
                    ~ExposeServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务Id
                     * @return ServiceId 服务Id
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务Id
                     * @param _serviceId 服务Id
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取暴露方式，支持 EXTERNAL（外网暴露），VPC （VPC内网打通）
                     * @return ExposeType 暴露方式，支持 EXTERNAL（外网暴露），VPC （VPC内网打通）
                     * 
                     */
                    std::string GetExposeType() const;

                    /**
                     * 设置暴露方式，支持 EXTERNAL（外网暴露），VPC （VPC内网打通）
                     * @param _exposeType 暴露方式，支持 EXTERNAL（外网暴露），VPC （VPC内网打通）
                     * 
                     */
                    void SetExposeType(const std::string& _exposeType);

                    /**
                     * 判断参数 ExposeType 是否已赋值
                     * @return ExposeType 是否已赋值
                     * 
                     */
                    bool ExposeTypeHasBeenSet() const;

                    /**
                     * 获取暴露方式为 VPC 时，填写需要打通的私有网络Id
                     * @return VpcId 暴露方式为 VPC 时，填写需要打通的私有网络Id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置暴露方式为 VPC 时，填写需要打通的私有网络Id
                     * @param _vpcId 暴露方式为 VPC 时，填写需要打通的私有网络Id
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取暴露方式为 VPC 时，填写需要打通的子网Id
                     * @return SubnetId 暴露方式为 VPC 时，填写需要打通的子网Id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置暴露方式为 VPC 时，填写需要打通的子网Id
                     * @param _subnetId 暴露方式为 VPC 时，填写需要打通的子网Id
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                private:

                    /**
                     * 服务Id
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 暴露方式，支持 EXTERNAL（外网暴露），VPC （VPC内网打通）
                     */
                    std::string m_exposeType;
                    bool m_exposeTypeHasBeenSet;

                    /**
                     * 暴露方式为 VPC 时，填写需要打通的私有网络Id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 暴露方式为 VPC 时，填写需要打通的子网Id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_EXPOSESERVICEREQUEST_H_
