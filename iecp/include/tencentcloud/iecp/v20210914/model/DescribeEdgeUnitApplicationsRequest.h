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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITAPPLICATIONSREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITAPPLICATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/FieldSort.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeEdgeUnitApplications请求参数结构体
                */
                class DescribeEdgeUnitApplicationsRequest : public AbstractModel
                {
                public:
                    DescribeEdgeUnitApplicationsRequest();
                    ~DescribeEdgeUnitApplicationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取单元ID
                     * @return EdgeUnitId 单元ID
                     * 
                     */
                    uint64_t GetEdgeUnitId() const;

                    /**
                     * 设置单元ID
                     * @param _edgeUnitId 单元ID
                     * 
                     */
                    void SetEdgeUnitId(const uint64_t& _edgeUnitId);

                    /**
                     * 判断参数 EdgeUnitId 是否已赋值
                     * @return EdgeUnitId 是否已赋值
                     * 
                     */
                    bool EdgeUnitIdHasBeenSet() const;

                    /**
                     * 获取翻页偏移
                     * @return Offset 翻页偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置翻页偏移
                     * @param _offset 翻页偏移
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
                     * 获取翻页大小
                     * @return Limit 翻页大小
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置翻页大小
                     * @param _limit 翻页大小
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
                     * 获取名称模糊匹配
                     * @return NamePattern 名称模糊匹配
                     * 
                     */
                    std::string GetNamePattern() const;

                    /**
                     * 设置名称模糊匹配
                     * @param _namePattern 名称模糊匹配
                     * 
                     */
                    void SetNamePattern(const std::string& _namePattern);

                    /**
                     * 判断参数 NamePattern 是否已赋值
                     * @return NamePattern 是否已赋值
                     * 
                     */
                    bool NamePatternHasBeenSet() const;

                    /**
                     * 获取字段排序 (Sort.Filed为:StartTime）
                     * @return Sort 字段排序 (Sort.Filed为:StartTime）
                     * 
                     */
                    std::vector<FieldSort> GetSort() const;

                    /**
                     * 设置字段排序 (Sort.Filed为:StartTime）
                     * @param _sort 字段排序 (Sort.Filed为:StartTime）
                     * 
                     */
                    void SetSort(const std::vector<FieldSort>& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取命名空间过滤
                     * @return Namespace 命名空间过滤
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间过滤
                     * @param _namespace 命名空间过滤
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                private:

                    /**
                     * 单元ID
                     */
                    uint64_t m_edgeUnitId;
                    bool m_edgeUnitIdHasBeenSet;

                    /**
                     * 翻页偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 翻页大小
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 名称模糊匹配
                     */
                    std::string m_namePattern;
                    bool m_namePatternHasBeenSet;

                    /**
                     * 字段排序 (Sort.Filed为:StartTime）
                     */
                    std::vector<FieldSort> m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 命名空间过滤
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITAPPLICATIONSREQUEST_H_
