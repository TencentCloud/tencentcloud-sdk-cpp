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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_SPONSORINFO_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_SPONSORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 网赚防刷相关参数
                */
                class SponsorInfo : public AbstractModel
                {
                public:
                    SponsorInfo();
                    ~SponsorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取OpenID
                     * @return SponsorOpenId OpenID
                     */
                    std::string GetSponsorOpenId() const;

                    /**
                     * 设置OpenID
                     * @param SponsorOpenId OpenID
                     */
                    void SetSponsorOpenId(const std::string& _sponsorOpenId);

                    /**
                     * 判断参数 SponsorOpenId 是否已赋值
                     * @return SponsorOpenId 是否已赋值
                     */
                    bool SponsorOpenIdHasBeenSet() const;

                    /**
                     * 获取设备号
                     * @return SponsorDeviceNumber 设备号
                     */
                    std::string GetSponsorDeviceNumber() const;

                    /**
                     * 设置设备号
                     * @param SponsorDeviceNumber 设备号
                     */
                    void SetSponsorDeviceNumber(const std::string& _sponsorDeviceNumber);

                    /**
                     * 判断参数 SponsorDeviceNumber 是否已赋值
                     * @return SponsorDeviceNumber 是否已赋值
                     */
                    bool SponsorDeviceNumberHasBeenSet() const;

                    /**
                     * 获取手机号
                     * @return SponsorPhone 手机号
                     */
                    std::string GetSponsorPhone() const;

                    /**
                     * 设置手机号
                     * @param SponsorPhone 手机号
                     */
                    void SetSponsorPhone(const std::string& _sponsorPhone);

                    /**
                     * 判断参数 SponsorPhone 是否已赋值
                     * @return SponsorPhone 是否已赋值
                     */
                    bool SponsorPhoneHasBeenSet() const;

                    /**
                     * 获取IP
                     * @return SponsorIp IP
                     */
                    std::string GetSponsorIp() const;

                    /**
                     * 设置IP
                     * @param SponsorIp IP
                     */
                    void SetSponsorIp(const std::string& _sponsorIp);

                    /**
                     * 判断参数 SponsorIp 是否已赋值
                     * @return SponsorIp 是否已赋值
                     */
                    bool SponsorIpHasBeenSet() const;

                    /**
                     * 获取链接
                     * @return CampaignUrl 链接
                     */
                    std::string GetCampaignUrl() const;

                    /**
                     * 设置链接
                     * @param CampaignUrl 链接
                     */
                    void SetCampaignUrl(const std::string& _campaignUrl);

                    /**
                     * 判断参数 CampaignUrl 是否已赋值
                     * @return CampaignUrl 是否已赋值
                     */
                    bool CampaignUrlHasBeenSet() const;

                private:

                    /**
                     * OpenID
                     */
                    std::string m_sponsorOpenId;
                    bool m_sponsorOpenIdHasBeenSet;

                    /**
                     * 设备号
                     */
                    std::string m_sponsorDeviceNumber;
                    bool m_sponsorDeviceNumberHasBeenSet;

                    /**
                     * 手机号
                     */
                    std::string m_sponsorPhone;
                    bool m_sponsorPhoneHasBeenSet;

                    /**
                     * IP
                     */
                    std::string m_sponsorIp;
                    bool m_sponsorIpHasBeenSet;

                    /**
                     * 链接
                     */
                    std::string m_campaignUrl;
                    bool m_campaignUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_SPONSORINFO_H_
