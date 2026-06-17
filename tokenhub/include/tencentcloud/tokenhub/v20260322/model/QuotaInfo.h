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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_QUOTAINFO_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_QUOTAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Token 限额信息
                */
                class QuotaInfo : public AbstractModel
                {
                public:
                    QuotaInfo();
                    ~QuotaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取限额包 ID。
                     * @return PkgId 限额包 ID。
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置限额包 ID。
                     * @param _pkgId 限额包 ID。
                     * 
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     * 
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取限额包状态。取值：1（正常）、3（已耗尽）、4（已销毁）。
                     * @return Status 限额包状态。取值：1（正常）、3（已耗尽）、4（已销毁）。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置限额包状态。取值：1（正常）、3（已耗尽）、4（已销毁）。
                     * @param _status 限额包状态。取值：1（正常）、3（已耗尽）、4（已销毁）。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取限额周期。取值：d（按日）、m（按月）、lifetime（总额度，不重置）。
                     * @return CycleUnit 限额周期。取值：d（按日）、m（按月）、lifetime（总额度，不重置）。
                     * 
                     */
                    std::string GetCycleUnit() const;

                    /**
                     * 设置限额周期。取值：d（按日）、m（按月）、lifetime（总额度，不重置）。
                     * @param _cycleUnit 限额周期。取值：d（按日）、m（按月）、lifetime（总额度，不重置）。
                     * 
                     */
                    void SetCycleUnit(const std::string& _cycleUnit);

                    /**
                     * 判断参数 CycleUnit 是否已赋值
                     * @return CycleUnit 是否已赋值
                     * 
                     */
                    bool CycleUnitHasBeenSet() const;

                    /**
                     * 获取维度当期限额总量（Token 数）。使用字符串避免大数精度丢失。
                     * @return CycleCredits 维度当期限额总量（Token 数）。使用字符串避免大数精度丢失。
                     * 
                     */
                    std::string GetCycleCredits() const;

                    /**
                     * 设置维度当期限额总量（Token 数）。使用字符串避免大数精度丢失。
                     * @param _cycleCredits 维度当期限额总量（Token 数）。使用字符串避免大数精度丢失。
                     * 
                     */
                    void SetCycleCredits(const std::string& _cycleCredits);

                    /**
                     * 判断参数 CycleCredits 是否已赋值
                     * @return CycleCredits 是否已赋值
                     * 
                     */
                    bool CycleCreditsHasBeenSet() const;

                    /**
                     * 获取维度当期已使用量（Token 数）。使用字符串避免大数精度丢失。
                     * @return CycleUsed 维度当期已使用量（Token 数）。使用字符串避免大数精度丢失。
                     * 
                     */
                    std::string GetCycleUsed() const;

                    /**
                     * 设置维度当期已使用量（Token 数）。使用字符串避免大数精度丢失。
                     * @param _cycleUsed 维度当期已使用量（Token 数）。使用字符串避免大数精度丢失。
                     * 
                     */
                    void SetCycleUsed(const std::string& _cycleUsed);

                    /**
                     * 判断参数 CycleUsed 是否已赋值
                     * @return CycleUsed 是否已赋值
                     * 
                     */
                    bool CycleUsedHasBeenSet() const;

                    /**
                     * 获取限额生效起始时间。
                     * @return StartTime 限额生效起始时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置限额生效起始时间。
                     * @param _startTime 限额生效起始时间。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取限额过期时间。
                     * @return ExpireTime 限额过期时间。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置限额过期时间。
                     * @param _expireTime 限额过期时间。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 限额包 ID。
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * 限额包状态。取值：1（正常）、3（已耗尽）、4（已销毁）。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 限额周期。取值：d（按日）、m（按月）、lifetime（总额度，不重置）。
                     */
                    std::string m_cycleUnit;
                    bool m_cycleUnitHasBeenSet;

                    /**
                     * 维度当期限额总量（Token 数）。使用字符串避免大数精度丢失。
                     */
                    std::string m_cycleCredits;
                    bool m_cycleCreditsHasBeenSet;

                    /**
                     * 维度当期已使用量（Token 数）。使用字符串避免大数精度丢失。
                     */
                    std::string m_cycleUsed;
                    bool m_cycleUsedHasBeenSet;

                    /**
                     * 限额生效起始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 限额过期时间。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_QUOTAINFO_H_
