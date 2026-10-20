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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_PERMISSIONAPPLYORDER_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_PERMISSIONAPPLYORDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/ApplyRoleConfiguration.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 权限申请单，描述一张完整的权限申请工单，即谁（UserId/UserName）向哪个成员账号（TargetUin/TargetName）申请了哪些权限配置（RoleConfigurations），以及审批进展如何
                */
                class PermissionApplyOrder : public AbstractModel
                {
                public:
                    PermissionApplyOrder();
                    ~PermissionApplyOrder() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>申请单 ID</p>
                     * @return ApplyId <p>申请单 ID</p>
                     * 
                     */
                    std::string GetApplyId() const;

                    /**
                     * 设置<p>申请单 ID</p>
                     * @param _applyId <p>申请单 ID</p>
                     * 
                     */
                    void SetApplyId(const std::string& _applyId);

                    /**
                     * 判断参数 ApplyId 是否已赋值
                     * @return ApplyId 是否已赋值
                     * 
                     */
                    bool ApplyIdHasBeenSet() const;

                    /**
                     * 获取<p>申请人用户 ID</p>
                     * @return UserId <p>申请人用户 ID</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>申请人用户 ID</p>
                     * @param _userId <p>申请人用户 ID</p>
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
                     * 获取<p>申请人用户名</p>
                     * @return UserName <p>申请人用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>申请人用户名</p>
                     * @param _userName <p>申请人用户名</p>
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
                     * 获取<p>目标成员账号 UIN</p>
                     * @return TargetUin <p>目标成员账号 UIN</p>
                     * 
                     */
                    int64_t GetTargetUin() const;

                    /**
                     * 设置<p>目标成员账号 UIN</p>
                     * @param _targetUin <p>目标成员账号 UIN</p>
                     * 
                     */
                    void SetTargetUin(const int64_t& _targetUin);

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                    /**
                     * 获取<p>目标成员账号名称</p>
                     * @return TargetName <p>目标成员账号名称</p>
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置<p>目标成员账号名称</p>
                     * @param _targetName <p>目标成员账号名称</p>
                     * 
                     */
                    void SetTargetName(const std::string& _targetName);

                    /**
                     * 判断参数 TargetName 是否已赋值
                     * @return TargetName 是否已赋值
                     * 
                     */
                    bool TargetNameHasBeenSet() const;

                    /**
                     * 获取<p>申请的权限配置</p>
                     * @return RoleConfigurations <p>申请的权限配置</p>
                     * 
                     */
                    std::vector<ApplyRoleConfiguration> GetRoleConfigurations() const;

                    /**
                     * 设置<p>申请的权限配置</p>
                     * @param _roleConfigurations <p>申请的权限配置</p>
                     * 
                     */
                    void SetRoleConfigurations(const std::vector<ApplyRoleConfiguration>& _roleConfigurations);

                    /**
                     * 判断参数 RoleConfigurations 是否已赋值
                     * @return RoleConfigurations 是否已赋值
                     * 
                     */
                    bool RoleConfigurationsHasBeenSet() const;

                    /**
                     * 获取<p>申请单状态</p><p>枚举值：</p><ul><li>1： 待审核</li><li>2： 已通过 - 同步中</li><li>3： 已通过 - 同步成功</li><li>4： 已通过 - 同步失败</li><li>5： 已拒绝</li></ul>
                     * @return Status <p>申请单状态</p><p>枚举值：</p><ul><li>1： 待审核</li><li>2： 已通过 - 同步中</li><li>3： 已通过 - 同步成功</li><li>4： 已通过 - 同步失败</li><li>5： 已拒绝</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>申请单状态</p><p>枚举值：</p><ul><li>1： 待审核</li><li>2： 已通过 - 同步中</li><li>3： 已通过 - 同步成功</li><li>4： 已通过 - 同步失败</li><li>5： 已拒绝</li></ul>
                     * @param _status <p>申请单状态</p><p>枚举值：</p><ul><li>1： 待审核</li><li>2： 已通过 - 同步中</li><li>3： 已通过 - 同步成功</li><li>4： 已通过 - 同步失败</li><li>5： 已拒绝</li></ul>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p><p>参数格式：YYYY-M-DD hh:mm:ss</p>
                     * @return CreateTime <p>创建时间</p><p>参数格式：YYYY-M-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p><p>参数格式：YYYY-M-DD hh:mm:ss</p>
                     * @param _createTime <p>创建时间</p><p>参数格式：YYYY-M-DD hh:mm:ss</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>审批意见</p>
                     * @return AuditOpinion <p>审批意见</p>
                     * 
                     */
                    std::string GetAuditOpinion() const;

                    /**
                     * 设置<p>审批意见</p>
                     * @param _auditOpinion <p>审批意见</p>
                     * 
                     */
                    void SetAuditOpinion(const std::string& _auditOpinion);

                    /**
                     * 判断参数 AuditOpinion 是否已赋值
                     * @return AuditOpinion 是否已赋值
                     * 
                     */
                    bool AuditOpinionHasBeenSet() const;

                    /**
                     * 获取<p>审批时间</p><p>参数格式：YYYY-M-DD hh:mm:ss</p><p>未审批为空</p>
                     * @return AuditTime <p>审批时间</p><p>参数格式：YYYY-M-DD hh:mm:ss</p><p>未审批为空</p>
                     * 
                     */
                    std::string GetAuditTime() const;

                    /**
                     * 设置<p>审批时间</p><p>参数格式：YYYY-M-DD hh:mm:ss</p><p>未审批为空</p>
                     * @param _auditTime <p>审批时间</p><p>参数格式：YYYY-M-DD hh:mm:ss</p><p>未审批为空</p>
                     * 
                     */
                    void SetAuditTime(const std::string& _auditTime);

                    /**
                     * 判断参数 AuditTime 是否已赋值
                     * @return AuditTime 是否已赋值
                     * 
                     */
                    bool AuditTimeHasBeenSet() const;

                private:

                    /**
                     * <p>申请单 ID</p>
                     */
                    std::string m_applyId;
                    bool m_applyIdHasBeenSet;

                    /**
                     * <p>申请人用户 ID</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>申请人用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>目标成员账号 UIN</p>
                     */
                    int64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * <p>目标成员账号名称</p>
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * <p>申请的权限配置</p>
                     */
                    std::vector<ApplyRoleConfiguration> m_roleConfigurations;
                    bool m_roleConfigurationsHasBeenSet;

                    /**
                     * <p>申请单状态</p><p>枚举值：</p><ul><li>1： 待审核</li><li>2： 已通过 - 同步中</li><li>3： 已通过 - 同步成功</li><li>4： 已通过 - 同步失败</li><li>5： 已拒绝</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间</p><p>参数格式：YYYY-M-DD hh:mm:ss</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>审批意见</p>
                     */
                    std::string m_auditOpinion;
                    bool m_auditOpinionHasBeenSet;

                    /**
                     * <p>审批时间</p><p>参数格式：YYYY-M-DD hh:mm:ss</p><p>未审批为空</p>
                     */
                    std::string m_auditTime;
                    bool m_auditTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_PERMISSIONAPPLYORDER_H_
