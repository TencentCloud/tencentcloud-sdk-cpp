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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEDETAILLISTREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEDETAILLISTREQUEST_H_

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
                * DescribeDeviceDetailList请求参数结构体
                */
                class DescribeDeviceDetailListRequest : public AbstractModel
                {
                public:
                    DescribeDeviceDetailListRequest();
                    ~DescribeDeviceDetailListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取系统类型(只支持32位)
                     * @return OsType 系统类型(只支持32位)
                     * 
                     */
                    int64_t GetOsType() const;

                    /**
                     * 设置系统类型(只支持32位)
                     * @param _osType 系统类型(只支持32位)
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
                     * 获取终端分组id(只支持32位)
                     * @return GroupId 终端分组id(只支持32位)
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置终端分组id(只支持32位)
                     * @param _groupId 终端分组id(只支持32位)
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取过滤条件、分页参数
<li>Name - String - 过滤支持：是 - 操作符:eq,like - 排序支持：是 。</li>
                     * @return Condition 过滤条件、分页参数
<li>Name - String - 过滤支持：是 - 操作符:eq,like - 排序支持：是 。</li>
                     * 
                     */
                    Condition GetCondition() const;

                    /**
                     * 设置过滤条件、分页参数
<li>Name - String - 过滤支持：是 - 操作符:eq,like - 排序支持：是 。</li>
                     * @param _condition 过滤条件、分页参数
<li>Name - String - 过滤支持：是 - 操作符:eq,like - 排序支持：是 。</li>
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
                     * 系统类型(只支持32位)
                     */
                    int64_t m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * 终端分组id(只支持32位)
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 过滤条件、分页参数
<li>Name - String - 过滤支持：是 - 操作符:eq,like - 排序支持：是 。</li>
                     */
                    Condition m_condition;
                    bool m_conditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEDETAILLISTREQUEST_H_
