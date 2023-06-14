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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEPROJECTSREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEPROJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/TagSpec.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeProjects请求参数结构体
                */
                class DescribeProjectsRequest : public AbstractModel
                {
                public:
                    DescribeProjectsRequest();
                    ~DescribeProjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页offset
                     * @return Offset 分页offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页offset
                     * @param _offset 分页offset
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页limit
                     * @return Limit 每页limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页limit
                     * @param _limit 每页limit
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取项目ID数组
                     * @return ProjectIds 项目ID数组
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置项目ID数组
                     * @param _projectIds 项目ID数组
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取项目名
                     * @return ProjectName 项目名
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名
                     * @param _projectName 项目名
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取按字段排序
                     * @return OrderBy 按字段排序
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置按字段排序
                     * @param _orderBy 按字段排序
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取升序/降序
                     * @return Ascend 升序/降序
                     * 
                     */
                    bool GetAscend() const;

                    /**
                     * 设置升序/降序
                     * @param _ascend 升序/降序
                     * 
                     */
                    void SetAscend(const bool& _ascend);

                    /**
                     * 判断参数 Ascend 是否已赋值
                     * @return Ascend 是否已赋值
                     * 
                     */
                    bool AscendHasBeenSet() const;

                    /**
                     * 获取标签数组
                     * @return TagFilters 标签数组
                     * 
                     */
                    std::vector<TagSpec> GetTagFilters() const;

                    /**
                     * 设置标签数组
                     * @param _tagFilters 标签数组
                     * 
                     */
                    void SetTagFilters(const std::vector<TagSpec>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                private:

                    /**
                     * 分页offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 项目ID数组
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 项目名
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 按字段排序
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 升序/降序
                     */
                    bool m_ascend;
                    bool m_ascendHasBeenSet;

                    /**
                     * 标签数组
                     */
                    std::vector<TagSpec> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEPROJECTSREQUEST_H_
