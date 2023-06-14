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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPDATEAPIKEYREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPDATEAPIKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * UpdateApiKey请求参数结构体
                */
                class UpdateApiKeyRequest : public AbstractModel
                {
                public:
                    UpdateApiKeyRequest();
                    ~UpdateApiKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待更换的密钥 ID。
                     * @return AccessKeyId 待更换的密钥 ID。
                     * 
                     */
                    std::string GetAccessKeyId() const;

                    /**
                     * 设置待更换的密钥 ID。
                     * @param _accessKeyId 待更换的密钥 ID。
                     * 
                     */
                    void SetAccessKeyId(const std::string& _accessKeyId);

                    /**
                     * 判断参数 AccessKeyId 是否已赋值
                     * @return AccessKeyId 是否已赋值
                     * 
                     */
                    bool AccessKeyIdHasBeenSet() const;

                    /**
                     * 获取待更换的密钥 Key，更新自定义密钥时，该字段为必传。长度10 - 50字符，包括字母、数字、英文下划线。
                     * @return AccessKeySecret 待更换的密钥 Key，更新自定义密钥时，该字段为必传。长度10 - 50字符，包括字母、数字、英文下划线。
                     * 
                     */
                    std::string GetAccessKeySecret() const;

                    /**
                     * 设置待更换的密钥 Key，更新自定义密钥时，该字段为必传。长度10 - 50字符，包括字母、数字、英文下划线。
                     * @param _accessKeySecret 待更换的密钥 Key，更新自定义密钥时，该字段为必传。长度10 - 50字符，包括字母、数字、英文下划线。
                     * 
                     */
                    void SetAccessKeySecret(const std::string& _accessKeySecret);

                    /**
                     * 判断参数 AccessKeySecret 是否已赋值
                     * @return AccessKeySecret 是否已赋值
                     * 
                     */
                    bool AccessKeySecretHasBeenSet() const;

                private:

                    /**
                     * 待更换的密钥 ID。
                     */
                    std::string m_accessKeyId;
                    bool m_accessKeyIdHasBeenSet;

                    /**
                     * 待更换的密钥 Key，更新自定义密钥时，该字段为必传。长度10 - 50字符，包括字母、数字、英文下划线。
                     */
                    std::string m_accessKeySecret;
                    bool m_accessKeySecretHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPDATEAPIKEYREQUEST_H_
