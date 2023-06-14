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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTGRANTSERVICEACCESSPOLICY_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTGRANTSERVICEACCESSPOLICY_H_

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
                * 用于ListPoliciesGrantingServiceAccess接口的Policy节点
                */
                class ListGrantServiceAccessPolicy : public AbstractModel
                {
                public:
                    ListGrantServiceAccessPolicy();
                    ~ListGrantServiceAccessPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略ID
                     * @return PolicyId 策略ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置策略ID
                     * @param _policyId 策略ID
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取策略名
                     * @return PolicyName 策略名
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名
                     * @param _policyName 策略名
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
                     * 获取策略类型: Custom自定义策略，Presetting预设策略
                     * @return PolicyType 策略类型: Custom自定义策略，Presetting预设策略
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置策略类型: Custom自定义策略，Presetting预设策略
                     * @param _policyType 策略类型: Custom自定义策略，Presetting预设策略
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取策略描述
                     * @return PolicyDescription 策略描述
                     * 
                     */
                    std::string GetPolicyDescription() const;

                    /**
                     * 设置策略描述
                     * @param _policyDescription 策略描述
                     * 
                     */
                    void SetPolicyDescription(const std::string& _policyDescription);

                    /**
                     * 判断参数 PolicyDescription 是否已赋值
                     * @return PolicyDescription 是否已赋值
                     * 
                     */
                    bool PolicyDescriptionHasBeenSet() const;

                private:

                    /**
                     * 策略ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 策略名
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 策略类型: Custom自定义策略，Presetting预设策略
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 策略描述
                     */
                    std::string m_policyDescription;
                    bool m_policyDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTGRANTSERVICEACCESSPOLICY_H_
