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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMERSRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ConsumerInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeConsumers返回参数结构体
                */
                class DescribeConsumersResponse : public AbstractModel
                {
                public:
                    DescribeConsumersResponse();
                    ~DescribeConsumersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取投递规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Consumers 投递规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ConsumerInfo> GetConsumers() const;

                    /**
                     * 判断参数 Consumers 是否已赋值
                     * @return Consumers 是否已赋值
                     * 
                     */
                    bool ConsumersHasBeenSet() const;

                    /**
                     * 获取本次查询获取到的总数
                     * @return TotalCount 本次查询获取到的总数
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
                     * 投递规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ConsumerInfo> m_consumers;
                    bool m_consumersHasBeenSet;

                    /**
                     * 本次查询获取到的总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMERSRESPONSE_H_
