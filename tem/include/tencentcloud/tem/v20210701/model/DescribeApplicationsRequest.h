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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEAPPLICATIONSREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEAPPLICATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/QueryFilter.h>
#include <tencentcloud/tem/v20210701/model/SortType.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * DescribeApplications请求参数结构体
                */
                class DescribeApplicationsRequest : public AbstractModel
                {
                public:
                    DescribeApplicationsRequest();
                    ~DescribeApplicationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取命名空间ID
                     * @return EnvironmentId 命名空间ID
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置命名空间ID
                     * @param _environmentId 命名空间ID
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取分页Limit，默认值：20
                     * @return Limit 分页Limit，默认值：20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页Limit，默认值：20
                     * @param _limit 分页Limit，默认值：20
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
                     * 获取分页offset,默认值：0
                     * @return Offset 分页offset,默认值：0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页offset,默认值：0
                     * @param _offset 分页offset,默认值：0
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
                     * 获取来源渠道
                     * @return SourceChannel 来源渠道
                     * 
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置来源渠道
                     * @param _sourceChannel 来源渠道
                     * 
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     * 
                     */
                    bool SourceChannelHasBeenSet() const;

                    /**
                     * 获取服务id
                     * @return ApplicationId 服务id
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置服务id
                     * @param _applicationId 服务id
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取搜索关键字
                     * @return Keyword 搜索关键字
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置搜索关键字
                     * @param _keyword 搜索关键字
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取查询过滤器
                     * @return Filters 查询过滤器
                     * 
                     */
                    std::vector<QueryFilter> GetFilters() const;

                    /**
                     * 设置查询过滤器
                     * @param _filters 查询过滤器
                     * 
                     */
                    void SetFilters(const std::vector<QueryFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序字段
                     * @return SortInfo 排序字段
                     * 
                     */
                    SortType GetSortInfo() const;

                    /**
                     * 设置排序字段
                     * @param _sortInfo 排序字段
                     * 
                     */
                    void SetSortInfo(const SortType& _sortInfo);

                    /**
                     * 判断参数 SortInfo 是否已赋值
                     * @return SortInfo 是否已赋值
                     * 
                     */
                    bool SortInfoHasBeenSet() const;

                private:

                    /**
                     * 命名空间ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 分页Limit，默认值：20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页offset,默认值：0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 来源渠道
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                    /**
                     * 服务id
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 搜索关键字
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 查询过滤器
                     */
                    std::vector<QueryFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段
                     */
                    SortType m_sortInfo;
                    bool m_sortInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEAPPLICATIONSREQUEST_H_
