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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKSETTLEORDERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKSETTLEORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryOpenBankSettleOrder请求参数结构体
                */
                class QueryOpenBankSettleOrderRequest : public AbstractModel
                {
                public:
                    QueryOpenBankSettleOrderRequest();
                    ~QueryOpenBankSettleOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道商户号
                     * @return ChannelMerchantId 渠道商户号
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置渠道商户号
                     * @param _channelMerchantId 渠道商户号
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
                     * 获取渠道子商户号
                     * @return ChannelSubMerchantId 渠道子商户号
                     * 
                     */
                    std::string GetChannelSubMerchantId() const;

                    /**
                     * 设置渠道子商户号
                     * @param _channelSubMerchantId 渠道子商户号
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
                     * 获取外部结算流水号，与渠道结算流水号二选一
                     * @return OutSettleId 外部结算流水号，与渠道结算流水号二选一
                     * 
                     */
                    std::string GetOutSettleId() const;

                    /**
                     * 设置外部结算流水号，与渠道结算流水号二选一
                     * @param _outSettleId 外部结算流水号，与渠道结算流水号二选一
                     * 
                     */
                    void SetOutSettleId(const std::string& _outSettleId);

                    /**
                     * 判断参数 OutSettleId 是否已赋值
                     * @return OutSettleId 是否已赋值
                     * 
                     */
                    bool OutSettleIdHasBeenSet() const;

                    /**
                     * 获取渠道结算流水号，与外部结算流水号二选一
                     * @return ChannelSettleId 渠道结算流水号，与外部结算流水号二选一
                     * 
                     */
                    std::string GetChannelSettleId() const;

                    /**
                     * 设置渠道结算流水号，与外部结算流水号二选一
                     * @param _channelSettleId 渠道结算流水号，与外部结算流水号二选一
                     * 
                     */
                    void SetChannelSettleId(const std::string& _channelSettleId);

                    /**
                     * 判断参数 ChannelSettleId 是否已赋值
                     * @return ChannelSettleId 是否已赋值
                     * 
                     */
                    bool ChannelSettleIdHasBeenSet() const;

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
                     * 渠道商户号
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 渠道子商户号
                     */
                    std::string m_channelSubMerchantId;
                    bool m_channelSubMerchantIdHasBeenSet;

                    /**
                     * 外部结算流水号，与渠道结算流水号二选一
                     */
                    std::string m_outSettleId;
                    bool m_outSettleIdHasBeenSet;

                    /**
                     * 渠道结算流水号，与外部结算流水号二选一
                     */
                    std::string m_channelSettleId;
                    bool m_channelSettleIdHasBeenSet;

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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKSETTLEORDERREQUEST_H_
