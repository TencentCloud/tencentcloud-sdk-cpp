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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEMYSQLPROCESSLISTREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEMYSQLPROCESSLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/StatDimension.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeMySqlProcessList请求参数结构体
                */
                class DescribeMySqlProcessListRequest : public AbstractModel
                {
                public:
                    DescribeMySqlProcessListRequest();
                    ~DescribeMySqlProcessListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
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
                     * 获取线程的ID，用于筛选线程列表。
                     * @return ID 线程的ID，用于筛选线程列表。
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置线程的ID，用于筛选线程列表。
                     * @param _iD 线程的ID，用于筛选线程列表。
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取线程的操作账号名，用于筛选线程列表。
                     * @return User 线程的操作账号名，用于筛选线程列表。
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置线程的操作账号名，用于筛选线程列表。
                     * @param _user 线程的操作账号名，用于筛选线程列表。
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
                     * 获取线程的操作主机地址，用于筛选线程列表。
                     * @return Host 线程的操作主机地址，用于筛选线程列表。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置线程的操作主机地址，用于筛选线程列表。
                     * @param _host 线程的操作主机地址，用于筛选线程列表。
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
                     * 获取线程的操作数据库，用于筛选线程列表。
                     * @return DB 线程的操作数据库，用于筛选线程列表。
                     * 
                     */
                    std::string GetDB() const;

                    /**
                     * 设置线程的操作数据库，用于筛选线程列表。
                     * @param _dB 线程的操作数据库，用于筛选线程列表。
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
                     * 获取线程的操作状态，用于筛选线程列表。
                     * @return State 线程的操作状态，用于筛选线程列表。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置线程的操作状态，用于筛选线程列表。
                     * @param _state 线程的操作状态，用于筛选线程列表。
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
                     * 获取线程的执行类型，用于筛选线程列表。
                     * @return Command 线程的执行类型，用于筛选线程列表。
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置线程的执行类型，用于筛选线程列表。
                     * @param _command 线程的执行类型，用于筛选线程列表。
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
                     * 获取线程的操作时长最小值，单位秒，用于筛选操作时长大于该值的线程列表。
                     * @return Time 线程的操作时长最小值，单位秒，用于筛选操作时长大于该值的线程列表。
                     * 
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置线程的操作时长最小值，单位秒，用于筛选操作时长大于该值的线程列表。
                     * @param _time 线程的操作时长最小值，单位秒，用于筛选操作时长大于该值的线程列表。
                     * 
                     */
                    void SetTime(const uint64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取线程的操作语句，用于筛选线程列表。
                     * @return Info 线程的操作语句，用于筛选线程列表。
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置线程的操作语句，用于筛选线程列表。
                     * @param _info 线程的操作语句，用于筛选线程列表。
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
                     * 获取返回数量，默认20。
                     * @return Limit 返回数量，默认20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认20。
                     * @param _limit 返回数量，默认20。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     * @return Product 服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     * @param _product 服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取会话统计的维度信息,可以多个维度。
                     * @return StatDimensions 会话统计的维度信息,可以多个维度。
                     * 
                     */
                    std::vector<StatDimension> GetStatDimensions() const;

                    /**
                     * 设置会话统计的维度信息,可以多个维度。
                     * @param _statDimensions 会话统计的维度信息,可以多个维度。
                     * 
                     */
                    void SetStatDimensions(const std::vector<StatDimension>& _statDimensions);

                    /**
                     * 判断参数 StatDimensions 是否已赋值
                     * @return StatDimensions 是否已赋值
                     * 
                     */
                    bool StatDimensionsHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 线程的ID，用于筛选线程列表。
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 线程的操作账号名，用于筛选线程列表。
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 线程的操作主机地址，用于筛选线程列表。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 线程的操作数据库，用于筛选线程列表。
                     */
                    std::string m_dB;
                    bool m_dBHasBeenSet;

                    /**
                     * 线程的操作状态，用于筛选线程列表。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 线程的执行类型，用于筛选线程列表。
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 线程的操作时长最小值，单位秒，用于筛选操作时长大于该值的线程列表。
                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 线程的操作语句，用于筛选线程列表。
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * 返回数量，默认20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 会话统计的维度信息,可以多个维度。
                     */
                    std::vector<StatDimension> m_statDimensions;
                    bool m_statDimensionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEMYSQLPROCESSLISTREQUEST_H_
