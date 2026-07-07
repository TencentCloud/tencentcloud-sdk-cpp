/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEUSERAUTOSIGNENABLEURLRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEUSERAUTOSIGNENABLEURLRESPONSE_H_

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
                * ChannelCreateUserAutoSignEnableUrl返回参数结构体
                */
                class ChannelCreateUserAutoSignEnableUrlResponse : public AbstractModel
                {
                public:
                    ChannelCreateUserAutoSignEnableUrlResponse();
                    ~ChannelCreateUserAutoSignEnableUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>个人用户自动签的开通链接, 短链或者长链接形式。过期时间受 <code>ExpiredTime</code> 参数控制。</p>
                     * @return Url <p>个人用户自动签的开通链接, 短链或者长链接形式。过期时间受 <code>ExpiredTime</code> 参数控制。</p>
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
                     * 获取<p>腾讯电子签小程序的 AppID，用于其他小程序/APP等应用跳转至腾讯电子签小程序使用</p><p>注: <code>如果获取的是H5链接, 则不会返回此值</code></p>
                     * @return AppId <p>腾讯电子签小程序的 AppID，用于其他小程序/APP等应用跳转至腾讯电子签小程序使用</p><p>注: <code>如果获取的是H5链接, 则不会返回此值</code></p>
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
                     * 获取<p>腾讯电子签小程序的原始 Id,  ，用于其他小程序/APP等应用跳转至腾讯电子签小程序使用</p><p>注: <code>如果获取的是H5链接, 则不会返回此值</code></p>
                     * @return AppOriginalId <p>腾讯电子签小程序的原始 Id,  ，用于其他小程序/APP等应用跳转至腾讯电子签小程序使用</p><p>注: <code>如果获取的是H5链接, 则不会返回此值</code></p>
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
                     * 获取<p>腾讯电子签小程序的跳转路径，用于其他小程序/APP等应用跳转至腾讯电子签小程序使用</p><p>注: <code>如果获取的是H5链接, 则不会返回此值</code></p>
                     * @return Path <p>腾讯电子签小程序的跳转路径，用于其他小程序/APP等应用跳转至腾讯电子签小程序使用</p><p>注: <code>如果获取的是H5链接, 则不会返回此值</code></p>
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
                     * 获取<p>base64 格式的跳转二维码图片，可通过微信扫描后跳转到腾讯电子签小程序的开通界面。</p><p>注: <code>如果获取的是H5链接, 则不会返回此二维码图片</code></p>
                     * @return QrCode <p>base64 格式的跳转二维码图片，可通过微信扫描后跳转到腾讯电子签小程序的开通界面。</p><p>注: <code>如果获取的是H5链接, 则不会返回此二维码图片</code></p>
                     * 
                     */
                    std::string GetQrCode() const;

                    /**
                     * 判断参数 QrCode 是否已赋值
                     * @return QrCode 是否已赋值
                     * 
                     */
                    bool QrCodeHasBeenSet() const;

                    /**
                     * 获取<p>返回的链接类型</p><ul><li> 空: 默认小程序端链接</li><li> **H5SIGN** : h5端链接</li></ul>
                     * @return UrlType <p>返回的链接类型</p><ul><li> 空: 默认小程序端链接</li><li> **H5SIGN** : h5端链接</li></ul>
                     * 
                     */
                    std::string GetUrlType() const;

                    /**
                     * 判断参数 UrlType 是否已赋值
                     * @return UrlType 是否已赋值
                     * 
                     */
                    bool UrlTypeHasBeenSet() const;

                private:

                    /**
                     * <p>个人用户自动签的开通链接, 短链或者长链接形式。过期时间受 <code>ExpiredTime</code> 参数控制。</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>腾讯电子签小程序的 AppID，用于其他小程序/APP等应用跳转至腾讯电子签小程序使用</p><p>注: <code>如果获取的是H5链接, 则不会返回此值</code></p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>腾讯电子签小程序的原始 Id,  ，用于其他小程序/APP等应用跳转至腾讯电子签小程序使用</p><p>注: <code>如果获取的是H5链接, 则不会返回此值</code></p>
                     */
                    std::string m_appOriginalId;
                    bool m_appOriginalIdHasBeenSet;

                    /**
                     * <p>腾讯电子签小程序的跳转路径，用于其他小程序/APP等应用跳转至腾讯电子签小程序使用</p><p>注: <code>如果获取的是H5链接, 则不会返回此值</code></p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>base64 格式的跳转二维码图片，可通过微信扫描后跳转到腾讯电子签小程序的开通界面。</p><p>注: <code>如果获取的是H5链接, 则不会返回此二维码图片</code></p>
                     */
                    std::string m_qrCode;
                    bool m_qrCodeHasBeenSet;

                    /**
                     * <p>返回的链接类型</p><ul><li> 空: 默认小程序端链接</li><li> **H5SIGN** : h5端链接</li></ul>
                     */
                    std::string m_urlType;
                    bool m_urlTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEUSERAUTOSIGNENABLEURLRESPONSE_H_
