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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_CREATECAMPAIGNREQUEST_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_CREATECAMPAIGNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/zj/v20190121/model/PaasStrategy.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            namespace Model
            {
                /**
                * CreateCampaign请求参数结构体
                */
                class CreateCampaignRequest : public AbstractModel
                {
                public:
                    CreateCampaignRequest();
                    ~CreateCampaignRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取商户证书
                     * @return License 商户证书
                     * 
                     */
                    std::string GetLicense() const;

                    /**
                     * 设置商户证书
                     * @param _license 商户证书
                     * 
                     */
                    void SetLicense(const std::string& _license);

                    /**
                     * 判断参数 License 是否已赋值
                     * @return License 是否已赋值
                     * 
                     */
                    bool LicenseHasBeenSet() const;

                    /**
                     * 获取短信活动发送时间
                     * @return SendTime 短信活动发送时间
                     * 
                     */
                    int64_t GetSendTime() const;

                    /**
                     * 设置短信活动发送时间
                     * @param _sendTime 短信活动发送时间
                     * 
                     */
                    void SetSendTime(const int64_t& _sendTime);

                    /**
                     * 判断参数 SendTime 是否已赋值
                     * @return SendTime 是否已赋值
                     * 
                     */
                    bool SendTimeHasBeenSet() const;

                    /**
                     * 获取短信活动名称
                     * @return Name 短信活动名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置短信活动名称
                     * @param _name 短信活动名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取发送策略
                     * @return Strategies 发送策略
                     * 
                     */
                    std::vector<PaasStrategy> GetStrategies() const;

                    /**
                     * 设置发送策略
                     * @param _strategies 发送策略
                     * 
                     */
                    void SetStrategies(const std::vector<PaasStrategy>& _strategies);

                    /**
                     * 判断参数 Strategies 是否已赋值
                     * @return Strategies 是否已赋值
                     * 
                     */
                    bool StrategiesHasBeenSet() const;

                    /**
                     * 获取废弃
                     * @return TemplateId 废弃
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置废弃
                     * @param _templateId 废弃
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取废弃
                     * @return CrowdID 废弃
                     * 
                     */
                    int64_t GetCrowdID() const;

                    /**
                     * 设置废弃
                     * @param _crowdID 废弃
                     * 
                     */
                    void SetCrowdID(const int64_t& _crowdID);

                    /**
                     * 判断参数 CrowdID 是否已赋值
                     * @return CrowdID 是否已赋值
                     * 
                     */
                    bool CrowdIDHasBeenSet() const;

                    /**
                     * 获取活动类型(0-短信,1-超短,不填默认为超短)
                     * @return SmsType 活动类型(0-短信,1-超短,不填默认为超短)
                     * 
                     */
                    uint64_t GetSmsType() const;

                    /**
                     * 设置活动类型(0-短信,1-超短,不填默认为超短)
                     * @param _smsType 活动类型(0-短信,1-超短,不填默认为超短)
                     * 
                     */
                    void SetSmsType(const uint64_t& _smsType);

                    /**
                     * 判断参数 SmsType 是否已赋值
                     * @return SmsType 是否已赋值
                     * 
                     */
                    bool SmsTypeHasBeenSet() const;

                private:

                    /**
                     * 商户证书
                     */
                    std::string m_license;
                    bool m_licenseHasBeenSet;

                    /**
                     * 短信活动发送时间
                     */
                    int64_t m_sendTime;
                    bool m_sendTimeHasBeenSet;

                    /**
                     * 短信活动名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 发送策略
                     */
                    std::vector<PaasStrategy> m_strategies;
                    bool m_strategiesHasBeenSet;

                    /**
                     * 废弃
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 废弃
                     */
                    int64_t m_crowdID;
                    bool m_crowdIDHasBeenSet;

                    /**
                     * 活动类型(0-短信,1-超短,不填默认为超短)
                     */
                    uint64_t m_smsType;
                    bool m_smsTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_CREATECAMPAIGNREQUEST_H_
