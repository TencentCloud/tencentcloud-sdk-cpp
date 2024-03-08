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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_CREATEPOLICYREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_CREATEPOLICYREQUEST_H_

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
                * CreatePolicy请求参数结构体
                */
                class CreatePolicyRequest : public AbstractModel
                {
                public:
                    CreatePolicyRequest();
                    ~CreatePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取策略名称。长度为1~128个字符，可包含英文字母、数字和+=,.@-_。
                     * @return PolicyName 策略名称。长度为1~128个字符，可包含英文字母、数字和+=,.@-_。
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名称。长度为1~128个字符，可包含英文字母、数字和+=,.@-_。
                     * @param _policyName 策略名称。长度为1~128个字符，可包含英文字母、数字和+=,.@-_。
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取策略文档
                     * @return PolicyDocument 策略文档
                     * 
                     */
                    std::string GetPolicyDocument() const;

                    /**
                     * 设置策略文档
                     * @param _policyDocument 策略文档
                     * 
                     */
                    void SetPolicyDocument(const std::string& _policyDocument);

                    /**
                     * 判断参数 PolicyDocument 是否已赋值
                     * @return PolicyDocument 是否已赋值
                     * 
                     */
                    bool PolicyDocumentHasBeenSet() const;

                    /**
                     * 获取策略描述
                     * @return Description 策略描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置策略描述
                     * @param _description 策略描述
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
                     * 策略名称。长度为1~128个字符，可包含英文字母、数字和+=,.@-_。
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 策略文档
                     */
                    std::string m_policyDocument;
                    bool m_policyDocumentHasBeenSet;

                    /**
                     * 策略描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CREATEPOLICYREQUEST_H_
