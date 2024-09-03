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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CLIENTSUBSCRIPTIONINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CLIENTSUBSCRIPTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 客户端订阅详情，可用于辅助判断哪些客户端订阅关系不一致
                */
                class ClientSubscriptionInfo : public AbstractModel
                {
                public:
                    ClientSubscriptionInfo();
                    ~ClientSubscriptionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端ID
                     * @return ClientId 客户端ID
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置客户端ID
                     * @param _clientId 客户端ID
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取客户端IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientAddr 客户端IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClientAddr() const;

                    /**
                     * 设置客户端IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientAddr 客户端IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientAddr(const std::string& _clientAddr);

                    /**
                     * 判断参数 ClientAddr 是否已赋值
                     * @return ClientAddr 是否已赋值
                     * 
                     */
                    bool ClientAddrHasBeenSet() const;

                    /**
                     * 获取订阅主题
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Topic 订阅主题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置订阅主题
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topic 订阅主题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取订阅表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubString 订阅表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubString() const;

                    /**
                     * 设置订阅表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subString 订阅表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubString(const std::string& _subString);

                    /**
                     * 判断参数 SubString 是否已赋值
                     * @return SubString 是否已赋值
                     * 
                     */
                    bool SubStringHasBeenSet() const;

                    /**
                     * 获取订阅方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpressionType 订阅方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpressionType() const;

                    /**
                     * 设置订阅方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expressionType 订阅方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpressionType(const std::string& _expressionType);

                    /**
                     * 判断参数 ExpressionType 是否已赋值
                     * @return ExpressionType 是否已赋值
                     * 
                     */
                    bool ExpressionTypeHasBeenSet() const;

                private:

                    /**
                     * 客户端ID
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 客户端IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientAddr;
                    bool m_clientAddrHasBeenSet;

                    /**
                     * 订阅主题
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 订阅表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subString;
                    bool m_subStringHasBeenSet;

                    /**
                     * 订阅方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expressionType;
                    bool m_expressionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CLIENTSUBSCRIPTIONINFO_H_
