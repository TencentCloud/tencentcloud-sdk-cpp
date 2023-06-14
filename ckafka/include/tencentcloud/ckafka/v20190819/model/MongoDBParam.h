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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MONGODBPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MONGODBPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * MongoDB类型入参
                */
                class MongoDBParam : public AbstractModel
                {
                public:
                    MongoDBParam();
                    ~MongoDBParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MongoDB的数据库名称
                     * @return Database MongoDB的数据库名称
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置MongoDB的数据库名称
                     * @param _database MongoDB的数据库名称
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
                     * 获取MongoDB的集群
                     * @return Collection MongoDB的集群
                     * 
                     */
                    std::string GetCollection() const;

                    /**
                     * 设置MongoDB的集群
                     * @param _collection MongoDB的集群
                     * 
                     */
                    void SetCollection(const std::string& _collection);

                    /**
                     * 判断参数 Collection 是否已赋值
                     * @return Collection 是否已赋值
                     * 
                     */
                    bool CollectionHasBeenSet() const;

                    /**
                     * 获取是否复制存量数据，默认传参true
                     * @return CopyExisting 是否复制存量数据，默认传参true
                     * 
                     */
                    bool GetCopyExisting() const;

                    /**
                     * 设置是否复制存量数据，默认传参true
                     * @param _copyExisting 是否复制存量数据，默认传参true
                     * 
                     */
                    void SetCopyExisting(const bool& _copyExisting);

                    /**
                     * 判断参数 CopyExisting 是否已赋值
                     * @return CopyExisting 是否已赋值
                     * 
                     */
                    bool CopyExistingHasBeenSet() const;

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
                     * 获取MongoDB的连接ip
                     * @return Ip MongoDB的连接ip
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置MongoDB的连接ip
                     * @param _ip MongoDB的连接ip
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
                     * 获取MongoDB的连接port
                     * @return Port MongoDB的连接port
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置MongoDB的连接port
                     * @param _port MongoDB的连接port
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
                     * 获取MongoDB数据库用户名
                     * @return UserName MongoDB数据库用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置MongoDB数据库用户名
                     * @param _userName MongoDB数据库用户名
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
                     * 获取MongoDB数据库密码
                     * @return Password MongoDB数据库密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置MongoDB数据库密码
                     * @param _password MongoDB数据库密码
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
                     * 获取监听事件类型，为空时表示全选。取值包括insert,update,replace,delete,invalidate,drop,dropdatabase,rename，多个类型间使用,逗号分隔
                     * @return ListeningEvent 监听事件类型，为空时表示全选。取值包括insert,update,replace,delete,invalidate,drop,dropdatabase,rename，多个类型间使用,逗号分隔
                     * 
                     */
                    std::string GetListeningEvent() const;

                    /**
                     * 设置监听事件类型，为空时表示全选。取值包括insert,update,replace,delete,invalidate,drop,dropdatabase,rename，多个类型间使用,逗号分隔
                     * @param _listeningEvent 监听事件类型，为空时表示全选。取值包括insert,update,replace,delete,invalidate,drop,dropdatabase,rename，多个类型间使用,逗号分隔
                     * 
                     */
                    void SetListeningEvent(const std::string& _listeningEvent);

                    /**
                     * 判断参数 ListeningEvent 是否已赋值
                     * @return ListeningEvent 是否已赋值
                     * 
                     */
                    bool ListeningEventHasBeenSet() const;

                    /**
                     * 获取主从优先级，默认主节点
                     * @return ReadPreference 主从优先级，默认主节点
                     * 
                     */
                    std::string GetReadPreference() const;

                    /**
                     * 设置主从优先级，默认主节点
                     * @param _readPreference 主从优先级，默认主节点
                     * 
                     */
                    void SetReadPreference(const std::string& _readPreference);

                    /**
                     * 判断参数 ReadPreference 是否已赋值
                     * @return ReadPreference 是否已赋值
                     * 
                     */
                    bool ReadPreferenceHasBeenSet() const;

                    /**
                     * 获取聚合管道
                     * @return Pipeline 聚合管道
                     * 
                     */
                    std::string GetPipeline() const;

                    /**
                     * 设置聚合管道
                     * @param _pipeline 聚合管道
                     * 
                     */
                    void SetPipeline(const std::string& _pipeline);

                    /**
                     * 判断参数 Pipeline 是否已赋值
                     * @return Pipeline 是否已赋值
                     * 
                     */
                    bool PipelineHasBeenSet() const;

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

                private:

                    /**
                     * MongoDB的数据库名称
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * MongoDB的集群
                     */
                    std::string m_collection;
                    bool m_collectionHasBeenSet;

                    /**
                     * 是否复制存量数据，默认传参true
                     */
                    bool m_copyExisting;
                    bool m_copyExistingHasBeenSet;

                    /**
                     * 实例资源
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * MongoDB的连接ip
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * MongoDB的连接port
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * MongoDB数据库用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * MongoDB数据库密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 监听事件类型，为空时表示全选。取值包括insert,update,replace,delete,invalidate,drop,dropdatabase,rename，多个类型间使用,逗号分隔
                     */
                    std::string m_listeningEvent;
                    bool m_listeningEventHasBeenSet;

                    /**
                     * 主从优先级，默认主节点
                     */
                    std::string m_readPreference;
                    bool m_readPreferenceHasBeenSet;

                    /**
                     * 聚合管道
                     */
                    std::string m_pipeline;
                    bool m_pipelineHasBeenSet;

                    /**
                     * 是否为自建集群
                     */
                    bool m_selfBuilt;
                    bool m_selfBuiltHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MONGODBPARAM_H_
