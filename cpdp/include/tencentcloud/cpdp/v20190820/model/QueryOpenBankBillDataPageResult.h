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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKBILLDATAPAGERESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKBILLDATAPAGERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankBillData.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 云企付-分页查询对账单数据结果
                */
                class QueryOpenBankBillDataPageResult : public AbstractModel
                {
                public:
                    QueryOpenBankBillDataPageResult();
                    ~QueryOpenBankBillDataPageResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取页码
                     * @return PageNo 页码
                     * 
                     */
                    uint64_t GetPageNo() const;

                    /**
                     * 设置页码
                     * @param _pageNo 页码
                     * 
                     */
                    void SetPageNo(const uint64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取分页大小
                     * @return PageSize 分页大小
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页大小
                     * @param _pageSize 分页大小
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
                     * 获取总数
                     * @return Count 总数
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置总数
                     * @param _count 总数
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取账单数据明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataList 账单数据明细
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QueryOpenBankBillData> GetDataList() const;

                    /**
                     * 设置账单数据明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataList 账单数据明细
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataList(const std::vector<QueryOpenBankBillData>& _dataList);

                    /**
                     * 判断参数 DataList 是否已赋值
                     * @return DataList 是否已赋值
                     * 
                     */
                    bool DataListHasBeenSet() const;

                private:

                    /**
                     * 页码
                     */
                    uint64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 分页大小
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 总数
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 账单数据明细
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QueryOpenBankBillData> m_dataList;
                    bool m_dataListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKBILLDATAPAGERESULT_H_
