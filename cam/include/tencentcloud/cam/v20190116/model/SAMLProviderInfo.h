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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_SAMLPROVIDERINFO_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_SAMLPROVIDERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * SAML身份提供商
                */
                class SAMLProviderInfo : public AbstractModel
                {
                public:
                    SAMLProviderInfo();
                    ~SAMLProviderInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取SAML身份提供商创建时间
                     * @return CreateTime SAML身份提供商创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置SAML身份提供商创建时间
                     * @param _createTime SAML身份提供商创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

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
                     * 设置SAML身份提供商上次修改时间
                     * @param _modifyTime SAML身份提供商上次修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_SAMLPROVIDERINFO_H_
