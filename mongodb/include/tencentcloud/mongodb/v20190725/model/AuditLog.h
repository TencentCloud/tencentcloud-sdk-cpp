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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_AUDITLOG_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_AUDITLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 审计日志
                */
                class AuditLog : public AbstractModel
                {
                public:
                    AuditLog();
                    ~AuditLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取影响行数
                     * @return AffectRows 影响行数
                     * 
                     */
                    uint64_t GetAffectRows() const;

                    /**
                     * 设置影响行数
                     * @param _affectRows 影响行数
                     * 
                     */
                    void SetAffectRows(const uint64_t& _affectRows);

                    /**
                     * 判断参数 AffectRows 是否已赋值
                     * @return AffectRows 是否已赋值
                     * 
                     */
                    bool AffectRowsHasBeenSet() const;

                    /**
                     * 获取操作类型。如：grantRolesToRole、dropRole等。
                     * @return Atype 操作类型。如：grantRolesToRole、dropRole等。
                     * 
                     */
                    std::string GetAtype() const;

                    /**
                     * 设置操作类型。如：grantRolesToRole、dropRole等。
                     * @param _atype 操作类型。如：grantRolesToRole、dropRole等。
                     * 
                     */
                    void SetAtype(const std::string& _atype);

                    /**
                     * 判断参数 Atype 是否已赋值
                     * @return Atype 是否已赋值
                     * 
                     */
                    bool AtypeHasBeenSet() const;

                    /**
                     * 获取执行时间。单位为：ms。
                     * @return ExecTime 执行时间。单位为：ms。
                     * 
                     */
                    uint64_t GetExecTime() const;

                    /**
                     * 设置执行时间。单位为：ms。
                     * @param _execTime 执行时间。单位为：ms。
                     * 
                     */
                    void SetExecTime(const uint64_t& _execTime);

                    /**
                     * 判断参数 ExecTime 是否已赋值
                     * @return ExecTime 是否已赋值
                     * 
                     */
                    bool ExecTimeHasBeenSet() const;

                    /**
                     * 获取客户端地址。
                     * @return Host 客户端地址。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置客户端地址。
                     * @param _host 客户端地址。
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取操作参数。包含操作的详细参数信息。
                     * @return Param 操作参数。包含操作的详细参数信息。
                     * 
                     */
                    std::string GetParam() const;

                    /**
                     * 设置操作参数。包含操作的详细参数信息。
                     * @param _param 操作参数。包含操作的详细参数信息。
                     * 
                     */
                    void SetParam(const std::string& _param);

                    /**
                     * 判断参数 Param 是否已赋值
                     * @return Param 是否已赋值
                     * 
                     */
                    bool ParamHasBeenSet() const;

                    /**
                     * 获取执行结果。0表示成功，非0表示失败。
                     * @return Result 执行结果。0表示成功，非0表示失败。
                     * 
                     */
                    int64_t GetResult() const;

                    /**
                     * 设置执行结果。0表示成功，非0表示失败。
                     * @param _result 执行结果。0表示成功，非0表示失败。
                     * 
                     */
                    void SetResult(const int64_t& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取用户角色列表。格式为：role@db,role@db。
                     * @return Roles 用户角色列表。格式为：role@db,role@db。
                     * 
                     */
                    std::string GetRoles() const;

                    /**
                     * 设置用户角色列表。格式为：role@db,role@db。
                     * @param _roles 用户角色列表。格式为：role@db,role@db。
                     * 
                     */
                    void SetRoles(const std::string& _roles);

                    /**
                     * 判断参数 Roles 是否已赋值
                     * @return Roles 是否已赋值
                     * 
                     */
                    bool RolesHasBeenSet() const;

                    /**
                     * 获取操作时间戳。格式为：YYYY-MM-DD HH:mm:ss。
                     * @return Timestamp 操作时间戳。格式为：YYYY-MM-DD HH:mm:ss。
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置操作时间戳。格式为：YYYY-MM-DD HH:mm:ss。
                     * @param _timestamp 操作时间戳。格式为：YYYY-MM-DD HH:mm:ss。
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取用户名。格式为：user@db。
                     * @return User 用户名。格式为：user@db。
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户名。格式为：user@db。
                     * @param _user 用户名。格式为：user@db。
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                private:

                    /**
                     * 影响行数
                     */
                    uint64_t m_affectRows;
                    bool m_affectRowsHasBeenSet;

                    /**
                     * 操作类型。如：grantRolesToRole、dropRole等。
                     */
                    std::string m_atype;
                    bool m_atypeHasBeenSet;

                    /**
                     * 执行时间。单位为：ms。
                     */
                    uint64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * 客户端地址。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 操作参数。包含操作的详细参数信息。
                     */
                    std::string m_param;
                    bool m_paramHasBeenSet;

                    /**
                     * 执行结果。0表示成功，非0表示失败。
                     */
                    int64_t m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 用户角色列表。格式为：role@db,role@db。
                     */
                    std::string m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * 操作时间戳。格式为：YYYY-MM-DD HH:mm:ss。
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 用户名。格式为：user@db。
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_AUDITLOG_H_
