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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_EVENT_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_EVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * K8s的Event
                */
                class Event : public AbstractModel
                {
                public:
                    Event();
                    ~Event() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件的id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 事件的id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置事件的id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 事件的id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取事件的具体信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 事件的具体信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置事件的具体信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 事件的具体信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取事件第一次发生的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstTimestamp 事件第一次发生的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFirstTimestamp() const;

                    /**
                     * 设置事件第一次发生的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstTimestamp 事件第一次发生的时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取事件最后一次发生的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastTimestamp 事件最后一次发生的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastTimestamp() const;

                    /**
                     * 设置事件最后一次发生的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastTimestamp 事件最后一次发生的时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取事件发生的次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Count 事件发生的次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置事件发生的次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _count 事件发生的次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取事件的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 事件的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置事件的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 事件的类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取事件关联的资源的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceKind 事件关联的资源的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceKind() const;

                    /**
                     * 设置事件关联的资源的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceKind 事件关联的资源的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceKind(const std::string& _resourceKind);

                    /**
                     * 判断参数 ResourceKind 是否已赋值
                     * @return ResourceKind 是否已赋值
                     * 
                     */
                    bool ResourceKindHasBeenSet() const;

                    /**
                     * 获取事件关联的资源的名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceName 事件关联的资源的名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置事件关联的资源的名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceName 事件关联的资源的名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                private:

                    /**
                     * 事件的id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 事件的具体信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 事件第一次发生的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstTimestamp;
                    bool m_firstTimestampHasBeenSet;

                    /**
                     * 事件最后一次发生的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastTimestamp;
                    bool m_lastTimestampHasBeenSet;

                    /**
                     * 事件发生的次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 事件的类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 事件关联的资源的类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceKind;
                    bool m_resourceKindHasBeenSet;

                    /**
                     * 事件关联的资源的名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_EVENT_H_
