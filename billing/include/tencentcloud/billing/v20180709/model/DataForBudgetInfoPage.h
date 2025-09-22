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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DATAFORBUDGETINFOPAGE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DATAFORBUDGETINFOPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BudgetExtend.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 获取预算管理的基础信息分页数据
                */
                class DataForBudgetInfoPage : public AbstractModel
                {
                public:
                    DataForBudgetInfoPage();
                    ~DataForBudgetInfoPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分页
                     * @return Pages 分页
                     * 
                     */
                    uint64_t GetPages() const;

                    /**
                     * 设置分页
                     * @param _pages 分页
                     * 
                     */
                    void SetPages(const uint64_t& _pages);

                    /**
                     * 判断参数 Pages 是否已赋值
                     * @return Pages 是否已赋值
                     * 
                     */
                    bool PagesHasBeenSet() const;

                    /**
                     * 获取分页大小
                     * @return Size 分页大小
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置分页大小
                     * @param _size 分页大小
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取总量
                     * @return Total 总量
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 设置总量
                     * @param _total 总量
                     * 
                     */
                    void SetTotal(const uint64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取查询数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Records 查询数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BudgetExtend> GetRecords() const;

                    /**
                     * 设置查询数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _records 查询数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecords(const std::vector<BudgetExtend>& _records);

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                    /**
                     * 获取当前页
                     * @return Current 当前页
                     * 
                     */
                    uint64_t GetCurrent() const;

                    /**
                     * 设置当前页
                     * @param _current 当前页
                     * 
                     */
                    void SetCurrent(const uint64_t& _current);

                    /**
                     * 判断参数 Current 是否已赋值
                     * @return Current 是否已赋值
                     * 
                     */
                    bool CurrentHasBeenSet() const;

                private:

                    /**
                     * 分页
                     */
                    uint64_t m_pages;
                    bool m_pagesHasBeenSet;

                    /**
                     * 分页大小
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 总量
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 查询数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BudgetExtend> m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * 当前页
                     */
                    uint64_t m_current;
                    bool m_currentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DATAFORBUDGETINFOPAGE_H_
