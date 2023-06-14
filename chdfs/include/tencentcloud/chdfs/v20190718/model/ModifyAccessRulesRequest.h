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

#ifndef TENCENTCLOUD_CHDFS_V20190718_MODEL_MODIFYACCESSRULESREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20190718_MODEL_MODIFYACCESSRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chdfs/v20190718/model/AccessRule.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20190718
        {
            namespace Model
            {
                /**
                * ModifyAccessRules请求参数结构体
                */
                class ModifyAccessRulesRequest : public AbstractModel
                {
                public:
                    ModifyAccessRulesRequest();
                    ~ModifyAccessRulesRequest() = default;
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

                private:

                    /**
                     * 多个权限规则，上限为10
                     */
                    std::vector<AccessRule> m_accessRules;
                    bool m_accessRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20190718_MODEL_MODIFYACCESSRULESREQUEST_H_
