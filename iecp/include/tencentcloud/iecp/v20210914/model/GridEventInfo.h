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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_GRIDEVENTINFO_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_GRIDEVENTINFO_H_

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
                * Grid事件信息
                */
                class GridEventInfo : public AbstractModel
                {
                public:
                    GridEventInfo();
                    ~GridEventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取首次出现时间
                     * @return FirstTime 首次出现时间
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置首次出现时间
                     * @param _firstTime 首次出现时间
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取最后出现时间
                     * @return LastTime 最后出现时间
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置最后出现时间
                     * @param _lastTime 最后出现时间
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取对象类型
                     * @return InvolvedObjectKind 对象类型
                     * 
                     */
                    std::string GetInvolvedObjectKind() const;

                    /**
                     * 设置对象类型
                     * @param _involvedObjectKind 对象类型
                     * 
                     */
                    void SetInvolvedObjectKind(const std::string& _involvedObjectKind);

                    /**
                     * 判断参数 InvolvedObjectKind 是否已赋值
                     * @return InvolvedObjectKind 是否已赋值
                     * 
                     */
                    bool InvolvedObjectKindHasBeenSet() const;

                    /**
                     * 获取对象名称
                     * @return InvolvedObjectName 对象名称
                     * 
                     */
                    std::string GetInvolvedObjectName() const;

                    /**
                     * 设置对象名称
                     * @param _involvedObjectName 对象名称
                     * 
                     */
                    void SetInvolvedObjectName(const std::string& _involvedObjectName);

                    /**
                     * 判断参数 InvolvedObjectName 是否已赋值
                     * @return InvolvedObjectName 是否已赋值
                     * 
                     */
                    bool InvolvedObjectNameHasBeenSet() const;

                    /**
                     * 获取事件类型(Normal,Warning)
                     * @return Type 事件类型(Normal,Warning)
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置事件类型(Normal,Warning)
                     * @param _type 事件类型(Normal,Warning)
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
                     * 获取事件原因
                     * @return Reason 事件原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置事件原因
                     * @param _reason 事件原因
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

                    /**
                     * 获取次数
                     * @return Count 次数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置次数
                     * @param _count 次数
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
                     * 获取节点名（Pod事件类型时有值）
                     * @return NodeName 节点名（Pod事件类型时有值）
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名（Pod事件类型时有值）
                     * @param _nodeName 节点名（Pod事件类型时有值）
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取节点内部IP（Pod事件类型时有值）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IP 节点内部IP（Pod事件类型时有值）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置节点内部IP（Pod事件类型时有值）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iP 节点内部IP（Pod事件类型时有值）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                private:

                    /**
                     * 首次出现时间
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * 最后出现时间
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * 对象类型
                     */
                    std::string m_involvedObjectKind;
                    bool m_involvedObjectKindHasBeenSet;

                    /**
                     * 对象名称
                     */
                    std::string m_involvedObjectName;
                    bool m_involvedObjectNameHasBeenSet;

                    /**
                     * 事件类型(Normal,Warning)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 事件原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 事件内容
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 次数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 节点名（Pod事件类型时有值）
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 节点内部IP（Pod事件类型时有值）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_GRIDEVENTINFO_H_
