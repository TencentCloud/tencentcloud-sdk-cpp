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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEMODELQUOTARESPONSE_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEMODELQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeModelQuota返回参数结构体
                */
                class DescribeModelQuotaResponse : public AbstractModel
                {
                public:
                    DescribeModelQuotaResponse();
                    ~DescribeModelQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型 ID。</p>
                     * @return ModelId <p>模型 ID。</p>
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取<p>TPM 限制（Tokens Per Minute）。模型无配额配置时不返回此字段。</p>
                     * @return TPMLimit <p>TPM 限制（Tokens Per Minute）。模型无配额配置时不返回此字段。</p>
                     * 
                     */
                    int64_t GetTPMLimit() const;

                    /**
                     * 判断参数 TPMLimit 是否已赋值
                     * @return TPMLimit 是否已赋值
                     * 
                     */
                    bool TPMLimitHasBeenSet() const;

                    /**
                     * 获取<p>RPM 限制（Request Per Minute）。模型无配额配置时不返回此字段。</p>
                     * @return RPMLimit <p>RPM 限制（Request Per Minute）。模型无配额配置时不返回此字段。</p>
                     * 
                     */
                    int64_t GetRPMLimit() const;

                    /**
                     * 判断参数 RPMLimit 是否已赋值
                     * @return RPMLimit 是否已赋值
                     * 
                     */
                    bool RPMLimitHasBeenSet() const;

                    /**
                     * 获取<p>TPM 保障包 input 配额</p>
                     * @return TPMInputQuotaLimit <p>TPM 保障包 input 配额</p>
                     * 
                     */
                    int64_t GetTPMInputQuotaLimit() const;

                    /**
                     * 判断参数 TPMInputQuotaLimit 是否已赋值
                     * @return TPMInputQuotaLimit 是否已赋值
                     * 
                     */
                    bool TPMInputQuotaLimitHasBeenSet() const;

                    /**
                     * 获取<p>TPM 保障包 output 配额</p>
                     * @return TPMOutputQuotaLimit <p>TPM 保障包 output 配额</p>
                     * 
                     */
                    int64_t GetTPMOutputQuotaLimit() const;

                    /**
                     * 判断参数 TPMOutputQuotaLimit 是否已赋值
                     * @return TPMOutputQuotaLimit 是否已赋值
                     * 
                     */
                    bool TPMOutputQuotaLimitHasBeenSet() const;

                    /**
                     * 获取<p>TPM 预留 input 配额</p>
                     * @return TPMInputReserveLimit <p>TPM 预留 input 配额</p>
                     * 
                     */
                    int64_t GetTPMInputReserveLimit() const;

                    /**
                     * 判断参数 TPMInputReserveLimit 是否已赋值
                     * @return TPMInputReserveLimit 是否已赋值
                     * 
                     */
                    bool TPMInputReserveLimitHasBeenSet() const;

                    /**
                     * 获取<p>TPM 预留 output 配额</p>
                     * @return TPMOutputReserveLimit <p>TPM 预留 output 配额</p>
                     * 
                     */
                    int64_t GetTPMOutputReserveLimit() const;

                    /**
                     * 判断参数 TPMOutputReserveLimit 是否已赋值
                     * @return TPMOutputReserveLimit 是否已赋值
                     * 
                     */
                    bool TPMOutputReserveLimitHasBeenSet() const;

                private:

                    /**
                     * <p>模型 ID。</p>
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * <p>TPM 限制（Tokens Per Minute）。模型无配额配置时不返回此字段。</p>
                     */
                    int64_t m_tPMLimit;
                    bool m_tPMLimitHasBeenSet;

                    /**
                     * <p>RPM 限制（Request Per Minute）。模型无配额配置时不返回此字段。</p>
                     */
                    int64_t m_rPMLimit;
                    bool m_rPMLimitHasBeenSet;

                    /**
                     * <p>TPM 保障包 input 配额</p>
                     */
                    int64_t m_tPMInputQuotaLimit;
                    bool m_tPMInputQuotaLimitHasBeenSet;

                    /**
                     * <p>TPM 保障包 output 配额</p>
                     */
                    int64_t m_tPMOutputQuotaLimit;
                    bool m_tPMOutputQuotaLimitHasBeenSet;

                    /**
                     * <p>TPM 预留 input 配额</p>
                     */
                    int64_t m_tPMInputReserveLimit;
                    bool m_tPMInputReserveLimitHasBeenSet;

                    /**
                     * <p>TPM 预留 output 配额</p>
                     */
                    int64_t m_tPMOutputReserveLimit;
                    bool m_tPMOutputReserveLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEMODELQUOTARESPONSE_H_
