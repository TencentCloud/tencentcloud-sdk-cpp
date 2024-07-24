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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEKILLTASKREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEKILLTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateKillTask请求参数结构体
                */
                class CreateKillTaskRequest : public AbstractModel
                {
                public:
                    CreateKillTaskRequest();
                    ~CreateKillTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取kill会话任务的关联实例ID。
                     * @return InstanceId kill会话任务的关联实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置kill会话任务的关联实例ID。
                     * @param _instanceId kill会话任务的关联实例ID。
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
                     * 获取任务持续时间，单位秒，手动关闭任务传-1。
                     * @return Duration 任务持续时间，单位秒，手动关闭任务传-1。
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置任务持续时间，单位秒，手动关闭任务传-1。
                     * @param _duration 任务持续时间，单位秒，手动关闭任务传-1。
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取任务过滤条件，客户端IP。
                     * @return Host 任务过滤条件，客户端IP。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置任务过滤条件，客户端IP。
                     * @param _host 任务过滤条件，客户端IP。
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
                     * 获取任务过滤条件，数据库库名,多个","隔开。
                     * @return DB 任务过滤条件，数据库库名,多个","隔开。
                     * 
                     */
                    std::string GetDB() const;

                    /**
                     * 设置任务过滤条件，数据库库名,多个","隔开。
                     * @param _dB 任务过滤条件，数据库库名,多个","隔开。
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
                     * 获取任务过滤条件，相关命令，多个","隔开。
                     * @return Command 任务过滤条件，相关命令，多个","隔开。
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置任务过滤条件，相关命令，多个","隔开。
                     * @param _command 任务过滤条件，相关命令，多个","隔开。
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
                     * 获取任务过滤条件，支持单条件前缀匹配。
                     * @return Info 任务过滤条件，支持单条件前缀匹配。
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置任务过滤条件，支持单条件前缀匹配。
                     * @param _info 任务过滤条件，支持单条件前缀匹配。
                     * 
                     */
                    void SetInfo(const std::string& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取任务过滤条件，支持多个关键字匹配，与Info参数互斥。
                     * @return Infos 任务过滤条件，支持多个关键字匹配，与Info参数互斥。
                     * 
                     */
                    std::vector<std::string> GetInfos() const;

                    /**
                     * 设置任务过滤条件，支持多个关键字匹配，与Info参数互斥。
                     * @param _infos 任务过滤条件，支持多个关键字匹配，与Info参数互斥。
                     * 
                     */
                    void SetInfos(const std::vector<std::string>& _infos);

                    /**
                     * 判断参数 Infos 是否已赋值
                     * @return Infos 是否已赋值
                     * 
                     */
                    bool InfosHasBeenSet() const;

                    /**
                     * 获取任务过滤条件，用户类型。
                     * @return User 任务过滤条件，用户类型。
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置任务过滤条件，用户类型。
                     * @param _user 任务过滤条件，用户类型。
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
                     * 获取任务过滤条件，会话持续时长，单位秒。
                     * @return Time 任务过滤条件，会话持续时长，单位秒。
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置任务过滤条件，会话持续时长，单位秒。
                     * @param _time 任务过滤条件，会话持续时长，单位秒。
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
                     * 获取服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     * @return Product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     * @param _product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * kill会话任务的关联实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 任务持续时间，单位秒，手动关闭任务传-1。
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 任务过滤条件，客户端IP。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 任务过滤条件，数据库库名,多个","隔开。
                     */
                    std::string m_dB;
                    bool m_dBHasBeenSet;

                    /**
                     * 任务过滤条件，相关命令，多个","隔开。
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 任务过滤条件，支持单条件前缀匹配。
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * 任务过滤条件，支持多个关键字匹配，与Info参数互斥。
                     */
                    std::vector<std::string> m_infos;
                    bool m_infosHasBeenSet;

                    /**
                     * 任务过滤条件，用户类型。
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 任务过滤条件，会话持续时长，单位秒。
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEKILLTASKREQUEST_H_
