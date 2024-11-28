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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGIDENTITY_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGIDENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/IdentityPolicy.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 组织身份
                */
                class OrgIdentity : public AbstractModel
                {
                public:
                    OrgIdentity();
                    ~OrgIdentity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取身份ID。
                     * @return IdentityId 身份ID。
                     * 
                     */
                    int64_t GetIdentityId() const;

                    /**
                     * 设置身份ID。
                     * @param _identityId 身份ID。
                     * 
                     */
                    void SetIdentityId(const int64_t& _identityId);

                    /**
                     * 判断参数 IdentityId 是否已赋值
                     * @return IdentityId 是否已赋值
                     * 
                     */
                    bool IdentityIdHasBeenSet() const;

                    /**
                     * 获取身份名称。
                     * @return IdentityAliasName 身份名称。
                     * 
                     */
                    std::string GetIdentityAliasName() const;

                    /**
                     * 设置身份名称。
                     * @param _identityAliasName 身份名称。
                     * 
                     */
                    void SetIdentityAliasName(const std::string& _identityAliasName);

                    /**
                     * 判断参数 IdentityAliasName 是否已赋值
                     * @return IdentityAliasName 是否已赋值
                     * 
                     */
                    bool IdentityAliasNameHasBeenSet() const;

                    /**
                     * 获取描述。
                     * @return Description 描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述。
                     * @param _description 描述。
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
                     * 获取身份策略。
                     * @return IdentityPolicy 身份策略。
                     * 
                     */
                    std::vector<IdentityPolicy> GetIdentityPolicy() const;

                    /**
                     * 设置身份策略。
                     * @param _identityPolicy 身份策略。
                     * 
                     */
                    void SetIdentityPolicy(const std::vector<IdentityPolicy>& _identityPolicy);

                    /**
                     * 判断参数 IdentityPolicy 是否已赋值
                     * @return IdentityPolicy 是否已赋值
                     * 
                     */
                    bool IdentityPolicyHasBeenSet() const;

                    /**
                     * 获取身份类型。 1-预设、 2-自定义
                     * @return IdentityType 身份类型。 1-预设、 2-自定义
                     * 
                     */
                    uint64_t GetIdentityType() const;

                    /**
                     * 设置身份类型。 1-预设、 2-自定义
                     * @param _identityType 身份类型。 1-预设、 2-自定义
                     * 
                     */
                    void SetIdentityType(const uint64_t& _identityType);

                    /**
                     * 判断参数 IdentityType 是否已赋值
                     * @return IdentityType 是否已赋值
                     * 
                     */
                    bool IdentityTypeHasBeenSet() const;

                    /**
                     * 获取更新时间。
                     * @return UpdateTime 更新时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间。
                     * @param _updateTime 更新时间。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 身份ID。
                     */
                    int64_t m_identityId;
                    bool m_identityIdHasBeenSet;

                    /**
                     * 身份名称。
                     */
                    std::string m_identityAliasName;
                    bool m_identityAliasNameHasBeenSet;

                    /**
                     * 描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 身份策略。
                     */
                    std::vector<IdentityPolicy> m_identityPolicy;
                    bool m_identityPolicyHasBeenSet;

                    /**
                     * 身份类型。 1-预设、 2-自定义
                     */
                    uint64_t m_identityType;
                    bool m_identityTypeHasBeenSet;

                    /**
                     * 更新时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGIDENTITY_H_
