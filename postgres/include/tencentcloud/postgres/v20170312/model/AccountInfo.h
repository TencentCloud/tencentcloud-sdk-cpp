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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_ACCOUNTINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_ACCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 账户信息
                */
                class AccountInfo : public AbstractModel
                {
                public:
                    AccountInfo();
                    ~AccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例ID，形如postgres-lnp6j617</p>
                     * @return DBInstanceId <p>实例ID，形如postgres-lnp6j617</p>
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置<p>实例ID，形如postgres-lnp6j617</p>
                     * @param _dBInstanceId <p>实例ID，形如postgres-lnp6j617</p>
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>账号</p>
                     * @return UserName <p>账号</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>账号</p>
                     * @param _userName <p>账号</p>
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
                     * 获取<p>账号备注</p>
                     * @return Remark <p>账号备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>账号备注</p>
                     * @param _remark <p>账号备注</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>账号状态。 1-创建中，2-正常，3-修改中，4-密码重置中，5-锁定中，-1-删除中</p>
                     * @return Status <p>账号状态。 1-创建中，2-正常，3-修改中，4-密码重置中，5-锁定中，-1-删除中</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>账号状态。 1-创建中，2-正常，3-修改中，4-密码重置中，5-锁定中，-1-删除中</p>
                     * @param _status <p>账号状态。 1-创建中，2-正常，3-修改中，4-密码重置中，5-锁定中，-1-删除中</p>
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
                     * 获取<p>账号创建时间</p>
                     * @return CreateTime <p>账号创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>账号创建时间</p>
                     * @param _createTime <p>账号创建时间</p>
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
                     * 获取<p>账号最后一次更新时间</p>
                     * @return UpdateTime <p>账号最后一次更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>账号最后一次更新时间</p>
                     * @param _updateTime <p>账号最后一次更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>账号密码最近一次修改时间。</p><p>此字段只在2025-10-31后才生效，之前无论是否修改密码，该值统一为默认值：0000-00-00 00:00:00<br>同时仅通过云API或者管控控制台修改密码，才会更新该字段。</p>
                     * @return PasswordUpdateTime <p>账号密码最近一次修改时间。</p><p>此字段只在2025-10-31后才生效，之前无论是否修改密码，该值统一为默认值：0000-00-00 00:00:00<br>同时仅通过云API或者管控控制台修改密码，才会更新该字段。</p>
                     * 
                     */
                    std::string GetPasswordUpdateTime() const;

                    /**
                     * 设置<p>账号密码最近一次修改时间。</p><p>此字段只在2025-10-31后才生效，之前无论是否修改密码，该值统一为默认值：0000-00-00 00:00:00<br>同时仅通过云API或者管控控制台修改密码，才会更新该字段。</p>
                     * @param _passwordUpdateTime <p>账号密码最近一次修改时间。</p><p>此字段只在2025-10-31后才生效，之前无论是否修改密码，该值统一为默认值：0000-00-00 00:00:00<br>同时仅通过云API或者管控控制台修改密码，才会更新该字段。</p>
                     * 
                     */
                    void SetPasswordUpdateTime(const std::string& _passwordUpdateTime);

                    /**
                     * 判断参数 PasswordUpdateTime 是否已赋值
                     * @return PasswordUpdateTime 是否已赋值
                     * 
                     */
                    bool PasswordUpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>账号类型。支持normal、tencentDBSuper。normal指代普通用户，tencentDBSuper为拥有pg_tencentdb_superuser角色的账号。</p>
                     * @return UserType <p>账号类型。支持normal、tencentDBSuper。normal指代普通用户，tencentDBSuper为拥有pg_tencentdb_superuser角色的账号。</p>
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置<p>账号类型。支持normal、tencentDBSuper。normal指代普通用户，tencentDBSuper为拥有pg_tencentdb_superuser角色的账号。</p>
                     * @param _userType <p>账号类型。支持normal、tencentDBSuper。normal指代普通用户，tencentDBSuper为拥有pg_tencentdb_superuser角色的账号。</p>
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取<p>用户账号是否启用CAM验证</p>
                     * @return OpenCam <p>用户账号是否启用CAM验证</p>
                     * 
                     */
                    bool GetOpenCam() const;

                    /**
                     * 设置<p>用户账号是否启用CAM验证</p>
                     * @param _openCam <p>用户账号是否启用CAM验证</p>
                     * 
                     */
                    void SetOpenCam(const bool& _openCam);

                    /**
                     * 判断参数 OpenCam 是否已赋值
                     * @return OpenCam 是否已赋值
                     * 
                     */
                    bool OpenCamHasBeenSet() const;

                    /**
                     * 获取<p>该账号实际加入了哪些预设角色</p>
                     * @return PGRoles <p>该账号实际加入了哪些预设角色</p>
                     * 
                     */
                    std::vector<std::string> GetPGRoles() const;

                    /**
                     * 设置<p>该账号实际加入了哪些预设角色</p>
                     * @param _pGRoles <p>该账号实际加入了哪些预设角色</p>
                     * 
                     */
                    void SetPGRoles(const std::vector<std::string>& _pGRoles);

                    /**
                     * 判断参数 PGRoles 是否已赋值
                     * @return PGRoles 是否已赋值
                     * 
                     */
                    bool PGRolesHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID，形如postgres-lnp6j617</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>账号</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>账号备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>账号状态。 1-创建中，2-正常，3-修改中，4-密码重置中，5-锁定中，-1-删除中</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>账号创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>账号最后一次更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>账号密码最近一次修改时间。</p><p>此字段只在2025-10-31后才生效，之前无论是否修改密码，该值统一为默认值：0000-00-00 00:00:00<br>同时仅通过云API或者管控控制台修改密码，才会更新该字段。</p>
                     */
                    std::string m_passwordUpdateTime;
                    bool m_passwordUpdateTimeHasBeenSet;

                    /**
                     * <p>账号类型。支持normal、tencentDBSuper。normal指代普通用户，tencentDBSuper为拥有pg_tencentdb_superuser角色的账号。</p>
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * <p>用户账号是否启用CAM验证</p>
                     */
                    bool m_openCam;
                    bool m_openCamHasBeenSet;

                    /**
                     * <p>该账号实际加入了哪些预设角色</p>
                     */
                    std::vector<std::string> m_pGRoles;
                    bool m_pGRolesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_ACCOUNTINFO_H_
