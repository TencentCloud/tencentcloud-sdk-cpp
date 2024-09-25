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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBERUNGROUPSREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBERUNGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/Filter.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * DescribeRunGroups请求参数结构体
                */
                class DescribeRunGroupsRequest : public AbstractModel
                {
                public:
                    DescribeRunGroupsRequest();
                    ~DescribeRunGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID。
（不填使用指定地域下的默认项目）
                     * @return ProjectId 项目ID。
（不填使用指定地域下的默认项目）
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID。
（不填使用指定地域下的默认项目）
                     * @param _projectId 项目ID。
（不填使用指定地域下的默认项目）
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为10，最大值为100。
                     * @return Limit 返回数量，默认为10，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为10，最大值为100。
                     * @param _limit 返回数量，默认为10，最大值为100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 获取过滤器，支持过滤字段：
- Name：任务批次名称
- RunGroupId：任务批次ID
- Status：任务批次状态
- ApplicationId：应用ID
- Type：类型（支持WDL，NEXTFLOW）
                     * @return Filters 过滤器，支持过滤字段：
- Name：任务批次名称
- RunGroupId：任务批次ID
- Status：任务批次状态
- ApplicationId：应用ID
- Type：类型（支持WDL，NEXTFLOW）
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤器，支持过滤字段：
- Name：任务批次名称
- RunGroupId：任务批次ID
- Status：任务批次状态
- ApplicationId：应用ID
- Type：类型（支持WDL，NEXTFLOW）
                     * @param _filters 过滤器，支持过滤字段：
- Name：任务批次名称
- RunGroupId：任务批次ID
- Status：任务批次状态
- ApplicationId：应用ID
- Type：类型（支持WDL，NEXTFLOW）
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 项目ID。
（不填使用指定地域下的默认项目）
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 返回数量，默认为10，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤器，支持过滤字段：
- Name：任务批次名称
- RunGroupId：任务批次ID
- Status：任务批次状态
- ApplicationId：应用ID
- Type：类型（支持WDL，NEXTFLOW）
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBERUNGROUPSREQUEST_H_
