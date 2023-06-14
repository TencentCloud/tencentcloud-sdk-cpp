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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEAGENTTAXPAYMENTINFOSREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEAGENTTAXPAYMENTINFOSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/AgentTaxPayment.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * CreateAgentTaxPaymentInfos请求参数结构体
                */
                class CreateAgentTaxPaymentInfosRequest : public AbstractModel
                {
                public:
                    CreateAgentTaxPaymentInfosRequest();
                    ~CreateAgentTaxPaymentInfosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取代理商ID
                     * @return AgentId 代理商ID
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置代理商ID
                     * @param _agentId 代理商ID
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取平台渠道
                     * @return Channel 平台渠道
                     * 
                     */
                    int64_t GetChannel() const;

                    /**
                     * 设置平台渠道
                     * @param _channel 平台渠道
                     * 
                     */
                    void SetChannel(const int64_t& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取类型。0-视同，1-个体工商户
                     * @return Type 类型。0-视同，1-个体工商户
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置类型。0-视同，1-个体工商户
                     * @param _type 类型。0-视同，1-个体工商户
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取源电子凭证下载地址
                     * @return RawElectronicCertUrl 源电子凭证下载地址
                     * 
                     */
                    std::string GetRawElectronicCertUrl() const;

                    /**
                     * 设置源电子凭证下载地址
                     * @param _rawElectronicCertUrl 源电子凭证下载地址
                     * 
                     */
                    void SetRawElectronicCertUrl(const std::string& _rawElectronicCertUrl);

                    /**
                     * 判断参数 RawElectronicCertUrl 是否已赋值
                     * @return RawElectronicCertUrl 是否已赋值
                     * 
                     */
                    bool RawElectronicCertUrlHasBeenSet() const;

                    /**
                     * 获取文件名
                     * @return FileName 文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名
                     * @param _fileName 文件名
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取完税信息
                     * @return AgentTaxPaymentInfos 完税信息
                     * 
                     */
                    std::vector<AgentTaxPayment> GetAgentTaxPaymentInfos() const;

                    /**
                     * 设置完税信息
                     * @param _agentTaxPaymentInfos 完税信息
                     * 
                     */
                    void SetAgentTaxPaymentInfos(const std::vector<AgentTaxPayment>& _agentTaxPaymentInfos);

                    /**
                     * 判断参数 AgentTaxPaymentInfos 是否已赋值
                     * @return AgentTaxPaymentInfos 是否已赋值
                     * 
                     */
                    bool AgentTaxPaymentInfosHasBeenSet() const;

                    /**
                     * 获取接入环境。沙箱环境填sandbox
                     * @return Profile 接入环境。沙箱环境填sandbox
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置接入环境。沙箱环境填sandbox
                     * @param _profile 接入环境。沙箱环境填sandbox
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * 代理商ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 平台渠道
                     */
                    int64_t m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 类型。0-视同，1-个体工商户
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 源电子凭证下载地址
                     */
                    std::string m_rawElectronicCertUrl;
                    bool m_rawElectronicCertUrlHasBeenSet;

                    /**
                     * 文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 完税信息
                     */
                    std::vector<AgentTaxPayment> m_agentTaxPaymentInfos;
                    bool m_agentTaxPaymentInfosHasBeenSet;

                    /**
                     * 接入环境。沙箱环境填sandbox
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEAGENTTAXPAYMENTINFOSREQUEST_H_
