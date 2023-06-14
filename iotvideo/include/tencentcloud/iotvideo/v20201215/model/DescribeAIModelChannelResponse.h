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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEAIMODELCHANNELRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEAIMODELCHANNELRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * DescribeAIModelChannel返回参数结构体
                */
                class DescribeAIModelChannelResponse : public AbstractModel
                {
                public:
                    DescribeAIModelChannelResponse();
                    ~DescribeAIModelChannelResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取推送类型。ckafka：消息队列；forward：http/https推送
                     * @return Type 推送类型。ckafka：消息队列；forward：http/https推送
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取第三方推送地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForwardAddress 第三方推送地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetForwardAddress() const;

                    /**
                     * 判断参数 ForwardAddress 是否已赋值
                     * @return ForwardAddress 是否已赋值
                     * 
                     */
                    bool ForwardAddressHasBeenSet() const;

                    /**
                     * 获取第三方推送密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForwardKey 第三方推送密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetForwardKey() const;

                    /**
                     * 判断参数 ForwardKey 是否已赋值
                     * @return ForwardKey 是否已赋值
                     * 
                     */
                    bool ForwardKeyHasBeenSet() const;

                    /**
                     * 获取ckafka地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CKafkaRegion ckafka地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCKafkaRegion() const;

                    /**
                     * 判断参数 CKafkaRegion 是否已赋值
                     * @return CKafkaRegion 是否已赋值
                     * 
                     */
                    bool CKafkaRegionHasBeenSet() const;

                    /**
                     * 获取ckafka实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CKafkaInstance ckafka实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCKafkaInstance() const;

                    /**
                     * 判断参数 CKafkaInstance 是否已赋值
                     * @return CKafkaInstance 是否已赋值
                     * 
                     */
                    bool CKafkaInstanceHasBeenSet() const;

                    /**
                     * 获取ckafka订阅主题
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CKafkaTopic ckafka订阅主题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCKafkaTopic() const;

                    /**
                     * 判断参数 CKafkaTopic 是否已赋值
                     * @return CKafkaTopic 是否已赋值
                     * 
                     */
                    bool CKafkaTopicHasBeenSet() const;

                private:

                    /**
                     * 推送类型。ckafka：消息队列；forward：http/https推送
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 第三方推送地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_forwardAddress;
                    bool m_forwardAddressHasBeenSet;

                    /**
                     * 第三方推送密钥
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_forwardKey;
                    bool m_forwardKeyHasBeenSet;

                    /**
                     * ckafka地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cKafkaRegion;
                    bool m_cKafkaRegionHasBeenSet;

                    /**
                     * ckafka实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cKafkaInstance;
                    bool m_cKafkaInstanceHasBeenSet;

                    /**
                     * ckafka订阅主题
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cKafkaTopic;
                    bool m_cKafkaTopicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEAIMODELCHANNELRESPONSE_H_
