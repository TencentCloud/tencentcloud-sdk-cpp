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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_PGROUPRULEINFO_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_PGROUPRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 权限组规则列表
                */
                class PGroupRuleInfo : public AbstractModel
                {
                public:
                    PGroupRuleInfo();
                    ~PGroupRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取允许访问的客户端IP
                     * @return AuthClientIp 允许访问的客户端IP
                     * 
                     */
                    std::string GetAuthClientIp() const;

                    /**
                     * 设置允许访问的客户端IP
                     * @param _authClientIp 允许访问的客户端IP
                     * 
                     */
                    void SetAuthClientIp(const std::string& _authClientIp);

                    /**
                     * 判断参数 AuthClientIp 是否已赋值
                     * @return AuthClientIp 是否已赋值
                     * 
                     */
                    bool AuthClientIpHasBeenSet() const;

                    /**
                     * 获取读写权限, ro为只读，rw为读写
                     * @return RWPermission 读写权限, ro为只读，rw为读写
                     * 
                     */
                    std::string GetRWPermission() const;

                    /**
                     * 设置读写权限, ro为只读，rw为读写
                     * @param _rWPermission 读写权限, ro为只读，rw为读写
                     * 
                     */
                    void SetRWPermission(const std::string& _rWPermission);

                    /**
                     * 判断参数 RWPermission 是否已赋值
                     * @return RWPermission 是否已赋值
                     * 
                     */
                    bool RWPermissionHasBeenSet() const;

                    /**
                     * 获取all_squash：所有访问用户（含 root 用户）都会被映射为匿名用户或用户组。
no_all_squash：所有访问用户（含 root 用户）均保持原有的 UID/GID 信息。
root_squash：将来访的 root 用户映射为匿名用户或用户组，非 root 用户保持原有的 UID/GID 信息。
no_root_squash：与 no_all_squash 效果一致，所有访问用户（含 root 用户）均保持原有的 UID/GID 信息

                     * @return UserPermission all_squash：所有访问用户（含 root 用户）都会被映射为匿名用户或用户组。
no_all_squash：所有访问用户（含 root 用户）均保持原有的 UID/GID 信息。
root_squash：将来访的 root 用户映射为匿名用户或用户组，非 root 用户保持原有的 UID/GID 信息。
no_root_squash：与 no_all_squash 效果一致，所有访问用户（含 root 用户）均保持原有的 UID/GID 信息

                     * 
                     */
                    std::string GetUserPermission() const;

                    /**
                     * 设置all_squash：所有访问用户（含 root 用户）都会被映射为匿名用户或用户组。
no_all_squash：所有访问用户（含 root 用户）均保持原有的 UID/GID 信息。
root_squash：将来访的 root 用户映射为匿名用户或用户组，非 root 用户保持原有的 UID/GID 信息。
no_root_squash：与 no_all_squash 效果一致，所有访问用户（含 root 用户）均保持原有的 UID/GID 信息

                     * @param _userPermission all_squash：所有访问用户（含 root 用户）都会被映射为匿名用户或用户组。
no_all_squash：所有访问用户（含 root 用户）均保持原有的 UID/GID 信息。
root_squash：将来访的 root 用户映射为匿名用户或用户组，非 root 用户保持原有的 UID/GID 信息。
no_root_squash：与 no_all_squash 效果一致，所有访问用户（含 root 用户）均保持原有的 UID/GID 信息

                     * 
                     */
                    void SetUserPermission(const std::string& _userPermission);

                    /**
                     * 判断参数 UserPermission 是否已赋值
                     * @return UserPermission 是否已赋值
                     * 
                     */
                    bool UserPermissionHasBeenSet() const;

                    /**
                     * 获取规则优先级，1-100。 其中 1 为最高，100为最低
                     * @return Priority 规则优先级，1-100。 其中 1 为最高，100为最低
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置规则优先级，1-100。 其中 1 为最高，100为最低
                     * @param _priority 规则优先级，1-100。 其中 1 为最高，100为最低
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * 规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 允许访问的客户端IP
                     */
                    std::string m_authClientIp;
                    bool m_authClientIpHasBeenSet;

                    /**
                     * 读写权限, ro为只读，rw为读写
                     */
                    std::string m_rWPermission;
                    bool m_rWPermissionHasBeenSet;

                    /**
                     * all_squash：所有访问用户（含 root 用户）都会被映射为匿名用户或用户组。
no_all_squash：所有访问用户（含 root 用户）均保持原有的 UID/GID 信息。
root_squash：将来访的 root 用户映射为匿名用户或用户组，非 root 用户保持原有的 UID/GID 信息。
no_root_squash：与 no_all_squash 效果一致，所有访问用户（含 root 用户）均保持原有的 UID/GID 信息

                     */
                    std::string m_userPermission;
                    bool m_userPermissionHasBeenSet;

                    /**
                     * 规则优先级，1-100。 其中 1 为最高，100为最低
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_PGROUPRULEINFO_H_
