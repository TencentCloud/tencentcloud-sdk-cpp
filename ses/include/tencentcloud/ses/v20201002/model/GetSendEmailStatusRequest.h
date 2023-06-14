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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_GETSENDEMAILSTATUSREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_GETSENDEMAILSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * GetSendEmailStatus请求参数结构体
                */
                class GetSendEmailStatusRequest : public AbstractModel
                {
                public:
                    GetSendEmailStatusRequest();
                    ~GetSendEmailStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取发送的日期，必填。仅支持查询某个日期，不支持范围查询。
                     * @return RequestDate 发送的日期，必填。仅支持查询某个日期，不支持范围查询。
                     * 
                     */
                    std::string GetRequestDate() const;

                    /**
                     * 设置发送的日期，必填。仅支持查询某个日期，不支持范围查询。
                     * @param _requestDate 发送的日期，必填。仅支持查询某个日期，不支持范围查询。
                     * 
                     */
                    void SetRequestDate(const std::string& _requestDate);

                    /**
                     * 判断参数 RequestDate 是否已赋值
                     * @return RequestDate 是否已赋值
                     * 
                     */
                    bool RequestDateHasBeenSet() const;

                    /**
                     * 获取偏移量。默认为0
                     * @return Offset 偏移量。默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量。默认为0
                     * @param _offset 偏移量。默认为0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取拉取最大条数，最多 100。
                     * @return Limit 拉取最大条数，最多 100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置拉取最大条数，最多 100。
                     * @param _limit 拉取最大条数，最多 100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取SendMail接口返回的MessageId字段。
                     * @return MessageId SendMail接口返回的MessageId字段。
                     * 
                     */
                    std::string GetMessageId() const;

                    /**
                     * 设置SendMail接口返回的MessageId字段。
                     * @param _messageId SendMail接口返回的MessageId字段。
                     * 
                     */
                    void SetMessageId(const std::string& _messageId);

                    /**
                     * 判断参数 MessageId 是否已赋值
                     * @return MessageId 是否已赋值
                     * 
                     */
                    bool MessageIdHasBeenSet() const;

                    /**
                     * 获取收件人邮箱。
                     * @return ToEmailAddress 收件人邮箱。
                     * 
                     */
                    std::string GetToEmailAddress() const;

                    /**
                     * 设置收件人邮箱。
                     * @param _toEmailAddress 收件人邮箱。
                     * 
                     */
                    void SetToEmailAddress(const std::string& _toEmailAddress);

                    /**
                     * 判断参数 ToEmailAddress 是否已赋值
                     * @return ToEmailAddress 是否已赋值
                     * 
                     */
                    bool ToEmailAddressHasBeenSet() const;

                private:

                    /**
                     * 发送的日期，必填。仅支持查询某个日期，不支持范围查询。
                     */
                    std::string m_requestDate;
                    bool m_requestDateHasBeenSet;

                    /**
                     * 偏移量。默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 拉取最大条数，最多 100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * SendMail接口返回的MessageId字段。
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * 收件人邮箱。
                     */
                    std::string m_toEmailAddress;
                    bool m_toEmailAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_GETSENDEMAILSTATUSREQUEST_H_
