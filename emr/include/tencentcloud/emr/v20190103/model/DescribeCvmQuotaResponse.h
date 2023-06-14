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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECVMQUOTARESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECVMQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/QuotaEntity.h>
#include <tencentcloud/emr/v20190103/model/PodSaleSpec.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeCvmQuota返回参数结构体
                */
                class DescribeCvmQuotaResponse : public AbstractModel
                {
                public:
                    DescribeCvmQuotaResponse();
                    ~DescribeCvmQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取后付费配额列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostPaidQuotaSet 后付费配额列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QuotaEntity> GetPostPaidQuotaSet() const;

                    /**
                     * 判断参数 PostPaidQuotaSet 是否已赋值
                     * @return PostPaidQuotaSet 是否已赋值
                     * 
                     */
                    bool PostPaidQuotaSetHasBeenSet() const;

                    /**
                     * 获取竞价实例配额列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpotPaidQuotaSet 竞价实例配额列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QuotaEntity> GetSpotPaidQuotaSet() const;

                    /**
                     * 判断参数 SpotPaidQuotaSet 是否已赋值
                     * @return SpotPaidQuotaSet 是否已赋值
                     * 
                     */
                    bool SpotPaidQuotaSetHasBeenSet() const;

                    /**
                     * 获取eks配额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EksQuotaSet eks配额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PodSaleSpec> GetEksQuotaSet() const;

                    /**
                     * 判断参数 EksQuotaSet 是否已赋值
                     * @return EksQuotaSet 是否已赋值
                     * 
                     */
                    bool EksQuotaSetHasBeenSet() const;

                private:

                    /**
                     * 后付费配额列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QuotaEntity> m_postPaidQuotaSet;
                    bool m_postPaidQuotaSetHasBeenSet;

                    /**
                     * 竞价实例配额列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QuotaEntity> m_spotPaidQuotaSet;
                    bool m_spotPaidQuotaSetHasBeenSet;

                    /**
                     * eks配额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PodSaleSpec> m_eksQuotaSet;
                    bool m_eksQuotaSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECVMQUOTARESPONSE_H_
