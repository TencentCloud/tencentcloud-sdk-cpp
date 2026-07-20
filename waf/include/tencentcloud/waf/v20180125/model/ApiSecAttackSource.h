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
#include <tencentcloud/waf/v20180125/model/ApiEventSample.h>


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
                     * 获取<p>攻击来源ip</p>
                     * @return SrcIp <p>攻击来源ip</p>
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置<p>攻击来源ip</p>
                     * @param _srcIp <p>攻击来源ip</p>
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
                     * 获取<p>威胁等级</p>
                     * @return EventLevel <p>威胁等级</p>
                     * 
                     */
                    std::string GetEventLevel() const;

                    /**
                     * 设置<p>威胁等级</p>
                     * @param _eventLevel <p>威胁等级</p>
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
                     * 获取<p>BOT标签</p>
                     * @return BotLabel <p>BOT标签</p>
                     * 
                     */
                    std::string GetBotLabel() const;

                    /**
                     * 设置<p>BOT标签</p>
                     * @param _botLabel <p>BOT标签</p>
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
                     * 获取<p>变更时间</p>
                     * @return Timestamp <p>变更时间</p>
                     * 
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置<p>变更时间</p>
                     * @param _timestamp <p>变更时间</p>
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
                     * 获取<p>地理位置</p>
                     * @return City <p>地理位置</p>
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置<p>地理位置</p>
                     * @param _city <p>地理位置</p>
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
                     * 获取<p>开始时间</p>
                     * @return StartTime <p>开始时间</p>
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _startTime <p>开始时间</p>
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
                     * 获取<p>关联事件数量</p>
                     * @return EventCount <p>关联事件数量</p>
                     * 
                     */
                    int64_t GetEventCount() const;

                    /**
                     * 设置<p>关联事件数量</p>
                     * @param _eventCount <p>关联事件数量</p>
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
                     * 获取<p>攻击数量</p>
                     * @return AttackCount <p>攻击数量</p>
                     * 
                     */
                    int64_t GetAttackCount() const;

                    /**
                     * 设置<p>攻击数量</p>
                     * @param _attackCount <p>攻击数量</p>
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
                     * 获取<p>缺失参数名，当事件类型是缺失参数名，缺失参数名和密码时，返回此字段</p>
                     * @return MissUserName <p>缺失参数名，当事件类型是缺失参数名，缺失参数名和密码时，返回此字段</p>
                     * 
                     */
                    std::string GetMissUserName() const;

                    /**
                     * 设置<p>缺失参数名，当事件类型是缺失参数名，缺失参数名和密码时，返回此字段</p>
                     * @param _missUserName <p>缺失参数名，当事件类型是缺失参数名，缺失参数名和密码时，返回此字段</p>
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
                     * 获取<p>当是水平越权和垂直越权时，返回此字段</p>
                     * @return AttackDetail <p>当是水平越权和垂直越权时，返回此字段</p>
                     * 
                     */
                    std::vector<std::string> GetAttackDetail() const;

                    /**
                     * 设置<p>当是水平越权和垂直越权时，返回此字段</p>
                     * @param _attackDetail <p>当是水平越权和垂直越权时，返回此字段</p>
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
                     * 获取<p>缺失密码参数，当事件类型是缺失参数名，缺失参数名和密码时，返回此字段</p>
                     * @return MissPassword <p>缺失密码参数，当事件类型是缺失参数名，缺失参数名和密码时，返回此字段</p>
                     * 
                     */
                    std::string GetMissPassword() const;

                    /**
                     * 设置<p>缺失密码参数，当事件类型是缺失参数名，缺失参数名和密码时，返回此字段</p>
                     * @param _missPassword <p>缺失密码参数，当事件类型是缺失参数名，缺失参数名和密码时，返回此字段</p>
                     * 
                     */
                    void SetMissPassword(const std::string& _missPassword);

                    /**
                     * 判断参数 MissPassword 是否已赋值
                     * @return MissPassword 是否已赋值
                     * 
                     */
                    bool MissPasswordHasBeenSet() const;

                    /**
                     * 获取<p>事件描述</p>
                     * @return EventDescription <p>事件描述</p>
                     * 
                     */
                    std::string GetEventDescription() const;

                    /**
                     * 设置<p>事件描述</p>
                     * @param _eventDescription <p>事件描述</p>
                     * 
                     */
                    void SetEventDescription(const std::string& _eventDescription);

                    /**
                     * 判断参数 EventDescription 是否已赋值
                     * @return EventDescription 是否已赋值
                     * 
                     */
                    bool EventDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>事件描述(英文)</p>
                     * @return EventDescriptionEng <p>事件描述(英文)</p>
                     * 
                     */
                    std::string GetEventDescriptionEng() const;

                    /**
                     * 设置<p>事件描述(英文)</p>
                     * @param _eventDescriptionEng <p>事件描述(英文)</p>
                     * 
                     */
                    void SetEventDescriptionEng(const std::string& _eventDescriptionEng);

                    /**
                     * 判断参数 EventDescriptionEng 是否已赋值
                     * @return EventDescriptionEng 是否已赋值
                     * 
                     */
                    bool EventDescriptionEngHasBeenSet() const;

                    /**
                     * 获取<p>攻击样本</p>
                     * @return Sample <p>攻击样本</p>
                     * 
                     */
                    ApiEventSample GetSample() const;

                    /**
                     * 设置<p>攻击样本</p>
                     * @param _sample <p>攻击样本</p>
                     * 
                     */
                    void SetSample(const ApiEventSample& _sample);

                    /**
                     * 判断参数 Sample 是否已赋值
                     * @return Sample 是否已赋值
                     * 
                     */
                    bool SampleHasBeenSet() const;

                private:

                    /**
                     * <p>攻击来源ip</p>
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * <p>威胁等级</p>
                     */
                    std::string m_eventLevel;
                    bool m_eventLevelHasBeenSet;

                    /**
                     * <p>BOT标签</p>
                     */
                    std::string m_botLabel;
                    bool m_botLabelHasBeenSet;

                    /**
                     * <p>变更时间</p>
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>地理位置</p>
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>关联事件数量</p>
                     */
                    int64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * <p>攻击数量</p>
                     */
                    int64_t m_attackCount;
                    bool m_attackCountHasBeenSet;

                    /**
                     * <p>缺失参数名，当事件类型是缺失参数名，缺失参数名和密码时，返回此字段</p>
                     */
                    std::string m_missUserName;
                    bool m_missUserNameHasBeenSet;

                    /**
                     * <p>当是水平越权和垂直越权时，返回此字段</p>
                     */
                    std::vector<std::string> m_attackDetail;
                    bool m_attackDetailHasBeenSet;

                    /**
                     * <p>缺失密码参数，当事件类型是缺失参数名，缺失参数名和密码时，返回此字段</p>
                     */
                    std::string m_missPassword;
                    bool m_missPasswordHasBeenSet;

                    /**
                     * <p>事件描述</p>
                     */
                    std::string m_eventDescription;
                    bool m_eventDescriptionHasBeenSet;

                    /**
                     * <p>事件描述(英文)</p>
                     */
                    std::string m_eventDescriptionEng;
                    bool m_eventDescriptionEngHasBeenSet;

                    /**
                     * <p>攻击样本</p>
                     */
                    ApiEventSample m_sample;
                    bool m_sampleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_APISECATTACKSOURCE_H_
