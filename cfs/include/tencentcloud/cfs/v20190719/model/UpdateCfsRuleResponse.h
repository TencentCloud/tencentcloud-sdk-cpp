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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSRULERESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * UpdateCfsRule返回参数结构体
                */
                class UpdateCfsRuleResponse : public AbstractModel
                {
                public:
                    UpdateCfsRuleResponse();
                    ~UpdateCfsRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取权限组 ID
                     * @return PGroupId 权限组 ID
                     * 
                     */
                    std::string GetPGroupId() const;

                    /**
                     * 判断参数 PGroupId 是否已赋值
                     * @return PGroupId 是否已赋值
                     * 
                     */
                    bool PGroupIdHasBeenSet() const;

                    /**
                     * 获取规则 ID
                     * @return RuleId 规则 ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取允许访问的客户端 IP 或者 IP 段
                     * @return AuthClientIp 允许访问的客户端 IP 或者 IP 段
                     * 
                     */
                    std::string GetAuthClientIp() const;

                    /**
                     * 判断参数 AuthClientIp 是否已赋值
                     * @return AuthClientIp 是否已赋值
                     * 
                     */
                    bool AuthClientIpHasBeenSet() const;

                    /**
                     * 获取读写权限
                     * @return RWPermission 读写权限
                     * 
                     */
                    std::string GetRWPermission() const;

                    /**
                     * 判断参数 RWPermission 是否已赋值
                     * @return RWPermission 是否已赋值
                     * 
                     */
                    bool RWPermissionHasBeenSet() const;

                    /**
                     * 获取用户权限
                     * @return UserPermission 用户权限
                     * 
                     */
                    std::string GetUserPermission() const;

                    /**
                     * 判断参数 UserPermission 是否已赋值
                     * @return UserPermission 是否已赋值
                     * 
                     */
                    bool UserPermissionHasBeenSet() const;

                    /**
                     * 获取优先级
                     * @return Priority 优先级
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * 权限组 ID
                     */
                    std::string m_pGroupId;
                    bool m_pGroupIdHasBeenSet;

                    /**
                     * 规则 ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 允许访问的客户端 IP 或者 IP 段
                     */
                    std::string m_authClientIp;
                    bool m_authClientIpHasBeenSet;

                    /**
                     * 读写权限
                     */
                    std::string m_rWPermission;
                    bool m_rWPermissionHasBeenSet;

                    /**
                     * 用户权限
                     */
                    std::string m_userPermission;
                    bool m_userPermissionHasBeenSet;

                    /**
                     * 优先级
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSRULERESPONSE_H_
