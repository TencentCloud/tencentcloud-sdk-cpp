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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_SERVICECHARGEPREPAID_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_SERVICECHARGEPREPAID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * 服务级包年包月入参
                */
                class ServiceChargePrepaid : public AbstractModel
                {
                public:
                    ServiceChargePrepaid();
                    ~ServiceChargePrepaid() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>购买时长，默认1</p>
                     * @return Period <p>购买时长，默认1</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>购买时长，默认1</p>
                     * @param _period <p>购买时长，默认1</p>
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
                     * 获取<p>时长单位：MONTH(月)/DAY(天)</p>
                     * @return TimeUnit <p>时长单位：MONTH(月)/DAY(天)</p>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>时长单位：MONTH(月)/DAY(天)</p>
                     * @param _timeUnit <p>时长单位：MONTH(月)/DAY(天)</p>
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
                     * 获取<p>自动续费：NOTIFY_AND_AUTO_RENEW/NOTIFY_AND_MANUAL_RENEW/DISABLE_NOTIFY_AND_MANUAL_RENEW</p>
                     * @return RenewFlag <p>自动续费：NOTIFY_AND_AUTO_RENEW/NOTIFY_AND_MANUAL_RENEW/DISABLE_NOTIFY_AND_MANUAL_RENEW</p>
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置<p>自动续费：NOTIFY_AND_AUTO_RENEW/NOTIFY_AND_MANUAL_RENEW/DISABLE_NOTIFY_AND_MANUAL_RENEW</p>
                     * @param _renewFlag <p>自动续费：NOTIFY_AND_AUTO_RENEW/NOTIFY_AND_MANUAL_RENEW/DISABLE_NOTIFY_AND_MANUAL_RENEW</p>
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * <p>购买时长，默认1</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>时长单位：MONTH(月)/DAY(天)</p>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>自动续费：NOTIFY_AND_AUTO_RENEW/NOTIFY_AND_MANUAL_RENEW/DISABLE_NOTIFY_AND_MANUAL_RENEW</p>
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_SERVICECHARGEPREPAID_H_
