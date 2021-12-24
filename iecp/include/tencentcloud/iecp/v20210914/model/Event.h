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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_EVENT_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_EVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 事件信息
                */
                class Event : public AbstractModel
                {
                public:
                    Event();
                    ~Event() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取第一次出现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstTime 第一次出现时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置第一次出现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FirstTime 第一次出现时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取最后一次出现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastTime 最后一次出现时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置最后一次出现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastTime 最后一次出现时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取事件关联对象类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvolvedObjectKind 事件关联对象类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInvolvedObjectKind() const;

                    /**
                     * 设置事件关联对象类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InvolvedObjectKind 事件关联对象类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInvolvedObjectKind(const std::string& _involvedObjectKind);

                    /**
                     * 判断参数 InvolvedObjectKind 是否已赋值
                     * @return InvolvedObjectKind 是否已赋值
                     */
                    bool InvolvedObjectKindHasBeenSet() const;

                    /**
                     * 获取事件关联对象名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvolvedObjectName 事件关联对象名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInvolvedObjectName() const;

                    /**
                     * 设置事件关联对象名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InvolvedObjectName 事件关联对象名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInvolvedObjectName(const std::string& _involvedObjectName);

                    /**
                     * 判断参数 InvolvedObjectName 是否已赋值
                     * @return InvolvedObjectName 是否已赋值
                     */
                    bool InvolvedObjectNameHasBeenSet() const;

                    /**
                     * 获取事件类型(Normal|Warning)
                     * @return Type 事件类型(Normal|Warning)
                     */
                    std::string GetType() const;

                    /**
                     * 设置事件类型(Normal|Warning)
                     * @param Type 事件类型(Normal|Warning)
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reason 原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetReason() const;

                    /**
                     * 设置原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Reason 原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Message 内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取出现次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Count 出现次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置出现次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Count 出现次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 第一次出现时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * 最后一次出现时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * 事件关联对象类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_involvedObjectKind;
                    bool m_involvedObjectKindHasBeenSet;

                    /**
                     * 事件关联对象名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_involvedObjectName;
                    bool m_involvedObjectNameHasBeenSet;

                    /**
                     * 事件类型(Normal|Warning)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 出现次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_EVENT_H_
