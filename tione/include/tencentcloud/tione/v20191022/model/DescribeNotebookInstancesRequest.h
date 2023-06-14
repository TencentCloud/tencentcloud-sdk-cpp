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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKINSTANCESREQUEST_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20191022/model/Filter.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * DescribeNotebookInstances请求参数结构体
                */
                class DescribeNotebookInstancesRequest : public AbstractModel
                {
                public:
                    DescribeNotebookInstancesRequest();
                    ~DescribeNotebookInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取限制数目
                     * @return Limit 限制数目
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目
                     * @param _limit 限制数目
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
                     * 获取排序规则。默认取Descending
Descending 按更新时间降序
Ascending 按更新时间升序
                     * @return SortOrder 排序规则。默认取Descending
Descending 按更新时间降序
Ascending 按更新时间升序
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置排序规则。默认取Descending
Descending 按更新时间降序
Ascending 按更新时间升序
                     * @param _sortOrder 排序规则。默认取Descending
Descending 按更新时间降序
Ascending 按更新时间升序
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                    /**
                     * 获取过滤条件。
instance-name - String - 是否必填：否 -（过滤条件）按照名称过滤。
search-by-name - String - 是否必填：否 -（过滤条件）按照名称检索，模糊匹配。
lifecycle-name - String - 是否必填：否 -（过滤条件）按照生命周期脚本名称过滤。
default-code-repo-name - String - 是否必填：否 -（过滤条件）按照默认存储库名称过滤。
additional-code-repo-name - String - 是否必填：否 -（过滤条件）按照其他存储库名称过滤。
billing-status - String - 是否必填：否 - （过滤条件）按照计费状态过滤，可取以下值
   StorageOnly：仅存储计费的实例
   Computing：计算和存储都计费的实例
                     * @return Filters 过滤条件。
instance-name - String - 是否必填：否 -（过滤条件）按照名称过滤。
search-by-name - String - 是否必填：否 -（过滤条件）按照名称检索，模糊匹配。
lifecycle-name - String - 是否必填：否 -（过滤条件）按照生命周期脚本名称过滤。
default-code-repo-name - String - 是否必填：否 -（过滤条件）按照默认存储库名称过滤。
additional-code-repo-name - String - 是否必填：否 -（过滤条件）按照其他存储库名称过滤。
billing-status - String - 是否必填：否 - （过滤条件）按照计费状态过滤，可取以下值
   StorageOnly：仅存储计费的实例
   Computing：计算和存储都计费的实例
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
instance-name - String - 是否必填：否 -（过滤条件）按照名称过滤。
search-by-name - String - 是否必填：否 -（过滤条件）按照名称检索，模糊匹配。
lifecycle-name - String - 是否必填：否 -（过滤条件）按照生命周期脚本名称过滤。
default-code-repo-name - String - 是否必填：否 -（过滤条件）按照默认存储库名称过滤。
additional-code-repo-name - String - 是否必填：否 -（过滤条件）按照其他存储库名称过滤。
billing-status - String - 是否必填：否 - （过滤条件）按照计费状态过滤，可取以下值
   StorageOnly：仅存储计费的实例
   Computing：计算和存储都计费的实例
                     * @param _filters 过滤条件。
instance-name - String - 是否必填：否 -（过滤条件）按照名称过滤。
search-by-name - String - 是否必填：否 -（过滤条件）按照名称检索，模糊匹配。
lifecycle-name - String - 是否必填：否 -（过滤条件）按照生命周期脚本名称过滤。
default-code-repo-name - String - 是否必填：否 -（过滤条件）按照默认存储库名称过滤。
additional-code-repo-name - String - 是否必填：否 -（过滤条件）按照其他存储库名称过滤。
billing-status - String - 是否必填：否 - （过滤条件）按照计费状态过滤，可取以下值
   StorageOnly：仅存储计费的实例
   Computing：计算和存储都计费的实例
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
                     * 获取【废弃字段】排序字段
                     * @return SortBy 【废弃字段】排序字段
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置【废弃字段】排序字段
                     * @param _sortBy 【废弃字段】排序字段
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                private:

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数目
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序规则。默认取Descending
Descending 按更新时间降序
Ascending 按更新时间升序
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * 过滤条件。
instance-name - String - 是否必填：否 -（过滤条件）按照名称过滤。
search-by-name - String - 是否必填：否 -（过滤条件）按照名称检索，模糊匹配。
lifecycle-name - String - 是否必填：否 -（过滤条件）按照生命周期脚本名称过滤。
default-code-repo-name - String - 是否必填：否 -（过滤条件）按照默认存储库名称过滤。
additional-code-repo-name - String - 是否必填：否 -（过滤条件）按照其他存储库名称过滤。
billing-status - String - 是否必填：否 - （过滤条件）按照计费状态过滤，可取以下值
   StorageOnly：仅存储计费的实例
   Computing：计算和存储都计费的实例
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 【废弃字段】排序字段
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKINSTANCESREQUEST_H_
