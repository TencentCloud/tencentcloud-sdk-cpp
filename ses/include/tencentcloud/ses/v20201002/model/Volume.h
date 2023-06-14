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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_VOLUME_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_VOLUME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * 统计数据的结构体
                */
                class Volume : public AbstractModel
                {
                public:
                    Volume();
                    ~Volume() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SendDate 日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSendDate() const;

                    /**
                     * 设置日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sendDate 日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSendDate(const std::string& _sendDate);

                    /**
                     * 判断参数 SendDate 是否已赋值
                     * @return SendDate 是否已赋值
                     * 
                     */
                    bool SendDateHasBeenSet() const;

                    /**
                     * 获取邮件请求数量
                     * @return RequestCount 邮件请求数量
                     * 
                     */
                    uint64_t GetRequestCount() const;

                    /**
                     * 设置邮件请求数量
                     * @param _requestCount 邮件请求数量
                     * 
                     */
                    void SetRequestCount(const uint64_t& _requestCount);

                    /**
                     * 判断参数 RequestCount 是否已赋值
                     * @return RequestCount 是否已赋值
                     * 
                     */
                    bool RequestCountHasBeenSet() const;

                    /**
                     * 获取腾讯云通过数量
                     * @return AcceptedCount 腾讯云通过数量
                     * 
                     */
                    uint64_t GetAcceptedCount() const;

                    /**
                     * 设置腾讯云通过数量
                     * @param _acceptedCount 腾讯云通过数量
                     * 
                     */
                    void SetAcceptedCount(const uint64_t& _acceptedCount);

                    /**
                     * 判断参数 AcceptedCount 是否已赋值
                     * @return AcceptedCount 是否已赋值
                     * 
                     */
                    bool AcceptedCountHasBeenSet() const;

                    /**
                     * 获取送达数量
                     * @return DeliveredCount 送达数量
                     * 
                     */
                    uint64_t GetDeliveredCount() const;

                    /**
                     * 设置送达数量
                     * @param _deliveredCount 送达数量
                     * 
                     */
                    void SetDeliveredCount(const uint64_t& _deliveredCount);

                    /**
                     * 判断参数 DeliveredCount 是否已赋值
                     * @return DeliveredCount 是否已赋值
                     * 
                     */
                    bool DeliveredCountHasBeenSet() const;

                    /**
                     * 获取打开邮件的用户数量，根据收件人去重
                     * @return OpenedCount 打开邮件的用户数量，根据收件人去重
                     * 
                     */
                    uint64_t GetOpenedCount() const;

                    /**
                     * 设置打开邮件的用户数量，根据收件人去重
                     * @param _openedCount 打开邮件的用户数量，根据收件人去重
                     * 
                     */
                    void SetOpenedCount(const uint64_t& _openedCount);

                    /**
                     * 判断参数 OpenedCount 是否已赋值
                     * @return OpenedCount 是否已赋值
                     * 
                     */
                    bool OpenedCountHasBeenSet() const;

                    /**
                     * 获取点击了邮件中的链接数量用户数量
                     * @return ClickedCount 点击了邮件中的链接数量用户数量
                     * 
                     */
                    uint64_t GetClickedCount() const;

                    /**
                     * 设置点击了邮件中的链接数量用户数量
                     * @param _clickedCount 点击了邮件中的链接数量用户数量
                     * 
                     */
                    void SetClickedCount(const uint64_t& _clickedCount);

                    /**
                     * 判断参数 ClickedCount 是否已赋值
                     * @return ClickedCount 是否已赋值
                     * 
                     */
                    bool ClickedCountHasBeenSet() const;

                    /**
                     * 获取退信数量
                     * @return BounceCount 退信数量
                     * 
                     */
                    uint64_t GetBounceCount() const;

                    /**
                     * 设置退信数量
                     * @param _bounceCount 退信数量
                     * 
                     */
                    void SetBounceCount(const uint64_t& _bounceCount);

                    /**
                     * 判断参数 BounceCount 是否已赋值
                     * @return BounceCount 是否已赋值
                     * 
                     */
                    bool BounceCountHasBeenSet() const;

                    /**
                     * 获取取消订阅的用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnsubscribeCount 取消订阅的用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUnsubscribeCount() const;

                    /**
                     * 设置取消订阅的用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unsubscribeCount 取消订阅的用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnsubscribeCount(const uint64_t& _unsubscribeCount);

                    /**
                     * 判断参数 UnsubscribeCount 是否已赋值
                     * @return UnsubscribeCount 是否已赋值
                     * 
                     */
                    bool UnsubscribeCountHasBeenSet() const;

                private:

                    /**
                     * 日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sendDate;
                    bool m_sendDateHasBeenSet;

                    /**
                     * 邮件请求数量
                     */
                    uint64_t m_requestCount;
                    bool m_requestCountHasBeenSet;

                    /**
                     * 腾讯云通过数量
                     */
                    uint64_t m_acceptedCount;
                    bool m_acceptedCountHasBeenSet;

                    /**
                     * 送达数量
                     */
                    uint64_t m_deliveredCount;
                    bool m_deliveredCountHasBeenSet;

                    /**
                     * 打开邮件的用户数量，根据收件人去重
                     */
                    uint64_t m_openedCount;
                    bool m_openedCountHasBeenSet;

                    /**
                     * 点击了邮件中的链接数量用户数量
                     */
                    uint64_t m_clickedCount;
                    bool m_clickedCountHasBeenSet;

                    /**
                     * 退信数量
                     */
                    uint64_t m_bounceCount;
                    bool m_bounceCountHasBeenSet;

                    /**
                     * 取消订阅的用户数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_unsubscribeCount;
                    bool m_unsubscribeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_VOLUME_H_
