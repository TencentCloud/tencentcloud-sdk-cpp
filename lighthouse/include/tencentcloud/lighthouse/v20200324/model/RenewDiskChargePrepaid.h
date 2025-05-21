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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENEWDISKCHARGEPREPAID_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENEWDISKCHARGEPREPAID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 续费云硬盘包年包月相关参数设置。
                */
                class RenewDiskChargePrepaid : public AbstractModel
                {
                public:
                    RenewDiskChargePrepaid();
                    ~RenewDiskChargePrepaid() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取续费周期。
单位：月。
取值范围: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36]
                     * @return Period 续费周期。
单位：月。
取值范围: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36]
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置续费周期。
单位：月。
取值范围: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36]
                     * @param _period 续费周期。
单位：月。
取值范围: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36]
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取自动续费标识。
取值范围：
<li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li>
<li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费，用户需要手动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不自动续费，且不通知</li>
默认取值：NOTIFY_AND_MANUAL_RENEW。若该参数指定为NOTIFY_AND_AUTO_RENEW，在账户余额充足的情况下，云硬盘到期后将按月自动续费。
                     * @return RenewFlag 自动续费标识。
取值范围：
<li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li>
<li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费，用户需要手动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不自动续费，且不通知</li>
默认取值：NOTIFY_AND_MANUAL_RENEW。若该参数指定为NOTIFY_AND_AUTO_RENEW，在账户余额充足的情况下，云硬盘到期后将按月自动续费。
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置自动续费标识。
取值范围：
<li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li>
<li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费，用户需要手动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不自动续费，且不通知</li>
默认取值：NOTIFY_AND_MANUAL_RENEW。若该参数指定为NOTIFY_AND_AUTO_RENEW，在账户余额充足的情况下，云硬盘到期后将按月自动续费。
                     * @param _renewFlag 自动续费标识。
取值范围：
<li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li>
<li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费，用户需要手动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不自动续费，且不通知</li>
默认取值：NOTIFY_AND_MANUAL_RENEW。若该参数指定为NOTIFY_AND_AUTO_RENEW，在账户余额充足的情况下，云硬盘到期后将按月自动续费。
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取周期单位。取值范围：“m”(月)。默认值: "m"。
                     * @return TimeUnit 周期单位。取值范围：“m”(月)。默认值: "m"。
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置周期单位。取值范围：“m”(月)。默认值: "m"。
                     * @param _timeUnit 周期单位。取值范围：“m”(月)。默认值: "m"。
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取当前实例到期时间。如“2018-01-01 00:00:00”。
指定该参数即可对齐云硬盘所挂载的实例到期时间。
该参数与Period必须指定其一，且不支持同时指定。
该参数值必须大于入参中云硬盘的过期时间。
                     * @return CurInstanceDeadline 当前实例到期时间。如“2018-01-01 00:00:00”。
指定该参数即可对齐云硬盘所挂载的实例到期时间。
该参数与Period必须指定其一，且不支持同时指定。
该参数值必须大于入参中云硬盘的过期时间。
                     * 
                     */
                    std::string GetCurInstanceDeadline() const;

                    /**
                     * 设置当前实例到期时间。如“2018-01-01 00:00:00”。
指定该参数即可对齐云硬盘所挂载的实例到期时间。
该参数与Period必须指定其一，且不支持同时指定。
该参数值必须大于入参中云硬盘的过期时间。
                     * @param _curInstanceDeadline 当前实例到期时间。如“2018-01-01 00:00:00”。
指定该参数即可对齐云硬盘所挂载的实例到期时间。
该参数与Period必须指定其一，且不支持同时指定。
该参数值必须大于入参中云硬盘的过期时间。
                     * 
                     */
                    void SetCurInstanceDeadline(const std::string& _curInstanceDeadline);

                    /**
                     * 判断参数 CurInstanceDeadline 是否已赋值
                     * @return CurInstanceDeadline 是否已赋值
                     * 
                     */
                    bool CurInstanceDeadlineHasBeenSet() const;

                private:

                    /**
                     * 续费周期。
单位：月。
取值范围: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36]
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 自动续费标识。
取值范围：
<li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li>
<li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费，用户需要手动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不自动续费，且不通知</li>
默认取值：NOTIFY_AND_MANUAL_RENEW。若该参数指定为NOTIFY_AND_AUTO_RENEW，在账户余额充足的情况下，云硬盘到期后将按月自动续费。
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 周期单位。取值范围：“m”(月)。默认值: "m"。
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 当前实例到期时间。如“2018-01-01 00:00:00”。
指定该参数即可对齐云硬盘所挂载的实例到期时间。
该参数与Period必须指定其一，且不支持同时指定。
该参数值必须大于入参中云硬盘的过期时间。
                     */
                    std::string m_curInstanceDeadline;
                    bool m_curInstanceDeadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENEWDISKCHARGEPREPAID_H_
