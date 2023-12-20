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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBEVENT_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 描述作业发生的一个事件
                */
                class JobEvent : public AbstractModel
                {
                public:
                    JobEvent();
                    ~JobEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内部定义的事件类型
                     * @return Type 内部定义的事件类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置内部定义的事件类型
                     * @param _type 内部定义的事件类型
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
                     * 获取事件类型的说明文字
                     * @return Description 事件类型的说明文字
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置事件类型的说明文字
                     * @param _description 事件类型的说明文字
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取事件发生的 Unix 时间戳（秒）
                     * @return Timestamp 事件发生的 Unix 时间戳（秒）
                     * 
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置事件发生的 Unix 时间戳（秒）
                     * @param _timestamp 事件发生的 Unix 时间戳（秒）
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
                     * 获取事件发生时的运行 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningOrderId 事件发生时的运行 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRunningOrderId() const;

                    /**
                     * 设置事件发生时的运行 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runningOrderId 事件发生时的运行 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunningOrderId(const uint64_t& _runningOrderId);

                    /**
                     * 判断参数 RunningOrderId 是否已赋值
                     * @return RunningOrderId 是否已赋值
                     * 
                     */
                    bool RunningOrderIdHasBeenSet() const;

                    /**
                     * 获取事件的一些可选说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 事件的一些可选说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置事件的一些可选说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 事件的一些可选说明
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
                     * 获取异常事件的排查手册链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SolutionLink 异常事件的排查手册链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSolutionLink() const;

                    /**
                     * 设置异常事件的排查手册链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _solutionLink 异常事件的排查手册链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSolutionLink(const std::string& _solutionLink);

                    /**
                     * 判断参数 SolutionLink 是否已赋值
                     * @return SolutionLink 是否已赋值
                     * 
                     */
                    bool SolutionLinkHasBeenSet() const;

                private:

                    /**
                     * 内部定义的事件类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 事件类型的说明文字
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 事件发生的 Unix 时间戳（秒）
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 事件发生时的运行 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_runningOrderId;
                    bool m_runningOrderIdHasBeenSet;

                    /**
                     * 事件的一些可选说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 异常事件的排查手册链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_solutionLink;
                    bool m_solutionLinkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBEVENT_H_
