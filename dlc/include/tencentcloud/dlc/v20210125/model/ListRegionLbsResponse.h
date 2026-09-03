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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LISTREGIONLBSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LISTREGIONLBSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/LbItem.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * ListRegionLbs返回参数结构体
                */
                class ListRegionLbsResponse : public AbstractModel
                {
                public:
                    ListRegionLbsResponse();
                    ~ListRegionLbsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>满足条件的负载均衡实例总数（与入参 Limit 无关）</p>
                     * @return TotalCount <p>满足条件的负载均衡实例总数（与入参 Limit 无关）</p>
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
                     * 获取<p>负载均衡信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Lbs <p>负载均衡信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LbItem> GetLbs() const;

                    /**
                     * 判断参数 Lbs 是否已赋值
                     * @return Lbs 是否已赋值
                     * 
                     */
                    bool LbsHasBeenSet() const;

                private:

                    /**
                     * <p>满足条件的负载均衡实例总数（与入参 Limit 无关）</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>负载均衡信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LbItem> m_lbs;
                    bool m_lbsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LISTREGIONLBSRESPONSE_H_
