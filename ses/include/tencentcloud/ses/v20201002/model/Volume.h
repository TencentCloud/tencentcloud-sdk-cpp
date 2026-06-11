/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p>日期</p>
                     * @return SendDate <p>日期</p>
                     * 
                     */
                    std::string GetSendDate() const;

                    /**
                     * 设置<p>日期</p>
                     * @param _sendDate <p>日期</p>
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
                     * 获取<p>邮件请求数量</p>
                     * @return RequestCount <p>邮件请求数量</p>
                     * 
                     */
                    uint64_t GetRequestCount() const;

                    /**
                     * 设置<p>邮件请求数量</p>
                     * @param _requestCount <p>邮件请求数量</p>
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
                     * 获取<p>腾讯云通过数量</p>
                     * @return AcceptedCount <p>腾讯云通过数量</p>
                     * 
                     */
                    uint64_t GetAcceptedCount() const;

                    /**
                     * 设置<p>腾讯云通过数量</p>
                     * @param _acceptedCount <p>腾讯云通过数量</p>
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
                     * 获取<p>送达数量</p>
                     * @return DeliveredCount <p>送达数量</p>
                     * 
                     */
                    uint64_t GetDeliveredCount() const;

                    /**
                     * 设置<p>送达数量</p>
                     * @param _deliveredCount <p>送达数量</p>
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
                     * 获取<p>打开邮件总次数</p>
                     * @return OpenedCount <p>打开邮件总次数</p>
                     * 
                     */
                    uint64_t GetOpenedCount() const;

                    /**
                     * 设置<p>打开邮件总次数</p>
                     * @param _openedCount <p>打开邮件总次数</p>
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
                     * 获取<p>点击了邮件中的链接数量用户数量</p>
                     * @return ClickedCount <p>点击了邮件中的链接数量用户数量</p>
                     * 
                     */
                    uint64_t GetClickedCount() const;

                    /**
                     * 设置<p>点击了邮件中的链接数量用户数量</p>
                     * @param _clickedCount <p>点击了邮件中的链接数量用户数量</p>
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
                     * 获取<p>退信数量</p>
                     * @return BounceCount <p>退信数量</p>
                     * 
                     */
                    uint64_t GetBounceCount() const;

                    /**
                     * 设置<p>退信数量</p>
                     * @param _bounceCount <p>退信数量</p>
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
                     * 获取<p>取消订阅的用户数量</p>
                     * @return UnsubscribeCount <p>取消订阅的用户数量</p>
                     * 
                     */
                    uint64_t GetUnsubscribeCount() const;

                    /**
                     * 设置<p>取消订阅的用户数量</p>
                     * @param _unsubscribeCount <p>取消订阅的用户数量</p>
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
                     * <p>日期</p>
                     */
                    std::string m_sendDate;
                    bool m_sendDateHasBeenSet;

                    /**
                     * <p>邮件请求数量</p>
                     */
                    uint64_t m_requestCount;
                    bool m_requestCountHasBeenSet;

                    /**
                     * <p>腾讯云通过数量</p>
                     */
                    uint64_t m_acceptedCount;
                    bool m_acceptedCountHasBeenSet;

                    /**
                     * <p>送达数量</p>
                     */
                    uint64_t m_deliveredCount;
                    bool m_deliveredCountHasBeenSet;

                    /**
                     * <p>打开邮件总次数</p>
                     */
                    uint64_t m_openedCount;
                    bool m_openedCountHasBeenSet;

                    /**
                     * <p>点击了邮件中的链接数量用户数量</p>
                     */
                    uint64_t m_clickedCount;
                    bool m_clickedCountHasBeenSet;

                    /**
                     * <p>退信数量</p>
                     */
                    uint64_t m_bounceCount;
                    bool m_bounceCountHasBeenSet;

                    /**
                     * <p>取消订阅的用户数量</p>
                     */
                    uint64_t m_unsubscribeCount;
                    bool m_unsubscribeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_VOLUME_H_
