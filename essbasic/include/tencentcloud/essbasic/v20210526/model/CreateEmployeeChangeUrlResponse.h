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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEEMPLOYEECHANGEURLRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEEMPLOYEECHANGEURLRESPONSE_H_

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
                * CreateEmployeeChangeUrl返回参数结构体
                */
                class CreateEmployeeChangeUrlResponse : public AbstractModel
                {
                public:
                    CreateEmployeeChangeUrlResponse();
                    ~CreateEmployeeChangeUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>修改员工信息的小程序链接<br>跳转到腾讯电子签小程序的实现可以参考微信的官方文档:<a href="https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/launchApp.html" target="_blank">开放能力/打开 App</a></p>
                     * @return MiniAppPath <p>修改员工信息的小程序链接<br>跳转到腾讯电子签小程序的实现可以参考微信的官方文档:<a href="https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/launchApp.html" target="_blank">开放能力/打开 App</a></p>
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
                     * 获取<p>H5跳转到电子签小程序链接, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</p>
                     * @return LongUrl <p>H5跳转到电子签小程序链接, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</p>
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
                     * 获取<p>H5跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</p>
                     * @return ShortUrl <p>H5跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</p>
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
                     * 获取<p>链接过期时间以 Unix 时间戳格式表示，从生成链接时间起，往后7天有效期。过期后短链将失效，无法打开。</p>
                     * @return ExpireTime <p>链接过期时间以 Unix 时间戳格式表示，从生成链接时间起，往后7天有效期。过期后短链将失效，无法打开。</p>
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * <p>修改员工信息的小程序链接<br>跳转到腾讯电子签小程序的实现可以参考微信的官方文档:<a href="https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/launchApp.html" target="_blank">开放能力/打开 App</a></p>
                     */
                    std::string m_miniAppPath;
                    bool m_miniAppPathHasBeenSet;

                    /**
                     * <p>H5跳转到电子签小程序链接, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</p>
                     */
                    std::string m_longUrl;
                    bool m_longUrlHasBeenSet;

                    /**
                     * <p>H5跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</p>
                     */
                    std::string m_shortUrl;
                    bool m_shortUrlHasBeenSet;

                    /**
                     * <p>链接过期时间以 Unix 时间戳格式表示，从生成链接时间起，往后7天有效期。过期后短链将失效，无法打开。</p>
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEEMPLOYEECHANGEURLRESPONSE_H_
