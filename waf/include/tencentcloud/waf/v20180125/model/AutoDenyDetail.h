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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_AUTODENYDETAIL_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_AUTODENYDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Waf 攻击自动封禁详情
                */
                class AutoDenyDetail : public AbstractModel
                {
                public:
                    AutoDenyDetail();
                    ~AutoDenyDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取攻击封禁类型标签
                     * @return AttackTags 攻击封禁类型标签
                     * 
                     */
                    std::vector<std::string> GetAttackTags() const;

                    /**
                     * 设置攻击封禁类型标签
                     * @param _attackTags 攻击封禁类型标签
                     * 
                     */
                    void SetAttackTags(const std::vector<std::string>& _attackTags);

                    /**
                     * 判断参数 AttackTags 是否已赋值
                     * @return AttackTags 是否已赋值
                     * 
                     */
                    bool AttackTagsHasBeenSet() const;

                    /**
                     * 获取攻击次数阈值
                     * @return AttackThreshold 攻击次数阈值
                     * 
                     */
                    int64_t GetAttackThreshold() const;

                    /**
                     * 设置攻击次数阈值
                     * @param _attackThreshold 攻击次数阈值
                     * 
                     */
                    void SetAttackThreshold(const int64_t& _attackThreshold);

                    /**
                     * 判断参数 AttackThreshold 是否已赋值
                     * @return AttackThreshold 是否已赋值
                     * 
                     */
                    bool AttackThresholdHasBeenSet() const;

                    /**
                     * 获取自动封禁状态
                     * @return DefenseStatus 自动封禁状态
                     * 
                     */
                    int64_t GetDefenseStatus() const;

                    /**
                     * 设置自动封禁状态
                     * @param _defenseStatus 自动封禁状态
                     * 
                     */
                    void SetDefenseStatus(const int64_t& _defenseStatus);

                    /**
                     * 判断参数 DefenseStatus 是否已赋值
                     * @return DefenseStatus 是否已赋值
                     * 
                     */
                    bool DefenseStatusHasBeenSet() const;

                    /**
                     * 获取攻击时间阈值
                     * @return TimeThreshold 攻击时间阈值
                     * 
                     */
                    int64_t GetTimeThreshold() const;

                    /**
                     * 设置攻击时间阈值
                     * @param _timeThreshold 攻击时间阈值
                     * 
                     */
                    void SetTimeThreshold(const int64_t& _timeThreshold);

                    /**
                     * 判断参数 TimeThreshold 是否已赋值
                     * @return TimeThreshold 是否已赋值
                     * 
                     */
                    bool TimeThresholdHasBeenSet() const;

                    /**
                     * 获取自动封禁时间
                     * @return DenyTimeThreshold 自动封禁时间
                     * 
                     */
                    int64_t GetDenyTimeThreshold() const;

                    /**
                     * 设置自动封禁时间
                     * @param _denyTimeThreshold 自动封禁时间
                     * 
                     */
                    void SetDenyTimeThreshold(const int64_t& _denyTimeThreshold);

                    /**
                     * 判断参数 DenyTimeThreshold 是否已赋值
                     * @return DenyTimeThreshold 是否已赋值
                     * 
                     */
                    bool DenyTimeThresholdHasBeenSet() const;

                    /**
                     * 获取最后更新时间
                     * @return LastUpdateTime 最后更新时间
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置最后更新时间
                     * @param _lastUpdateTime 最后更新时间
                     * 
                     */
                    void SetLastUpdateTime(const std::string& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 攻击封禁类型标签
                     */
                    std::vector<std::string> m_attackTags;
                    bool m_attackTagsHasBeenSet;

                    /**
                     * 攻击次数阈值
                     */
                    int64_t m_attackThreshold;
                    bool m_attackThresholdHasBeenSet;

                    /**
                     * 自动封禁状态
                     */
                    int64_t m_defenseStatus;
                    bool m_defenseStatusHasBeenSet;

                    /**
                     * 攻击时间阈值
                     */
                    int64_t m_timeThreshold;
                    bool m_timeThresholdHasBeenSet;

                    /**
                     * 自动封禁时间
                     */
                    int64_t m_denyTimeThreshold;
                    bool m_denyTimeThresholdHasBeenSet;

                    /**
                     * 最后更新时间
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_AUTODENYDETAIL_H_
