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
                     * 获取跳转短链
                     * @return Url 跳转短链
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
                     * 获取小程序AppId
                     * @return AppId 小程序AppId
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
                     * 获取小程序 原始 Id
                     * @return AppOriginalId 小程序 原始 Id
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
                     * 获取跳转路径
                     * @return Path 跳转路径
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
                     * 获取base64格式跳转二维码
                     * @return QrCode base64格式跳转二维码
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
                     * 获取链接类型，空-默认小程序端链接，H5SIGN-h5端链接
                     * @return UrlType 链接类型，空-默认小程序端链接，H5SIGN-h5端链接
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
                     * 跳转短链
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 小程序AppId
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 小程序 原始 Id
                     */
                    std::string m_appOriginalId;
                    bool m_appOriginalIdHasBeenSet;

                    /**
                     * 跳转路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * base64格式跳转二维码
                     */
                    std::string m_qrCode;
                    bool m_qrCodeHasBeenSet;

                    /**
                     * 链接类型，空-默认小程序端链接，H5SIGN-h5端链接
                     */
                    std::string m_urlType;
                    bool m_urlTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEUSERAUTOSIGNENABLEURLRESPONSE_H_
