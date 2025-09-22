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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTALARMRULESRESULT_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTALARMRULESRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/AlarmRuleData.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 查询告警规则列表
                */
                class ListAlarmRulesResult : public AbstractModel
                {
                public:
                    ListAlarmRulesResult();
                    ~ListAlarmRulesResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分页的页数，当前页数
                     * @return PageNumber 分页的页数，当前页数
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置分页的页数，当前页数
                     * @param _pageNumber 分页的页数，当前页数
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页显示的条数
                     * @return PageSize 每页显示的条数
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页显示的条数
                     * @param _pageSize 每页显示的条数
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取分页总页数
                     * @return TotalPageNumber 分页总页数
                     * 
                     */
                    uint64_t GetTotalPageNumber() const;

                    /**
                     * 设置分页总页数
                     * @param _totalPageNumber 分页总页数
                     * 
                     */
                    void SetTotalPageNumber(const uint64_t& _totalPageNumber);

                    /**
                     * 判断参数 TotalPageNumber 是否已赋值
                     * @return TotalPageNumber 是否已赋值
                     * 
                     */
                    bool TotalPageNumberHasBeenSet() const;

                    /**
                     * 获取所有的告警规则个数
                     * @return TotalCount 所有的告警规则个数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置所有的告警规则个数
                     * @param _totalCount 所有的告警规则个数
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取告警规则信息列表
                     * @return Items 告警规则信息列表
                     * 
                     */
                    std::vector<AlarmRuleData> GetItems() const;

                    /**
                     * 设置告警规则信息列表
                     * @param _items 告警规则信息列表
                     * 
                     */
                    void SetItems(const std::vector<AlarmRuleData>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 分页的页数，当前页数
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页显示的条数
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 分页总页数
                     */
                    uint64_t m_totalPageNumber;
                    bool m_totalPageNumberHasBeenSet;

                    /**
                     * 所有的告警规则个数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 告警规则信息列表
                     */
                    std::vector<AlarmRuleData> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTALARMRULESRESULT_H_
