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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_SENDEMAILSTATUS_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_SENDEMAILSTATUS_H_

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
                * 描述邮件发送状态
                */
                class SendEmailStatus : public AbstractModel
                {
                public:
                    SendEmailStatus();
                    ~SendEmailStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SendEmail返回的MessageId
                     * @return MessageId SendEmail返回的MessageId
                     * 
                     */
                    std::string GetMessageId() const;

                    /**
                     * 设置SendEmail返回的MessageId
                     * @param _messageId SendEmail返回的MessageId
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
                     * 获取收件人邮箱
                     * @return ToEmailAddress 收件人邮箱
                     * 
                     */
                    std::string GetToEmailAddress() const;

                    /**
                     * 设置收件人邮箱
                     * @param _toEmailAddress 收件人邮箱
                     * 
                     */
                    void SetToEmailAddress(const std::string& _toEmailAddress);

                    /**
                     * 判断参数 ToEmailAddress 是否已赋值
                     * @return ToEmailAddress 是否已赋值
                     * 
                     */
                    bool ToEmailAddressHasBeenSet() const;

                    /**
                     * 获取发件人邮箱
                     * @return FromEmailAddress 发件人邮箱
                     * 
                     */
                    std::string GetFromEmailAddress() const;

                    /**
                     * 设置发件人邮箱
                     * @param _fromEmailAddress 发件人邮箱
                     * 
                     */
                    void SetFromEmailAddress(const std::string& _fromEmailAddress);

                    /**
                     * 判断参数 FromEmailAddress 是否已赋值
                     * @return FromEmailAddress 是否已赋值
                     * 
                     */
                    bool FromEmailAddressHasBeenSet() const;

                    /**
                     * 获取腾讯云处理状态
0: 处理成功
1001: 内部系统异常
1002: 内部系统异常
1003: 内部系统异常
1003: 内部系统异常
1004: 发信超时
1005: 内部系统异常
1006: 触发频率控制，短时间内对同一地址发送过多邮件
1007: 邮件地址在黑名单中
1008: 域名被收件人拒收
1009: 内部系统异常
1010: 超出了每日发送限制
1011: 无发送自定义内容权限，必须使用模板
1013: 域名被收件人取消订阅
2001: 找不到相关记录
3007: 模板ID无效或者不可用
3008: 被收信域名临时封禁
3009: 无权限使用该模板
3010: TemplateData字段格式不正确 
3014: 发件域名没有经过认证，无法发送
3020: 收件方邮箱类型在黑名单
3024: 邮箱地址格式预检查失败
3030: 退信率过高，临时限制发送
3033: 余额不足，账号欠费等
                     * @return SendStatus 腾讯云处理状态
0: 处理成功
1001: 内部系统异常
1002: 内部系统异常
1003: 内部系统异常
1003: 内部系统异常
1004: 发信超时
1005: 内部系统异常
1006: 触发频率控制，短时间内对同一地址发送过多邮件
1007: 邮件地址在黑名单中
1008: 域名被收件人拒收
1009: 内部系统异常
1010: 超出了每日发送限制
1011: 无发送自定义内容权限，必须使用模板
1013: 域名被收件人取消订阅
2001: 找不到相关记录
3007: 模板ID无效或者不可用
3008: 被收信域名临时封禁
3009: 无权限使用该模板
3010: TemplateData字段格式不正确 
3014: 发件域名没有经过认证，无法发送
3020: 收件方邮箱类型在黑名单
3024: 邮箱地址格式预检查失败
3030: 退信率过高，临时限制发送
3033: 余额不足，账号欠费等
                     * 
                     */
                    int64_t GetSendStatus() const;

                    /**
                     * 设置腾讯云处理状态
0: 处理成功
1001: 内部系统异常
1002: 内部系统异常
1003: 内部系统异常
1003: 内部系统异常
1004: 发信超时
1005: 内部系统异常
1006: 触发频率控制，短时间内对同一地址发送过多邮件
1007: 邮件地址在黑名单中
1008: 域名被收件人拒收
1009: 内部系统异常
1010: 超出了每日发送限制
1011: 无发送自定义内容权限，必须使用模板
1013: 域名被收件人取消订阅
2001: 找不到相关记录
3007: 模板ID无效或者不可用
3008: 被收信域名临时封禁
3009: 无权限使用该模板
3010: TemplateData字段格式不正确 
3014: 发件域名没有经过认证，无法发送
3020: 收件方邮箱类型在黑名单
3024: 邮箱地址格式预检查失败
3030: 退信率过高，临时限制发送
3033: 余额不足，账号欠费等
                     * @param _sendStatus 腾讯云处理状态
0: 处理成功
1001: 内部系统异常
1002: 内部系统异常
1003: 内部系统异常
1003: 内部系统异常
1004: 发信超时
1005: 内部系统异常
1006: 触发频率控制，短时间内对同一地址发送过多邮件
1007: 邮件地址在黑名单中
1008: 域名被收件人拒收
1009: 内部系统异常
1010: 超出了每日发送限制
1011: 无发送自定义内容权限，必须使用模板
1013: 域名被收件人取消订阅
2001: 找不到相关记录
3007: 模板ID无效或者不可用
3008: 被收信域名临时封禁
3009: 无权限使用该模板
3010: TemplateData字段格式不正确 
3014: 发件域名没有经过认证，无法发送
3020: 收件方邮箱类型在黑名单
3024: 邮箱地址格式预检查失败
3030: 退信率过高，临时限制发送
3033: 余额不足，账号欠费等
                     * 
                     */
                    void SetSendStatus(const int64_t& _sendStatus);

                    /**
                     * 判断参数 SendStatus 是否已赋值
                     * @return SendStatus 是否已赋值
                     * 
                     */
                    bool SendStatusHasBeenSet() const;

                    /**
                     * 获取收件方处理状态
0: 请求成功被腾讯云接受，进入发送队列
1: 邮件递送成功，DeliverTime表示递送成功的时间
2: 邮件因某种原因被丢弃，DeliverMessage表示丢弃原因
3: 收件方ESP拒信，一般原因为邮箱地址不存在，或其它原因
8: 邮件被ESP因某些原因延迟递送，DeliverMessage表示延迟原因
                     * @return DeliverStatus 收件方处理状态
0: 请求成功被腾讯云接受，进入发送队列
1: 邮件递送成功，DeliverTime表示递送成功的时间
2: 邮件因某种原因被丢弃，DeliverMessage表示丢弃原因
3: 收件方ESP拒信，一般原因为邮箱地址不存在，或其它原因
8: 邮件被ESP因某些原因延迟递送，DeliverMessage表示延迟原因
                     * 
                     */
                    int64_t GetDeliverStatus() const;

                    /**
                     * 设置收件方处理状态
0: 请求成功被腾讯云接受，进入发送队列
1: 邮件递送成功，DeliverTime表示递送成功的时间
2: 邮件因某种原因被丢弃，DeliverMessage表示丢弃原因
3: 收件方ESP拒信，一般原因为邮箱地址不存在，或其它原因
8: 邮件被ESP因某些原因延迟递送，DeliverMessage表示延迟原因
                     * @param _deliverStatus 收件方处理状态
0: 请求成功被腾讯云接受，进入发送队列
1: 邮件递送成功，DeliverTime表示递送成功的时间
2: 邮件因某种原因被丢弃，DeliverMessage表示丢弃原因
3: 收件方ESP拒信，一般原因为邮箱地址不存在，或其它原因
8: 邮件被ESP因某些原因延迟递送，DeliverMessage表示延迟原因
                     * 
                     */
                    void SetDeliverStatus(const int64_t& _deliverStatus);

                    /**
                     * 判断参数 DeliverStatus 是否已赋值
                     * @return DeliverStatus 是否已赋值
                     * 
                     */
                    bool DeliverStatusHasBeenSet() const;

                    /**
                     * 获取收件方处理状态描述
                     * @return DeliverMessage 收件方处理状态描述
                     * 
                     */
                    std::string GetDeliverMessage() const;

                    /**
                     * 设置收件方处理状态描述
                     * @param _deliverMessage 收件方处理状态描述
                     * 
                     */
                    void SetDeliverMessage(const std::string& _deliverMessage);

                    /**
                     * 判断参数 DeliverMessage 是否已赋值
                     * @return DeliverMessage 是否已赋值
                     * 
                     */
                    bool DeliverMessageHasBeenSet() const;

                    /**
                     * 获取请求到达腾讯云时间戳
                     * @return RequestTime 请求到达腾讯云时间戳
                     * 
                     */
                    int64_t GetRequestTime() const;

                    /**
                     * 设置请求到达腾讯云时间戳
                     * @param _requestTime 请求到达腾讯云时间戳
                     * 
                     */
                    void SetRequestTime(const int64_t& _requestTime);

                    /**
                     * 判断参数 RequestTime 是否已赋值
                     * @return RequestTime 是否已赋值
                     * 
                     */
                    bool RequestTimeHasBeenSet() const;

                    /**
                     * 获取腾讯云执行递送时间戳
                     * @return DeliverTime 腾讯云执行递送时间戳
                     * 
                     */
                    int64_t GetDeliverTime() const;

                    /**
                     * 设置腾讯云执行递送时间戳
                     * @param _deliverTime 腾讯云执行递送时间戳
                     * 
                     */
                    void SetDeliverTime(const int64_t& _deliverTime);

                    /**
                     * 判断参数 DeliverTime 是否已赋值
                     * @return DeliverTime 是否已赋值
                     * 
                     */
                    bool DeliverTimeHasBeenSet() const;

                    /**
                     * 获取用户是否打开该邮件
                     * @return UserOpened 用户是否打开该邮件
                     * 
                     */
                    bool GetUserOpened() const;

                    /**
                     * 设置用户是否打开该邮件
                     * @param _userOpened 用户是否打开该邮件
                     * 
                     */
                    void SetUserOpened(const bool& _userOpened);

                    /**
                     * 判断参数 UserOpened 是否已赋值
                     * @return UserOpened 是否已赋值
                     * 
                     */
                    bool UserOpenedHasBeenSet() const;

                    /**
                     * 获取用户是否点击该邮件中的链接
                     * @return UserClicked 用户是否点击该邮件中的链接
                     * 
                     */
                    bool GetUserClicked() const;

                    /**
                     * 设置用户是否点击该邮件中的链接
                     * @param _userClicked 用户是否点击该邮件中的链接
                     * 
                     */
                    void SetUserClicked(const bool& _userClicked);

                    /**
                     * 判断参数 UserClicked 是否已赋值
                     * @return UserClicked 是否已赋值
                     * 
                     */
                    bool UserClickedHasBeenSet() const;

                    /**
                     * 获取用户是否取消该发送者的订阅
                     * @return UserUnsubscribed 用户是否取消该发送者的订阅
                     * 
                     */
                    bool GetUserUnsubscribed() const;

                    /**
                     * 设置用户是否取消该发送者的订阅
                     * @param _userUnsubscribed 用户是否取消该发送者的订阅
                     * 
                     */
                    void SetUserUnsubscribed(const bool& _userUnsubscribed);

                    /**
                     * 判断参数 UserUnsubscribed 是否已赋值
                     * @return UserUnsubscribed 是否已赋值
                     * 
                     */
                    bool UserUnsubscribedHasBeenSet() const;

                    /**
                     * 获取用户是否举报该发送者
                     * @return UserComplainted 用户是否举报该发送者
                     * 
                     */
                    bool GetUserComplainted() const;

                    /**
                     * 设置用户是否举报该发送者
                     * @param _userComplainted 用户是否举报该发送者
                     * 
                     */
                    void SetUserComplainted(const bool& _userComplainted);

                    /**
                     * 判断参数 UserComplainted 是否已赋值
                     * @return UserComplainted 是否已赋值
                     * 
                     */
                    bool UserComplaintedHasBeenSet() const;

                private:

                    /**
                     * SendEmail返回的MessageId
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * 收件人邮箱
                     */
                    std::string m_toEmailAddress;
                    bool m_toEmailAddressHasBeenSet;

                    /**
                     * 发件人邮箱
                     */
                    std::string m_fromEmailAddress;
                    bool m_fromEmailAddressHasBeenSet;

                    /**
                     * 腾讯云处理状态
0: 处理成功
1001: 内部系统异常
1002: 内部系统异常
1003: 内部系统异常
1003: 内部系统异常
1004: 发信超时
1005: 内部系统异常
1006: 触发频率控制，短时间内对同一地址发送过多邮件
1007: 邮件地址在黑名单中
1008: 域名被收件人拒收
1009: 内部系统异常
1010: 超出了每日发送限制
1011: 无发送自定义内容权限，必须使用模板
1013: 域名被收件人取消订阅
2001: 找不到相关记录
3007: 模板ID无效或者不可用
3008: 被收信域名临时封禁
3009: 无权限使用该模板
3010: TemplateData字段格式不正确 
3014: 发件域名没有经过认证，无法发送
3020: 收件方邮箱类型在黑名单
3024: 邮箱地址格式预检查失败
3030: 退信率过高，临时限制发送
3033: 余额不足，账号欠费等
                     */
                    int64_t m_sendStatus;
                    bool m_sendStatusHasBeenSet;

                    /**
                     * 收件方处理状态
0: 请求成功被腾讯云接受，进入发送队列
1: 邮件递送成功，DeliverTime表示递送成功的时间
2: 邮件因某种原因被丢弃，DeliverMessage表示丢弃原因
3: 收件方ESP拒信，一般原因为邮箱地址不存在，或其它原因
8: 邮件被ESP因某些原因延迟递送，DeliverMessage表示延迟原因
                     */
                    int64_t m_deliverStatus;
                    bool m_deliverStatusHasBeenSet;

                    /**
                     * 收件方处理状态描述
                     */
                    std::string m_deliverMessage;
                    bool m_deliverMessageHasBeenSet;

                    /**
                     * 请求到达腾讯云时间戳
                     */
                    int64_t m_requestTime;
                    bool m_requestTimeHasBeenSet;

                    /**
                     * 腾讯云执行递送时间戳
                     */
                    int64_t m_deliverTime;
                    bool m_deliverTimeHasBeenSet;

                    /**
                     * 用户是否打开该邮件
                     */
                    bool m_userOpened;
                    bool m_userOpenedHasBeenSet;

                    /**
                     * 用户是否点击该邮件中的链接
                     */
                    bool m_userClicked;
                    bool m_userClickedHasBeenSet;

                    /**
                     * 用户是否取消该发送者的订阅
                     */
                    bool m_userUnsubscribed;
                    bool m_userUnsubscribedHasBeenSet;

                    /**
                     * 用户是否举报该发送者
                     */
                    bool m_userComplainted;
                    bool m_userComplaintedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_SENDEMAILSTATUS_H_
