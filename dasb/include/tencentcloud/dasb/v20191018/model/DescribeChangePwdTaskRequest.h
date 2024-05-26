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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBECHANGEPWDTASKREQUEST_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBECHANGEPWDTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dasb/v20191018/model/Filter.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * DescribeChangePwdTask请求参数结构体
                */
                class DescribeChangePwdTaskRequest : public AbstractModel
                {
                public:
                    DescribeChangePwdTaskRequest();
                    ~DescribeChangePwdTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤数组。过滤数组。Name支持以下值: OperationId 任务ID TaskName 任务名
                     * @return Filters 过滤数组。过滤数组。Name支持以下值: OperationId 任务ID TaskName 任务名
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤数组。过滤数组。Name支持以下值: OperationId 任务ID TaskName 任务名
                     * @param _filters 过滤数组。过滤数组。Name支持以下值: OperationId 任务ID TaskName 任务名
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取所属部门ID
                     * @return DepartmentId 所属部门ID
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置所属部门ID
                     * @param _departmentId 所属部门ID
                     * 
                     */
                    void SetDepartmentId(const std::string& _departmentId);

                    /**
                     * 判断参数 DepartmentId 是否已赋值
                     * @return DepartmentId 是否已赋值
                     * 
                     */
                    bool DepartmentIdHasBeenSet() const;

                    /**
                     * 获取分页偏移量，默认0
                     * @return Offset 分页偏移量，默认0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认0
                     * @param _offset 分页偏移量，默认0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页条目数量，默认20
                     * @return Limit 每页条目数量，默认20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页条目数量，默认20
                     * @param _limit 每页条目数量，默认20
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 过滤数组。过滤数组。Name支持以下值: OperationId 任务ID TaskName 任务名
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 所属部门ID
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                    /**
                     * 分页偏移量，默认0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页条目数量，默认20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBECHANGEPWDTASKREQUEST_H_
