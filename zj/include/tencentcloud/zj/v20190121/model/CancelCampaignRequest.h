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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_CANCELCAMPAIGNREQUEST_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_CANCELCAMPAIGNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            namespace Model
            {
                /**
                * CancelCampaign请求参数结构体
                */
                class CancelCampaignRequest : public AbstractModel
                {
                public:
                    CancelCampaignRequest();
                    ~CancelCampaignRequest() = default;
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
                     * 获取短信活动id
                     * @return CampaignId 短信活动id
                     * 
                     */
                    int64_t GetCampaignId() const;

                    /**
                     * 设置短信活动id
                     * @param _campaignId 短信活动id
                     * 
                     */
                    void SetCampaignId(const int64_t& _campaignId);

                    /**
                     * 判断参数 CampaignId 是否已赋值
                     * @return CampaignId 是否已赋值
                     * 
                     */
                    bool CampaignIdHasBeenSet() const;

                private:

                    /**
                     * 商户证书
                     */
                    std::string m_license;
                    bool m_licenseHasBeenSet;

                    /**
                     * 短信活动id
                     */
                    int64_t m_campaignId;
                    bool m_campaignIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_CANCELCAMPAIGNREQUEST_H_
