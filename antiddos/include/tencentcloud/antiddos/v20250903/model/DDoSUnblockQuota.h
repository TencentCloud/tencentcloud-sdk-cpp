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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DDOSUNBLOCKQUOTA_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DDOSUNBLOCKQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            namespace Model
            {
                /**
                * 当前账号剩余解封配额信息。购买高防产品的用户默认解封配额为三个资源，系统将在每天零点（UTC+8）时区重置解封配额数，当天未使用的解封配额数不会累计到次日；DDoS 高防包（轻量版）解封配额数为每月三个资源，每月重置。
                */
                class DDoSUnblockQuota : public AbstractModel
                {
                public:
                    DDoSUnblockQuota();
                    ~DDoSUnblockQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>解封次数配额总数。</p>
                     * @return TotalQuota <p>解封次数配额总数。</p>
                     * 
                     */
                    uint64_t GetTotalQuota() const;

                    /**
                     * 设置<p>解封次数配额总数。</p>
                     * @param _totalQuota <p>解封次数配额总数。</p>
                     * 
                     */
                    void SetTotalQuota(const uint64_t& _totalQuota);

                    /**
                     * 判断参数 TotalQuota 是否已赋值
                     * @return TotalQuota 是否已赋值
                     * 
                     */
                    bool TotalQuotaHasBeenSet() const;

                    /**
                     * 获取<p>已使用的配额总数。</p>
                     * @return UsedQuota <p>已使用的配额总数。</p>
                     * 
                     */
                    uint64_t GetUsedQuota() const;

                    /**
                     * 设置<p>已使用的配额总数。</p>
                     * @param _usedQuota <p>已使用的配额总数。</p>
                     * 
                     */
                    void SetUsedQuota(const uint64_t& _usedQuota);

                    /**
                     * 判断参数 UsedQuota 是否已赋值
                     * @return UsedQuota 是否已赋值
                     * 
                     */
                    bool UsedQuotaHasBeenSet() const;

                    /**
                     * 获取<p>配额生效的起始时间。</p>
                     * @return QuotaStartTime <p>配额生效的起始时间。</p>
                     * 
                     */
                    std::string GetQuotaStartTime() const;

                    /**
                     * 设置<p>配额生效的起始时间。</p>
                     * @param _quotaStartTime <p>配额生效的起始时间。</p>
                     * 
                     */
                    void SetQuotaStartTime(const std::string& _quotaStartTime);

                    /**
                     * 判断参数 QuotaStartTime 是否已赋值
                     * @return QuotaStartTime 是否已赋值
                     * 
                     */
                    bool QuotaStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>配额生效的结束时间。</p>
                     * @return QuotaEndTime <p>配额生效的结束时间。</p>
                     * 
                     */
                    std::string GetQuotaEndTime() const;

                    /**
                     * 设置<p>配额生效的结束时间。</p>
                     * @param _quotaEndTime <p>配额生效的结束时间。</p>
                     * 
                     */
                    void SetQuotaEndTime(const std::string& _quotaEndTime);

                    /**
                     * 判断参数 QuotaEndTime 是否已赋值
                     * @return QuotaEndTime 是否已赋值
                     * 
                     */
                    bool QuotaEndTimeHasBeenSet() const;

                private:

                    /**
                     * <p>解封次数配额总数。</p>
                     */
                    uint64_t m_totalQuota;
                    bool m_totalQuotaHasBeenSet;

                    /**
                     * <p>已使用的配额总数。</p>
                     */
                    uint64_t m_usedQuota;
                    bool m_usedQuotaHasBeenSet;

                    /**
                     * <p>配额生效的起始时间。</p>
                     */
                    std::string m_quotaStartTime;
                    bool m_quotaStartTimeHasBeenSet;

                    /**
                     * <p>配额生效的结束时间。</p>
                     */
                    std::string m_quotaEndTime;
                    bool m_quotaEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DDOSUNBLOCKQUOTA_H_
