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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPEAKBASEOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPEAKBASEOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/PeakFamilyInfo.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribePeakBaseOverview返回参数结构体
                */
                class DescribePeakBaseOverviewResponse : public AbstractModel
                {
                public:
                    DescribePeakBaseOverviewResponse();
                    ~DescribePeakBaseOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取基础峰值列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeakFamilyInfoSet 基础峰值列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PeakFamilyInfo> GetPeakFamilyInfoSet() const;

                    /**
                     * 判断参数 PeakFamilyInfoSet 是否已赋值
                     * @return PeakFamilyInfoSet 是否已赋值
                     * 
                     */
                    bool PeakFamilyInfoSetHasBeenSet() const;

                private:

                    /**
                     * 基础峰值列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PeakFamilyInfo> m_peakFamilyInfoSet;
                    bool m_peakFamilyInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPEAKBASEOVERVIEWRESPONSE_H_
