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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATAASSETSRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATAASSETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/DataSetRecord.h>
#include <tencentcloud/wedata/v20210820/model/IndicatorBaseInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeDataAssets返回参数结构体
                */
                class DescribeDataAssetsResponse : public AbstractModel
                {
                public:
                    DescribeDataAssetsResponse();
                    ~DescribeDataAssetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据资产记录列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSetRecords 数据资产记录列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DataSetRecord> GetDataSetRecords() const;

                    /**
                     * 判断参数 DataSetRecords 是否已赋值
                     * @return DataSetRecords 是否已赋值
                     * 
                     */
                    bool DataSetRecordsHasBeenSet() const;

                    /**
                     * 获取总数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 总数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取页码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageNumber 页码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageSize 每页数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndicatorRecords 指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IndicatorBaseInfo> GetIndicatorRecords() const;

                    /**
                     * 判断参数 IndicatorRecords 是否已赋值
                     * @return IndicatorRecords 是否已赋值
                     * 
                     */
                    bool IndicatorRecordsHasBeenSet() const;

                private:

                    /**
                     * 数据资产记录列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataSetRecord> m_dataSetRecords;
                    bool m_dataSetRecordsHasBeenSet;

                    /**
                     * 总数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 页码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IndicatorBaseInfo> m_indicatorRecords;
                    bool m_indicatorRecordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATAASSETSRESPONSE_H_
