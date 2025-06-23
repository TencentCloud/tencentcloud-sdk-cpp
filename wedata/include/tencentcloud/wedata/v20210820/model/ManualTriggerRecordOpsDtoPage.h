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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MANUALTRIGGERRECORDOPSDTOPAGE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MANUALTRIGGERRECORDOPSDTOPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ManualTriggerRecordOpsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 手动工作流触发运行记录分页查询
                */
                class ManualTriggerRecordOpsDtoPage : public AbstractModel
                {
                public:
                    ManualTriggerRecordOpsDtoPage();
                    ~ManualTriggerRecordOpsDtoPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取页号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageNumber 页号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageNumber 页号
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取页大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageSize 页大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置页大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageSize 页大小
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取手动工作流触发运行记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items 手动工作流触发运行记录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ManualTriggerRecordOpsDto> GetItems() const;

                    /**
                     * 设置手动工作流触发运行记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _items 手动工作流触发运行记录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItems(const std::vector<ManualTriggerRecordOpsDto>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalPage 总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalPage() const;

                    /**
                     * 设置总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalPage 总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalPage(const uint64_t& _totalPage);

                    /**
                     * 判断参数 TotalPage 是否已赋值
                     * @return TotalPage 是否已赋值
                     * 
                     */
                    bool TotalPageHasBeenSet() const;

                    /**
                     * 获取页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageCount 页数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPageCount() const;

                    /**
                     * 设置页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageCount 页数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageCount(const uint64_t& _pageCount);

                    /**
                     * 判断参数 PageCount 是否已赋值
                     * @return PageCount 是否已赋值
                     * 
                     */
                    bool PageCountHasBeenSet() const;

                    /**
                     * 获取总条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 总条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置总条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 总条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 页号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 页大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 手动工作流触发运行记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ManualTriggerRecordOpsDto> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 总页数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                    /**
                     * 页数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pageCount;
                    bool m_pageCountHasBeenSet;

                    /**
                     * 总条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MANUALTRIGGERRECORDOPSDTOPAGE_H_
