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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEAFFECTEDWORKLOADLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEAFFECTEDWORKLOADLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAffectedWorkloadList请求参数结构体
                */
                class DescribeAffectedWorkloadListRequest : public AbstractModel
                {
                public:
                    DescribeAffectedWorkloadListRequest();
                    ~DescribeAffectedWorkloadListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取唯一的检测项的ID
                     * @return CheckItemId 唯一的检测项的ID
                     * 
                     */
                    int64_t GetCheckItemId() const;

                    /**
                     * 设置唯一的检测项的ID
                     * @param _checkItemId 唯一的检测项的ID
                     * 
                     */
                    void SetCheckItemId(const int64_t& _checkItemId);

                    /**
                     * 判断参数 CheckItemId 是否已赋值
                     * @return CheckItemId 是否已赋值
                     * 
                     */
                    bool CheckItemIdHasBeenSet() const;

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
                     * 获取每次查询的最大记录数量
                     * @return Limit 每次查询的最大记录数量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每次查询的最大记录数量
                     * @param _limit 每次查询的最大记录数量
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
                     * 获取Name - String
Name 可取值：WorkloadType,ClusterId
                     * @return Filters Name - String
Name 可取值：WorkloadType,ClusterId
                     * 
                     */
                    std::vector<ComplianceFilters> GetFilters() const;

                    /**
                     * 设置Name - String
Name 可取值：WorkloadType,ClusterId
                     * @param _filters Name - String
Name 可取值：WorkloadType,ClusterId
                     * 
                     */
                    void SetFilters(const std::vector<ComplianceFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序字段
                     * @return By 排序字段
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段
                     * @param _by 排序字段
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取排序方式 asc,desc
                     * @return Order 排序方式 asc,desc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式 asc,desc
                     * @param _order 排序方式 asc,desc
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 唯一的检测项的ID
                     */
                    int64_t m_checkItemId;
                    bool m_checkItemIdHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每次查询的最大记录数量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Name - String
Name 可取值：WorkloadType,ClusterId
                     */
                    std::vector<ComplianceFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 排序方式 asc,desc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEAFFECTEDWORKLOADLISTREQUEST_H_
