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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_UPDATEDESCRIPTIONREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_UPDATEDESCRIPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * UpdateDescription请求参数结构体
                */
                class UpdateDescriptionRequest : public AbstractModel
                {
                public:
                    UpdateDescriptionRequest();
                    ~UpdateDescriptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定需要更新描述信息的凭据名。
                     * @return SecretName 指定需要更新描述信息的凭据名。
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置指定需要更新描述信息的凭据名。
                     * @param _secretName 指定需要更新描述信息的凭据名。
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取新的描述信息，最大长度2048个字节。
                     * @return Description 新的描述信息，最大长度2048个字节。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置新的描述信息，最大长度2048个字节。
                     * @param _description 新的描述信息，最大长度2048个字节。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 指定需要更新描述信息的凭据名。
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * 新的描述信息，最大长度2048个字节。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_UPDATEDESCRIPTIONREQUEST_H_
