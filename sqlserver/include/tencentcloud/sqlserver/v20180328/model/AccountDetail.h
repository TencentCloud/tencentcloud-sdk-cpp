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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTDETAIL_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/DBPrivilege.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 账户信息详情
                */
                class AccountDetail : public AbstractModel
                {
                public:
                    AccountDetail();
                    ~AccountDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账户名
                     * @return Name 账户名
                     */
                    std::string GetName() const;

                    /**
                     * 设置账户名
                     * @param Name 账户名
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取账户备注
                     * @return Remark 账户备注
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置账户备注
                     * @param Remark 账户备注
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取账户创建时间
                     * @return CreateTime 账户创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置账户创建时间
                     * @param CreateTime 账户创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取账户状态，1-创建中，2-正常，3-修改中，4-密码重置中，-1-删除中
                     * @return Status 账户状态，1-创建中，2-正常，3-修改中，4-密码重置中，-1-删除中
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置账户状态，1-创建中，2-正常，3-修改中，4-密码重置中，-1-删除中
                     * @param Status 账户状态，1-创建中，2-正常，3-修改中，4-密码重置中，-1-删除中
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取账户更新时间
                     * @return UpdateTime 账户更新时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置账户更新时间
                     * @param UpdateTime 账户更新时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取密码更新时间
                     * @return PassTime 密码更新时间
                     */
                    std::string GetPassTime() const;

                    /**
                     * 设置密码更新时间
                     * @param PassTime 密码更新时间
                     */
                    void SetPassTime(const std::string& _passTime);

                    /**
                     * 判断参数 PassTime 是否已赋值
                     * @return PassTime 是否已赋值
                     */
                    bool PassTimeHasBeenSet() const;

                    /**
                     * 获取账户内部状态，正常为enable
                     * @return InternalStatus 账户内部状态，正常为enable
                     */
                    std::string GetInternalStatus() const;

                    /**
                     * 设置账户内部状态，正常为enable
                     * @param InternalStatus 账户内部状态，正常为enable
                     */
                    void SetInternalStatus(const std::string& _internalStatus);

                    /**
                     * 判断参数 InternalStatus 是否已赋值
                     * @return InternalStatus 是否已赋值
                     */
                    bool InternalStatusHasBeenSet() const;

                    /**
                     * 获取该账户对相关db的读写权限信息
                     * @return Dbs 该账户对相关db的读写权限信息
                     */
                    std::vector<DBPrivilege> GetDbs() const;

                    /**
                     * 设置该账户对相关db的读写权限信息
                     * @param Dbs 该账户对相关db的读写权限信息
                     */
                    void SetDbs(const std::vector<DBPrivilege>& _dbs);

                    /**
                     * 判断参数 Dbs 是否已赋值
                     * @return Dbs 是否已赋值
                     */
                    bool DbsHasBeenSet() const;

                    /**
                     * 获取是否为管理员账户
                     * @return IsAdmin 是否为管理员账户
                     */
                    bool GetIsAdmin() const;

                    /**
                     * 设置是否为管理员账户
                     * @param IsAdmin 是否为管理员账户
                     */
                    void SetIsAdmin(const bool& _isAdmin);

                    /**
                     * 判断参数 IsAdmin 是否已赋值
                     * @return IsAdmin 是否已赋值
                     */
                    bool IsAdminHasBeenSet() const;

                private:

                    /**
                     * 账户名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 账户备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 账户创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 账户状态，1-创建中，2-正常，3-修改中，4-密码重置中，-1-删除中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 账户更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 密码更新时间
                     */
                    std::string m_passTime;
                    bool m_passTimeHasBeenSet;

                    /**
                     * 账户内部状态，正常为enable
                     */
                    std::string m_internalStatus;
                    bool m_internalStatusHasBeenSet;

                    /**
                     * 该账户对相关db的读写权限信息
                     */
                    std::vector<DBPrivilege> m_dbs;
                    bool m_dbsHasBeenSet;

                    /**
                     * 是否为管理员账户
                     */
                    bool m_isAdmin;
                    bool m_isAdminHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTDETAIL_H_
