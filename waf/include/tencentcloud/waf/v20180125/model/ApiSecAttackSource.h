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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_APISECATTACKSOURCE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_APISECATTACKSOURCE_H_

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
                * api安全攻击源详情
                */
                class ApiSecAttackSource : public AbstractModel
                {
                public:
                    ApiSecAttackSource();
                    ~ApiSecAttackSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取攻击来源ip
                     * @return SrcIp 攻击来源ip
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置攻击来源ip
                     * @param _srcIp 攻击来源ip
                     * 
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取威胁等级
                     * @return EventLevel 威胁等级
                     * 
                     */
                    std::string GetEventLevel() const;

                    /**
                     * 设置威胁等级
                     * @param _eventLevel 威胁等级
                     * 
                     */
                    void SetEventLevel(const std::string& _eventLevel);

                    /**
                     * 判断参数 EventLevel 是否已赋值
                     * @return EventLevel 是否已赋值
                     * 
                     */
                    bool EventLevelHasBeenSet() const;

                    /**
                     * 获取BOT标签
                     * @return BotLabel BOT标签
                     * 
                     */
                    std::string GetBotLabel() const;

                    /**
                     * 设置BOT标签
                     * @param _botLabel BOT标签
                     * 
                     */
                    void SetBotLabel(const std::string& _botLabel);

                    /**
                     * 判断参数 BotLabel 是否已赋值
                     * @return BotLabel 是否已赋值
                     * 
                     */
                    bool BotLabelHasBeenSet() const;

                    /**
                     * 获取变更时间
                     * @return Timestamp 变更时间
                     * 
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置变更时间
                     * @param _timestamp 变更时间
                     * 
                     */
                    void SetTimestamp(const uint64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取地理位置
                     * @return City 地理位置
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置地理位置
                     * @param _city 地理位置
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取关联事件数量
                     * @return EventCount 关联事件数量
                     * 
                     */
                    int64_t GetEventCount() const;

                    /**
                     * 设置关联事件数量
                     * @param _eventCount 关联事件数量
                     * 
                     */
                    void SetEventCount(const int64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取攻击数量
                     * @return AttackCount 攻击数量
                     * 
                     */
                    int64_t GetAttackCount() const;

                    /**
                     * 设置攻击数量
                     * @param _attackCount 攻击数量
                     * 
                     */
                    void SetAttackCount(const int64_t& _attackCount);

                    /**
                     * 判断参数 AttackCount 是否已赋值
                     * @return AttackCount 是否已赋值
                     * 
                     */
                    bool AttackCountHasBeenSet() const;

                    /**
                     * 获取缺失参数名，当事件类型是缺失参数名，缺失参数名和密码时，返回此字段
                     * @return MissUserName 缺失参数名，当事件类型是缺失参数名，缺失参数名和密码时，返回此字段
                     * 
                     */
                    std::string GetMissUserName() const;

                    /**
                     * 设置缺失参数名，当事件类型是缺失参数名，缺失参数名和密码时，返回此字段
                     * @param _missUserName 缺失参数名，当事件类型是缺失参数名，缺失参数名和密码时，返回此字段
                     * 
                     */
                    void SetMissUserName(const std::string& _missUserName);

                    /**
                     * 判断参数 MissUserName 是否已赋值
                     * @return MissUserName 是否已赋值
                     * 
                     */
                    bool MissUserNameHasBeenSet() const;

                    /**
                     * 获取当是水平越权和垂直越权时，返回此字段
                     * @return AttackDetail 当是水平越权和垂直越权时，返回此字段
                     * 
                     */
                    std::vector<std::string> GetAttackDetail() const;

                    /**
                     * 设置当是水平越权和垂直越权时，返回此字段
                     * @param _attackDetail 当是水平越权和垂直越权时，返回此字段
                     * 
                     */
                    void SetAttackDetail(const std::vector<std::string>& _attackDetail);

                    /**
                     * 判断参数 AttackDetail 是否已赋值
                     * @return AttackDetail 是否已赋值
                     * 
                     */
                    bool AttackDetailHasBeenSet() const;

                    /**
                     * 获取缺失密码参数，当事件类型是缺失参数名，缺失参数名和密码时，返回此字段
                     * @return MissPassword 缺失密码参数，当事件类型是缺失参数名，缺失参数名和密码时，返回此字段
                     * 
                     */
                    std::string GetMissPassword() const;

                    /**
                     * 设置缺失密码参数，当事件类型是缺失参数名，缺失参数名和密码时，返回此字段
                     * @param _missPassword 缺失密码参数，当事件类型是缺失参数名，缺失参数名和密码时，返回此字段
                     * 
                     */
                    void SetMissPassword(const std::string& _missPassword);

                    /**
                     * 判断参数 MissPassword 是否已赋值
                     * @return MissPassword 是否已赋值
                     * 
                     */
                    bool MissPasswordHasBeenSet() const;

                private:

                    /**
                     * 攻击来源ip
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * 威胁等级
                     */
                    std::string m_eventLevel;
                    bool m_eventLevelHasBeenSet;

                    /**
                     * BOT标签
                     */
                    std::string m_botLabel;
                    bool m_botLabelHasBeenSet;

                    /**
                     * 变更时间
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 地理位置
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 开始时间
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 关联事件数量
                     */
                    int64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * 攻击数量
                     */
                    int64_t m_attackCount;
                    bool m_attackCountHasBeenSet;

                    /**
                     * 缺失参数名，当事件类型是缺失参数名，缺失参数名和密码时，返回此字段
                     */
                    std::string m_missUserName;
                    bool m_missUserNameHasBeenSet;

                    /**
                     * 当是水平越权和垂直越权时，返回此字段
                     */
                    std::vector<std::string> m_attackDetail;
                    bool m_attackDetailHasBeenSet;

                    /**
                     * 缺失密码参数，当事件类型是缺失参数名，缺失参数名和密码时，返回此字段
                     */
                    std::string m_missPassword;
                    bool m_missPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_APISECATTACKSOURCE_H_
