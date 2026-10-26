/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYUSERPRIVILEGESV3REQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYUSERPRIVILEGESV3REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/UpdateUserPrivileges.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * ModifyUserPrivilegesV3请求参数结构体
                */
                class ModifyUserPrivilegesV3Request : public AbstractModel
                {
                public:
                    ModifyUserPrivilegesV3Request();
                    ~ModifyUserPrivilegesV3Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群id</p>
                     * @return InstanceId <p>集群id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _instanceId <p>集群id</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>用户名</p>
                     * @return UserName <p>用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名</p>
                     * @param _userName <p>用户名</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>用户权限</p>
                     * @return UserPrivileges <p>用户权限</p>
                     * 
                     */
                    UpdateUserPrivileges GetUserPrivileges() const;

                    /**
                     * 设置<p>用户权限</p>
                     * @param _userPrivileges <p>用户权限</p>
                     * 
                     */
                    void SetUserPrivileges(const UpdateUserPrivileges& _userPrivileges);

                    /**
                     * 判断参数 UserPrivileges 是否已赋值
                     * @return UserPrivileges 是否已赋值
                     * 
                     */
                    bool UserPrivilegesHasBeenSet() const;

                    /**
                     * 获取<p>用户链接来自的 IP</p>
                     * @return WhiteHost <p>用户链接来自的 IP</p>
                     * 
                     */
                    std::string GetWhiteHost() const;

                    /**
                     * 设置<p>用户链接来自的 IP</p>
                     * @param _whiteHost <p>用户链接来自的 IP</p>
                     * 
                     */
                    void SetWhiteHost(const std::string& _whiteHost);

                    /**
                     * 判断参数 WhiteHost 是否已赋值
                     * @return WhiteHost 是否已赋值
                     * 
                     */
                    bool WhiteHostHasBeenSet() const;

                    /**
                     * 获取<p>更新类型，默认0，1为更新绑定计算组，2为更新默认计算组，4 为 GrantPrivileges, RevokePrivileges 接口专用批量授权</p><p>枚举值：</p><ul><li>0： 默认</li><li>1： 更新绑定计算组</li><li>2： 更新默认计算组</li><li>4： GrantPrivileges, RevokePrivileges 接口专用批量授权</li></ul>
                     * @return UpdateType <p>更新类型，默认0，1为更新绑定计算组，2为更新默认计算组，4 为 GrantPrivileges, RevokePrivileges 接口专用批量授权</p><p>枚举值：</p><ul><li>0： 默认</li><li>1： 更新绑定计算组</li><li>2： 更新默认计算组</li><li>4： GrantPrivileges, RevokePrivileges 接口专用批量授权</li></ul>
                     * 
                     */
                    int64_t GetUpdateType() const;

                    /**
                     * 设置<p>更新类型，默认0，1为更新绑定计算组，2为更新默认计算组，4 为 GrantPrivileges, RevokePrivileges 接口专用批量授权</p><p>枚举值：</p><ul><li>0： 默认</li><li>1： 更新绑定计算组</li><li>2： 更新默认计算组</li><li>4： GrantPrivileges, RevokePrivileges 接口专用批量授权</li></ul>
                     * @param _updateType <p>更新类型，默认0，1为更新绑定计算组，2为更新默认计算组，4 为 GrantPrivileges, RevokePrivileges 接口专用批量授权</p><p>枚举值：</p><ul><li>0： 默认</li><li>1： 更新绑定计算组</li><li>2： 更新默认计算组</li><li>4： GrantPrivileges, RevokePrivileges 接口专用批量授权</li></ul>
                     * 
                     */
                    void SetUpdateType(const int64_t& _updateType);

                    /**
                     * 判断参数 UpdateType 是否已赋值
                     * @return UpdateType 是否已赋值
                     * 
                     */
                    bool UpdateTypeHasBeenSet() const;

                    /**
                     * 获取<p>需绑定计算组列表</p>
                     * @return UpdateComputeGroups <p>需绑定计算组列表</p>
                     * 
                     */
                    std::vector<std::string> GetUpdateComputeGroups() const;

                    /**
                     * 设置<p>需绑定计算组列表</p>
                     * @param _updateComputeGroups <p>需绑定计算组列表</p>
                     * 
                     */
                    void SetUpdateComputeGroups(const std::vector<std::string>& _updateComputeGroups);

                    /**
                     * 判断参数 UpdateComputeGroups 是否已赋值
                     * @return UpdateComputeGroups 是否已赋值
                     * 
                     */
                    bool UpdateComputeGroupsHasBeenSet() const;

                    /**
                     * 获取<p>默认计算组</p>
                     * @return DefaultComputeGroup <p>默认计算组</p>
                     * 
                     */
                    std::string GetDefaultComputeGroup() const;

                    /**
                     * 设置<p>默认计算组</p>
                     * @param _defaultComputeGroup <p>默认计算组</p>
                     * 
                     */
                    void SetDefaultComputeGroup(const std::string& _defaultComputeGroup);

                    /**
                     * 判断参数 DefaultComputeGroup 是否已赋值
                     * @return DefaultComputeGroup 是否已赋值
                     * 
                     */
                    bool DefaultComputeGroupHasBeenSet() const;

                    /**
                     * 获取<p>0: 灵活场景 1: 固定场景</p>
                     * @return ComputeGroupType <p>0: 灵活场景 1: 固定场景</p>
                     * 
                     */
                    int64_t GetComputeGroupType() const;

                    /**
                     * 设置<p>0: 灵活场景 1: 固定场景</p>
                     * @param _computeGroupType <p>0: 灵活场景 1: 固定场景</p>
                     * 
                     */
                    void SetComputeGroupType(const int64_t& _computeGroupType);

                    /**
                     * 判断参数 ComputeGroupType 是否已赋值
                     * @return ComputeGroupType 是否已赋值
                     * 
                     */
                    bool ComputeGroupTypeHasBeenSet() const;

                    /**
                     * 获取<p>本次新增授权的库表，仅 UpdateType=4 时生效</p>
                     * @return GrantPrivileges <p>本次新增授权的库表，仅 UpdateType=4 时生效</p>
                     * 
                     */
                    UpdateUserPrivileges GetGrantPrivileges() const;

                    /**
                     * 设置<p>本次新增授权的库表，仅 UpdateType=4 时生效</p>
                     * @param _grantPrivileges <p>本次新增授权的库表，仅 UpdateType=4 时生效</p>
                     * 
                     */
                    void SetGrantPrivileges(const UpdateUserPrivileges& _grantPrivileges);

                    /**
                     * 判断参数 GrantPrivileges 是否已赋值
                     * @return GrantPrivileges 是否已赋值
                     * 
                     */
                    bool GrantPrivilegesHasBeenSet() const;

                    /**
                     * 获取<p>本次取消授权的库表，仅 UpdateType=4 时生效</p>
                     * @return RevokePrivileges <p>本次取消授权的库表，仅 UpdateType=4 时生效</p>
                     * 
                     */
                    UpdateUserPrivileges GetRevokePrivileges() const;

                    /**
                     * 设置<p>本次取消授权的库表，仅 UpdateType=4 时生效</p>
                     * @param _revokePrivileges <p>本次取消授权的库表，仅 UpdateType=4 时生效</p>
                     * 
                     */
                    void SetRevokePrivileges(const UpdateUserPrivileges& _revokePrivileges);

                    /**
                     * 判断参数 RevokePrivileges 是否已赋值
                     * @return RevokePrivileges 是否已赋值
                     * 
                     */
                    bool RevokePrivilegesHasBeenSet() const;

                private:

                    /**
                     * <p>集群id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>用户权限</p>
                     */
                    UpdateUserPrivileges m_userPrivileges;
                    bool m_userPrivilegesHasBeenSet;

                    /**
                     * <p>用户链接来自的 IP</p>
                     */
                    std::string m_whiteHost;
                    bool m_whiteHostHasBeenSet;

                    /**
                     * <p>更新类型，默认0，1为更新绑定计算组，2为更新默认计算组，4 为 GrantPrivileges, RevokePrivileges 接口专用批量授权</p><p>枚举值：</p><ul><li>0： 默认</li><li>1： 更新绑定计算组</li><li>2： 更新默认计算组</li><li>4： GrantPrivileges, RevokePrivileges 接口专用批量授权</li></ul>
                     */
                    int64_t m_updateType;
                    bool m_updateTypeHasBeenSet;

                    /**
                     * <p>需绑定计算组列表</p>
                     */
                    std::vector<std::string> m_updateComputeGroups;
                    bool m_updateComputeGroupsHasBeenSet;

                    /**
                     * <p>默认计算组</p>
                     */
                    std::string m_defaultComputeGroup;
                    bool m_defaultComputeGroupHasBeenSet;

                    /**
                     * <p>0: 灵活场景 1: 固定场景</p>
                     */
                    int64_t m_computeGroupType;
                    bool m_computeGroupTypeHasBeenSet;

                    /**
                     * <p>本次新增授权的库表，仅 UpdateType=4 时生效</p>
                     */
                    UpdateUserPrivileges m_grantPrivileges;
                    bool m_grantPrivilegesHasBeenSet;

                    /**
                     * <p>本次取消授权的库表，仅 UpdateType=4 时生效</p>
                     */
                    UpdateUserPrivileges m_revokePrivileges;
                    bool m_revokePrivilegesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYUSERPRIVILEGESV3REQUEST_H_
