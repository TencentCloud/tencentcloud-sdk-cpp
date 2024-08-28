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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_LISTRECEIVERDETAILSREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_LISTRECEIVERDETAILSREQUEST_H_

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
                * ListReceiverDetails请求参数结构体
                */
                class ListReceiverDetailsRequest : public AbstractModel
                {
                public:
                    ListReceiverDetailsRequest();
                    ~ListReceiverDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取收件人列表ID,CreateReceiver接口创建收件人列表时会返回该值
                     * @return ReceiverId 收件人列表ID,CreateReceiver接口创建收件人列表时会返回该值
                     * 
                     */
                    uint64_t GetReceiverId() const;

                    /**
                     * 设置收件人列表ID,CreateReceiver接口创建收件人列表时会返回该值
                     * @param _receiverId 收件人列表ID,CreateReceiver接口创建收件人列表时会返回该值
                     * 
                     */
                    void SetReceiverId(const uint64_t& _receiverId);

                    /**
                     * 判断参数 ReceiverId 是否已赋值
                     * @return ReceiverId 是否已赋值
                     * 
                     */
                    bool ReceiverIdHasBeenSet() const;

                    /**
                     * 获取偏移量，整型，从0开始
                     * @return Offset 偏移量，整型，从0开始
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，整型，从0开始
                     * @param _offset 偏移量，整型，从0开始
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
                     * 获取限制数目，整型,不超过100
                     * @return Limit 限制数目，整型,不超过100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目，整型,不超过100
                     * @param _limit 限制数目，整型,不超过100
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
                     * 获取收件人地址，长度0-50，示例：xxx@te.com，支持模糊查询
                     * @return Email 收件人地址，长度0-50，示例：xxx@te.com，支持模糊查询
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置收件人地址，长度0-50，示例：xxx@te.com，支持模糊查询
                     * @param _email 收件人地址，长度0-50，示例：xxx@te.com，支持模糊查询
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取搜索开始时间
                     * @return CreateTimeBegin 搜索开始时间
                     * 
                     */
                    std::string GetCreateTimeBegin() const;

                    /**
                     * 设置搜索开始时间
                     * @param _createTimeBegin 搜索开始时间
                     * 
                     */
                    void SetCreateTimeBegin(const std::string& _createTimeBegin);

                    /**
                     * 判断参数 CreateTimeBegin 是否已赋值
                     * @return CreateTimeBegin 是否已赋值
                     * 
                     */
                    bool CreateTimeBeginHasBeenSet() const;

                    /**
                     * 获取搜索结束时间
                     * @return CreateTimeEnd 搜索结束时间
                     * 
                     */
                    std::string GetCreateTimeEnd() const;

                    /**
                     * 设置搜索结束时间
                     * @param _createTimeEnd 搜索结束时间
                     * 
                     */
                    void SetCreateTimeEnd(const std::string& _createTimeEnd);

                    /**
                     * 判断参数 CreateTimeEnd 是否已赋值
                     * @return CreateTimeEnd 是否已赋值
                     * 
                     */
                    bool CreateTimeEndHasBeenSet() const;

                    /**
                     * 获取1:有效，2:无效
                     * @return Status 1:有效，2:无效
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置1:有效，2:无效
                     * @param _status 1:有效，2:无效
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 收件人列表ID,CreateReceiver接口创建收件人列表时会返回该值
                     */
                    uint64_t m_receiverId;
                    bool m_receiverIdHasBeenSet;

                    /**
                     * 偏移量，整型，从0开始
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数目，整型,不超过100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 收件人地址，长度0-50，示例：xxx@te.com，支持模糊查询
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 搜索开始时间
                     */
                    std::string m_createTimeBegin;
                    bool m_createTimeBeginHasBeenSet;

                    /**
                     * 搜索结束时间
                     */
                    std::string m_createTimeEnd;
                    bool m_createTimeEndHasBeenSet;

                    /**
                     * 1:有效，2:无效
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_LISTRECEIVERDETAILSREQUEST_H_
