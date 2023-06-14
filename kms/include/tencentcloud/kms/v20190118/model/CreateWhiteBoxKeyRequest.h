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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_CREATEWHITEBOXKEYREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_CREATEWHITEBOXKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/kms/v20190118/model/Tag.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * CreateWhiteBoxKey请求参数结构体
                */
                class CreateWhiteBoxKeyRequest : public AbstractModel
                {
                public:
                    CreateWhiteBoxKeyRequest();
                    ~CreateWhiteBoxKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作为密钥更容易辨识，更容易被人看懂的别名， 不可为空，1-60个字母数字 - _ 的组合，首字符必须为字母或者数字。Alias不可重复。
                     * @return Alias 作为密钥更容易辨识，更容易被人看懂的别名， 不可为空，1-60个字母数字 - _ 的组合，首字符必须为字母或者数字。Alias不可重复。
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置作为密钥更容易辨识，更容易被人看懂的别名， 不可为空，1-60个字母数字 - _ 的组合，首字符必须为字母或者数字。Alias不可重复。
                     * @param _alias 作为密钥更容易辨识，更容易被人看懂的别名， 不可为空，1-60个字母数字 - _ 的组合，首字符必须为字母或者数字。Alias不可重复。
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取创建密钥所有的算法类型，支持的取值：AES_256,SM4
                     * @return Algorithm 创建密钥所有的算法类型，支持的取值：AES_256,SM4
                     * 
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置创建密钥所有的算法类型，支持的取值：AES_256,SM4
                     * @param _algorithm 创建密钥所有的算法类型，支持的取值：AES_256,SM4
                     * 
                     */
                    void SetAlgorithm(const std::string& _algorithm);

                    /**
                     * 判断参数 Algorithm 是否已赋值
                     * @return Algorithm 是否已赋值
                     * 
                     */
                    bool AlgorithmHasBeenSet() const;

                    /**
                     * 获取密钥的描述，最大1024字节
                     * @return Description 密钥的描述，最大1024字节
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置密钥的描述，最大1024字节
                     * @param _description 密钥的描述，最大1024字节
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
                     * 获取标签列表
                     * @return Tags 标签列表
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表
                     * @param _tags 标签列表
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 作为密钥更容易辨识，更容易被人看懂的别名， 不可为空，1-60个字母数字 - _ 的组合，首字符必须为字母或者数字。Alias不可重复。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 创建密钥所有的算法类型，支持的取值：AES_256,SM4
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * 密钥的描述，最大1024字节
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_CREATEWHITEBOXKEYREQUEST_H_
