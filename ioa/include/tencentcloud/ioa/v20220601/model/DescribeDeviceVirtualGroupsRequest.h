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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEVIRTUALGROUPSREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEVIRTUALGROUPSREQUEST_H_

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
                * DescribeDeviceVirtualGroups请求参数结构体
                */
                class DescribeDeviceVirtualGroupsRequest : public AbstractModel
                {
                public:
                    DescribeDeviceVirtualGroupsRequest();
                    ~DescribeDeviceVirtualGroupsRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取滤条件、分页参数 <li>Name - String - 是否必填：否 - 操作符: like  - 排序支持：否- 按终端自定义分组过滤。</li> <li>DeviceVirtualGroupName - String - 是否必填：否 - 操作符: like  - 排序支持：否- 按终端自定义分组过滤。</li>
                     * @return Condition 滤条件、分页参数 <li>Name - String - 是否必填：否 - 操作符: like  - 排序支持：否- 按终端自定义分组过滤。</li> <li>DeviceVirtualGroupName - String - 是否必填：否 - 操作符: like  - 排序支持：否- 按终端自定义分组过滤。</li>
                     * 
                     */
                    Condition GetCondition() const;

                    /**
                     * 设置滤条件、分页参数 <li>Name - String - 是否必填：否 - 操作符: like  - 排序支持：否- 按终端自定义分组过滤。</li> <li>DeviceVirtualGroupName - String - 是否必填：否 - 操作符: like  - 排序支持：否- 按终端自定义分组过滤。</li>
                     * @param _condition 滤条件、分页参数 <li>Name - String - 是否必填：否 - 操作符: like  - 排序支持：否- 按终端自定义分组过滤。</li> <li>DeviceVirtualGroupName - String - 是否必填：否 - 操作符: like  - 排序支持：否- 按终端自定义分组过滤。</li>
                     * 
                     */
                    void SetCondition(const Condition& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取系统类型（0: win，1：linux，2: mac，4：android，5：ios   默认值0）
                     * @return OsType 系统类型（0: win，1：linux，2: mac，4：android，5：ios   默认值0）
                     * 
                     */
                    int64_t GetOsType() const;

                    /**
                     * 设置系统类型（0: win，1：linux，2: mac，4：android，5：ios   默认值0）
                     * @param _osType 系统类型（0: win，1：linux，2: mac，4：android，5：ios   默认值0）
                     * 
                     */
                    void SetOsType(const int64_t& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取非必填，自定义分组ids
                     * @return VirtualGroupIds 非必填，自定义分组ids
                     * 
                     */
                    std::vector<int64_t> GetVirtualGroupIds() const;

                    /**
                     * 设置非必填，自定义分组ids
                     * @param _virtualGroupIds 非必填，自定义分组ids
                     * 
                     */
                    void SetVirtualGroupIds(const std::vector<int64_t>& _virtualGroupIds);

                    /**
                     * 判断参数 VirtualGroupIds 是否已赋值
                     * @return VirtualGroupIds 是否已赋值
                     * 
                     */
                    bool VirtualGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     */
                    std::string m_domainInstanceId;
                    bool m_domainInstanceIdHasBeenSet;

                    /**
                     * 滤条件、分页参数 <li>Name - String - 是否必填：否 - 操作符: like  - 排序支持：否- 按终端自定义分组过滤。</li> <li>DeviceVirtualGroupName - String - 是否必填：否 - 操作符: like  - 排序支持：否- 按终端自定义分组过滤。</li>
                     */
                    Condition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 系统类型（0: win，1：linux，2: mac，4：android，5：ios   默认值0）
                     */
                    int64_t m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * 非必填，自定义分组ids
                     */
                    std::vector<int64_t> m_virtualGroupIds;
                    bool m_virtualGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEVIRTUALGROUPSREQUEST_H_
