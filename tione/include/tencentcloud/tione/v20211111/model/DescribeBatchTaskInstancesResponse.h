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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBATCHTASKINSTANCESRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBATCHTASKINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/BatchTaskInstance.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeBatchTaskInstances返回参数结构体
                */
                class DescribeBatchTaskInstancesResponse : public AbstractModel
                {
                public:
                    DescribeBatchTaskInstancesResponse();
                    ~DescribeBatchTaskInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取批量预测实例结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchInstances 批量预测实例结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BatchTaskInstance> GetBatchInstances() const;

                    /**
                     * 判断参数 BatchInstances 是否已赋值
                     * @return BatchInstances 是否已赋值
                     * 
                     */
                    bool BatchInstancesHasBeenSet() const;

                private:

                    /**
                     * 批量预测实例结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BatchTaskInstance> m_batchInstances;
                    bool m_batchInstancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBATCHTASKINSTANCESRESPONSE_H_
