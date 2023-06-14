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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_GETSAMLPROVIDERRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_GETSAMLPROVIDERRESPONSE_H_

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
                * GetSAMLProvider返回参数结构体
                */
                class GetSAMLProviderResponse : public AbstractModel
                {
                public:
                    GetSAMLProviderResponse();
                    ~GetSAMLProviderResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取SAML身份提供商名称
                     * @return Name SAML身份提供商名称
                     * 
                     */
                    std::string GetName() const;

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
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取SAML身份提供商创建时间
                     * @return CreateTime SAML身份提供商创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取SAML身份提供商上次修改时间
                     * @return ModifyTime SAML身份提供商上次修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取SAML身份提供商元数据文档
                     * @return SAMLMetadata SAML身份提供商元数据文档
                     * 
                     */
                    std::string GetSAMLMetadata() const;

                    /**
                     * 判断参数 SAMLMetadata 是否已赋值
                     * @return SAMLMetadata 是否已赋值
                     * 
                     */
                    bool SAMLMetadataHasBeenSet() const;

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
                     * SAML身份提供商创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * SAML身份提供商上次修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * SAML身份提供商元数据文档
                     */
                    std::string m_sAMLMetadata;
                    bool m_sAMLMetadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_GETSAMLPROVIDERRESPONSE_H_
