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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEAITASKRESULTRESPONSE_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEAITASKRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/AITaskResultData.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * DescribeAITaskResult返回参数结构体
                */
                class DescribeAITaskResultResponse : public AbstractModel
                {
                public:
                    DescribeAITaskResultResponse();
                    ~DescribeAITaskResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取AI识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data AI识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AITaskResultData GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取AI识别结果数量
                     * @return TotalCount AI识别结果数量
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * AI识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AITaskResultData m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * AI识别结果数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEAITASKRESULTRESPONSE_H_
