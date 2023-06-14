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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETBATCHPRODUCTIONSLISTRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETBATCHPRODUCTIONSLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/BatchProductionInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * GetBatchProductionsList返回参数结构体
                */
                class GetBatchProductionsListResponse : public AbstractModel
                {
                public:
                    GetBatchProductionsListResponse();
                    ~GetBatchProductionsListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回详情信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchProductions 返回详情信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BatchProductionInfo> GetBatchProductions() const;

                    /**
                     * 判断参数 BatchProductions 是否已赋值
                     * @return BatchProductions 是否已赋值
                     * 
                     */
                    bool BatchProductionsHasBeenSet() const;

                    /**
                     * 获取返回数量。
                     * @return TotalCnt 返回数量。
                     * 
                     */
                    int64_t GetTotalCnt() const;

                    /**
                     * 判断参数 TotalCnt 是否已赋值
                     * @return TotalCnt 是否已赋值
                     * 
                     */
                    bool TotalCntHasBeenSet() const;

                private:

                    /**
                     * 返回详情信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BatchProductionInfo> m_batchProductions;
                    bool m_batchProductionsHasBeenSet;

                    /**
                     * 返回数量。
                     */
                    int64_t m_totalCnt;
                    bool m_totalCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETBATCHPRODUCTIONSLISTRESPONSE_H_
