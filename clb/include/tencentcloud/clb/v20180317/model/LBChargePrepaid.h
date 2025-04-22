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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_LBCHARGEPREPAID_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_LBCHARGEPREPAID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * lb实例包年包月相关配置属性
                */
                class LBChargePrepaid : public AbstractModel
                {
                public:
                    LBChargePrepaid();
                    ~LBChargePrepaid() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取续费类型：AUTO_RENEW 自动续费，  MANUAL_RENEW 手动续费
                     * @return RenewFlag 续费类型：AUTO_RENEW 自动续费，  MANUAL_RENEW 手动续费
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置续费类型：AUTO_RENEW 自动续费，  MANUAL_RENEW 手动续费
                     * @param _renewFlag 续费类型：AUTO_RENEW 自动续费，  MANUAL_RENEW 手动续费
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
                     * 获取购买时长，单位：月
                     * @return Period 购买时长，单位：月
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置购买时长，单位：月
                     * @param _period 购买时长，单位：月
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * 续费类型：AUTO_RENEW 自动续费，  MANUAL_RENEW 手动续费
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 购买时长，单位：月
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LBCHARGEPREPAID_H_
