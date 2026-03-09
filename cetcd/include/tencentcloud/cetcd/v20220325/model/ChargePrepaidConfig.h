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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_CHARGEPREPAIDCONFIG_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_CHARGEPREPAIDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * 预付费类型相关配置
                */
                class ChargePrepaidConfig : public AbstractModel
                {
                public:
                    ChargePrepaidConfig();
                    ~ChargePrepaidConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取预付费购买周期，单位：月
                     * @return Period 预付费购买周期，单位：月
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置预付费购买周期，单位：月
                     * @param _period 预付费购买周期，单位：月
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
                     * 获取预付费自动续费设置：
NOTIFY_AND_MANUAL_RENEW：表示默认状态(用户未设置，即初始状态)， NOTIFY_AND_AUTO_RENEW：表示自动续费，DISABLE_NOTIFY_AND_MANUAL_RENEW：表示明确不自动续费(用户设置)
                     * @return RenewFlag 预付费自动续费设置：
NOTIFY_AND_MANUAL_RENEW：表示默认状态(用户未设置，即初始状态)， NOTIFY_AND_AUTO_RENEW：表示自动续费，DISABLE_NOTIFY_AND_MANUAL_RENEW：表示明确不自动续费(用户设置)
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置预付费自动续费设置：
NOTIFY_AND_MANUAL_RENEW：表示默认状态(用户未设置，即初始状态)， NOTIFY_AND_AUTO_RENEW：表示自动续费，DISABLE_NOTIFY_AND_MANUAL_RENEW：表示明确不自动续费(用户设置)
                     * @param _renewFlag 预付费自动续费设置：
NOTIFY_AND_MANUAL_RENEW：表示默认状态(用户未设置，即初始状态)， NOTIFY_AND_AUTO_RENEW：表示自动续费，DISABLE_NOTIFY_AND_MANUAL_RENEW：表示明确不自动续费(用户设置)
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
                     * 预付费购买周期，单位：月
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 预付费自动续费设置：
NOTIFY_AND_MANUAL_RENEW：表示默认状态(用户未设置，即初始状态)， NOTIFY_AND_AUTO_RENEW：表示自动续费，DISABLE_NOTIFY_AND_MANUAL_RENEW：表示明确不自动续费(用户设置)
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_CHARGEPREPAIDCONFIG_H_
