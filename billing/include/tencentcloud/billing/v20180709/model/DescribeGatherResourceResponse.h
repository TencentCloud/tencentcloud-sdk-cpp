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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEGATHERRESOURCERESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEGATHERRESOURCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/GatherResourceSummary.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeGatherResource返回参数结构体
                */
                class DescribeGatherResourceResponse : public AbstractModel
                {
                public:
                    DescribeGatherResourceResponse();
                    ~DescribeGatherResourceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总条数
                     * @return RecordNum 总条数
                     * 
                     */
                    int64_t GetRecordNum() const;

                    /**
                     * 判断参数 RecordNum 是否已赋值
                     * @return RecordNum 是否已赋值
                     * 
                     */
                    bool RecordNumHasBeenSet() const;

                    /**
                     * 获取资源归集汇总
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GatherResourceSummary 资源归集汇总
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GatherResourceSummary> GetGatherResourceSummary() const;

                    /**
                     * 判断参数 GatherResourceSummary 是否已赋值
                     * @return GatherResourceSummary 是否已赋值
                     * 
                     */
                    bool GatherResourceSummaryHasBeenSet() const;

                    /**
                     * 获取数据更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdateTime 数据更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 总条数
                     */
                    int64_t m_recordNum;
                    bool m_recordNumHasBeenSet;

                    /**
                     * 资源归集汇总
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GatherResourceSummary> m_gatherResourceSummary;
                    bool m_gatherResourceSummaryHasBeenSet;

                    /**
                     * 数据更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEGATHERRESOURCERESPONSE_H_
