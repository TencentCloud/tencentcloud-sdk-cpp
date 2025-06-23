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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_MODIFYPARTNERAUTOSIGNAUTHURLRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_MODIFYPARTNERAUTOSIGNAUTHURLRESPONSE_H_

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
                * ModifyPartnerAutoSignAuthUrl返回参数结构体
                */
                class ModifyPartnerAutoSignAuthUrlResponse : public AbstractModel
                {
                public:
                    ModifyPartnerAutoSignAuthUrlResponse();
                    ~ModifyPartnerAutoSignAuthUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取授权链接，以短链形式返回，短链的有效期参考回参中的 ExpiredTime。
                     * @return Url 授权链接，以短链形式返回，短链的有效期参考回参中的 ExpiredTime。
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
                     * 获取从客户小程序或者客户APP跳转至腾讯电子签小程序进行批量签署的跳转路径
                     * @return MiniAppPath 从客户小程序或者客户APP跳转至腾讯电子签小程序进行批量签署的跳转路径
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
                     * 获取链接过期时间以 Unix 时间戳格式表示，从生成链接时间起，往后7天有效期。过期后短链将失效，无法打开。
                     * @return ExpireTime 链接过期时间以 Unix 时间戳格式表示，从生成链接时间起，往后7天有效期。过期后短链将失效，无法打开。
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
                     * 授权链接，以短链形式返回，短链的有效期参考回参中的 ExpiredTime。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 从客户小程序或者客户APP跳转至腾讯电子签小程序进行批量签署的跳转路径
                     */
                    std::string m_miniAppPath;
                    bool m_miniAppPathHasBeenSet;

                    /**
                     * 链接过期时间以 Unix 时间戳格式表示，从生成链接时间起，往后7天有效期。过期后短链将失效，无法打开。
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_MODIFYPARTNERAUTOSIGNAUTHURLRESPONSE_H_
