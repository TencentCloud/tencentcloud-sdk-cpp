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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULESECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ModifyModuleSecurityGroups请求参数结构体
                */
                class ModifyModuleSecurityGroupsRequest : public AbstractModel
                {
                public:
                    ModifyModuleSecurityGroupsRequest();
                    ~ModifyModuleSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安全组列表。不超过5个。
                     * @return SecurityGroupIdSet 安全组列表。不超过5个。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIdSet() const;

                    /**
                     * 设置安全组列表。不超过5个。
                     * @param _securityGroupIdSet 安全组列表。不超过5个。
                     * 
                     */
                    void SetSecurityGroupIdSet(const std::vector<std::string>& _securityGroupIdSet);

                    /**
                     * 判断参数 SecurityGroupIdSet 是否已赋值
                     * @return SecurityGroupIdSet 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdSetHasBeenSet() const;

                    /**
                     * 获取模块id。
                     * @return ModuleId 模块id。
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置模块id。
                     * @param _moduleId 模块id。
                     * 
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

                private:

                    /**
                     * 安全组列表。不超过5个。
                     */
                    std::vector<std::string> m_securityGroupIdSet;
                    bool m_securityGroupIdSetHasBeenSet;

                    /**
                     * 模块id。
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULESECURITYGROUPSREQUEST_H_
