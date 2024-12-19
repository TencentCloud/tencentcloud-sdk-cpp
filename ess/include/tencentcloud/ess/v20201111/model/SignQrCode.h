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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_SIGNQRCODE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_SIGNQRCODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 签署二维码的基本信息，用于创建二维码，用户可扫描该二维码进行签署操作。
                */
                class SignQrCode : public AbstractModel
                {
                public:
                    SignQrCode();
                    ~SignQrCode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取二维码ID，为32位字符串。
                     * @return QrCodeId 二维码ID，为32位字符串。
                     * 
                     */
                    std::string GetQrCodeId() const;

                    /**
                     * 设置二维码ID，为32位字符串。
                     * @param _qrCodeId 二维码ID，为32位字符串。
                     * 
                     */
                    void SetQrCodeId(const std::string& _qrCodeId);

                    /**
                     * 判断参数 QrCodeId 是否已赋值
                     * @return QrCodeId 是否已赋值
                     * 
                     */
                    bool QrCodeIdHasBeenSet() const;

                    /**
                     * 获取二维码URL，可通过转换二维码的工具或代码组件将此URL转化为二维码，以便用户扫描进行流程签署。
                     * @return QrCodeUrl 二维码URL，可通过转换二维码的工具或代码组件将此URL转化为二维码，以便用户扫描进行流程签署。
                     * 
                     */
                    std::string GetQrCodeUrl() const;

                    /**
                     * 设置二维码URL，可通过转换二维码的工具或代码组件将此URL转化为二维码，以便用户扫描进行流程签署。
                     * @param _qrCodeUrl 二维码URL，可通过转换二维码的工具或代码组件将此URL转化为二维码，以便用户扫描进行流程签署。
                     * 
                     */
                    void SetQrCodeUrl(const std::string& _qrCodeUrl);

                    /**
                     * 判断参数 QrCodeUrl 是否已赋值
                     * @return QrCodeUrl 是否已赋值
                     * 
                     */
                    bool QrCodeUrlHasBeenSet() const;

                    /**
                     * 获取二维码的有截止时间，格式为Unix标准时间戳（秒）。
一旦超过二维码的有效期限，该二维码将自动失效。
                     * @return ExpiredTime 二维码的有截止时间，格式为Unix标准时间戳（秒）。
一旦超过二维码的有效期限，该二维码将自动失效。
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 设置二维码的有截止时间，格式为Unix标准时间戳（秒）。
一旦超过二维码的有效期限，该二维码将自动失效。
                     * @param _expiredTime 二维码的有截止时间，格式为Unix标准时间戳（秒）。
一旦超过二维码的有效期限，该二维码将自动失效。
                     * 
                     */
                    void SetExpiredTime(const int64_t& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取微信小程序二维码
                     * @return WeixinQrCodeUrl 微信小程序二维码
                     * 
                     */
                    std::string GetWeixinQrCodeUrl() const;

                    /**
                     * 设置微信小程序二维码
                     * @param _weixinQrCodeUrl 微信小程序二维码
                     * 
                     */
                    void SetWeixinQrCodeUrl(const std::string& _weixinQrCodeUrl);

                    /**
                     * 判断参数 WeixinQrCodeUrl 是否已赋值
                     * @return WeixinQrCodeUrl 是否已赋值
                     * 
                     */
                    bool WeixinQrCodeUrlHasBeenSet() const;

                private:

                    /**
                     * 二维码ID，为32位字符串。
                     */
                    std::string m_qrCodeId;
                    bool m_qrCodeIdHasBeenSet;

                    /**
                     * 二维码URL，可通过转换二维码的工具或代码组件将此URL转化为二维码，以便用户扫描进行流程签署。
                     */
                    std::string m_qrCodeUrl;
                    bool m_qrCodeUrlHasBeenSet;

                    /**
                     * 二维码的有截止时间，格式为Unix标准时间戳（秒）。
一旦超过二维码的有效期限，该二维码将自动失效。
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 微信小程序二维码
                     */
                    std::string m_weixinQrCodeUrl;
                    bool m_weixinQrCodeUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_SIGNQRCODE_H_
