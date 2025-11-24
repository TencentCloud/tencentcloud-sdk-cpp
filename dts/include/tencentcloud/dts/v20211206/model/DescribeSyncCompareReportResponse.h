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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCCOMPAREREPORTRESPONSE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCCOMPAREREPORTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/CompareAbstractInfo.h>
#include <tencentcloud/dts/v20211206/model/CompareDetailInfo.h>
#include <tencentcloud/dts/v20211206/model/IncCompareAbstractInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeSyncCompareReport返回参数结构体
                */
                class DescribeSyncCompareReportResponse : public AbstractModel
                {
                public:
                    DescribeSyncCompareReportResponse();
                    ~DescribeSyncCompareReportResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取一致性校验摘要信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Abstract 一致性校验摘要信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CompareAbstractInfo GetAbstract() const;

                    /**
                     * 判断参数 Abstract 是否已赋值
                     * @return Abstract 是否已赋值
                     * 
                     */
                    bool AbstractHasBeenSet() const;

                    /**
                     * 获取一致性校验详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Detail 一致性校验详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CompareDetailInfo GetDetail() const;

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取增量校验阶段的摘要
                     * @return IncAbstract 增量校验阶段的摘要
                     * 
                     */
                    IncCompareAbstractInfo GetIncAbstract() const;

                    /**
                     * 判断参数 IncAbstract 是否已赋值
                     * @return IncAbstract 是否已赋值
                     * 
                     */
                    bool IncAbstractHasBeenSet() const;

                private:

                    /**
                     * 一致性校验摘要信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CompareAbstractInfo m_abstract;
                    bool m_abstractHasBeenSet;

                    /**
                     * 一致性校验详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CompareDetailInfo m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 增量校验阶段的摘要
                     */
                    IncCompareAbstractInfo m_incAbstract;
                    bool m_incAbstractHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCCOMPAREREPORTRESPONSE_H_
