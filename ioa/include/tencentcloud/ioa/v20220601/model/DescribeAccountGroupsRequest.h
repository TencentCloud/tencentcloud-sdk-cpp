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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEACCOUNTGROUPSREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEACCOUNTGROUPSREQUEST_H_

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
                * DescribeAccountGroups请求参数结构体
                */
                class DescribeAccountGroupsRequest : public AbstractModel
                {
                public:
                    DescribeAccountGroupsRequest();
                    ~DescribeAccountGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索范围,0-仅搜直接子组,1-深层搜索(只支持32位)
                     * @return Deepin 搜索范围,0-仅搜直接子组,1-深层搜索(只支持32位)
                     * 
                     */
                    int64_t GetDeepin() const;

                    /**
                     * 设置搜索范围,0-仅搜直接子组,1-深层搜索(只支持32位)
                     * @param _deepin 搜索范围,0-仅搜直接子组,1-深层搜索(只支持32位)
                     * 
                     */
                    void SetDeepin(const int64_t& _deepin);

                    /**
                     * 判断参数 Deepin 是否已赋值
                     * @return Deepin 是否已赋值
                     * 
                     */
                    bool DeepinHasBeenSet() const;

                    /**
                     * 获取滤条件、分页参数
<li>Name - String - 是否必填：否 - 操作符: like  - 排序支持：否- 按账号分组过滤。</li>
排序条件
<li>Itime - string - 是否必填：否 - 排序支持：是 - 按账号分组创建时间排序。</li>
<li>Utime - string - 是否必填：否 - 排序支持：是 - 按账号分组更新时间排序。</li>
                     * @return Condition 滤条件、分页参数
<li>Name - String - 是否必填：否 - 操作符: like  - 排序支持：否- 按账号分组过滤。</li>
排序条件
<li>Itime - string - 是否必填：否 - 排序支持：是 - 按账号分组创建时间排序。</li>
<li>Utime - string - 是否必填：否 - 排序支持：是 - 按账号分组更新时间排序。</li>
                     * 
                     */
                    Condition GetCondition() const;

                    /**
                     * 设置滤条件、分页参数
<li>Name - String - 是否必填：否 - 操作符: like  - 排序支持：否- 按账号分组过滤。</li>
排序条件
<li>Itime - string - 是否必填：否 - 排序支持：是 - 按账号分组创建时间排序。</li>
<li>Utime - string - 是否必填：否 - 排序支持：是 - 按账号分组更新时间排序。</li>
                     * @param _condition 滤条件、分页参数
<li>Name - String - 是否必填：否 - 操作符: like  - 排序支持：否- 按账号分组过滤。</li>
排序条件
<li>Itime - string - 是否必填：否 - 排序支持：是 - 按账号分组创建时间排序。</li>
<li>Utime - string - 是否必填：否 - 排序支持：是 - 按账号分组更新时间排序。</li>
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
                     * 获取父分组id
                     * @return ParentId 父分组id
                     * 
                     */
                    int64_t GetParentId() const;

                    /**
                     * 设置父分组id
                     * @param _parentId 父分组id
                     * 
                     */
                    void SetParentId(const int64_t& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                private:

                    /**
                     * 搜索范围,0-仅搜直接子组,1-深层搜索(只支持32位)
                     */
                    int64_t m_deepin;
                    bool m_deepinHasBeenSet;

                    /**
                     * 滤条件、分页参数
<li>Name - String - 是否必填：否 - 操作符: like  - 排序支持：否- 按账号分组过滤。</li>
排序条件
<li>Itime - string - 是否必填：否 - 排序支持：是 - 按账号分组创建时间排序。</li>
<li>Utime - string - 是否必填：否 - 排序支持：是 - 按账号分组更新时间排序。</li>
                     */
                    Condition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 父分组id
                     */
                    int64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEACCOUNTGROUPSREQUEST_H_
