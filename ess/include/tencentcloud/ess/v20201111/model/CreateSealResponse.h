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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATESEALRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATESEALRESPONSE_H_

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
                * CreateSeal返回参数结构体
                */
                class CreateSealResponse : public AbstractModel
                {
                public:
                    CreateSealResponse();
                    ~CreateSealResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取电子印章ID，为32位字符串。
建议开发者保留此印章ID，后续指定签署区印章或者操作印章需此印章ID。
可登录腾讯电子签控制台，在 "印章"->"印章中心"选择查看的印章，在"印章详情" 中查看某个印章的SealId(在页面中展示为印章ID)。
                     * @return SealId 电子印章ID，为32位字符串。
建议开发者保留此印章ID，后续指定签署区印章或者操作印章需此印章ID。
可登录腾讯电子签控制台，在 "印章"->"印章中心"选择查看的印章，在"印章详情" 中查看某个印章的SealId(在页面中展示为印章ID)。
                     * 
                     */
                    std::string GetSealId() const;

                    /**
                     * 判断参数 SealId 是否已赋值
                     * @return SealId 是否已赋值
                     * 
                     */
                    bool SealIdHasBeenSet() const;

                    /**
                     * 获取人脸验证操作人链接，用法可以参考"[跳转电子签小程序配置](https://qian.tencent.com/developers/company/openwxminiprogram/)"，默认为空。
                     * @return SealOperatorVerifyPath 人脸验证操作人链接，用法可以参考"[跳转电子签小程序配置](https://qian.tencent.com/developers/company/openwxminiprogram/)"，默认为空。
                     * 
                     */
                    std::string GetSealOperatorVerifyPath() const;

                    /**
                     * 判断参数 SealOperatorVerifyPath 是否已赋值
                     * @return SealOperatorVerifyPath 是否已赋值
                     * 
                     */
                    bool SealOperatorVerifyPathHasBeenSet() const;

                    /**
                     * 获取人脸验证操作人二维码链接，扫码后会跳转到腾讯电子签小程序进行人脸验证，默认为空。
                     * @return SealOperatorVerifyQrcodeUrl 人脸验证操作人二维码链接，扫码后会跳转到腾讯电子签小程序进行人脸验证，默认为空。
                     * 
                     */
                    std::string GetSealOperatorVerifyQrcodeUrl() const;

                    /**
                     * 判断参数 SealOperatorVerifyQrcodeUrl 是否已赋值
                     * @return SealOperatorVerifyQrcodeUrl 是否已赋值
                     * 
                     */
                    bool SealOperatorVerifyQrcodeUrlHasBeenSet() const;

                private:

                    /**
                     * 电子印章ID，为32位字符串。
建议开发者保留此印章ID，后续指定签署区印章或者操作印章需此印章ID。
可登录腾讯电子签控制台，在 "印章"->"印章中心"选择查看的印章，在"印章详情" 中查看某个印章的SealId(在页面中展示为印章ID)。
                     */
                    std::string m_sealId;
                    bool m_sealIdHasBeenSet;

                    /**
                     * 人脸验证操作人链接，用法可以参考"[跳转电子签小程序配置](https://qian.tencent.com/developers/company/openwxminiprogram/)"，默认为空。
                     */
                    std::string m_sealOperatorVerifyPath;
                    bool m_sealOperatorVerifyPathHasBeenSet;

                    /**
                     * 人脸验证操作人二维码链接，扫码后会跳转到腾讯电子签小程序进行人脸验证，默认为空。
                     */
                    std::string m_sealOperatorVerifyQrcodeUrl;
                    bool m_sealOperatorVerifyQrcodeUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATESEALRESPONSE_H_
