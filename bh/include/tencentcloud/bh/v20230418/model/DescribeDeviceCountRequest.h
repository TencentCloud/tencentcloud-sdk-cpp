/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEDEVICECOUNTREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEDEVICECOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeDeviceCount请求参数结构体
                */
                class DescribeDeviceCountRequest : public AbstractModel
                {
                public:
                    DescribeDeviceCountRequest();
                    ~DescribeDeviceCountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取地域码
                     * @return ApCode 地域码
                     * 
                     */
                    std::string GetApCode() const;

                    /**
                     * 设置地域码
                     * @param _apCode 地域码
                     * 
                     */
                    void SetApCode(const std::string& _apCode);

                    /**
                     * 判断参数 ApCode 是否已赋值
                     * @return ApCode 是否已赋值
                     * 
                     */
                    bool ApCodeHasBeenSet() const;

                    /**
                     * 获取用户VPC实例ID
                     * @return VpcId 用户VPC实例ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置用户VPC实例ID
                     * @param _vpcId 用户VPC实例ID
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
                     * 获取堡垒机服务ID
                     * @return ResourceId 堡垒机服务ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置堡垒机服务ID
                     * @param _resourceId 堡垒机服务ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资产类型,1-Linux, 2-Windows,3-MySQL,4-SqlServer 不传-全部
                     * @return Kind 资产类型,1-Linux, 2-Windows,3-MySQL,4-SqlServer 不传-全部
                     * 
                     */
                    uint64_t GetKind() const;

                    /**
                     * 设置资产类型,1-Linux, 2-Windows,3-MySQL,4-SqlServer 不传-全部
                     * @param _kind 资产类型,1-Linux, 2-Windows,3-MySQL,4-SqlServer 不传-全部
                     * 
                     */
                    void SetKind(const uint64_t& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取是否绑定服务,1-已绑定, 2-未绑定， 不传-全部
                     * @return BindResource 是否绑定服务,1-已绑定, 2-未绑定， 不传-全部
                     * 
                     */
                    uint64_t GetBindResource() const;

                    /**
                     * 设置是否绑定服务,1-已绑定, 2-未绑定， 不传-全部
                     * @param _bindResource 是否绑定服务,1-已绑定, 2-未绑定， 不传-全部
                     * 
                     */
                    void SetBindResource(const uint64_t& _bindResource);

                    /**
                     * 判断参数 BindResource 是否已赋值
                     * @return BindResource 是否已赋值
                     * 
                     */
                    bool BindResourceHasBeenSet() const;

                private:

                    /**
                     * 地域码
                     */
                    std::string m_apCode;
                    bool m_apCodeHasBeenSet;

                    /**
                     * 用户VPC实例ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 堡垒机服务ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资产类型,1-Linux, 2-Windows,3-MySQL,4-SqlServer 不传-全部
                     */
                    uint64_t m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 是否绑定服务,1-已绑定, 2-未绑定， 不传-全部
                     */
                    uint64_t m_bindResource;
                    bool m_bindResourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEDEVICECOUNTREQUEST_H_
