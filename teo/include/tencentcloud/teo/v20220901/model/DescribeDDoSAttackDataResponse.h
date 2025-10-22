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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDDOSATTACKDATARESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDDOSATTACKDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecEntry.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeDDoSAttackData返回参数结构体
                */
                class DescribeDDoSAttackDataResponse : public AbstractModel
                {
                public:
                    DescribeDDoSAttackDataResponse();
                    ~DescribeDDoSAttackDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询结果的总条数。
                     * @return TotalCount 查询结果的总条数。
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
                     * 获取DDoS攻击数据内容列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data DDoS攻击数据内容列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SecEntry> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 查询结果的总条数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * DDoS攻击数据内容列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SecEntry> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDDOSATTACKDATARESPONSE_H_
