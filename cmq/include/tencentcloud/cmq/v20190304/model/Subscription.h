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

#ifndef TENCENTCLOUD_CMQ_V20190304_MODEL_SUBSCRIPTION_H_
#define TENCENTCLOUD_CMQ_V20190304_MODEL_SUBSCRIPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cmq
    {
        namespace V20190304
        {
            namespace Model
            {
                /**
                * 订阅返回参数
                */
                class Subscription : public AbstractModel
                {
                public:
                    Subscription();
                    ~Subscription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SubscriptionName
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubscriptionName SubscriptionName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSubscriptionName() const;

                    /**
                     * 设置SubscriptionName
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubscriptionName SubscriptionName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubscriptionName(const std::string& _subscriptionName);

                    /**
                     * 判断参数 SubscriptionName 是否已赋值
                     * @return SubscriptionName 是否已赋值
                     */
                    bool SubscriptionNameHasBeenSet() const;

                    /**
                     * 获取SubscriptionId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubscriptionId SubscriptionId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSubscriptionId() const;

                    /**
                     * 设置SubscriptionId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubscriptionId SubscriptionId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubscriptionId(const std::string& _subscriptionId);

                    /**
                     * 判断参数 SubscriptionId 是否已赋值
                     * @return SubscriptionId 是否已赋值
                     */
                    bool SubscriptionIdHasBeenSet() const;

                    /**
                     * 获取TopicOwner
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicOwner TopicOwner
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTopicOwner() const;

                    /**
                     * 设置TopicOwner
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TopicOwner TopicOwner
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTopicOwner(const uint64_t& _topicOwner);

                    /**
                     * 判断参数 TopicOwner 是否已赋值
                     * @return TopicOwner 是否已赋值
                     */
                    bool TopicOwnerHasBeenSet() const;

                    /**
                     * 获取MsgCount
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgCount MsgCount
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMsgCount() const;

                    /**
                     * 设置MsgCount
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MsgCount MsgCount
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMsgCount(const uint64_t& _msgCount);

                    /**
                     * 判断参数 MsgCount 是否已赋值
                     * @return MsgCount 是否已赋值
                     */
                    bool MsgCountHasBeenSet() const;

                    /**
                     * 获取LastModifyTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifyTime LastModifyTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetLastModifyTime() const;

                    /**
                     * 设置LastModifyTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastModifyTime LastModifyTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastModifyTime(const uint64_t& _lastModifyTime);

                    /**
                     * 判断参数 LastModifyTime 是否已赋值
                     * @return LastModifyTime 是否已赋值
                     */
                    bool LastModifyTimeHasBeenSet() const;

                    /**
                     * 获取CreateTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime CreateTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置CreateTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime CreateTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取BindingKey
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindingKey BindingKey
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetBindingKey() const;

                    /**
                     * 设置BindingKey
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BindingKey BindingKey
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBindingKey(const std::vector<std::string>& _bindingKey);

                    /**
                     * 判断参数 BindingKey 是否已赋值
                     * @return BindingKey 是否已赋值
                     */
                    bool BindingKeyHasBeenSet() const;

                    /**
                     * 获取Endpoint
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Endpoint Endpoint
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置Endpoint
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Endpoint Endpoint
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取FilterTags
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilterTags FilterTags
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetFilterTags() const;

                    /**
                     * 设置FilterTags
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FilterTags FilterTags
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFilterTags(const std::vector<std::string>& _filterTags);

                    /**
                     * 判断参数 FilterTags 是否已赋值
                     * @return FilterTags 是否已赋值
                     */
                    bool FilterTagsHasBeenSet() const;

                    /**
                     * 获取Protocol
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol Protocol
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Protocol Protocol
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取NotifyStrategy
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotifyStrategy NotifyStrategy
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNotifyStrategy() const;

                    /**
                     * 设置NotifyStrategy
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NotifyStrategy NotifyStrategy
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNotifyStrategy(const std::string& _notifyStrategy);

                    /**
                     * 判断参数 NotifyStrategy 是否已赋值
                     * @return NotifyStrategy 是否已赋值
                     */
                    bool NotifyStrategyHasBeenSet() const;

                    /**
                     * 获取NotifyContentFormat
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotifyContentFormat NotifyContentFormat
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNotifyContentFormat() const;

                    /**
                     * 设置NotifyContentFormat
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NotifyContentFormat NotifyContentFormat
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNotifyContentFormat(const std::string& _notifyContentFormat);

                    /**
                     * 判断参数 NotifyContentFormat 是否已赋值
                     * @return NotifyContentFormat 是否已赋值
                     */
                    bool NotifyContentFormatHasBeenSet() const;

                private:

                    /**
                     * SubscriptionName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subscriptionName;
                    bool m_subscriptionNameHasBeenSet;

                    /**
                     * SubscriptionId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subscriptionId;
                    bool m_subscriptionIdHasBeenSet;

                    /**
                     * TopicOwner
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_topicOwner;
                    bool m_topicOwnerHasBeenSet;

                    /**
                     * MsgCount
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_msgCount;
                    bool m_msgCountHasBeenSet;

                    /**
                     * LastModifyTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_lastModifyTime;
                    bool m_lastModifyTimeHasBeenSet;

                    /**
                     * CreateTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * BindingKey
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_bindingKey;
                    bool m_bindingKeyHasBeenSet;

                    /**
                     * Endpoint
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * FilterTags
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_filterTags;
                    bool m_filterTagsHasBeenSet;

                    /**
                     * Protocol
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * NotifyStrategy
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_notifyStrategy;
                    bool m_notifyStrategyHasBeenSet;

                    /**
                     * NotifyContentFormat
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_notifyContentFormat;
                    bool m_notifyContentFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_MODEL_SUBSCRIPTION_H_
