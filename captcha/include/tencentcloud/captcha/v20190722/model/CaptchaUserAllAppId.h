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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHAUSERALLAPPID_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHAUSERALLAPPID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 用户注册的APPID和应用名称对象
                */
                class CaptchaUserAllAppId : public AbstractModel
                {
                public:
                    CaptchaUserAllAppId();
                    ~CaptchaUserAllAppId() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取验证码应用ID
                     * @return CaptchaAppId 验证码应用ID
                     * 
                     */
                    int64_t GetCaptchaAppId() const;

                    /**
                     * 设置验证码应用ID
                     * @param _captchaAppId 验证码应用ID
                     * 
                     */
                    void SetCaptchaAppId(const int64_t& _captchaAppId);

                    /**
                     * 判断参数 CaptchaAppId 是否已赋值
                     * @return CaptchaAppId 是否已赋值
                     * 
                     */
                    bool CaptchaAppIdHasBeenSet() const;

                    /**
                     * 获取注册应用名称
                     * @return AppName 注册应用名称
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置注册应用名称
                     * @param _appName 注册应用名称
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取腾讯云APPID
                     * @return TcAppId 腾讯云APPID
                     * 
                     */
                    int64_t GetTcAppId() const;

                    /**
                     * 设置腾讯云APPID
                     * @param _tcAppId 腾讯云APPID
                     * 
                     */
                    void SetTcAppId(const int64_t& _tcAppId);

                    /**
                     * 判断参数 TcAppId 是否已赋值
                     * @return TcAppId 是否已赋值
                     * 
                     */
                    bool TcAppIdHasBeenSet() const;

                    /**
                     * 获取渠道信息
                     * @return ChannelInfo 渠道信息
                     * 
                     */
                    std::string GetChannelInfo() const;

                    /**
                     * 设置渠道信息
                     * @param _channelInfo 渠道信息
                     * 
                     */
                    void SetChannelInfo(const std::string& _channelInfo);

                    /**
                     * 判断参数 ChannelInfo 是否已赋值
                     * @return ChannelInfo 是否已赋值
                     * 
                     */
                    bool ChannelInfoHasBeenSet() const;

                private:

                    /**
                     * 验证码应用ID
                     */
                    int64_t m_captchaAppId;
                    bool m_captchaAppIdHasBeenSet;

                    /**
                     * 注册应用名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 腾讯云APPID
                     */
                    int64_t m_tcAppId;
                    bool m_tcAppIdHasBeenSet;

                    /**
                     * 渠道信息
                     */
                    std::string m_channelInfo;
                    bool m_channelInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHAUSERALLAPPID_H_
