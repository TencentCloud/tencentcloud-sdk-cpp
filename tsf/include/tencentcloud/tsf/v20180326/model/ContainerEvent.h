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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINEREVENT_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINEREVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 返回容器的事件，比如 k8s deployment 或者 pod 的 events
                */
                class ContainerEvent : public AbstractModel
                {
                public:
                    ContainerEvent();
                    ~ContainerEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取第一次出现的时间，以 ms 为单位的时间戳
                     * @return FirstTimestamp 第一次出现的时间，以 ms 为单位的时间戳
                     * 
                     */
                    int64_t GetFirstTimestamp() const;

                    /**
                     * 设置第一次出现的时间，以 ms 为单位的时间戳
                     * @param _firstTimestamp 第一次出现的时间，以 ms 为单位的时间戳
                     * 
                     */
                    void SetFirstTimestamp(const int64_t& _firstTimestamp);

                    /**
                     * 判断参数 FirstTimestamp 是否已赋值
                     * @return FirstTimestamp 是否已赋值
                     * 
                     */
                    bool FirstTimestampHasBeenSet() const;

                    /**
                     * 获取最后一次出现的时间，以 ms 为单位的时间戳
                     * @return LastTimestamp 最后一次出现的时间，以 ms 为单位的时间戳
                     * 
                     */
                    int64_t GetLastTimestamp() const;

                    /**
                     * 设置最后一次出现的时间，以 ms 为单位的时间戳
                     * @param _lastTimestamp 最后一次出现的时间，以 ms 为单位的时间戳
                     * 
                     */
                    void SetLastTimestamp(const int64_t& _lastTimestamp);

                    /**
                     * 判断参数 LastTimestamp 是否已赋值
                     * @return LastTimestamp 是否已赋值
                     * 
                     */
                    bool LastTimestampHasBeenSet() const;

                    /**
                     * 获取级别
                     * @return Type 级别
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置级别
                     * @param _type 级别
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
                     * 获取资源类型
                     * @return Kind 资源类型
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置资源类型
                     * @param _kind 资源类型
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取资源名称
                     * @return Name 资源名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置资源名称
                     * @param _name 资源名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取内容
                     * @return Reason 内容
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置内容
                     * @param _reason 内容
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
                     * 获取详细描述
                     * @return Message 详细描述
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置详细描述
                     * @param _message 详细描述
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取出现次数
                     * @return Count 出现次数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置出现次数
                     * @param _count 出现次数
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 第一次出现的时间，以 ms 为单位的时间戳
                     */
                    int64_t m_firstTimestamp;
                    bool m_firstTimestampHasBeenSet;

                    /**
                     * 最后一次出现的时间，以 ms 为单位的时间戳
                     */
                    int64_t m_lastTimestamp;
                    bool m_lastTimestampHasBeenSet;

                    /**
                     * 级别
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 资源类型
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 资源名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 内容
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 详细描述
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 出现次数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINEREVENT_H_
