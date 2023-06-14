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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DATABASETUPLE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DATABASETUPLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 该数据结构表示具有发布订阅关系的两个数据库。
                */
                class DatabaseTuple : public AbstractModel
                {
                public:
                    DatabaseTuple();
                    ~DatabaseTuple() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发布数据库名称
                     * @return PublishDatabase 发布数据库名称
                     * 
                     */
                    std::string GetPublishDatabase() const;

                    /**
                     * 设置发布数据库名称
                     * @param _publishDatabase 发布数据库名称
                     * 
                     */
                    void SetPublishDatabase(const std::string& _publishDatabase);

                    /**
                     * 判断参数 PublishDatabase 是否已赋值
                     * @return PublishDatabase 是否已赋值
                     * 
                     */
                    bool PublishDatabaseHasBeenSet() const;

                    /**
                     * 获取订阅数据库名称
                     * @return SubscribeDatabase 订阅数据库名称
                     * 
                     */
                    std::string GetSubscribeDatabase() const;

                    /**
                     * 设置订阅数据库名称
                     * @param _subscribeDatabase 订阅数据库名称
                     * 
                     */
                    void SetSubscribeDatabase(const std::string& _subscribeDatabase);

                    /**
                     * 判断参数 SubscribeDatabase 是否已赋值
                     * @return SubscribeDatabase 是否已赋值
                     * 
                     */
                    bool SubscribeDatabaseHasBeenSet() const;

                private:

                    /**
                     * 发布数据库名称
                     */
                    std::string m_publishDatabase;
                    bool m_publishDatabaseHasBeenSet;

                    /**
                     * 订阅数据库名称
                     */
                    std::string m_subscribeDatabase;
                    bool m_subscribeDatabaseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DATABASETUPLE_H_
