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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_INSTANCECHARGEPREPAID_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_INSTANCECHARGEPREPAID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * 包年包月配置
                */
                class InstanceChargePrepaid : public AbstractModel
                {
                public:
                    InstanceChargePrepaid();
                    ~InstanceChargePrepaid() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取后付费计费周期，单位（月）：
1，2，3，4，5，，6，7， 8，9，10，11，12，24，36，48，60
                     * @return Period 后付费计费周期，单位（月）：
1，2，3，4，5，，6，7， 8，9，10，11，12，24，36，48，60
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置后付费计费周期，单位（月）：
1，2，3，4，5，，6，7， 8，9，10，11，12，24，36，48，60
                     * @param _period 后付费计费周期，单位（月）：
1，2，3，4，5，，6，7， 8，9，10，11，12，24，36，48，60
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取预付费续费方式：
- NOTIFY_AND_AUTO_RENEW：通知用户过期，且自动续费 (默认）
- NOTIFY_AND_MANUAL_RENEW：通知用户过期，但不自动续费
- DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知用户过期，也不自动续费

                     * @return RenewFlag 预付费续费方式：
- NOTIFY_AND_AUTO_RENEW：通知用户过期，且自动续费 (默认）
- NOTIFY_AND_MANUAL_RENEW：通知用户过期，但不自动续费
- DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知用户过期，也不自动续费

                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置预付费续费方式：
- NOTIFY_AND_AUTO_RENEW：通知用户过期，且自动续费 (默认）
- NOTIFY_AND_MANUAL_RENEW：通知用户过期，但不自动续费
- DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知用户过期，也不自动续费

                     * @param _renewFlag 预付费续费方式：
- NOTIFY_AND_AUTO_RENEW：通知用户过期，且自动续费 (默认）
- NOTIFY_AND_MANUAL_RENEW：通知用户过期，但不自动续费
- DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知用户过期，也不自动续费

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
                     * 后付费计费周期，单位（月）：
1，2，3，4，5，，6，7， 8，9，10，11，12，24，36，48，60
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 预付费续费方式：
- NOTIFY_AND_AUTO_RENEW：通知用户过期，且自动续费 (默认）
- NOTIFY_AND_MANUAL_RENEW：通知用户过期，但不自动续费
- DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知用户过期，也不自动续费

                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_INSTANCECHARGEPREPAID_H_
