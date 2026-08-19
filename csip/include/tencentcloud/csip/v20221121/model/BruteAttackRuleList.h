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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BRUTEATTACKRULELIST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BRUTEATTACKRULELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 暴力破解判定规则列表
                */
                class BruteAttackRuleList : public AbstractModel
                {
                public:
                    BruteAttackRuleList();
                    ~BruteAttackRuleList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>爆破事件发生的时间范围，单位：秒</p>
                     * @return TimeRange <p>爆破事件发生的时间范围，单位：秒</p>
                     * 
                     */
                    uint64_t GetTimeRange() const;

                    /**
                     * 设置<p>爆破事件发生的时间范围，单位：秒</p>
                     * @param _timeRange <p>爆破事件发生的时间范围，单位：秒</p>
                     * 
                     */
                    void SetTimeRange(const uint64_t& _timeRange);

                    /**
                     * 判断参数 TimeRange 是否已赋值
                     * @return TimeRange 是否已赋值
                     * 
                     */
                    bool TimeRangeHasBeenSet() const;

                    /**
                     * 获取<p>爆破事件失败次数</p>
                     * @return LoginFailTimes <p>爆破事件失败次数</p>
                     * 
                     */
                    uint64_t GetLoginFailTimes() const;

                    /**
                     * 设置<p>爆破事件失败次数</p>
                     * @param _loginFailTimes <p>爆破事件失败次数</p>
                     * 
                     */
                    void SetLoginFailTimes(const uint64_t& _loginFailTimes);

                    /**
                     * 判断参数 LoginFailTimes 是否已赋值
                     * @return LoginFailTimes 是否已赋值
                     * 
                     */
                    bool LoginFailTimesHasBeenSet() const;

                    /**
                     * 获取<p>规则是否为空，为空则填充默认规则</p>
                     * @return Enable <p>规则是否为空，为空则填充默认规则</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>规则是否为空，为空则填充默认规则</p>
                     * @param _enable <p>规则是否为空，为空则填充默认规则</p>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>爆破事件发生的时间范围，单位：秒（默认规则）</p>
                     * @return TimeRangeDefault <p>爆破事件发生的时间范围，单位：秒（默认规则）</p>
                     * 
                     */
                    uint64_t GetTimeRangeDefault() const;

                    /**
                     * 设置<p>爆破事件发生的时间范围，单位：秒（默认规则）</p>
                     * @param _timeRangeDefault <p>爆破事件发生的时间范围，单位：秒（默认规则）</p>
                     * 
                     */
                    void SetTimeRangeDefault(const uint64_t& _timeRangeDefault);

                    /**
                     * 判断参数 TimeRangeDefault 是否已赋值
                     * @return TimeRangeDefault 是否已赋值
                     * 
                     */
                    bool TimeRangeDefaultHasBeenSet() const;

                    /**
                     * 获取<p>爆破事件失败次数（默认规则）</p>
                     * @return LoginFailTimesDefault <p>爆破事件失败次数（默认规则）</p>
                     * 
                     */
                    uint64_t GetLoginFailTimesDefault() const;

                    /**
                     * 设置<p>爆破事件失败次数（默认规则）</p>
                     * @param _loginFailTimesDefault <p>爆破事件失败次数（默认规则）</p>
                     * 
                     */
                    void SetLoginFailTimesDefault(const uint64_t& _loginFailTimesDefault);

                    /**
                     * 判断参数 LoginFailTimesDefault 是否已赋值
                     * @return LoginFailTimesDefault 是否已赋值
                     * 
                     */
                    bool LoginFailTimesDefaultHasBeenSet() const;

                private:

                    /**
                     * <p>爆破事件发生的时间范围，单位：秒</p>
                     */
                    uint64_t m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * <p>爆破事件失败次数</p>
                     */
                    uint64_t m_loginFailTimes;
                    bool m_loginFailTimesHasBeenSet;

                    /**
                     * <p>规则是否为空，为空则填充默认规则</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>爆破事件发生的时间范围，单位：秒（默认规则）</p>
                     */
                    uint64_t m_timeRangeDefault;
                    bool m_timeRangeDefaultHasBeenSet;

                    /**
                     * <p>爆破事件失败次数（默认规则）</p>
                     */
                    uint64_t m_loginFailTimesDefault;
                    bool m_loginFailTimesDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BRUTEATTACKRULELIST_H_
