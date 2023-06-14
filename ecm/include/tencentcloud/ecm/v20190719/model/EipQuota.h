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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_EIPQUOTA_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_EIPQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 描述EIP配额信息
                */
                class EipQuota : public AbstractModel
                {
                public:
                    EipQuota();
                    ~EipQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配额名称，取值范围：
TOTAL_EIP_QUOTA：用户当前地域下EIP的配额数；
DAILY_EIP_APPLY：用户当前地域下今日申购次数；
DAILY_PUBLIC_IP_ASSIGN：用户当前地域下，重新分配公网 IP次数。
                     * @return QuotaId 配额名称，取值范围：
TOTAL_EIP_QUOTA：用户当前地域下EIP的配额数；
DAILY_EIP_APPLY：用户当前地域下今日申购次数；
DAILY_PUBLIC_IP_ASSIGN：用户当前地域下，重新分配公网 IP次数。
                     * 
                     */
                    std::string GetQuotaId() const;

                    /**
                     * 设置配额名称，取值范围：
TOTAL_EIP_QUOTA：用户当前地域下EIP的配额数；
DAILY_EIP_APPLY：用户当前地域下今日申购次数；
DAILY_PUBLIC_IP_ASSIGN：用户当前地域下，重新分配公网 IP次数。
                     * @param _quotaId 配额名称，取值范围：
TOTAL_EIP_QUOTA：用户当前地域下EIP的配额数；
DAILY_EIP_APPLY：用户当前地域下今日申购次数；
DAILY_PUBLIC_IP_ASSIGN：用户当前地域下，重新分配公网 IP次数。
                     * 
                     */
                    void SetQuotaId(const std::string& _quotaId);

                    /**
                     * 判断参数 QuotaId 是否已赋值
                     * @return QuotaId 是否已赋值
                     * 
                     */
                    bool QuotaIdHasBeenSet() const;

                    /**
                     * 获取当前数量
                     * @return QuotaCurrent 当前数量
                     * 
                     */
                    uint64_t GetQuotaCurrent() const;

                    /**
                     * 设置当前数量
                     * @param _quotaCurrent 当前数量
                     * 
                     */
                    void SetQuotaCurrent(const uint64_t& _quotaCurrent);

                    /**
                     * 判断参数 QuotaCurrent 是否已赋值
                     * @return QuotaCurrent 是否已赋值
                     * 
                     */
                    bool QuotaCurrentHasBeenSet() const;

                    /**
                     * 获取配额数量
                     * @return QuotaLimit 配额数量
                     * 
                     */
                    uint64_t GetQuotaLimit() const;

                    /**
                     * 设置配额数量
                     * @param _quotaLimit 配额数量
                     * 
                     */
                    void SetQuotaLimit(const uint64_t& _quotaLimit);

                    /**
                     * 判断参数 QuotaLimit 是否已赋值
                     * @return QuotaLimit 是否已赋值
                     * 
                     */
                    bool QuotaLimitHasBeenSet() const;

                private:

                    /**
                     * 配额名称，取值范围：
TOTAL_EIP_QUOTA：用户当前地域下EIP的配额数；
DAILY_EIP_APPLY：用户当前地域下今日申购次数；
DAILY_PUBLIC_IP_ASSIGN：用户当前地域下，重新分配公网 IP次数。
                     */
                    std::string m_quotaId;
                    bool m_quotaIdHasBeenSet;

                    /**
                     * 当前数量
                     */
                    uint64_t m_quotaCurrent;
                    bool m_quotaCurrentHasBeenSet;

                    /**
                     * 配额数量
                     */
                    uint64_t m_quotaLimit;
                    bool m_quotaLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_EIPQUOTA_H_
