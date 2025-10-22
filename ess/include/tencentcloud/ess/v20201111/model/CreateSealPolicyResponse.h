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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATESEALPOLICYRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATESEALPOLICYRESPONSE_H_

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
                * CreateSealPolicy返回参数结构体
                */
                class CreateSealPolicyResponse : public AbstractModel
                {
                public:
                    CreateSealPolicyResponse();
                    ~CreateSealPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取最终授权成功的用户ID，在腾讯电子签平台的唯一身份标识，为32位字符串。
可登录腾讯电子签控制台，在 "更多能力"->"组织管理" 中查看某位员工的UserId(在页面中展示为用户ID)。
                     * @return UserIds 最终授权成功的用户ID，在腾讯电子签平台的唯一身份标识，为32位字符串。
可登录腾讯电子签控制台，在 "更多能力"->"组织管理" 中查看某位员工的UserId(在页面中展示为用户ID)。
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

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
                     * 最终授权成功的用户ID，在腾讯电子签平台的唯一身份标识，为32位字符串。
可登录腾讯电子签控制台，在 "更多能力"->"组织管理" 中查看某位员工的UserId(在页面中展示为用户ID)。
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

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

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATESEALPOLICYRESPONSE_H_
