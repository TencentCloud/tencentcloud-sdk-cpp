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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBESCDNIPSTRATEGYRESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBESCDNIPSTRATEGYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ScdnIpStrategy.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeScdnIpStrategy返回参数结构体
                */
                class DescribeScdnIpStrategyResponse : public AbstractModel
                {
                public:
                    DescribeScdnIpStrategyResponse();
                    ~DescribeScdnIpStrategyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取IP策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpStrategyList IP策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ScdnIpStrategy> GetIpStrategyList() const;

                    /**
                     * 判断参数 IpStrategyList 是否已赋值
                     * @return IpStrategyList 是否已赋值
                     * 
                     */
                    bool IpStrategyListHasBeenSet() const;

                    /**
                     * 获取配置的策略条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 配置的策略条数
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

                private:

                    /**
                     * IP策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ScdnIpStrategy> m_ipStrategyList;
                    bool m_ipStrategyListHasBeenSet;

                    /**
                     * 配置的策略条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBESCDNIPSTRATEGYRESPONSE_H_
