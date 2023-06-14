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

#ifndef TENCENTCLOUD_CIS_V20180408_MODEL_EVENT_H_
#define TENCENTCLOUD_CIS_V20180408_MODEL_EVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cis
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 容器实例事件
                */
                class Event : public AbstractModel
                {
                public:
                    Event();
                    ~Event() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件首次出现时间
                     * @return FirstSeen 事件首次出现时间
                     * 
                     */
                    std::string GetFirstSeen() const;

                    /**
                     * 设置事件首次出现时间
                     * @param _firstSeen 事件首次出现时间
                     * 
                     */
                    void SetFirstSeen(const std::string& _firstSeen);

                    /**
                     * 判断参数 FirstSeen 是否已赋值
                     * @return FirstSeen 是否已赋值
                     * 
                     */
                    bool FirstSeenHasBeenSet() const;

                    /**
                     * 获取事件上次出现时间
                     * @return LastSeen 事件上次出现时间
                     * 
                     */
                    std::string GetLastSeen() const;

                    /**
                     * 设置事件上次出现时间
                     * @param _lastSeen 事件上次出现时间
                     * 
                     */
                    void SetLastSeen(const std::string& _lastSeen);

                    /**
                     * 判断参数 LastSeen 是否已赋值
                     * @return LastSeen 是否已赋值
                     * 
                     */
                    bool LastSeenHasBeenSet() const;

                    /**
                     * 获取事件等级
                     * @return Level 事件等级
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置事件等级
                     * @param _level 事件等级
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
                     * 获取事件出现次数
                     * @return Count 事件出现次数
                     * 
                     */
                    std::string GetCount() const;

                    /**
                     * 设置事件出现次数
                     * @param _count 事件出现次数
                     * 
                     */
                    void SetCount(const std::string& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取事件出现原因
                     * @return Reason 事件出现原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置事件出现原因
                     * @param _reason 事件出现原因
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取事件消息
                     * @return Message 事件消息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置事件消息
                     * @param _message 事件消息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 事件首次出现时间
                     */
                    std::string m_firstSeen;
                    bool m_firstSeenHasBeenSet;

                    /**
                     * 事件上次出现时间
                     */
                    std::string m_lastSeen;
                    bool m_lastSeenHasBeenSet;

                    /**
                     * 事件等级
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 事件出现次数
                     */
                    std::string m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 事件出现原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 事件消息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIS_V20180408_MODEL_EVENT_H_
