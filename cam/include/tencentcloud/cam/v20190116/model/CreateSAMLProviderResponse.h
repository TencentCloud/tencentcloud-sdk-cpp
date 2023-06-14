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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_CREATESAMLPROVIDERRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_CREATESAMLPROVIDERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * CreateSAMLProvider返回参数结构体
                */
                class CreateSAMLProviderResponse : public AbstractModel
                {
                public:
                    CreateSAMLProviderResponse();
                    ~CreateSAMLProviderResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取SAML身份提供商资源描述符
                     * @return ProviderArn SAML身份提供商资源描述符
                     * 
                     */
                    std::string GetProviderArn() const;

                    /**
                     * 判断参数 ProviderArn 是否已赋值
                     * @return ProviderArn 是否已赋值
                     * 
                     */
                    bool ProviderArnHasBeenSet() const;

                private:

                    /**
                     * SAML身份提供商资源描述符
                     */
                    std::string m_providerArn;
                    bool m_providerArnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CREATESAMLPROVIDERRESPONSE_H_
