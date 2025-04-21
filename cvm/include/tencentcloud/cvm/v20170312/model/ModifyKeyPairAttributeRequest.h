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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYKEYPAIRATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYKEYPAIRATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyKeyPairAttribute请求参数结构体
                */
                class ModifyKeyPairAttributeRequest : public AbstractModel
                {
                public:
                    ModifyKeyPairAttributeRequest();
                    ~ModifyKeyPairAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取密钥对ID。可以通过以下方式获取可用的密钥 ID：
<li>通过登录[控制台](https://console.cloud.tencent.com/cvm/sshkey)查询密钥 ID。</li>
<li>通过调用接口 [DescribeKeyPairs](https://cloud.tencent.com/document/api/213/9403) ，取返回信息中的 `KeyId` 获取密钥对 ID。</li>
                     * @return KeyId 密钥对ID。可以通过以下方式获取可用的密钥 ID：
<li>通过登录[控制台](https://console.cloud.tencent.com/cvm/sshkey)查询密钥 ID。</li>
<li>通过调用接口 [DescribeKeyPairs](https://cloud.tencent.com/document/api/213/9403) ，取返回信息中的 `KeyId` 获取密钥对 ID。</li>
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置密钥对ID。可以通过以下方式获取可用的密钥 ID：
<li>通过登录[控制台](https://console.cloud.tencent.com/cvm/sshkey)查询密钥 ID。</li>
<li>通过调用接口 [DescribeKeyPairs](https://cloud.tencent.com/document/api/213/9403) ，取返回信息中的 `KeyId` 获取密钥对 ID。</li>
                     * @param _keyId 密钥对ID。可以通过以下方式获取可用的密钥 ID：
<li>通过登录[控制台](https://console.cloud.tencent.com/cvm/sshkey)查询密钥 ID。</li>
<li>通过调用接口 [DescribeKeyPairs](https://cloud.tencent.com/document/api/213/9403) ，取返回信息中的 `KeyId` 获取密钥对 ID。</li>
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取修改后的密钥对名称，可由数字，字母和下划线组成，长度不超过25个字符。
                     * @return KeyName 修改后的密钥对名称，可由数字，字母和下划线组成，长度不超过25个字符。
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置修改后的密钥对名称，可由数字，字母和下划线组成，长度不超过25个字符。
                     * @param _keyName 修改后的密钥对名称，可由数字，字母和下划线组成，长度不超过25个字符。
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
                     * 获取修改后的密钥对描述信息。可任意命名，但不得超过60个字符。
                     * @return Description 修改后的密钥对描述信息。可任意命名，但不得超过60个字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置修改后的密钥对描述信息。可任意命名，但不得超过60个字符。
                     * @param _description 修改后的密钥对描述信息。可任意命名，但不得超过60个字符。
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
                     * 密钥对ID。可以通过以下方式获取可用的密钥 ID：
<li>通过登录[控制台](https://console.cloud.tencent.com/cvm/sshkey)查询密钥 ID。</li>
<li>通过调用接口 [DescribeKeyPairs](https://cloud.tencent.com/document/api/213/9403) ，取返回信息中的 `KeyId` 获取密钥对 ID。</li>
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 修改后的密钥对名称，可由数字，字母和下划线组成，长度不超过25个字符。
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * 修改后的密钥对描述信息。可任意命名，但不得超过60个字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYKEYPAIRATTRIBUTEREQUEST_H_
