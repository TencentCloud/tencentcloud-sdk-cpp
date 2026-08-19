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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEUEBABEHAVIORSUMMARYRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEUEBABEHAVIORSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BehaviorSummary.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeUebaBehaviorSummary返回参数结构体
                */
                class DescribeUebaBehaviorSummaryResponse : public AbstractModel
                {
                public:
                    DescribeUebaBehaviorSummaryResponse();
                    ~DescribeUebaBehaviorSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取NodeInfo中有具体数据，Key为AbnormalUser表示异常账号，
Key为AbnormalBehavior异常行为。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data NodeInfo中有具体数据，Key为AbnormalUser表示异常账号，
Key为AbnormalBehavior异常行为。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BehaviorSummary GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * NodeInfo中有具体数据，Key为AbnormalUser表示异常账号，
Key为AbnormalBehavior异常行为。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BehaviorSummary m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEUEBABEHAVIORSUMMARYRESPONSE_H_
