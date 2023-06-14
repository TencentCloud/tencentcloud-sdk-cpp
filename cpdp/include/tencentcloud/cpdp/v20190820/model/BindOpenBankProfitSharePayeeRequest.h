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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_BINDOPENBANKPROFITSHAREPAYEEREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_BINDOPENBANKPROFITSHAREPAYEEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankProfitSharePayeeInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * BindOpenBankProfitSharePayee请求参数结构体
                */
                class BindOpenBankProfitSharePayeeRequest : public AbstractModel
                {
                public:
                    BindOpenBankProfitSharePayeeRequest();
                    ~BindOpenBankProfitSharePayeeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道商户号。代理商/集团ID
                     * @return ChannelMerchantId 渠道商户号。代理商/集团ID
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置渠道商户号。代理商/集团ID
                     * @param _channelMerchantId 渠道商户号。代理商/集团ID
                     * 
                     */
                    void SetChannelMerchantId(const std::string& _channelMerchantId);

                    /**
                     * 判断参数 ChannelMerchantId 是否已赋值
                     * @return ChannelMerchantId 是否已赋值
                     * 
                     */
                    bool ChannelMerchantIdHasBeenSet() const;

                    /**
                     * 获取收款人银行账户号。唯一
                     * @return AccountNo 收款人银行账户号。唯一
                     * 
                     */
                    std::string GetAccountNo() const;

                    /**
                     * 设置收款人银行账户号。唯一
                     * @param _accountNo 收款人银行账户号。唯一
                     * 
                     */
                    void SetAccountNo(const std::string& _accountNo);

                    /**
                     * 判断参数 AccountNo 是否已赋值
                     * @return AccountNo 是否已赋值
                     * 
                     */
                    bool AccountNoHasBeenSet() const;

                    /**
                     * 获取渠道名称
通联国际: CNP
                     * @return ChannelName 渠道名称
通联国际: CNP
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名称
通联国际: CNP
                     * @param _channelName 渠道名称
通联国际: CNP
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取渠道子商户号。商户ID
                     * @return ChannelSubMerchantId 渠道子商户号。商户ID
                     * 
                     */
                    std::string GetChannelSubMerchantId() const;

                    /**
                     * 设置渠道子商户号。商户ID
                     * @param _channelSubMerchantId 渠道子商户号。商户ID
                     * 
                     */
                    void SetChannelSubMerchantId(const std::string& _channelSubMerchantId);

                    /**
                     * 判断参数 ChannelSubMerchantId 是否已赋值
                     * @return ChannelSubMerchantId 是否已赋值
                     * 
                     */
                    bool ChannelSubMerchantIdHasBeenSet() const;

                    /**
                     * 获取绑定状态通知地址,若为空，即不回调通知。
                     * @return NotifyUrl 绑定状态通知地址,若为空，即不回调通知。
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置绑定状态通知地址,若为空，即不回调通知。
                     * @param _notifyUrl 绑定状态通知地址,若为空，即不回调通知。
                     * 
                     */
                    void SetNotifyUrl(const std::string& _notifyUrl);

                    /**
                     * 判断参数 NotifyUrl 是否已赋值
                     * @return NotifyUrl 是否已赋值
                     * 
                     */
                    bool NotifyUrlHasBeenSet() const;

                    /**
                     * 获取分账收款人信息。通联国际必选
                     * @return ProfitSharePayeeInfo 分账收款人信息。通联国际必选
                     * 
                     */
                    OpenBankProfitSharePayeeInfo GetProfitSharePayeeInfo() const;

                    /**
                     * 设置分账收款人信息。通联国际必选
                     * @param _profitSharePayeeInfo 分账收款人信息。通联国际必选
                     * 
                     */
                    void SetProfitSharePayeeInfo(const OpenBankProfitSharePayeeInfo& _profitSharePayeeInfo);

                    /**
                     * 判断参数 ProfitSharePayeeInfo 是否已赋值
                     * @return ProfitSharePayeeInfo 是否已赋值
                     * 
                     */
                    bool ProfitSharePayeeInfoHasBeenSet() const;

                    /**
                     * 获取第三方拓展信息。若无特殊说明，可为空
                     * @return ExternalProfitSharingData 第三方拓展信息。若无特殊说明，可为空
                     * 
                     */
                    std::string GetExternalProfitSharingData() const;

                    /**
                     * 设置第三方拓展信息。若无特殊说明，可为空
                     * @param _externalProfitSharingData 第三方拓展信息。若无特殊说明，可为空
                     * 
                     */
                    void SetExternalProfitSharingData(const std::string& _externalProfitSharingData);

                    /**
                     * 判断参数 ExternalProfitSharingData 是否已赋值
                     * @return ExternalProfitSharingData 是否已赋值
                     * 
                     */
                    bool ExternalProfitSharingDataHasBeenSet() const;

                    /**
                     * 获取接入环境。沙箱环境填 sandbox。缺省默认调用生产环境
                     * @return Environment 接入环境。沙箱环境填 sandbox。缺省默认调用生产环境
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置接入环境。沙箱环境填 sandbox。缺省默认调用生产环境
                     * @param _environment 接入环境。沙箱环境填 sandbox。缺省默认调用生产环境
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                private:

                    /**
                     * 渠道商户号。代理商/集团ID
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 收款人银行账户号。唯一
                     */
                    std::string m_accountNo;
                    bool m_accountNoHasBeenSet;

                    /**
                     * 渠道名称
通联国际: CNP
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 渠道子商户号。商户ID
                     */
                    std::string m_channelSubMerchantId;
                    bool m_channelSubMerchantIdHasBeenSet;

                    /**
                     * 绑定状态通知地址,若为空，即不回调通知。
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * 分账收款人信息。通联国际必选
                     */
                    OpenBankProfitSharePayeeInfo m_profitSharePayeeInfo;
                    bool m_profitSharePayeeInfoHasBeenSet;

                    /**
                     * 第三方拓展信息。若无特殊说明，可为空
                     */
                    std::string m_externalProfitSharingData;
                    bool m_externalProfitSharingDataHasBeenSet;

                    /**
                     * 接入环境。沙箱环境填 sandbox。缺省默认调用生产环境
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_BINDOPENBANKPROFITSHAREPAYEEREQUEST_H_
