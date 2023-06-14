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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_CREATESAMLPROVIDERREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_CREATESAMLPROVIDERREQUEST_H_

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
                * CreateSAMLProvider请求参数结构体
                */
                class CreateSAMLProviderRequest : public AbstractModel
                {
                public:
                    CreateSAMLProviderRequest();
                    ~CreateSAMLProviderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SAML身份提供商名称
                     * @return Name SAML身份提供商名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置SAML身份提供商名称
                     * @param _name SAML身份提供商名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取SAML身份提供商描述
                     * @return Description SAML身份提供商描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置SAML身份提供商描述
                     * @param _description SAML身份提供商描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取SAML身份提供商Base64编码的元数据文档
                     * @return SAMLMetadataDocument SAML身份提供商Base64编码的元数据文档
                     * 
                     */
                    std::string GetSAMLMetadataDocument() const;

                    /**
                     * 设置SAML身份提供商Base64编码的元数据文档
                     * @param _sAMLMetadataDocument SAML身份提供商Base64编码的元数据文档
                     * 
                     */
                    void SetSAMLMetadataDocument(const std::string& _sAMLMetadataDocument);

                    /**
                     * 判断参数 SAMLMetadataDocument 是否已赋值
                     * @return SAMLMetadataDocument 是否已赋值
                     * 
                     */
                    bool SAMLMetadataDocumentHasBeenSet() const;

                private:

                    /**
                     * SAML身份提供商名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * SAML身份提供商描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * SAML身份提供商Base64编码的元数据文档
                     */
                    std::string m_sAMLMetadataDocument;
                    bool m_sAMLMetadataDocumentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CREATESAMLPROVIDERREQUEST_H_
