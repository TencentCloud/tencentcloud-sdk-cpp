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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_IMPORTKEYPAIRREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_IMPORTKEYPAIRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/TagSpecification.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ImportKeyPair请求参数结构体
                */
                class ImportKeyPairRequest : public AbstractModel
                {
                public:
                    ImportKeyPairRequest();
                    ~ImportKeyPairRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取密钥对名称，可由数字，字母和下划线组成，长度不超过25个字符。
                     * @return KeyName 密钥对名称，可由数字，字母和下划线组成，长度不超过25个字符。
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置密钥对名称，可由数字，字母和下划线组成，长度不超过25个字符。
                     * @param _keyName 密钥对名称，可由数字，字母和下划线组成，长度不超过25个字符。
                     * 
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     * 
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取密钥对创建后所属的[项目](https://cloud.tencent.com/document/product/378/10861)ID。<br>可以通过以下方式获取项目ID：<li>通过[项目列表](https://console.cloud.tencent.com/project)查询项目ID。</li><li>通过调用接口 [DescribeProjects](https://cloud.tencent.com/document/api/651/78725)，取返回信息中的 `projectId ` 获取项目ID。</li>如果是默认项目，直接填0就可以。
                     * @return ProjectId 密钥对创建后所属的[项目](https://cloud.tencent.com/document/product/378/10861)ID。<br>可以通过以下方式获取项目ID：<li>通过[项目列表](https://console.cloud.tencent.com/project)查询项目ID。</li><li>通过调用接口 [DescribeProjects](https://cloud.tencent.com/document/api/651/78725)，取返回信息中的 `projectId ` 获取项目ID。</li>如果是默认项目，直接填0就可以。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置密钥对创建后所属的[项目](https://cloud.tencent.com/document/product/378/10861)ID。<br>可以通过以下方式获取项目ID：<li>通过[项目列表](https://console.cloud.tencent.com/project)查询项目ID。</li><li>通过调用接口 [DescribeProjects](https://cloud.tencent.com/document/api/651/78725)，取返回信息中的 `projectId ` 获取项目ID。</li>如果是默认项目，直接填0就可以。
                     * @param _projectId 密钥对创建后所属的[项目](https://cloud.tencent.com/document/product/378/10861)ID。<br>可以通过以下方式获取项目ID：<li>通过[项目列表](https://console.cloud.tencent.com/project)查询项目ID。</li><li>通过调用接口 [DescribeProjects](https://cloud.tencent.com/document/api/651/78725)，取返回信息中的 `projectId ` 获取项目ID。</li>如果是默认项目，直接填0就可以。
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取密钥对的公钥内容，`OpenSSH RSA` 格式。
                     * @return PublicKey 密钥对的公钥内容，`OpenSSH RSA` 格式。
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置密钥对的公钥内容，`OpenSSH RSA` 格式。
                     * @param _publicKey 密钥对的公钥内容，`OpenSSH RSA` 格式。
                     * 
                     */
                    void SetPublicKey(const std::string& _publicKey);

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取标签描述列表。通过指定该参数可以同时绑定标签到密钥对。
                     * @return TagSpecification 标签描述列表。通过指定该参数可以同时绑定标签到密钥对。
                     * 
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置标签描述列表。通过指定该参数可以同时绑定标签到密钥对。
                     * @param _tagSpecification 标签描述列表。通过指定该参数可以同时绑定标签到密钥对。
                     * 
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                private:

                    /**
                     * 密钥对名称，可由数字，字母和下划线组成，长度不超过25个字符。
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * 密钥对创建后所属的[项目](https://cloud.tencent.com/document/product/378/10861)ID。<br>可以通过以下方式获取项目ID：<li>通过[项目列表](https://console.cloud.tencent.com/project)查询项目ID。</li><li>通过调用接口 [DescribeProjects](https://cloud.tencent.com/document/api/651/78725)，取返回信息中的 `projectId ` 获取项目ID。</li>如果是默认项目，直接填0就可以。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 密钥对的公钥内容，`OpenSSH RSA` 格式。
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * 标签描述列表。通过指定该参数可以同时绑定标签到密钥对。
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_IMPORTKEYPAIRREQUEST_H_
