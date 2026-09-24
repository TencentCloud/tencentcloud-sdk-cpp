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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEVIRTUALACCOUNTSREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEVIRTUALACCOUNTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/Condition.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * DescribeVirtualAccounts请求参数结构体
                */
                class DescribeVirtualAccountsRequest : public AbstractModel
                {
                public:
                    DescribeVirtualAccountsRequest();
                    ~DescribeVirtualAccountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>账户虚拟组Id(只支持32位)</p>
                     * @return VirtualGroupId <p>账户虚拟组Id(只支持32位)</p>
                     * 
                     */
                    uint64_t GetVirtualGroupId() const;

                    /**
                     * 设置<p>账户虚拟组Id(只支持32位)</p>
                     * @param _virtualGroupId <p>账户虚拟组Id(只支持32位)</p>
                     * 
                     */
                    void SetVirtualGroupId(const uint64_t& _virtualGroupId);

                    /**
                     * 判断参数 VirtualGroupId 是否已赋值
                     * @return VirtualGroupId 是否已赋值
                     * 
                     */
                    bool VirtualGroupIdHasBeenSet() const;

                    /**
                     * 获取管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * @return DomainInstanceId 管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * 
                     */
                    std::string GetDomainInstanceId() const;

                    /**
                     * 设置管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * @param _domainInstanceId 管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * 
                     */
                    void SetDomainInstanceId(const std::string& _domainInstanceId);

                    /**
                     * 判断参数 DomainInstanceId 是否已赋值
                     * @return DomainInstanceId 是否已赋值
                     * 
                     */
                    bool DomainInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>滤条件、分页参数</p><li>UserName - String - 是否必填：否 - 操作符: eq,like  - 排序支持：否- 按用户名称过滤。</li><li>UserId - String - 是否必填：否 - 操作符: eq,like  - 排序支持：否- 按用户账号过滤。</li><li>Phone - String - 是否必填：否 - 操作符: eq,like  - 排序支持：否- 按电话过滤。</li>
                     * @return Condition <p>滤条件、分页参数</p><li>UserName - String - 是否必填：否 - 操作符: eq,like  - 排序支持：否- 按用户名称过滤。</li><li>UserId - String - 是否必填：否 - 操作符: eq,like  - 排序支持：否- 按用户账号过滤。</li><li>Phone - String - 是否必填：否 - 操作符: eq,like  - 排序支持：否- 按电话过滤。</li>
                     * 
                     */
                    Condition GetCondition() const;

                    /**
                     * 设置<p>滤条件、分页参数</p><li>UserName - String - 是否必填：否 - 操作符: eq,like  - 排序支持：否- 按用户名称过滤。</li><li>UserId - String - 是否必填：否 - 操作符: eq,like  - 排序支持：否- 按用户账号过滤。</li><li>Phone - String - 是否必填：否 - 操作符: eq,like  - 排序支持：否- 按电话过滤。</li>
                     * @param _condition <p>滤条件、分页参数</p><li>UserName - String - 是否必填：否 - 操作符: eq,like  - 排序支持：否- 按用户名称过滤。</li><li>UserId - String - 是否必填：否 - 操作符: eq,like  - 排序支持：否- 按用户账号过滤。</li><li>Phone - String - 是否必填：否 - 操作符: eq,like  - 排序支持：否- 按电话过滤。</li>
                     * 
                     */
                    void SetCondition(const Condition& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                private:

                    /**
                     * <p>账户虚拟组Id(只支持32位)</p>
                     */
                    uint64_t m_virtualGroupId;
                    bool m_virtualGroupIdHasBeenSet;

                    /**
                     * 管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     */
                    std::string m_domainInstanceId;
                    bool m_domainInstanceIdHasBeenSet;

                    /**
                     * <p>滤条件、分页参数</p><li>UserName - String - 是否必填：否 - 操作符: eq,like  - 排序支持：否- 按用户名称过滤。</li><li>UserId - String - 是否必填：否 - 操作符: eq,like  - 排序支持：否- 按用户账号过滤。</li><li>Phone - String - 是否必填：否 - 操作符: eq,like  - 排序支持：否- 按电话过滤。</li>
                     */
                    Condition m_condition;
                    bool m_conditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEVIRTUALACCOUNTSREQUEST_H_
