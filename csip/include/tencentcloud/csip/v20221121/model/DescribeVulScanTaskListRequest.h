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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULSCANTASKLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULSCANTASKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeVulScanTaskList请求参数结构体
                */
                class DescribeVulScanTaskListRequest : public AbstractModel
                {
                public:
                    DescribeVulScanTaskListRequest();
                    ~DescribeVulScanTaskListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件，支持以下 Name：<li>JobId - 任务 ID 精确匹配</li><li>TaskType- 任务类型精确匹配</li></p>
                     * @return Filters <p>过滤条件，支持以下 Name：<li>JobId - 任务 ID 精确匹配</li><li>TaskType- 任务类型精确匹配</li></p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>过滤条件，支持以下 Name：<li>JobId - 任务 ID 精确匹配</li><li>TaskType- 任务类型精确匹配</li></p>
                     * @param _filters <p>过滤条件，支持以下 Name：<li>JobId - 任务 ID 精确匹配</li><li>TaskType- 任务类型精确匹配</li></p>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>分页大小</p><p>取值范围：[1, 100]</p><p>单位：条</p><p>默认值：10</p>
                     * @return Limit <p>分页大小</p><p>取值范围：[1, 100]</p><p>单位：条</p><p>默认值：10</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页大小</p><p>取值范围：[1, 100]</p><p>单位：条</p><p>默认值：10</p>
                     * @param _limit <p>分页大小</p><p>取值范围：[1, 100]</p><p>单位：条</p><p>默认值：10</p>
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
                     * 获取<p>分页偏移</p><p>取值范围：[0, 99999]</p><p>单位：条</p>
                     * @return Offset <p>分页偏移</p><p>取值范围：[0, 99999]</p><p>单位：条</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移</p><p>取值范围：[0, 99999]</p><p>单位：条</p>
                     * @param _offset <p>分页偏移</p><p>取值范围：[0, 99999]</p><p>单位：条</p>
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
                     * 获取<p>过滤方向</p><p>枚举值：</p><ul><li>DESC： 倒序</li><li>ASC： 正序</li></ul>
                     * @return Order <p>过滤方向</p><p>枚举值：</p><ul><li>DESC： 倒序</li><li>ASC： 正序</li></ul>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>过滤方向</p><p>枚举值：</p><ul><li>DESC： 倒序</li><li>ASC： 正序</li></ul>
                     * @param _order <p>过滤方向</p><p>枚举值：</p><ul><li>DESC： 倒序</li><li>ASC： 正序</li></ul>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>排序字段</p><p>默认值：ScanTime</p>
                     * @return By <p>排序字段</p><p>默认值：ScanTime</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>排序字段</p><p>默认值：ScanTime</p>
                     * @param _by <p>排序字段</p><p>默认值：ScanTime</p>
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>过滤条件，支持以下 Name：<li>JobId - 任务 ID 精确匹配</li><li>TaskType- 任务类型精确匹配</li></p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>分页大小</p><p>取值范围：[1, 100]</p><p>单位：条</p><p>默认值：10</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移</p><p>取值范围：[0, 99999]</p><p>单位：条</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>过滤方向</p><p>枚举值：</p><ul><li>DESC： 倒序</li><li>ASC： 正序</li></ul>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>排序字段</p><p>默认值：ScanTime</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULSCANTASKLISTREQUEST_H_
