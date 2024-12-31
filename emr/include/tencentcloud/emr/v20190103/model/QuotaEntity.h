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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_QUOTAENTITY_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_QUOTAENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 获取CVM配额
                */
                class QuotaEntity : public AbstractModel
                {
                public:
                    QuotaEntity();
                    ~QuotaEntity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取已使用配额
                     * @return UsedQuota 已使用配额
                     * 
                     */
                    int64_t GetUsedQuota() const;

                    /**
                     * 设置已使用配额
                     * @param _usedQuota 已使用配额
                     * 
                     */
                    void SetUsedQuota(const int64_t& _usedQuota);

                    /**
                     * 判断参数 UsedQuota 是否已赋值
                     * @return UsedQuota 是否已赋值
                     * 
                     */
                    bool UsedQuotaHasBeenSet() const;

                    /**
                     * 获取剩余配额
                     * @return RemainingQuota 剩余配额
                     * 
                     */
                    int64_t GetRemainingQuota() const;

                    /**
                     * 设置剩余配额
                     * @param _remainingQuota 剩余配额
                     * 
                     */
                    void SetRemainingQuota(const int64_t& _remainingQuota);

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
                    int64_t GetTotalQuota() const;

                    /**
                     * 设置总配额
                     * @param _totalQuota 总配额
                     * 
                     */
                    void SetTotalQuota(const int64_t& _totalQuota);

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
                     * 已使用配额
                     */
                    int64_t m_usedQuota;
                    bool m_usedQuotaHasBeenSet;

                    /**
                     * 剩余配额
                     */
                    int64_t m_remainingQuota;
                    bool m_remainingQuotaHasBeenSet;

                    /**
                     * 总配额
                     */
                    int64_t m_totalQuota;
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

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_QUOTAENTITY_H_
