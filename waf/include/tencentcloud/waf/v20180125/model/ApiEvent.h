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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_APIEVENT_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_APIEVENT_H_

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
                * APi事件列表
                */
                class ApiEvent : public AbstractModel
                {
                public:
                    ApiEvent();
                    ~ApiEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件id
                     * @return EventId 事件id
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置事件id
                     * @param _eventId 事件id
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取事件类型
                     * @return EventType 事件类型
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置事件类型
                     * @param _eventType 事件类型
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取事件等级，100,200,300对应低中高
                     * @return Level 事件等级，100,200,300对应低中高
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置事件等级，100,200,300对应低中高
                     * @param _level 事件等级，100,200,300对应低中高
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取处置状态，1:新发现，2，确认中，3，已确认，4，已下线，5，已忽略
                     * @return Mode 处置状态，1:新发现，2，确认中，3，已确认，4，已下线，5，已忽略
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置处置状态，1:新发现，2，确认中，3，已确认，4，已下线，5，已忽略
                     * @param _mode 处置状态，1:新发现，2，确认中，3，已确认，4，已下线，5，已忽略
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取发现时间
                     * @return StartTime 发现时间
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置发现时间
                     * @param _startTime 发现时间
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
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取关联的api
                     * @return ApiName 关联的api
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置关联的api
                     * @param _apiName 关联的api
                     * 
                     */
                    void SetApiName(const std::string& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     * 
                     */
                    bool ApiNameHasBeenSet() const;

                    /**
                     * 获取请求方式
                     * @return Method 请求方式
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置请求方式
                     * @param _method 请求方式
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取事件来源，custom标识自定义
                     * @return Source 事件来源，custom标识自定义
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置事件来源，custom标识自定义
                     * @param _source 事件来源，custom标识自定义
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                private:

                    /**
                     * 事件id
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 事件类型
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 事件等级，100,200,300对应低中高
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 处置状态，1:新发现，2，确认中，3，已确认，4，已下线，5，已忽略
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 发现时间
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 关联的api
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * 请求方式
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 事件来源，custom标识自定义
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_APIEVENT_H_
