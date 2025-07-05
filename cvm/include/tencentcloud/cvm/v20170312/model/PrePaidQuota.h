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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_PREPAIDQUOTA_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_PREPAIDQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 预付费实例配额
                */
                class PrePaidQuota : public AbstractModel
                {
                public:
                    PrePaidQuota();
                    ~PrePaidQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当月已使用配额
                     * @return UsedQuota 当月已使用配额
                     * 
                     */
                    uint64_t GetUsedQuota() const;

                    /**
                     * 设置当月已使用配额
                     * @param _usedQuota 当月已使用配额
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
                     * 获取单次购买最大数量
                     * @return OnceQuota 单次购买最大数量
                     * 
                     */
                    uint64_t GetOnceQuota() const;

                    /**
                     * 设置单次购买最大数量
                     * @param _onceQuota 单次购买最大数量
                     * 
                     */
                    void SetOnceQuota(const uint64_t& _onceQuota);

                    /**
                     * 判断参数 OnceQuota 是否已赋值
                     * @return OnceQuota 是否已赋值
                     * 
                     */
                    bool OnceQuotaHasBeenSet() const;

                    /**
                     * 获取剩余配额
                     * @return RemainingQuota 剩余配额
                     * 
                     */
                    uint64_t GetRemainingQuota() const;

                    /**
                     * 设置剩余配额
                     * @param _remainingQuota 剩余配额
                     * 
                     */
                    void SetRemainingQuota(const uint64_t& _remainingQuota);

                    /**
                     * 判断参数 RemainingQuota 是否已赋值
                     * @return RemainingQuota 是否已赋值
                     * 
                     */
                    bool RemainingQuotaHasBeenSet() const;

                    /**
                     * 获取总配额
                     * @return TotalQuota 总配额
                     * 
                     */
                    uint64_t GetTotalQuota() const;

                    /**
                     * 设置总配额
                     * @param _totalQuota 总配额
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
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * 当月已使用配额
                     */
                    uint64_t m_usedQuota;
                    bool m_usedQuotaHasBeenSet;

                    /**
                     * 单次购买最大数量
                     */
                    uint64_t m_onceQuota;
                    bool m_onceQuotaHasBeenSet;

                    /**
                     * 剩余配额
                     */
                    uint64_t m_remainingQuota;
                    bool m_remainingQuotaHasBeenSet;

                    /**
                     * 总配额
                     */
                    uint64_t m_totalQuota;
                    bool m_totalQuotaHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_PREPAIDQUOTA_H_
