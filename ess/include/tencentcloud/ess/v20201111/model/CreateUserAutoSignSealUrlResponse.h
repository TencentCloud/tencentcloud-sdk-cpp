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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEUSERAUTOSIGNSEALURLRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEUSERAUTOSIGNSEALURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateUserAutoSignSealUrl返回参数结构体
                */
                class CreateUserAutoSignSealUrlResponse : public AbstractModel
                {
                public:
                    CreateUserAutoSignSealUrlResponse();
                    ~CreateUserAutoSignSealUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯电子签小程序的AppId，用于其他小程序/APP等应用跳转至腾讯电子签小程序使用。
                     * @return AppId 腾讯电子签小程序的AppId，用于其他小程序/APP等应用跳转至腾讯电子签小程序使用。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取腾讯电子签小程序的原始Id，用于其他小程序/APP等应用跳转至腾讯电子签小程序使用。
                     * @return AppOriginalId 腾讯电子签小程序的原始Id，用于其他小程序/APP等应用跳转至腾讯电子签小程序使用。
                     * 
                     */
                    std::string GetAppOriginalId() const;

                    /**
                     * 判断参数 AppOriginalId 是否已赋值
                     * @return AppOriginalId 是否已赋值
                     * 
                     */
                    bool AppOriginalIdHasBeenSet() const;

                    /**
                     * 获取个人用户自动签的开通链接, 短链形式。过期时间受 `ExpiredTime` 参数控制。
                     * @return Url 个人用户自动签的开通链接, 短链形式。过期时间受 `ExpiredTime` 参数控制。
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
                     * 获取腾讯电子签小程序的跳转路径，用于其他小程序/APP等应用跳转至腾讯电子签小程序使用。
                     * @return Path 腾讯电子签小程序的跳转路径，用于其他小程序/APP等应用跳转至腾讯电子签小程序使用。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取base64格式的跳转二维码图片，可通过微信扫描后跳转到腾讯电子签小程序的开通界面。
                     * @return QrCode base64格式的跳转二维码图片，可通过微信扫描后跳转到腾讯电子签小程序的开通界面。
                     * 
                     */
                    std::string GetQrCode() const;

                    /**
                     * 判断参数 QrCode 是否已赋值
                     * @return QrCode 是否已赋值
                     * 
                     */
                    bool QrCodeHasBeenSet() const;

                private:

                    /**
                     * 腾讯电子签小程序的AppId，用于其他小程序/APP等应用跳转至腾讯电子签小程序使用。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 腾讯电子签小程序的原始Id，用于其他小程序/APP等应用跳转至腾讯电子签小程序使用。
                     */
                    std::string m_appOriginalId;
                    bool m_appOriginalIdHasBeenSet;

                    /**
                     * 个人用户自动签的开通链接, 短链形式。过期时间受 `ExpiredTime` 参数控制。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 腾讯电子签小程序的跳转路径，用于其他小程序/APP等应用跳转至腾讯电子签小程序使用。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * base64格式的跳转二维码图片，可通过微信扫描后跳转到腾讯电子签小程序的开通界面。
                     */
                    std::string m_qrCode;
                    bool m_qrCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEUSERAUTOSIGNSEALURLRESPONSE_H_
