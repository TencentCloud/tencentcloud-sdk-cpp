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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_MEMBERIDENTITY_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_MEMBERIDENTITY_H_

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
                * 成员管理身份
                */
                class MemberIdentity : public AbstractModel
                {
                public:
                    MemberIdentity();
                    ~MemberIdentity() = default;
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_MEMBERIDENTITY_H_
