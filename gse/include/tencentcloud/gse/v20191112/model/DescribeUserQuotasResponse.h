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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEUSERQUOTASRESPONSE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEUSERQUOTASRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/QuotaResource.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeUserQuotas返回参数结构体
                */
                class DescribeUserQuotasResponse : public AbstractModel
                {
                public:
                    DescribeUserQuotasResponse();
                    ~DescribeUserQuotasResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取配额信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuotaResource 配额信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QuotaResource> GetQuotaResource() const;

                    /**
                     * 判断参数 QuotaResource 是否已赋值
                     * @return QuotaResource 是否已赋值
                     * 
                     */
                    bool QuotaResourceHasBeenSet() const;

                    /**
                     * 获取配额信息列表总数，最小值0
                     * @return Total 配额信息列表总数，最小值0
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 配额信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QuotaResource> m_quotaResource;
                    bool m_quotaResourceHasBeenSet;

                    /**
                     * 配额信息列表总数，最小值0
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEUSERQUOTASRESPONSE_H_
