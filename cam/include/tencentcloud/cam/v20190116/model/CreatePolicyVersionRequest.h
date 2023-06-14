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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_CREATEPOLICYVERSIONREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_CREATEPOLICYVERSIONREQUEST_H_

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
                * CreatePolicyVersion请求参数结构体
                */
                class CreatePolicyVersionRequest : public AbstractModel
                {
                public:
                    CreatePolicyVersionRequest();
                    ~CreatePolicyVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取策略ID
                     * @return PolicyId 策略ID
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置策略ID
                     * @param _policyId 策略ID
                     * 
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取策略文本信息
                     * @return PolicyDocument 策略文本信息
                     * 
                     */
                    std::string GetPolicyDocument() const;

                    /**
                     * 设置策略文本信息
                     * @param _policyDocument 策略文本信息
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
                     * 获取是否设置为当前策略的版本
                     * @return SetAsDefault 是否设置为当前策略的版本
                     * 
                     */
                    bool GetSetAsDefault() const;

                    /**
                     * 设置是否设置为当前策略的版本
                     * @param _setAsDefault 是否设置为当前策略的版本
                     * 
                     */
                    void SetSetAsDefault(const bool& _setAsDefault);

                    /**
                     * 判断参数 SetAsDefault 是否已赋值
                     * @return SetAsDefault 是否已赋值
                     * 
                     */
                    bool SetAsDefaultHasBeenSet() const;

                private:

                    /**
                     * 策略ID
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 策略文本信息
                     */
                    std::string m_policyDocument;
                    bool m_policyDocumentHasBeenSet;

                    /**
                     * 是否设置为当前策略的版本
                     */
                    bool m_setAsDefault;
                    bool m_setAsDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CREATEPOLICYVERSIONREQUEST_H_
