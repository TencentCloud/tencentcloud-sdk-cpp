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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_IDENTITYPOLICY_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_IDENTITYPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 组织身份策略
                */
                class IdentityPolicy : public AbstractModel
                {
                public:
                    IdentityPolicy();
                    ~IdentityPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CAM预设策略ID。PolicyType 为预设策略时有效且必选
                     * @return PolicyId CAM预设策略ID。PolicyType 为预设策略时有效且必选
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置CAM预设策略ID。PolicyType 为预设策略时有效且必选
                     * @param _policyId CAM预设策略ID。PolicyType 为预设策略时有效且必选
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
                     * 获取CAM预设策略名称。PolicyType 为预设策略时有效且必选
                     * @return PolicyName CAM预设策略名称。PolicyType 为预设策略时有效且必选
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置CAM预设策略名称。PolicyType 为预设策略时有效且必选
                     * @param _policyName CAM预设策略名称。PolicyType 为预设策略时有效且必选
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
                     * 获取策略类型。取值 1-自定义策略  2-预设策略；默认值2
                     * @return PolicyType 策略类型。取值 1-自定义策略  2-预设策略；默认值2
                     * 
                     */
                    uint64_t GetPolicyType() const;

                    /**
                     * 设置策略类型。取值 1-自定义策略  2-预设策略；默认值2
                     * @param _policyType 策略类型。取值 1-自定义策略  2-预设策略；默认值2
                     * 
                     */
                    void SetPolicyType(const uint64_t& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取自定义策略内容，遵循CAM策略语法。PolicyType 为自定义策略时有效且必选
                     * @return PolicyDocument 自定义策略内容，遵循CAM策略语法。PolicyType 为自定义策略时有效且必选
                     * 
                     */
                    std::string GetPolicyDocument() const;

                    /**
                     * 设置自定义策略内容，遵循CAM策略语法。PolicyType 为自定义策略时有效且必选
                     * @param _policyDocument 自定义策略内容，遵循CAM策略语法。PolicyType 为自定义策略时有效且必选
                     * 
                     */
                    void SetPolicyDocument(const std::string& _policyDocument);

                    /**
                     * 判断参数 PolicyDocument 是否已赋值
                     * @return PolicyDocument 是否已赋值
                     * 
                     */
                    bool PolicyDocumentHasBeenSet() const;

                private:

                    /**
                     * CAM预设策略ID。PolicyType 为预设策略时有效且必选
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * CAM预设策略名称。PolicyType 为预设策略时有效且必选
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 策略类型。取值 1-自定义策略  2-预设策略；默认值2
                     */
                    uint64_t m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 自定义策略内容，遵循CAM策略语法。PolicyType 为自定义策略时有效且必选
                     */
                    std::string m_policyDocument;
                    bool m_policyDocumentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_IDENTITYPOLICY_H_
