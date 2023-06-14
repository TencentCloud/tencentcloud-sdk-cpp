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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATEACCESSRULESREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATEACCESSRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chdfs/v20201112/model/AccessRule.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * CreateAccessRules请求参数结构体
                */
                class CreateAccessRulesRequest : public AbstractModel
                {
                public:
                    CreateAccessRulesRequest();
                    ~CreateAccessRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取多个权限规则，上限为10
                     * @return AccessRules 多个权限规则，上限为10
                     * 
                     */
                    std::vector<AccessRule> GetAccessRules() const;

                    /**
                     * 设置多个权限规则，上限为10
                     * @param _accessRules 多个权限规则，上限为10
                     * 
                     */
                    void SetAccessRules(const std::vector<AccessRule>& _accessRules);

                    /**
                     * 判断参数 AccessRules 是否已赋值
                     * @return AccessRules 是否已赋值
                     * 
                     */
                    bool AccessRulesHasBeenSet() const;

                    /**
                     * 获取权限组ID
                     * @return AccessGroupId 权限组ID
                     * 
                     */
                    std::string GetAccessGroupId() const;

                    /**
                     * 设置权限组ID
                     * @param _accessGroupId 权限组ID
                     * 
                     */
                    void SetAccessGroupId(const std::string& _accessGroupId);

                    /**
                     * 判断参数 AccessGroupId 是否已赋值
                     * @return AccessGroupId 是否已赋值
                     * 
                     */
                    bool AccessGroupIdHasBeenSet() const;

                private:

                    /**
                     * 多个权限规则，上限为10
                     */
                    std::vector<AccessRule> m_accessRules;
                    bool m_accessRulesHasBeenSet;

                    /**
                     * 权限组ID
                     */
                    std::string m_accessGroupId;
                    bool m_accessGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATEACCESSRULESREQUEST_H_
