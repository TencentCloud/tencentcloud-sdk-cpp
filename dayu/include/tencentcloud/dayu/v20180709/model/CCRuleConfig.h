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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CCRULECONFIG_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CCRULECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 7层CC自定义规则
                */
                class CCRuleConfig : public AbstractModel
                {
                public:
                    CCRuleConfig();
                    ~CCRuleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取统计周期，单位秒，取值[10, 30, 60]
                     * @return Period 统计周期，单位秒，取值[10, 30, 60]
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置统计周期，单位秒，取值[10, 30, 60]
                     * @param _period 统计周期，单位秒，取值[10, 30, 60]
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
                     * 获取访问次数，取值[1-10000]
                     * @return ReqNumber 访问次数，取值[1-10000]
                     * 
                     */
                    uint64_t GetReqNumber() const;

                    /**
                     * 设置访问次数，取值[1-10000]
                     * @param _reqNumber 访问次数，取值[1-10000]
                     * 
                     */
                    void SetReqNumber(const uint64_t& _reqNumber);

                    /**
                     * 判断参数 ReqNumber 是否已赋值
                     * @return ReqNumber 是否已赋值
                     * 
                     */
                    bool ReqNumberHasBeenSet() const;

                    /**
                     * 获取执行动作，取值["alg"（人机识别）, "drop"（拦截）]
                     * @return Action 执行动作，取值["alg"（人机识别）, "drop"（拦截）]
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置执行动作，取值["alg"（人机识别）, "drop"（拦截）]
                     * @param _action 执行动作，取值["alg"（人机识别）, "drop"（拦截）]
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取执行时间，单位秒，取值[1-900]
                     * @return ExeDuration 执行时间，单位秒，取值[1-900]
                     * 
                     */
                    uint64_t GetExeDuration() const;

                    /**
                     * 设置执行时间，单位秒，取值[1-900]
                     * @param _exeDuration 执行时间，单位秒，取值[1-900]
                     * 
                     */
                    void SetExeDuration(const uint64_t& _exeDuration);

                    /**
                     * 判断参数 ExeDuration 是否已赋值
                     * @return ExeDuration 是否已赋值
                     * 
                     */
                    bool ExeDurationHasBeenSet() const;

                private:

                    /**
                     * 统计周期，单位秒，取值[10, 30, 60]
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 访问次数，取值[1-10000]
                     */
                    uint64_t m_reqNumber;
                    bool m_reqNumberHasBeenSet;

                    /**
                     * 执行动作，取值["alg"（人机识别）, "drop"（拦截）]
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 执行时间，单位秒，取值[1-900]
                     */
                    uint64_t m_exeDuration;
                    bool m_exeDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CCRULECONFIG_H_
