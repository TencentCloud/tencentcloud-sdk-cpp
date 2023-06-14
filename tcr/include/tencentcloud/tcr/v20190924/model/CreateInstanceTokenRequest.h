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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATEINSTANCETOKENREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATEINSTANCETOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateInstanceToken请求参数结构体
                */
                class CreateInstanceTokenRequest : public AbstractModel
                {
                public:
                    CreateInstanceTokenRequest();
                    ~CreateInstanceTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return RegistryId 实例Id
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例Id
                     * @param _registryId 实例Id
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取访问凭证类型，longterm 为长期访问凭证，temp 为临时访问凭证，默认是临时访问凭证，有效期1小时
                     * @return TokenType 访问凭证类型，longterm 为长期访问凭证，temp 为临时访问凭证，默认是临时访问凭证，有效期1小时
                     * 
                     */
                    std::string GetTokenType() const;

                    /**
                     * 设置访问凭证类型，longterm 为长期访问凭证，temp 为临时访问凭证，默认是临时访问凭证，有效期1小时
                     * @param _tokenType 访问凭证类型，longterm 为长期访问凭证，temp 为临时访问凭证，默认是临时访问凭证，有效期1小时
                     * 
                     */
                    void SetTokenType(const std::string& _tokenType);

                    /**
                     * 判断参数 TokenType 是否已赋值
                     * @return TokenType 是否已赋值
                     * 
                     */
                    bool TokenTypeHasBeenSet() const;

                    /**
                     * 获取长期访问凭证描述信息
                     * @return Desc 长期访问凭证描述信息
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置长期访问凭证描述信息
                     * @param _desc 长期访问凭证描述信息
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 访问凭证类型，longterm 为长期访问凭证，temp 为临时访问凭证，默认是临时访问凭证，有效期1小时
                     */
                    std::string m_tokenType;
                    bool m_tokenTypeHasBeenSet;

                    /**
                     * 长期访问凭证描述信息
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATEINSTANCETOKENREQUEST_H_
