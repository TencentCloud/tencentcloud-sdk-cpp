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

#ifndef TENCENTCLOUD_TMS_V20200713_MODEL_ACCOUNTTIPOFFACCESSREQUEST_H_
#define TENCENTCLOUD_TMS_V20200713_MODEL_ACCOUNTTIPOFFACCESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20200713
        {
            namespace Model
            {
                /**
                * AccountTipoffAccess请求参数结构体
                */
                class AccountTipoffAccessRequest : public AbstractModel
                {
                public:
                    AccountTipoffAccessRequest();
                    ~AccountTipoffAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取被举报账号，长度低于 128 个字符
                     * @return ReportedAccount 被举报账号，长度低于 128 个字符
                     * 
                     */
                    std::string GetReportedAccount() const;

                    /**
                     * 设置被举报账号，长度低于 128 个字符
                     * @param _reportedAccount 被举报账号，长度低于 128 个字符
                     * 
                     */
                    void SetReportedAccount(const std::string& _reportedAccount);

                    /**
                     * 判断参数 ReportedAccount 是否已赋值
                     * @return ReportedAccount 是否已赋值
                     * 
                     */
                    bool ReportedAccountHasBeenSet() const;

                    /**
                     * 获取被举报账号类型(1-手机号 2-QQ号 3-微信号 4-QQ群号 5-微信openid 6-QQopenid 0-其它)
                     * @return ReportedAccountType 被举报账号类型(1-手机号 2-QQ号 3-微信号 4-QQ群号 5-微信openid 6-QQopenid 0-其它)
                     * 
                     */
                    int64_t GetReportedAccountType() const;

                    /**
                     * 设置被举报账号类型(1-手机号 2-QQ号 3-微信号 4-QQ群号 5-微信openid 6-QQopenid 0-其它)
                     * @param _reportedAccountType 被举报账号类型(1-手机号 2-QQ号 3-微信号 4-QQ群号 5-微信openid 6-QQopenid 0-其它)
                     * 
                     */
                    void SetReportedAccountType(const int64_t& _reportedAccountType);

                    /**
                     * 判断参数 ReportedAccountType 是否已赋值
                     * @return ReportedAccountType 是否已赋值
                     * 
                     */
                    bool ReportedAccountTypeHasBeenSet() const;

                    /**
                     * 获取被举报账号所属恶意类型(1-诈骗，2-骚扰，3-广告，4-违法违规，5-赌博传销，0-其他)
                     * @return EvilType 被举报账号所属恶意类型(1-诈骗，2-骚扰，3-广告，4-违法违规，5-赌博传销，0-其他)
                     * 
                     */
                    int64_t GetEvilType() const;

                    /**
                     * 设置被举报账号所属恶意类型(1-诈骗，2-骚扰，3-广告，4-违法违规，5-赌博传销，0-其他)
                     * @param _evilType 被举报账号所属恶意类型(1-诈骗，2-骚扰，3-广告，4-违法违规，5-赌博传销，0-其他)
                     * 
                     */
                    void SetEvilType(const int64_t& _evilType);

                    /**
                     * 判断参数 EvilType 是否已赋值
                     * @return EvilType 是否已赋值
                     * 
                     */
                    bool EvilTypeHasBeenSet() const;

                    /**
                     * 获取举报者账号，长度低于 128 个字符
                     * @return SenderAccount 举报者账号，长度低于 128 个字符
                     * 
                     */
                    std::string GetSenderAccount() const;

                    /**
                     * 设置举报者账号，长度低于 128 个字符
                     * @param _senderAccount 举报者账号，长度低于 128 个字符
                     * 
                     */
                    void SetSenderAccount(const std::string& _senderAccount);

                    /**
                     * 判断参数 SenderAccount 是否已赋值
                     * @return SenderAccount 是否已赋值
                     * 
                     */
                    bool SenderAccountHasBeenSet() const;

                    /**
                     * 获取举报者账号类型(1-手机号 2-QQ号 3-微信号 4-QQ群号 5-微信openid 6-QQopenid 0-其它)
                     * @return SenderAccountType 举报者账号类型(1-手机号 2-QQ号 3-微信号 4-QQ群号 5-微信openid 6-QQopenid 0-其它)
                     * 
                     */
                    int64_t GetSenderAccountType() const;

                    /**
                     * 设置举报者账号类型(1-手机号 2-QQ号 3-微信号 4-QQ群号 5-微信openid 6-QQopenid 0-其它)
                     * @param _senderAccountType 举报者账号类型(1-手机号 2-QQ号 3-微信号 4-QQ群号 5-微信openid 6-QQopenid 0-其它)
                     * 
                     */
                    void SetSenderAccountType(const int64_t& _senderAccountType);

                    /**
                     * 判断参数 SenderAccountType 是否已赋值
                     * @return SenderAccountType 是否已赋值
                     * 
                     */
                    bool SenderAccountTypeHasBeenSet() const;

                    /**
                     * 获取举报者IP地址
                     * @return SenderIP 举报者IP地址
                     * 
                     */
                    std::string GetSenderIP() const;

                    /**
                     * 设置举报者IP地址
                     * @param _senderIP 举报者IP地址
                     * 
                     */
                    void SetSenderIP(const std::string& _senderIP);

                    /**
                     * 判断参数 SenderIP 是否已赋值
                     * @return SenderIP 是否已赋值
                     * 
                     */
                    bool SenderIPHasBeenSet() const;

                    /**
                     * 获取包含被举报账号的恶意内容（比如文本、图片链接，长度低于1024个字符）
                     * @return EvilContent 包含被举报账号的恶意内容（比如文本、图片链接，长度低于1024个字符）
                     * 
                     */
                    std::string GetEvilContent() const;

                    /**
                     * 设置包含被举报账号的恶意内容（比如文本、图片链接，长度低于1024个字符）
                     * @param _evilContent 包含被举报账号的恶意内容（比如文本、图片链接，长度低于1024个字符）
                     * 
                     */
                    void SetEvilContent(const std::string& _evilContent);

                    /**
                     * 判断参数 EvilContent 是否已赋值
                     * @return EvilContent 是否已赋值
                     * 
                     */
                    bool EvilContentHasBeenSet() const;

                private:

                    /**
                     * 被举报账号，长度低于 128 个字符
                     */
                    std::string m_reportedAccount;
                    bool m_reportedAccountHasBeenSet;

                    /**
                     * 被举报账号类型(1-手机号 2-QQ号 3-微信号 4-QQ群号 5-微信openid 6-QQopenid 0-其它)
                     */
                    int64_t m_reportedAccountType;
                    bool m_reportedAccountTypeHasBeenSet;

                    /**
                     * 被举报账号所属恶意类型(1-诈骗，2-骚扰，3-广告，4-违法违规，5-赌博传销，0-其他)
                     */
                    int64_t m_evilType;
                    bool m_evilTypeHasBeenSet;

                    /**
                     * 举报者账号，长度低于 128 个字符
                     */
                    std::string m_senderAccount;
                    bool m_senderAccountHasBeenSet;

                    /**
                     * 举报者账号类型(1-手机号 2-QQ号 3-微信号 4-QQ群号 5-微信openid 6-QQopenid 0-其它)
                     */
                    int64_t m_senderAccountType;
                    bool m_senderAccountTypeHasBeenSet;

                    /**
                     * 举报者IP地址
                     */
                    std::string m_senderIP;
                    bool m_senderIPHasBeenSet;

                    /**
                     * 包含被举报账号的恶意内容（比如文本、图片链接，长度低于1024个字符）
                     */
                    std::string m_evilContent;
                    bool m_evilContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20200713_MODEL_ACCOUNTTIPOFFACCESSREQUEST_H_
