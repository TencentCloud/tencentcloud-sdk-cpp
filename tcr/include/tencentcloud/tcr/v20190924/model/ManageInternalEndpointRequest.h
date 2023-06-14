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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MANAGEINTERNALENDPOINTREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MANAGEINTERNALENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * ManageInternalEndpoint请求参数结构体
                */
                class ManageInternalEndpointRequest : public AbstractModel
                {
                public:
                    ManageInternalEndpointRequest();
                    ~ManageInternalEndpointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return RegistryId 实例Id
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例Id
                     * @param _registryId 实例Id
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取Create/Delete
                     * @return Operation Create/Delete
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Create/Delete
                     * @param _operation Create/Delete
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取需要接入的用户vpcid
                     * @return VpcId 需要接入的用户vpcid
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置需要接入的用户vpcid
                     * @param _vpcId 需要接入的用户vpcid
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
                     * 获取需要接入的用户子网id
                     * @return SubnetId 需要接入的用户子网id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置需要接入的用户子网id
                     * @param _subnetId 需要接入的用户子网id
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
                     * 获取请求的地域ID，用于实例复制地域
                     * @return RegionId 请求的地域ID，用于实例复制地域
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置请求的地域ID，用于实例复制地域
                     * @param _regionId 请求的地域ID，用于实例复制地域
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取请求的地域名称，用于实例复制地域
                     * @return RegionName 请求的地域名称，用于实例复制地域
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置请求的地域名称，用于实例复制地域
                     * @param _regionName 请求的地域名称，用于实例复制地域
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Create/Delete
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 需要接入的用户vpcid
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 需要接入的用户子网id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 请求的地域ID，用于实例复制地域
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 请求的地域名称，用于实例复制地域
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MANAGEINTERNALENDPOINTREQUEST_H_
