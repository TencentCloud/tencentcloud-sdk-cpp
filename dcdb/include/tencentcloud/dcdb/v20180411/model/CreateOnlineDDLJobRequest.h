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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEONLINEDDLJOBREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEONLINEDDLJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * CreateOnlineDDLJob请求参数结构体
                */
                class CreateOnlineDDLJobRequest : public AbstractModel
                {
                public:
                    CreateOnlineDDLJobRequest();
                    ~CreateOnlineDDLJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
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
                     * 获取要执行的 DDL 语句。常用的在线DDL参考此API文档示例部分
                     * @return Alter 要执行的 DDL 语句。常用的在线DDL参考此API文档示例部分
                     * 
                     */
                    std::string GetAlter() const;

                    /**
                     * 设置要执行的 DDL 语句。常用的在线DDL参考此API文档示例部分
                     * @param _alter 要执行的 DDL 语句。常用的在线DDL参考此API文档示例部分
                     * 
                     */
                    void SetAlter(const std::string& _alter);

                    /**
                     * 判断参数 Alter 是否已赋值
                     * @return Alter 是否已赋值
                     * 
                     */
                    bool AlterHasBeenSet() const;

                    /**
                     * 获取要修改的数据库	
                     * @return DbName 要修改的数据库	
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置要修改的数据库	
                     * @param _dbName 要修改的数据库	
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取要修改的表
                     * @return Table 要修改的表
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置要修改的表
                     * @param _table 要修改的表
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取指定账号执行DDL，需确保账号有 ALTER, CREATE, INSERT, UPDATE, DROP, DELETE, INDEX, CREATE TEMPORARY TABLES, LOCK TABLES, TRIGGER, REPLICATION CLIENT, REPLICATION SLAVE 等相关权限 （若不填写将默认使用系统账号）
                     * @return User 指定账号执行DDL，需确保账号有 ALTER, CREATE, INSERT, UPDATE, DROP, DELETE, INDEX, CREATE TEMPORARY TABLES, LOCK TABLES, TRIGGER, REPLICATION CLIENT, REPLICATION SLAVE 等相关权限 （若不填写将默认使用系统账号）
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置指定账号执行DDL，需确保账号有 ALTER, CREATE, INSERT, UPDATE, DROP, DELETE, INDEX, CREATE TEMPORARY TABLES, LOCK TABLES, TRIGGER, REPLICATION CLIENT, REPLICATION SLAVE 等相关权限 （若不填写将默认使用系统账号）
                     * @param _user 指定账号执行DDL，需确保账号有 ALTER, CREATE, INSERT, UPDATE, DROP, DELETE, INDEX, CREATE TEMPORARY TABLES, LOCK TABLES, TRIGGER, REPLICATION CLIENT, REPLICATION SLAVE 等相关权限 （若不填写将默认使用系统账号）
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取指定账号的密码
                     * @return Password 指定账号的密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置指定账号的密码
                     * @param _password 指定账号的密码
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取运行线程数大于此值时，将终止DDL。不填则默认58
                     * @return CriticalLoad 运行线程数大于此值时，将终止DDL。不填则默认58
                     * 
                     */
                    int64_t GetCriticalLoad() const;

                    /**
                     * 设置运行线程数大于此值时，将终止DDL。不填则默认58
                     * @param _criticalLoad 运行线程数大于此值时，将终止DDL。不填则默认58
                     * 
                     */
                    void SetCriticalLoad(const int64_t& _criticalLoad);

                    /**
                     * 判断参数 CriticalLoad 是否已赋值
                     * @return CriticalLoad 是否已赋值
                     * 
                     */
                    bool CriticalLoadHasBeenSet() const;

                    /**
                     * 获取是否检查自增字段。为1则不允许修改自增字段，0或不填写则不检查
                     * @return CheckAutoInc 是否检查自增字段。为1则不允许修改自增字段，0或不填写则不检查
                     * 
                     */
                    int64_t GetCheckAutoInc() const;

                    /**
                     * 设置是否检查自增字段。为1则不允许修改自增字段，0或不填写则不检查
                     * @param _checkAutoInc 是否检查自增字段。为1则不允许修改自增字段，0或不填写则不检查
                     * 
                     */
                    void SetCheckAutoInc(const int64_t& _checkAutoInc);

                    /**
                     * 判断参数 CheckAutoInc 是否已赋值
                     * @return CheckAutoInc 是否已赋值
                     * 
                     */
                    bool CheckAutoIncHasBeenSet() const;

                    /**
                     * 获取允许的主备延迟时间(单位s)，0或不填写则不检查延迟
                     * @return MaxDelay 允许的主备延迟时间(单位s)，0或不填写则不检查延迟
                     * 
                     */
                    int64_t GetMaxDelay() const;

                    /**
                     * 设置允许的主备延迟时间(单位s)，0或不填写则不检查延迟
                     * @param _maxDelay 允许的主备延迟时间(单位s)，0或不填写则不检查延迟
                     * 
                     */
                    void SetMaxDelay(const int64_t& _maxDelay);

                    /**
                     * 判断参数 MaxDelay 是否已赋值
                     * @return MaxDelay 是否已赋值
                     * 
                     */
                    bool MaxDelayHasBeenSet() const;

                    /**
                     * 获取是否使用pt-osc工具做DDL
                     * @return UsePt 是否使用pt-osc工具做DDL
                     * 
                     */
                    int64_t GetUsePt() const;

                    /**
                     * 设置是否使用pt-osc工具做DDL
                     * @param _usePt 是否使用pt-osc工具做DDL
                     * 
                     */
                    void SetUsePt(const int64_t& _usePt);

                    /**
                     * 判断参数 UsePt 是否已赋值
                     * @return UsePt 是否已赋值
                     * 
                     */
                    bool UsePtHasBeenSet() const;

                    /**
                     * 获取开始执行时间
                     * @return StartTime 开始执行时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始执行时间
                     * @param _startTime 开始执行时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 要执行的 DDL 语句。常用的在线DDL参考此API文档示例部分
                     */
                    std::string m_alter;
                    bool m_alterHasBeenSet;

                    /**
                     * 要修改的数据库	
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 要修改的表
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 指定账号执行DDL，需确保账号有 ALTER, CREATE, INSERT, UPDATE, DROP, DELETE, INDEX, CREATE TEMPORARY TABLES, LOCK TABLES, TRIGGER, REPLICATION CLIENT, REPLICATION SLAVE 等相关权限 （若不填写将默认使用系统账号）
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 指定账号的密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 运行线程数大于此值时，将终止DDL。不填则默认58
                     */
                    int64_t m_criticalLoad;
                    bool m_criticalLoadHasBeenSet;

                    /**
                     * 是否检查自增字段。为1则不允许修改自增字段，0或不填写则不检查
                     */
                    int64_t m_checkAutoInc;
                    bool m_checkAutoIncHasBeenSet;

                    /**
                     * 允许的主备延迟时间(单位s)，0或不填写则不检查延迟
                     */
                    int64_t m_maxDelay;
                    bool m_maxDelayHasBeenSet;

                    /**
                     * 是否使用pt-osc工具做DDL
                     */
                    int64_t m_usePt;
                    bool m_usePtHasBeenSet;

                    /**
                     * 开始执行时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEONLINEDDLJOBREQUEST_H_
