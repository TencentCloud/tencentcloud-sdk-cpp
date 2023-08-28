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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_STATEFULSETCONDITION_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_STATEFULSETCONDITION_H_

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
                * 实例状况
                */
                class StatefulSetCondition : public AbstractModel
                {
                public:
                    StatefulSetCondition();
                    ~StatefulSetCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 信息
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
                     * 获取原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reason 原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reason 原因
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Status of the condition, one of True, False, Unknown.
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status Status of the condition, one of True, False, Unknown.
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status of the condition, one of True, False, Unknown.
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status Status of the condition, one of True, False, Unknown.
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 类型
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
                     * 获取上次更新的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastTransitionTime 上次更新的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastTransitionTime() const;

                    /**
                     * 设置上次更新的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastTransitionTime 上次更新的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastTransitionTime(const std::string& _lastTransitionTime);

                    /**
                     * 判断参数 LastTransitionTime 是否已赋值
                     * @return LastTransitionTime 是否已赋值
                     * 
                     */
                    bool LastTransitionTimeHasBeenSet() const;

                    /**
                     * 获取上次更新的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdateTime 上次更新的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置上次更新的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUpdateTime 上次更新的时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * Status of the condition, one of True, False, Unknown.
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 上次更新的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastTransitionTime;
                    bool m_lastTransitionTimeHasBeenSet;

                    /**
                     * 上次更新的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_STATEFULSETCONDITION_H_
