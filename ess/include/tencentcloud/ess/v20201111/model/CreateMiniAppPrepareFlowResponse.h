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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEMINIAPPPREPAREFLOWRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEMINIAPPPREPAREFLOWRESPONSE_H_

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
                * CreateMiniAppPrepareFlow返回参数结构体
                */
                class CreateMiniAppPrepareFlowResponse : public AbstractModel
                {
                public:
                    CreateMiniAppPrepareFlowResponse();
                    ~CreateMiniAppPrepareFlowResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取H5跳转到电子签小程序链接, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序
                     * @return LongUrl H5跳转到电子签小程序链接, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序
                     * 
                     */
                    std::string GetLongUrl() const;

                    /**
                     * 判断参数 LongUrl 是否已赋值
                     * @return LongUrl 是否已赋值
                     * 
                     */
                    bool LongUrlHasBeenSet() const;

                    /**
                     * 获取H5跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序
                     * @return ShortUrl H5跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序
                     * 
                     */
                    std::string GetShortUrl() const;

                    /**
                     * 判断参数 ShortUrl 是否已赋值
                     * @return ShortUrl 是否已赋值
                     * 
                     */
                    bool ShortUrlHasBeenSet() const;

                    /**
                     * 获取APP或小程序跳转电子签小程序链接, 一般用于客户小程序或者APP跳转过来, 打开后进入腾讯电子签小程序
                     * @return MiniAppPath APP或小程序跳转电子签小程序链接, 一般用于客户小程序或者APP跳转过来, 打开后进入腾讯电子签小程序
                     * 
                     */
                    std::string GetMiniAppPath() const;

                    /**
                     * 判断参数 MiniAppPath 是否已赋值
                     * @return MiniAppPath 是否已赋值
                     * 
                     */
                    bool MiniAppPathHasBeenSet() const;

                    /**
                     * 获取创建的合同id（还未实际发起，也未扣费），每次调用会生成新的id，用户可以记录此字段对应后续在小程序发起的合同，若在小程序上未成功发起，则此字段无效。
                     * @return FlowId 创建的合同id（还未实际发起，也未扣费），每次调用会生成新的id，用户可以记录此字段对应后续在小程序发起的合同，若在小程序上未成功发起，则此字段无效。
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取跳转至电子签小程序的二维码链接
                     * @return QrcodeUrl 跳转至电子签小程序的二维码链接
                     * 
                     */
                    std::string GetQrcodeUrl() const;

                    /**
                     * 判断参数 QrcodeUrl 是否已赋值
                     * @return QrcodeUrl 是否已赋值
                     * 
                     */
                    bool QrcodeUrlHasBeenSet() const;

                    /**
                     * 获取直接跳转至电子签小程序的二维码链接，无需通过中转页。需要自行将其转换为二维码，使用微信扫码后可直接进入。
                     * @return WeixinQrcodeUrl 直接跳转至电子签小程序的二维码链接，无需通过中转页。需要自行将其转换为二维码，使用微信扫码后可直接进入。
                     * 
                     */
                    std::string GetWeixinQrcodeUrl() const;

                    /**
                     * 判断参数 WeixinQrcodeUrl 是否已赋值
                     * @return WeixinQrcodeUrl 是否已赋值
                     * 
                     */
                    bool WeixinQrcodeUrlHasBeenSet() const;

                    /**
                     * 获取链接过期时间，精确到秒，若在此过期时间前未使用，则链接失效。

                     * @return ExpiredOn 链接过期时间，精确到秒，若在此过期时间前未使用，则链接失效。

                     * 
                     */
                    int64_t GetExpiredOn() const;

                    /**
                     * 判断参数 ExpiredOn 是否已赋值
                     * @return ExpiredOn 是否已赋值
                     * 
                     */
                    bool ExpiredOnHasBeenSet() const;

                private:

                    /**
                     * H5跳转到电子签小程序链接, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序
                     */
                    std::string m_longUrl;
                    bool m_longUrlHasBeenSet;

                    /**
                     * H5跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序
                     */
                    std::string m_shortUrl;
                    bool m_shortUrlHasBeenSet;

                    /**
                     * APP或小程序跳转电子签小程序链接, 一般用于客户小程序或者APP跳转过来, 打开后进入腾讯电子签小程序
                     */
                    std::string m_miniAppPath;
                    bool m_miniAppPathHasBeenSet;

                    /**
                     * 创建的合同id（还未实际发起，也未扣费），每次调用会生成新的id，用户可以记录此字段对应后续在小程序发起的合同，若在小程序上未成功发起，则此字段无效。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 跳转至电子签小程序的二维码链接
                     */
                    std::string m_qrcodeUrl;
                    bool m_qrcodeUrlHasBeenSet;

                    /**
                     * 直接跳转至电子签小程序的二维码链接，无需通过中转页。需要自行将其转换为二维码，使用微信扫码后可直接进入。
                     */
                    std::string m_weixinQrcodeUrl;
                    bool m_weixinQrcodeUrlHasBeenSet;

                    /**
                     * 链接过期时间，精确到秒，若在此过期时间前未使用，则链接失效。

                     */
                    int64_t m_expiredOn;
                    bool m_expiredOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEMINIAPPPREPAREFLOWRESPONSE_H_
