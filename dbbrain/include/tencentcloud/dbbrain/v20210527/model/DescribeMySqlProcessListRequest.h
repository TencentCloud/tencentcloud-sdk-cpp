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
                     * 获取<p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。<strong>其中 dcdb(即TDSQL MySQL) 的查询入参InstanceId特殊，需要使用 ClusterId + &amp; + InstanceId 来组合代替， 如：<code>tdsqlshard-s1230&amp;shard-abcd</code></strong></p>
                     * @return InstanceId <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。<strong>其中 dcdb(即TDSQL MySQL) 的查询入参InstanceId特殊，需要使用 ClusterId + &amp; + InstanceId 来组合代替， 如：<code>tdsqlshard-s1230&amp;shard-abcd</code></strong></p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。<strong>其中 dcdb(即TDSQL MySQL) 的查询入参InstanceId特殊，需要使用 ClusterId + &amp; + InstanceId 来组合代替， 如：<code>tdsqlshard-s1230&amp;shard-abcd</code></strong></p>
                     * @param _instanceId <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。<strong>其中 dcdb(即TDSQL MySQL) 的查询入参InstanceId特殊，需要使用 ClusterId + &amp; + InstanceId 来组合代替， 如：<code>tdsqlshard-s1230&amp;shard-abcd</code></strong></p>
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
                     * 获取<p>线程的ID，用于筛选线程列表。</p>
                     * @return ID <p>线程的ID，用于筛选线程列表。</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>线程的ID，用于筛选线程列表。</p>
                     * @param _iD <p>线程的ID，用于筛选线程列表。</p>
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
                     * 获取<p>线程的操作账号名，用于筛选线程列表。</p>
                     * @return User <p>线程的操作账号名，用于筛选线程列表。</p>
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置<p>线程的操作账号名，用于筛选线程列表。</p>
                     * @param _user <p>线程的操作账号名，用于筛选线程列表。</p>
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
                     * 获取<p>线程的操作主机地址，用于筛选线程列表。</p>
                     * @return Host <p>线程的操作主机地址，用于筛选线程列表。</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>线程的操作主机地址，用于筛选线程列表。</p>
                     * @param _host <p>线程的操作主机地址，用于筛选线程列表。</p>
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
                     * 获取<p>线程的操作数据库，用于筛选线程列表。</p>
                     * @return DB <p>线程的操作数据库，用于筛选线程列表。</p>
                     * 
                     */
                    std::string GetDB() const;

                    /**
                     * 设置<p>线程的操作数据库，用于筛选线程列表。</p>
                     * @param _dB <p>线程的操作数据库，用于筛选线程列表。</p>
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
                     * 获取<p>线程的操作状态。包含以下枚举值：Sending data​-线程正在处理查询结果， ​Sorting result​-线程正在对查询结果进行排序​，Creating tmp table​-线程正在创建临时表，Altering table​-线程正在执行表结构变更，Updating-线程执行更新中。</p>
                     * @return State <p>线程的操作状态。包含以下枚举值：Sending data​-线程正在处理查询结果， ​Sorting result​-线程正在对查询结果进行排序​，Creating tmp table​-线程正在创建临时表，Altering table​-线程正在执行表结构变更，Updating-线程执行更新中。</p>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>线程的操作状态。包含以下枚举值：Sending data​-线程正在处理查询结果， ​Sorting result​-线程正在对查询结果进行排序​，Creating tmp table​-线程正在创建临时表，Altering table​-线程正在执行表结构变更，Updating-线程执行更新中。</p>
                     * @param _state <p>线程的操作状态。包含以下枚举值：Sending data​-线程正在处理查询结果， ​Sorting result​-线程正在对查询结果进行排序​，Creating tmp table​-线程正在创建临时表，Altering table​-线程正在执行表结构变更，Updating-线程执行更新中。</p>
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
                     * 获取<p>线程的执行类型。包含以下枚举值：Sleep-线程处于空闲状态，Query-线程正在执行一个查询，Connect-从服务器连接到主服务器，Execute-线程正在执行预处理语句。</p>
                     * @return Command <p>线程的执行类型。包含以下枚举值：Sleep-线程处于空闲状态，Query-线程正在执行一个查询，Connect-从服务器连接到主服务器，Execute-线程正在执行预处理语句。</p>
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置<p>线程的执行类型。包含以下枚举值：Sleep-线程处于空闲状态，Query-线程正在执行一个查询，Connect-从服务器连接到主服务器，Execute-线程正在执行预处理语句。</p>
                     * @param _command <p>线程的执行类型。包含以下枚举值：Sleep-线程处于空闲状态，Query-线程正在执行一个查询，Connect-从服务器连接到主服务器，Execute-线程正在执行预处理语句。</p>
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
                     * 获取<p>线程的操作时长最小值，单位秒，用于筛选操作时长大于该值的线程列表。</p>
                     * @return Time <p>线程的操作时长最小值，单位秒，用于筛选操作时长大于该值的线程列表。</p>
                     * 
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置<p>线程的操作时长最小值，单位秒，用于筛选操作时长大于该值的线程列表。</p>
                     * @param _time <p>线程的操作时长最小值，单位秒，用于筛选操作时长大于该值的线程列表。</p>
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
                     * 获取<p>线程的操作语句，用于筛选线程列表。</p>
                     * @return Info <p>线程的操作语句，用于筛选线程列表。</p>
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置<p>线程的操作语句，用于筛选线程列表。</p>
                     * @param _info <p>线程的操作语句，用于筛选线程列表。</p>
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
                     * 获取<p>返回数量，默认20。</p>
                     * @return Limit <p>返回数量，默认20。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认20。</p>
                     * @param _limit <p>返回数量，默认20。</p>
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
                     * 获取<p>服务产品类型，支持值：&quot;mysql&quot; - 云数据库 MySQL；&quot;mariadb&quot;-mariadb;&quot;cynosdb&quot;-TDSQL-C for MySQL ;&quot;dcdb&quot;-TDSQL MySQL 默认为&quot;mysql&quot;。</p>
                     * @return Product <p>服务产品类型，支持值：&quot;mysql&quot; - 云数据库 MySQL；&quot;mariadb&quot;-mariadb;&quot;cynosdb&quot;-TDSQL-C for MySQL ;&quot;dcdb&quot;-TDSQL MySQL 默认为&quot;mysql&quot;。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>服务产品类型，支持值：&quot;mysql&quot; - 云数据库 MySQL；&quot;mariadb&quot;-mariadb;&quot;cynosdb&quot;-TDSQL-C for MySQL ;&quot;dcdb&quot;-TDSQL MySQL 默认为&quot;mysql&quot;。</p>
                     * @param _product <p>服务产品类型，支持值：&quot;mysql&quot; - 云数据库 MySQL；&quot;mariadb&quot;-mariadb;&quot;cynosdb&quot;-TDSQL-C for MySQL ;&quot;dcdb&quot;-TDSQL MySQL 默认为&quot;mysql&quot;。</p>
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
                     * 获取<p>会话统计的维度信息,可以多个维度。</p>
                     * @return StatDimensions <p>会话统计的维度信息,可以多个维度。</p>
                     * 
                     */
                    std::vector<StatDimension> GetStatDimensions() const;

                    /**
                     * 设置<p>会话统计的维度信息,可以多个维度。</p>
                     * @param _statDimensions <p>会话统计的维度信息,可以多个维度。</p>
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
                     * <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。<strong>其中 dcdb(即TDSQL MySQL) 的查询入参InstanceId特殊，需要使用 ClusterId + &amp; + InstanceId 来组合代替， 如：<code>tdsqlshard-s1230&amp;shard-abcd</code></strong></p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>线程的ID，用于筛选线程列表。</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>线程的操作账号名，用于筛选线程列表。</p>
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * <p>线程的操作主机地址，用于筛选线程列表。</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>线程的操作数据库，用于筛选线程列表。</p>
                     */
                    std::string m_dB;
                    bool m_dBHasBeenSet;

                    /**
                     * <p>线程的操作状态。包含以下枚举值：Sending data​-线程正在处理查询结果， ​Sorting result​-线程正在对查询结果进行排序​，Creating tmp table​-线程正在创建临时表，Altering table​-线程正在执行表结构变更，Updating-线程执行更新中。</p>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>线程的执行类型。包含以下枚举值：Sleep-线程处于空闲状态，Query-线程正在执行一个查询，Connect-从服务器连接到主服务器，Execute-线程正在执行预处理语句。</p>
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * <p>线程的操作时长最小值，单位秒，用于筛选操作时长大于该值的线程列表。</p>
                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * <p>线程的操作语句，用于筛选线程列表。</p>
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * <p>返回数量，默认20。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>服务产品类型，支持值：&quot;mysql&quot; - 云数据库 MySQL；&quot;mariadb&quot;-mariadb;&quot;cynosdb&quot;-TDSQL-C for MySQL ;&quot;dcdb&quot;-TDSQL MySQL 默认为&quot;mysql&quot;。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>会话统计的维度信息,可以多个维度。</p>
                     */
                    std::vector<StatDimension> m_statDimensions;
                    bool m_statDimensionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEMYSQLPROCESSLISTREQUEST_H_
