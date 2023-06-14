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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEPUBLISHSUBSCRIBEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEPUBLISHSUBSCRIBEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/DatabaseTuple.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * CreatePublishSubscribe请求参数结构体
                */
                class CreatePublishSubscribeRequest : public AbstractModel
                {
                public:
                    CreatePublishSubscribeRequest();
                    ~CreatePublishSubscribeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取发布实例ID，形如mssql-j8kv137v
                     * @return PublishInstanceId 发布实例ID，形如mssql-j8kv137v
                     * 
                     */
                    std::string GetPublishInstanceId() const;

                    /**
                     * 设置发布实例ID，形如mssql-j8kv137v
                     * @param _publishInstanceId 发布实例ID，形如mssql-j8kv137v
                     * 
                     */
                    void SetPublishInstanceId(const std::string& _publishInstanceId);

                    /**
                     * 判断参数 PublishInstanceId 是否已赋值
                     * @return PublishInstanceId 是否已赋值
                     * 
                     */
                    bool PublishInstanceIdHasBeenSet() const;

                    /**
                     * 获取订阅实例ID，形如mssql-j8kv137v
                     * @return SubscribeInstanceId 订阅实例ID，形如mssql-j8kv137v
                     * 
                     */
                    std::string GetSubscribeInstanceId() const;

                    /**
                     * 设置订阅实例ID，形如mssql-j8kv137v
                     * @param _subscribeInstanceId 订阅实例ID，形如mssql-j8kv137v
                     * 
                     */
                    void SetSubscribeInstanceId(const std::string& _subscribeInstanceId);

                    /**
                     * 判断参数 SubscribeInstanceId 是否已赋值
                     * @return SubscribeInstanceId 是否已赋值
                     * 
                     */
                    bool SubscribeInstanceIdHasBeenSet() const;

                    /**
                     * 获取数据库的订阅发布关系集合
                     * @return DatabaseTupleSet 数据库的订阅发布关系集合
                     * 
                     */
                    std::vector<DatabaseTuple> GetDatabaseTupleSet() const;

                    /**
                     * 设置数据库的订阅发布关系集合
                     * @param _databaseTupleSet 数据库的订阅发布关系集合
                     * 
                     */
                    void SetDatabaseTupleSet(const std::vector<DatabaseTuple>& _databaseTupleSet);

                    /**
                     * 判断参数 DatabaseTupleSet 是否已赋值
                     * @return DatabaseTupleSet 是否已赋值
                     * 
                     */
                    bool DatabaseTupleSetHasBeenSet() const;

                    /**
                     * 获取发布订阅的名称，默认值为：default_name
                     * @return PublishSubscribeName 发布订阅的名称，默认值为：default_name
                     * 
                     */
                    std::string GetPublishSubscribeName() const;

                    /**
                     * 设置发布订阅的名称，默认值为：default_name
                     * @param _publishSubscribeName 发布订阅的名称，默认值为：default_name
                     * 
                     */
                    void SetPublishSubscribeName(const std::string& _publishSubscribeName);

                    /**
                     * 判断参数 PublishSubscribeName 是否已赋值
                     * @return PublishSubscribeName 是否已赋值
                     * 
                     */
                    bool PublishSubscribeNameHasBeenSet() const;

                private:

                    /**
                     * 发布实例ID，形如mssql-j8kv137v
                     */
                    std::string m_publishInstanceId;
                    bool m_publishInstanceIdHasBeenSet;

                    /**
                     * 订阅实例ID，形如mssql-j8kv137v
                     */
                    std::string m_subscribeInstanceId;
                    bool m_subscribeInstanceIdHasBeenSet;

                    /**
                     * 数据库的订阅发布关系集合
                     */
                    std::vector<DatabaseTuple> m_databaseTupleSet;
                    bool m_databaseTupleSetHasBeenSet;

                    /**
                     * 发布订阅的名称，默认值为：default_name
                     */
                    std::string m_publishSubscribeName;
                    bool m_publishSubscribeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEPUBLISHSUBSCRIBEREQUEST_H_
