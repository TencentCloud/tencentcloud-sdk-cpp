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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EVENT_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EVENT_H_

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
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 服务事件
                */
                class Event : public AbstractModel
                {
                public:
                    Event();
                    ~Event() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取pod名称
                     * @return PodName pod名称
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置pod名称
                     * @param _podName pod名称
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取事件原因内容
                     * @return Reason 事件原因内容
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置事件原因内容
                     * @param _reason 事件原因内容
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
                     * 获取事件类型
                     * @return Type 事件类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置事件类型
                     * @param _type 事件类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取事件出现次数
                     * @return Count 事件出现次数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置事件出现次数
                     * @param _count 事件出现次数
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取事件第一次出现时间
                     * @return FirstTimestamp 事件第一次出现时间
                     * 
                     */
                    std::string GetFirstTimestamp() const;

                    /**
                     * 设置事件第一次出现时间
                     * @param _firstTimestamp 事件第一次出现时间
                     * 
                     */
                    void SetFirstTimestamp(const std::string& _firstTimestamp);

                    /**
                     * 判断参数 FirstTimestamp 是否已赋值
                     * @return FirstTimestamp 是否已赋值
                     * 
                     */
                    bool FirstTimestampHasBeenSet() const;

                    /**
                     * 获取事件最后一次出现时间
                     * @return LastTimestamp 事件最后一次出现时间
                     * 
                     */
                    std::string GetLastTimestamp() const;

                    /**
                     * 设置事件最后一次出现时间
                     * @param _lastTimestamp 事件最后一次出现时间
                     * 
                     */
                    void SetLastTimestamp(const std::string& _lastTimestamp);

                    /**
                     * 判断参数 LastTimestamp 是否已赋值
                     * @return LastTimestamp 是否已赋值
                     * 
                     */
                    bool LastTimestampHasBeenSet() const;

                    /**
                     * 获取事件内容
                     * @return Message 事件内容
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置事件内容
                     * @param _message 事件内容
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
                     * pod名称
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * 事件原因内容
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 事件类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 事件出现次数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 事件第一次出现时间
                     */
                    std::string m_firstTimestamp;
                    bool m_firstTimestampHasBeenSet;

                    /**
                     * 事件最后一次出现时间
                     */
                    std::string m_lastTimestamp;
                    bool m_lastTimestampHasBeenSet;

                    /**
                     * 事件内容
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EVENT_H_
