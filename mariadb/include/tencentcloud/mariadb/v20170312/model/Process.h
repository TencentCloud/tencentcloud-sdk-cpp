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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_PROCESS_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_PROCESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 用于显示当前正在运行的线程（连接/查询）信息，数据源来自系统表：information_schema.processlist。
                */
                class Process : public AbstractModel
                {
                public:
                    Process();
                    ~Process() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取线程ID​​：唯一标识当前连接/线程的整数。
                     * @return Id 线程ID​​：唯一标识当前连接/线程的整数。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置线程ID​​：唯一标识当前连接/线程的整数。
                     * @param _id 线程ID​​：唯一标识当前连接/线程的整数。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取用户名​​：发起连接的 MySQL 用户。
                     * @return User 用户名​​：发起连接的 MySQL 用户。
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户名​​：发起连接的 MySQL 用户。
                     * @param _user 用户名​​：发起连接的 MySQL 用户。
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
                     * 获取客户端地址​​：发起连接的客户端主机名及端口（格式：host:port）。
                     * @return Host 客户端地址​​：发起连接的客户端主机名及端口（格式：host:port）。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置客户端地址​​：发起连接的客户端主机名及端口（格式：host:port）。
                     * @param _host 客户端地址​​：发起连接的客户端主机名及端口（格式：host:port）。
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
                     * 获取当前数据库​​：线程正在使用的数据库名（未选择数据库时为 空串）。
                     * @return Db 当前数据库​​：线程正在使用的数据库名（未选择数据库时为 空串）。
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置当前数据库​​：线程正在使用的数据库名（未选择数据库时为 空串）。
                     * @param _db 当前数据库​​：线程正在使用的数据库名（未选择数据库时为 空串）。
                     * 
                     */
                    void SetDb(const std::string& _db);

                    /**
                     * 判断参数 Db 是否已赋值
                     * @return Db 是否已赋值
                     * 
                     */
                    bool DbHasBeenSet() const;

                    /**
                     * 获取命令类型​​：线程正在执行的命令类型。常见值：

- Sleep：空闲等待状态（等待新查询）。
- Query：正在执行查询或 SQL 语句。
- Binlog Dump：主服务器线程向从服务器发送二进制日志。
- Connect：客户端正在连接。
- Killed：线程被终止但未完全退出。
                     * @return Command 命令类型​​：线程正在执行的命令类型。常见值：

- Sleep：空闲等待状态（等待新查询）。
- Query：正在执行查询或 SQL 语句。
- Binlog Dump：主服务器线程向从服务器发送二进制日志。
- Connect：客户端正在连接。
- Killed：线程被终止但未完全退出。
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置命令类型​​：线程正在执行的命令类型。常见值：

- Sleep：空闲等待状态（等待新查询）。
- Query：正在执行查询或 SQL 语句。
- Binlog Dump：主服务器线程向从服务器发送二进制日志。
- Connect：客户端正在连接。
- Killed：线程被终止但未完全退出。
                     * @param _command 命令类型​​：线程正在执行的命令类型。常见值：

- Sleep：空闲等待状态（等待新查询）。
- Query：正在执行查询或 SQL 语句。
- Binlog Dump：主服务器线程向从服务器发送二进制日志。
- Connect：客户端正在连接。
- Killed：线程被终止但未完全退出。
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取执行时间（秒）​​：线程在当前状态持续的秒数。
                     * @return Time 执行时间（秒）​​：线程在当前状态持续的秒数。
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置执行时间（秒）​​：线程在当前状态持续的秒数。
                     * @param _time 执行时间（秒）​​：线程在当前状态持续的秒数。
                     * 
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取执行开始时间（秒）​​：线程在当前状态开始执行的时间。
                     * @return ProcessStartTime 执行开始时间（秒）​​：线程在当前状态开始执行的时间。
                     * 
                     */
                    std::string GetProcessStartTime() const;

                    /**
                     * 设置执行开始时间（秒）​​：线程在当前状态开始执行的时间。
                     * @param _processStartTime 执行开始时间（秒）​​：线程在当前状态开始执行的时间。
                     * 
                     */
                    void SetProcessStartTime(const std::string& _processStartTime);

                    /**
                     * 判断参数 ProcessStartTime 是否已赋值
                     * @return ProcessStartTime 是否已赋值
                     * 
                     */
                    bool ProcessStartTimeHasBeenSet() const;

                    /**
                     * 获取​​状态描述​​：线程当前的详细操作状态。常见值：

- Sending data：正在处理/发送数据。
- Locked：等待表锁释放（例如 MyISAM 表级锁）。
- Sorting result：排序查询结果。
- Updating：更新表中数据。
- 当为NULL返回空串：无明确状态（如 Sleep 时）。
                     * @return State ​​状态描述​​：线程当前的详细操作状态。常见值：

- Sending data：正在处理/发送数据。
- Locked：等待表锁释放（例如 MyISAM 表级锁）。
- Sorting result：排序查询结果。
- Updating：更新表中数据。
- 当为NULL返回空串：无明确状态（如 Sleep 时）。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置​​状态描述​​：线程当前的详细操作状态。常见值：

- Sending data：正在处理/发送数据。
- Locked：等待表锁释放（例如 MyISAM 表级锁）。
- Sorting result：排序查询结果。
- Updating：更新表中数据。
- 当为NULL返回空串：无明确状态（如 Sleep 时）。
                     * @param _state ​​状态描述​​：线程当前的详细操作状态。常见值：

- Sending data：正在处理/发送数据。
- Locked：等待表锁释放（例如 MyISAM 表级锁）。
- Sorting result：排序查询结果。
- Updating：更新表中数据。
- 当为NULL返回空串：无明确状态（如 Sleep 时）。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取执行语句​​：正在执行的 SQL 语句（前 1024 字符）。
                     * @return Info 执行语句​​：正在执行的 SQL 语句（前 1024 字符）。
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置执行语句​​：正在执行的 SQL 语句（前 1024 字符）。
                     * @param _info 执行语句​​：正在执行的 SQL 语句（前 1024 字符）。
                     * 
                     */
                    void SetInfo(const std::string& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                private:

                    /**
                     * 线程ID​​：唯一标识当前连接/线程的整数。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 用户名​​：发起连接的 MySQL 用户。
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 客户端地址​​：发起连接的客户端主机名及端口（格式：host:port）。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 当前数据库​​：线程正在使用的数据库名（未选择数据库时为 空串）。
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * 命令类型​​：线程正在执行的命令类型。常见值：

- Sleep：空闲等待状态（等待新查询）。
- Query：正在执行查询或 SQL 语句。
- Binlog Dump：主服务器线程向从服务器发送二进制日志。
- Connect：客户端正在连接。
- Killed：线程被终止但未完全退出。
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 执行时间（秒）​​：线程在当前状态持续的秒数。
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 执行开始时间（秒）​​：线程在当前状态开始执行的时间。
                     */
                    std::string m_processStartTime;
                    bool m_processStartTimeHasBeenSet;

                    /**
                     * ​​状态描述​​：线程当前的详细操作状态。常见值：

- Sending data：正在处理/发送数据。
- Locked：等待表锁释放（例如 MyISAM 表级锁）。
- Sorting result：排序查询结果。
- Updating：更新表中数据。
- 当为NULL返回空串：无明确状态（如 Sleep 时）。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 执行语句​​：正在执行的 SQL 语句（前 1024 字符）。
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_PROCESS_H_
