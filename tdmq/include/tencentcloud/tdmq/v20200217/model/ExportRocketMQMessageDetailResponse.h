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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_EXPORTROCKETMQMESSAGEDETAILRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_EXPORTROCKETMQMESSAGEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * ExportRocketMQMessageDetail返回参数结构体
                */
                class ExportRocketMQMessageDetailResponse : public AbstractModel
                {
                public:
                    ExportRocketMQMessageDetailResponse();
                    ~ExportRocketMQMessageDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取消息id
                     * @return MsgId 消息id
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 判断参数 MsgId 是否已赋值
                     * @return MsgId 是否已赋值
                     * 
                     */
                    bool MsgIdHasBeenSet() const;

                    /**
                     * 获取消息生成时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BornTimestamp 消息生成时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBornTimestamp() const;

                    /**
                     * 判断参数 BornTimestamp 是否已赋值
                     * @return BornTimestamp 是否已赋值
                     * 
                     */
                    bool BornTimestampHasBeenSet() const;

                    /**
                     * 获取消息存储时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StoreTimestamp 消息存储时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStoreTimestamp() const;

                    /**
                     * 判断参数 StoreTimestamp 是否已赋值
                     * @return StoreTimestamp 是否已赋值
                     * 
                     */
                    bool StoreTimestampHasBeenSet() const;

                    /**
                     * 获取消息生产客户端地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BornHost 消息生产客户端地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBornHost() const;

                    /**
                     * 判断参数 BornHost 是否已赋值
                     * @return BornHost 是否已赋值
                     * 
                     */
                    bool BornHostHasBeenSet() const;

                    /**
                     * 获取消息Tag
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgTag 消息Tag
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsgTag() const;

                    /**
                     * 判断参数 MsgTag 是否已赋值
                     * @return MsgTag 是否已赋值
                     * 
                     */
                    bool MsgTagHasBeenSet() const;

                    /**
                     * 获取消息Key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgKey 消息Key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsgKey() const;

                    /**
                     * 判断参数 MsgKey 是否已赋值
                     * @return MsgKey 是否已赋值
                     * 
                     */
                    bool MsgKeyHasBeenSet() const;

                    /**
                     * 获取消息属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Properties 消息属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProperties() const;

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取消息重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReConsumeTimes 消息重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetReConsumeTimes() const;

                    /**
                     * 判断参数 ReConsumeTimes 是否已赋值
                     * @return ReConsumeTimes 是否已赋值
                     * 
                     */
                    bool ReConsumeTimesHasBeenSet() const;

                    /**
                     * 获取Base64编码格式字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgBody Base64编码格式字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsgBody() const;

                    /**
                     * 判断参数 MsgBody 是否已赋值
                     * @return MsgBody 是否已赋值
                     * 
                     */
                    bool MsgBodyHasBeenSet() const;

                    /**
                     * 获取消息内容的CRC32 Code
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgBodyCRC 消息内容的CRC32 Code
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMsgBodyCRC() const;

                    /**
                     * 判断参数 MsgBodyCRC 是否已赋值
                     * @return MsgBodyCRC 是否已赋值
                     * 
                     */
                    bool MsgBodyCRCHasBeenSet() const;

                    /**
                     * 获取消息体大小（单位K）
当大于2048时不返回消息
                     * @return MsgBodySize 消息体大小（单位K）
当大于2048时不返回消息
                     * 
                     */
                    uint64_t GetMsgBodySize() const;

                    /**
                     * 判断参数 MsgBodySize 是否已赋值
                     * @return MsgBodySize 是否已赋值
                     * 
                     */
                    bool MsgBodySizeHasBeenSet() const;

                private:

                    /**
                     * 消息id
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * 消息生成时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bornTimestamp;
                    bool m_bornTimestampHasBeenSet;

                    /**
                     * 消息存储时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storeTimestamp;
                    bool m_storeTimestampHasBeenSet;

                    /**
                     * 消息生产客户端地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bornHost;
                    bool m_bornHostHasBeenSet;

                    /**
                     * 消息Tag
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msgTag;
                    bool m_msgTagHasBeenSet;

                    /**
                     * 消息Key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msgKey;
                    bool m_msgKeyHasBeenSet;

                    /**
                     * 消息属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * 消息重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_reConsumeTimes;
                    bool m_reConsumeTimesHasBeenSet;

                    /**
                     * Base64编码格式字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msgBody;
                    bool m_msgBodyHasBeenSet;

                    /**
                     * 消息内容的CRC32 Code
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_msgBodyCRC;
                    bool m_msgBodyCRCHasBeenSet;

                    /**
                     * 消息体大小（单位K）
当大于2048时不返回消息
                     */
                    uint64_t m_msgBodySize;
                    bool m_msgBodySizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_EXPORTROCKETMQMESSAGEDETAILRESPONSE_H_
