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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBESREINSTANCEACCESSADDRESSREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBESREINSTANCEACCESSADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeSREInstanceAccessAddress请求参数结构体
                */
                class DescribeSREInstanceAccessAddressRequest : public AbstractModel
                {
                public:
                    DescribeSREInstanceAccessAddressRequest();
                    ~DescribeSREInstanceAccessAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取注册引擎实例Id
                     * @return InstanceId 注册引擎实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置注册引擎实例Id
                     * @param _instanceId 注册引擎实例Id
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
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param _vpcId VPC ID
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
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取引擎其他组件名称（pushgateway、polaris-limiter）
                     * @return Workload 引擎其他组件名称（pushgateway、polaris-limiter）
                     * 
                     */
                    std::string GetWorkload() const;

                    /**
                     * 设置引擎其他组件名称（pushgateway、polaris-limiter）
                     * @param _workload 引擎其他组件名称（pushgateway、polaris-limiter）
                     * 
                     */
                    void SetWorkload(const std::string& _workload);

                    /**
                     * 判断参数 Workload 是否已赋值
                     * @return Workload 是否已赋值
                     * 
                     */
                    bool WorkloadHasBeenSet() const;

                    /**
                     * 获取部署地域
                     * @return EngineRegion 部署地域
                     * 
                     */
                    std::string GetEngineRegion() const;

                    /**
                     * 设置部署地域
                     * @param _engineRegion 部署地域
                     * 
                     */
                    void SetEngineRegion(const std::string& _engineRegion);

                    /**
                     * 判断参数 EngineRegion 是否已赋值
                     * @return EngineRegion 是否已赋值
                     * 
                     */
                    bool EngineRegionHasBeenSet() const;

                private:

                    /**
                     * 注册引擎实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 引擎其他组件名称（pushgateway、polaris-limiter）
                     */
                    std::string m_workload;
                    bool m_workloadHasBeenSet;

                    /**
                     * 部署地域
                     */
                    std::string m_engineRegion;
                    bool m_engineRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBESREINSTANCEACCESSADDRESSREQUEST_H_
