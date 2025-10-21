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

#ifndef TENCENTCLOUD_AF_V20200226_MODEL_DESCRIBEANTIFRAUDRESPONSE_H_
#define TENCENTCLOUD_AF_V20200226_MODEL_DESCRIBEANTIFRAUDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/af/v20200226/model/FinanceAntiFraudRecord.h>


namespace TencentCloud
{
    namespace Af
    {
        namespace V20200226
        {
            namespace Model
            {
                /**
                * DescribeAntiFraud返回参数结构体
                */
                class DescribeAntiFraudResponse : public AbstractModel
                {
                public:
                    DescribeAntiFraudResponse();
                    ~DescribeAntiFraudResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 返回结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FinanceAntiFraudRecord GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 返回结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FinanceAntiFraudRecord m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AF_V20200226_MODEL_DESCRIBEANTIFRAUDRESPONSE_H_
