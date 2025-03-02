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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_HASAUTHUSER_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_HASAUTHUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 被授权的用户信息
                */
                class HasAuthUser : public AbstractModel
                {
                public:
                    HasAuthUser();
                    ~HasAuthUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取员工在腾讯电子签平台的唯一身份标识，为32位字符串。
                     * @return UserId 员工在腾讯电子签平台的唯一身份标识，为32位字符串。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置员工在腾讯电子签平台的唯一身份标识，为32位字符串。
                     * @param _userId 员工在腾讯电子签平台的唯一身份标识，为32位字符串。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取当前员工的归属情况，可能值是：
MainOrg：在集团企业的场景下，返回此值代表是归属主企业
CurrentOrg：在普通企业场景下返回此值；或者在集团企业的场景下，返回此值代表归属子企业
                     * @return BelongTo 当前员工的归属情况，可能值是：
MainOrg：在集团企业的场景下，返回此值代表是归属主企业
CurrentOrg：在普通企业场景下返回此值；或者在集团企业的场景下，返回此值代表归属子企业
                     * 
                     */
                    std::string GetBelongTo() const;

                    /**
                     * 设置当前员工的归属情况，可能值是：
MainOrg：在集团企业的场景下，返回此值代表是归属主企业
CurrentOrg：在普通企业场景下返回此值；或者在集团企业的场景下，返回此值代表归属子企业
                     * @param _belongTo 当前员工的归属情况，可能值是：
MainOrg：在集团企业的场景下，返回此值代表是归属主企业
CurrentOrg：在普通企业场景下返回此值；或者在集团企业的场景下，返回此值代表归属子企业
                     * 
                     */
                    void SetBelongTo(const std::string& _belongTo);

                    /**
                     * 判断参数 BelongTo 是否已赋值
                     * @return BelongTo 是否已赋值
                     * 
                     */
                    bool BelongToHasBeenSet() const;

                    /**
                     * 获取集团主企业id，当前企业为集团子企业时，该字段有值
                     * @return MainOrganizationId 集团主企业id，当前企业为集团子企业时，该字段有值
                     * 
                     */
                    std::string GetMainOrganizationId() const;

                    /**
                     * 设置集团主企业id，当前企业为集团子企业时，该字段有值
                     * @param _mainOrganizationId 集团主企业id，当前企业为集团子企业时，该字段有值
                     * 
                     */
                    void SetMainOrganizationId(const std::string& _mainOrganizationId);

                    /**
                     * 判断参数 MainOrganizationId 是否已赋值
                     * @return MainOrganizationId 是否已赋值
                     * 
                     */
                    bool MainOrganizationIdHasBeenSet() const;

                private:

                    /**
                     * 员工在腾讯电子签平台的唯一身份标识，为32位字符串。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 当前员工的归属情况，可能值是：
MainOrg：在集团企业的场景下，返回此值代表是归属主企业
CurrentOrg：在普通企业场景下返回此值；或者在集团企业的场景下，返回此值代表归属子企业
                     */
                    std::string m_belongTo;
                    bool m_belongToHasBeenSet;

                    /**
                     * 集团主企业id，当前企业为集团子企业时，该字段有值
                     */
                    std::string m_mainOrganizationId;
                    bool m_mainOrganizationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_HASAUTHUSER_H_
