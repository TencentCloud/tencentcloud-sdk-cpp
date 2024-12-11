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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEDATASETSRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEDATASETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/DatasetGroup.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeDatasets返回参数结构体
                */
                class DescribeDatasetsResponse : public AbstractModel
                {
                public:
                    DescribeDatasetsResponse();
                    ~DescribeDatasetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据集总量（名称维度）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 数据集总量（名称维度）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取数据集按照数据集名称聚合的分组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasetGroups 数据集按照数据集名称聚合的分组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DatasetGroup> GetDatasetGroups() const;

                    /**
                     * 判断参数 DatasetGroups 是否已赋值
                     * @return DatasetGroups 是否已赋值
                     * 
                     */
                    bool DatasetGroupsHasBeenSet() const;

                    /**
                     * 获取数据集ID总量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasetIdNums 数据集ID总量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDatasetIdNums() const;

                    /**
                     * 判断参数 DatasetIdNums 是否已赋值
                     * @return DatasetIdNums 是否已赋值
                     * 
                     */
                    bool DatasetIdNumsHasBeenSet() const;

                    /**
                     * 获取若开启了CFSChecking，则检查CFS是否准备完毕。若CFS未准备完毕，则返回true，并且TotalCount为0，DatasetGroups为空。
                     * @return CFSNotReady 若开启了CFSChecking，则检查CFS是否准备完毕。若CFS未准备完毕，则返回true，并且TotalCount为0，DatasetGroups为空。
                     * 
                     */
                    bool GetCFSNotReady() const;

                    /**
                     * 判断参数 CFSNotReady 是否已赋值
                     * @return CFSNotReady 是否已赋值
                     * 
                     */
                    bool CFSNotReadyHasBeenSet() const;

                private:

                    /**
                     * 数据集总量（名称维度）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 数据集按照数据集名称聚合的分组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DatasetGroup> m_datasetGroups;
                    bool m_datasetGroupsHasBeenSet;

                    /**
                     * 数据集ID总量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_datasetIdNums;
                    bool m_datasetIdNumsHasBeenSet;

                    /**
                     * 若开启了CFSChecking，则检查CFS是否准备完毕。若CFS未准备完毕，则返回true，并且TotalCount为0，DatasetGroups为空。
                     */
                    bool m_cFSNotReady;
                    bool m_cFSNotReadyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEDATASETSRESPONSE_H_
