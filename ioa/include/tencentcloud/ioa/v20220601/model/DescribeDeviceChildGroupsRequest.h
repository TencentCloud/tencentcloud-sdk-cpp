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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICECHILDGROUPSREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICECHILDGROUPSREQUEST_H_

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
                * DescribeDeviceChildGroups请求参数结构体
                */
                class DescribeDeviceChildGroupsRequest : public AbstractModel
                {
                public:
                    DescribeDeviceChildGroupsRequest();
                    ~DescribeDeviceChildGroupsRequest() = default;
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
                     * 获取过滤条件参数（字段含义请参考接口返回值）
- Name, 类型String，支持操作：【like，ilike】，支持排序




分页参数
- PageNum 从1开始，小于等于0时使用默认参数
- PageSize 最大值5000，最好不超过100
                     * @return Condition 过滤条件参数（字段含义请参考接口返回值）
- Name, 类型String，支持操作：【like，ilike】，支持排序




分页参数
- PageNum 从1开始，小于等于0时使用默认参数
- PageSize 最大值5000，最好不超过100
                     * 
                     */
                    Condition GetCondition() const;

                    /**
                     * 设置过滤条件参数（字段含义请参考接口返回值）
- Name, 类型String，支持操作：【like，ilike】，支持排序




分页参数
- PageNum 从1开始，小于等于0时使用默认参数
- PageSize 最大值5000，最好不超过100
                     * @param _condition 过滤条件参数（字段含义请参考接口返回值）
- Name, 类型String，支持操作：【like，ilike】，支持排序




分页参数
- PageNum 从1开始，小于等于0时使用默认参数
- PageSize 最大值5000，最好不超过100
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
                     * 获取父分组id，默认0：表示获取全网终端分组
                     * @return ParentId 父分组id，默认0：表示获取全网终端分组
                     * 
                     */
                    int64_t GetParentId() const;

                    /**
                     * 设置父分组id，默认0：表示获取全网终端分组
                     * @param _parentId 父分组id，默认0：表示获取全网终端分组
                     * 
                     */
                    void SetParentId(const int64_t& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取操作系统类型（0：win，1：linux，2：mac，4：android，5：ios；默认0：系统win）
                     * @return OsType 操作系统类型（0：win，1：linux，2：mac，4：android，5：ios；默认0：系统win）
                     * 
                     */
                    int64_t GetOsType() const;

                    /**
                     * 设置操作系统类型（0：win，1：linux，2：mac，4：android，5：ios；默认0：系统win）
                     * @param _osType 操作系统类型（0：win，1：linux，2：mac，4：android，5：ios；默认0：系统win）
                     * 
                     */
                    void SetOsType(const int64_t& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                private:

                    /**
                     * 管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     */
                    std::string m_domainInstanceId;
                    bool m_domainInstanceIdHasBeenSet;

                    /**
                     * 过滤条件参数（字段含义请参考接口返回值）
- Name, 类型String，支持操作：【like，ilike】，支持排序




分页参数
- PageNum 从1开始，小于等于0时使用默认参数
- PageSize 最大值5000，最好不超过100
                     */
                    Condition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 父分组id，默认0：表示获取全网终端分组
                     */
                    int64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 操作系统类型（0：win，1：linux，2：mac，4：android，5：ios；默认0：系统win）
                     */
                    int64_t m_osType;
                    bool m_osTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICECHILDGROUPSREQUEST_H_
