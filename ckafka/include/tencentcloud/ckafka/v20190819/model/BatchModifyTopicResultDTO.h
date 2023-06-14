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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHMODIFYTOPICRESULTDTO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHMODIFYTOPICRESULTDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 批量修改topic属性结果
                */
                class BatchModifyTopicResultDTO : public AbstractModel
                {
                public:
                    BatchModifyTopicResultDTO();
                    ~BatchModifyTopicResultDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取topic名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicName topic名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置topic名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicName topic名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取状态码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReturnCode 状态码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReturnCode() const;

                    /**
                     * 设置状态码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _returnCode 状态码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReturnCode(const std::string& _returnCode);

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                    /**
                     * 获取状态消息
                     * @return Message 状态消息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置状态消息
                     * @param _message 状态消息
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
                     * 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * topic名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 状态码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * 状态消息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHMODIFYTOPICRESULTDTO_H_
