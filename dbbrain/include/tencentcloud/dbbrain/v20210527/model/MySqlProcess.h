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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MYSQLPROCESS_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MYSQLPROCESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 关系型数据库线程
                */
                class MySqlProcess : public AbstractModel
                {
                public:
                    MySqlProcess();
                    ~MySqlProcess() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取线程ID。
                     * @return ID 线程ID。
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置线程ID。
                     * @param _iD 线程ID。
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取线程的操作账号名。
                     * @return User 线程的操作账号名。
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置线程的操作账号名。
                     * @param _user 线程的操作账号名。
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
                     * 获取线程的操作主机地址。
                     * @return Host 线程的操作主机地址。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置线程的操作主机地址。
                     * @param _host 线程的操作主机地址。
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
                     * 获取线程的操作数据库。
                     * @return DB 线程的操作数据库。
                     * 
                     */
                    std::string GetDB() const;

                    /**
                     * 设置线程的操作数据库。
                     * @param _dB 线程的操作数据库。
                     * 
                     */
                    void SetDB(const std::string& _dB);

                    /**
                     * 判断参数 DB 是否已赋值
                     * @return DB 是否已赋值
                     * 
                     */
                    bool DBHasBeenSet() const;

                    /**
                     * 获取线程的操作状态。
                     * @return State 线程的操作状态。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置线程的操作状态。
                     * @param _state 线程的操作状态。
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
                     * 获取线程的执行类型。
                     * @return Command 线程的执行类型。
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置线程的执行类型。
                     * @param _command 线程的执行类型。
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
                     * 获取线程的操作时长，单位秒。
                     * @return Time 线程的操作时长，单位秒。
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置线程的操作时长，单位秒。
                     * @param _time 线程的操作时长，单位秒。
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取线程的操作语句。
                     * @return Info 线程的操作语句。
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置线程的操作语句。
                     * @param _info 线程的操作语句。
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
                     * 线程ID。
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 线程的操作账号名。
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 线程的操作主机地址。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 线程的操作数据库。
                     */
                    std::string m_dB;
                    bool m_dBHasBeenSet;

                    /**
                     * 线程的操作状态。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 线程的执行类型。
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 线程的操作时长，单位秒。
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 线程的操作语句。
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MYSQLPROCESS_H_
