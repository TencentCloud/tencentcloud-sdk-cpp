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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_DELETEACCESSRULESREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_DELETEACCESSRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * DeleteAccessRules请求参数结构体
                */
                class DeleteAccessRulesRequest : public AbstractModel
                {
                public:
                    DeleteAccessRulesRequest();
                    ~DeleteAccessRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取多个权限规则ID，上限为10
                     * @return AccessRuleIds 多个权限规则ID，上限为10
                     * 
                     */
                    std::vector<uint64_t> GetAccessRuleIds() const;

                    /**
                     * 设置多个权限规则ID，上限为10
                     * @param _accessRuleIds 多个权限规则ID，上限为10
                     * 
                     */
                    void SetAccessRuleIds(const std::vector<uint64_t>& _accessRuleIds);

                    /**
                     * 判断参数 AccessRuleIds 是否已赋值
                     * @return AccessRuleIds 是否已赋值
                     * 
                     */
                    bool AccessRuleIdsHasBeenSet() const;

                private:

                    /**
                     * 多个权限规则ID，上限为10
                     */
                    std::vector<uint64_t> m_accessRuleIds;
                    bool m_accessRuleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_DELETEACCESSRULESREQUEST_H_
