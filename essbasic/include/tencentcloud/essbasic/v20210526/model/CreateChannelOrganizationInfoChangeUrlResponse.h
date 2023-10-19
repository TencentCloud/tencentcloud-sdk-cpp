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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATECHANNELORGANIZATIONINFOCHANGEURLRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATECHANNELORGANIZATIONINFOCHANGEURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * CreateChannelOrganizationInfoChangeUrl返回参数结构体
                */
                class CreateChannelOrganizationInfoChangeUrlResponse : public AbstractModel
                {
                public:
                    CreateChannelOrganizationInfoChangeUrlResponse();
                    ~CreateChannelOrganizationInfoChangeUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取创建的企业信息变更链接。需要在移动端打开，会跳转到微信腾讯电子签小程序进行更换。
                     * @return Url 创建的企业信息变更链接。需要在移动端打开，会跳转到微信腾讯电子签小程序进行更换。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取链接过期时间。链接7天有效。
                     * @return ExpiredTime 链接过期时间。链接7天有效。
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * 创建的企业信息变更链接。需要在移动端打开，会跳转到微信腾讯电子签小程序进行更换。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 链接过期时间。链接7天有效。
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATECHANNELORGANIZATIONINFOCHANGEURLRESPONSE_H_
