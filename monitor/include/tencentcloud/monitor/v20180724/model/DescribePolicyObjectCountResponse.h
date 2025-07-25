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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYOBJECTCOUNTRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYOBJECTCOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/RegionPolicyObjectCount.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePolicyObjectCount返回参数结构体
                */
                class DescribePolicyObjectCountResponse : public AbstractModel
                {
                public:
                    DescribePolicyObjectCountResponse();
                    ~DescribePolicyObjectCountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否为多地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsMultiRegion 是否为多地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsMultiRegion() const;

                    /**
                     * 判断参数 IsMultiRegion 是否已赋值
                     * @return IsMultiRegion 是否已赋值
                     * 
                     */
                    bool IsMultiRegionHasBeenSet() const;

                    /**
                     * 获取地域统计列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionList 地域统计列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RegionPolicyObjectCount> GetRegionList() const;

                    /**
                     * 判断参数 RegionList 是否已赋值
                     * @return RegionList 是否已赋值
                     * 
                     */
                    bool RegionListHasBeenSet() const;

                private:

                    /**
                     * 是否为多地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isMultiRegion;
                    bool m_isMultiRegionHasBeenSet;

                    /**
                     * 地域统计列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RegionPolicyObjectCount> m_regionList;
                    bool m_regionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYOBJECTCOUNTRESPONSE_H_
