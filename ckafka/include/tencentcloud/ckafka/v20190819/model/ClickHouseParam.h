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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CLICKHOUSEPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CLICKHOUSEPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/ClickHouseSchema.h>
#include <tencentcloud/ckafka/v20190819/model/DropCls.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * ClickHouse类型入参
                */
                class ClickHouseParam : public AbstractModel
                {
                public:
                    ClickHouseParam();
                    ~ClickHouseParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ClickHouse的集群
                     * @return Cluster ClickHouse的集群
                     * 
                     */
                    std::string GetCluster() const;

                    /**
                     * 设置ClickHouse的集群
                     * @param _cluster ClickHouse的集群
                     * 
                     */
                    void SetCluster(const std::string& _cluster);

                    /**
                     * 判断参数 Cluster 是否已赋值
                     * @return Cluster 是否已赋值
                     * 
                     */
                    bool ClusterHasBeenSet() const;

                    /**
                     * 获取ClickHouse的数据库名
                     * @return Database ClickHouse的数据库名
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置ClickHouse的数据库名
                     * @param _database ClickHouse的数据库名
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取ClickHouse的数据表名
                     * @return Table ClickHouse的数据表名
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置ClickHouse的数据表名
                     * @param _table ClickHouse的数据表名
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
                     * 获取ClickHouse的schema
                     * @return Schema ClickHouse的schema
                     * 
                     */
                    std::vector<ClickHouseSchema> GetSchema() const;

                    /**
                     * 设置ClickHouse的schema
                     * @param _schema ClickHouse的schema
                     * 
                     */
                    void SetSchema(const std::vector<ClickHouseSchema>& _schema);

                    /**
                     * 判断参数 Schema 是否已赋值
                     * @return Schema 是否已赋值
                     * 
                     */
                    bool SchemaHasBeenSet() const;

                    /**
                     * 获取实例资源
                     * @return Resource 实例资源
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置实例资源
                     * @param _resource 实例资源
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取ClickHouse的连接ip
                     * @return Ip ClickHouse的连接ip
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置ClickHouse的连接ip
                     * @param _ip ClickHouse的连接ip
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取ClickHouse的连接port
                     * @return Port ClickHouse的连接port
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置ClickHouse的连接port
                     * @param _port ClickHouse的连接port
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取ClickHouse的用户名
                     * @return UserName ClickHouse的用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置ClickHouse的用户名
                     * @param _userName ClickHouse的用户名
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
                     * 获取ClickHouse的密码
                     * @return Password ClickHouse的密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置ClickHouse的密码
                     * @param _password ClickHouse的密码
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
                     * 获取实例vip
                     * @return ServiceVip 实例vip
                     * 
                     */
                    std::string GetServiceVip() const;

                    /**
                     * 设置实例vip
                     * @param _serviceVip 实例vip
                     * 
                     */
                    void SetServiceVip(const std::string& _serviceVip);

                    /**
                     * 判断参数 ServiceVip 是否已赋值
                     * @return ServiceVip 是否已赋值
                     * 
                     */
                    bool ServiceVipHasBeenSet() const;

                    /**
                     * 获取实例的vpcId
                     * @return UniqVpcId 实例的vpcId
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置实例的vpcId
                     * @param _uniqVpcId 实例的vpcId
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取是否为自建集群
                     * @return SelfBuilt 是否为自建集群
                     * 
                     */
                    bool GetSelfBuilt() const;

                    /**
                     * 设置是否为自建集群
                     * @param _selfBuilt 是否为自建集群
                     * 
                     */
                    void SetSelfBuilt(const bool& _selfBuilt);

                    /**
                     * 判断参数 SelfBuilt 是否已赋值
                     * @return SelfBuilt 是否已赋值
                     * 
                     */
                    bool SelfBuiltHasBeenSet() const;

                    /**
                     * 获取ClickHouse是否抛弃解析失败的消息，默认为true
                     * @return DropInvalidMessage ClickHouse是否抛弃解析失败的消息，默认为true
                     * 
                     */
                    bool GetDropInvalidMessage() const;

                    /**
                     * 设置ClickHouse是否抛弃解析失败的消息，默认为true
                     * @param _dropInvalidMessage ClickHouse是否抛弃解析失败的消息，默认为true
                     * 
                     */
                    void SetDropInvalidMessage(const bool& _dropInvalidMessage);

                    /**
                     * 判断参数 DropInvalidMessage 是否已赋值
                     * @return DropInvalidMessage 是否已赋值
                     * 
                     */
                    bool DropInvalidMessageHasBeenSet() const;

                    /**
                     * 获取ClickHouse 类型，emr-clickhouse : "emr";cdw-clickhouse : "cdwch";自建 : ""
                     * @return Type ClickHouse 类型，emr-clickhouse : "emr";cdw-clickhouse : "cdwch";自建 : ""
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置ClickHouse 类型，emr-clickhouse : "emr";cdw-clickhouse : "cdwch";自建 : ""
                     * @param _type ClickHouse 类型，emr-clickhouse : "emr";cdw-clickhouse : "cdwch";自建 : ""
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取当设置成员参数DropInvalidMessageToCls设置为true时,DropInvalidMessage参数失效
                     * @return DropCls 当设置成员参数DropInvalidMessageToCls设置为true时,DropInvalidMessage参数失效
                     * 
                     */
                    DropCls GetDropCls() const;

                    /**
                     * 设置当设置成员参数DropInvalidMessageToCls设置为true时,DropInvalidMessage参数失效
                     * @param _dropCls 当设置成员参数DropInvalidMessageToCls设置为true时,DropInvalidMessage参数失效
                     * 
                     */
                    void SetDropCls(const DropCls& _dropCls);

                    /**
                     * 判断参数 DropCls 是否已赋值
                     * @return DropCls 是否已赋值
                     * 
                     */
                    bool DropClsHasBeenSet() const;

                    /**
                     * 获取每批次投递到 ClickHouse 表消息数量，默认为 1000 条。
提高该参数值，有利于减少往  ClickHouse 投递的次数，但在错误消息过多及网络不稳定等极端情况下时，可能导致频繁重试影响效率。
                     * @return BatchSize 每批次投递到 ClickHouse 表消息数量，默认为 1000 条。
提高该参数值，有利于减少往  ClickHouse 投递的次数，但在错误消息过多及网络不稳定等极端情况下时，可能导致频繁重试影响效率。
                     * 
                     */
                    int64_t GetBatchSize() const;

                    /**
                     * 设置每批次投递到 ClickHouse 表消息数量，默认为 1000 条。
提高该参数值，有利于减少往  ClickHouse 投递的次数，但在错误消息过多及网络不稳定等极端情况下时，可能导致频繁重试影响效率。
                     * @param _batchSize 每批次投递到 ClickHouse 表消息数量，默认为 1000 条。
提高该参数值，有利于减少往  ClickHouse 投递的次数，但在错误消息过多及网络不稳定等极端情况下时，可能导致频繁重试影响效率。
                     * 
                     */
                    void SetBatchSize(const int64_t& _batchSize);

                    /**
                     * 判断参数 BatchSize 是否已赋值
                     * @return BatchSize 是否已赋值
                     * 
                     */
                    bool BatchSizeHasBeenSet() const;

                    /**
                     * 获取每次从 topic 中拉取消息大小，默认为 1MB，即至少要从 topic 中批量拉取 1MB 消息，才进行数据投递到 ClickHouse 操作。
提高该参数值，有利于减少往  ClickHouse 投递的次数，但在错误消息过多及网络不稳定等极端情况下时，可能导致频繁重试影响效率。
                     * @return ConsumerFetchMinBytes 每次从 topic 中拉取消息大小，默认为 1MB，即至少要从 topic 中批量拉取 1MB 消息，才进行数据投递到 ClickHouse 操作。
提高该参数值，有利于减少往  ClickHouse 投递的次数，但在错误消息过多及网络不稳定等极端情况下时，可能导致频繁重试影响效率。
                     * 
                     */
                    int64_t GetConsumerFetchMinBytes() const;

                    /**
                     * 设置每次从 topic 中拉取消息大小，默认为 1MB，即至少要从 topic 中批量拉取 1MB 消息，才进行数据投递到 ClickHouse 操作。
提高该参数值，有利于减少往  ClickHouse 投递的次数，但在错误消息过多及网络不稳定等极端情况下时，可能导致频繁重试影响效率。
                     * @param _consumerFetchMinBytes 每次从 topic 中拉取消息大小，默认为 1MB，即至少要从 topic 中批量拉取 1MB 消息，才进行数据投递到 ClickHouse 操作。
提高该参数值，有利于减少往  ClickHouse 投递的次数，但在错误消息过多及网络不稳定等极端情况下时，可能导致频繁重试影响效率。
                     * 
                     */
                    void SetConsumerFetchMinBytes(const int64_t& _consumerFetchMinBytes);

                    /**
                     * 判断参数 ConsumerFetchMinBytes 是否已赋值
                     * @return ConsumerFetchMinBytes 是否已赋值
                     * 
                     */
                    bool ConsumerFetchMinBytesHasBeenSet() const;

                    /**
                     * 获取每次从 topic 拉取消息最大等待时间，当超过当前最大等待时间时，即使没有拉取到 ConsumerFetchMinBytes 大小，也将进行 ClickHouse 投递操作。
提高该参数值，有利于减少往  ClickHouse 投递的次数，但在错误消息过多及网络不稳定等极端情况下时，可能导致频繁重试影响效率。
                     * @return ConsumerFetchMaxWaitMs 每次从 topic 拉取消息最大等待时间，当超过当前最大等待时间时，即使没有拉取到 ConsumerFetchMinBytes 大小，也将进行 ClickHouse 投递操作。
提高该参数值，有利于减少往  ClickHouse 投递的次数，但在错误消息过多及网络不稳定等极端情况下时，可能导致频繁重试影响效率。
                     * 
                     */
                    int64_t GetConsumerFetchMaxWaitMs() const;

                    /**
                     * 设置每次从 topic 拉取消息最大等待时间，当超过当前最大等待时间时，即使没有拉取到 ConsumerFetchMinBytes 大小，也将进行 ClickHouse 投递操作。
提高该参数值，有利于减少往  ClickHouse 投递的次数，但在错误消息过多及网络不稳定等极端情况下时，可能导致频繁重试影响效率。
                     * @param _consumerFetchMaxWaitMs 每次从 topic 拉取消息最大等待时间，当超过当前最大等待时间时，即使没有拉取到 ConsumerFetchMinBytes 大小，也将进行 ClickHouse 投递操作。
提高该参数值，有利于减少往  ClickHouse 投递的次数，但在错误消息过多及网络不稳定等极端情况下时，可能导致频繁重试影响效率。
                     * 
                     */
                    void SetConsumerFetchMaxWaitMs(const int64_t& _consumerFetchMaxWaitMs);

                    /**
                     * 判断参数 ConsumerFetchMaxWaitMs 是否已赋值
                     * @return ConsumerFetchMaxWaitMs 是否已赋值
                     * 
                     */
                    bool ConsumerFetchMaxWaitMsHasBeenSet() const;

                private:

                    /**
                     * ClickHouse的集群
                     */
                    std::string m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * ClickHouse的数据库名
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * ClickHouse的数据表名
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * ClickHouse的schema
                     */
                    std::vector<ClickHouseSchema> m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * 实例资源
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * ClickHouse的连接ip
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * ClickHouse的连接port
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * ClickHouse的用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * ClickHouse的密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 实例vip
                     */
                    std::string m_serviceVip;
                    bool m_serviceVipHasBeenSet;

                    /**
                     * 实例的vpcId
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 是否为自建集群
                     */
                    bool m_selfBuilt;
                    bool m_selfBuiltHasBeenSet;

                    /**
                     * ClickHouse是否抛弃解析失败的消息，默认为true
                     */
                    bool m_dropInvalidMessage;
                    bool m_dropInvalidMessageHasBeenSet;

                    /**
                     * ClickHouse 类型，emr-clickhouse : "emr";cdw-clickhouse : "cdwch";自建 : ""
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 当设置成员参数DropInvalidMessageToCls设置为true时,DropInvalidMessage参数失效
                     */
                    DropCls m_dropCls;
                    bool m_dropClsHasBeenSet;

                    /**
                     * 每批次投递到 ClickHouse 表消息数量，默认为 1000 条。
提高该参数值，有利于减少往  ClickHouse 投递的次数，但在错误消息过多及网络不稳定等极端情况下时，可能导致频繁重试影响效率。
                     */
                    int64_t m_batchSize;
                    bool m_batchSizeHasBeenSet;

                    /**
                     * 每次从 topic 中拉取消息大小，默认为 1MB，即至少要从 topic 中批量拉取 1MB 消息，才进行数据投递到 ClickHouse 操作。
提高该参数值，有利于减少往  ClickHouse 投递的次数，但在错误消息过多及网络不稳定等极端情况下时，可能导致频繁重试影响效率。
                     */
                    int64_t m_consumerFetchMinBytes;
                    bool m_consumerFetchMinBytesHasBeenSet;

                    /**
                     * 每次从 topic 拉取消息最大等待时间，当超过当前最大等待时间时，即使没有拉取到 ConsumerFetchMinBytes 大小，也将进行 ClickHouse 投递操作。
提高该参数值，有利于减少往  ClickHouse 投递的次数，但在错误消息过多及网络不稳定等极端情况下时，可能导致频繁重试影响效率。
                     */
                    int64_t m_consumerFetchMaxWaitMs;
                    bool m_consumerFetchMaxWaitMsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CLICKHOUSEPARAM_H_
