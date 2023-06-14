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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELETEPUBLISHSUBSCRIBEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELETEPUBLISHSUBSCRIBEREQUEST_H_

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
                * DeletePublishSubscribe请求参数结构体
                */
                class DeletePublishSubscribeRequest : public AbstractModel
                {
                public:
                    DeletePublishSubscribeRequest();
                    ~DeletePublishSubscribeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取发布订阅ID，可通过DescribePublishSubscribe接口获得
                     * @return PublishSubscribeId 发布订阅ID，可通过DescribePublishSubscribe接口获得
                     * 
                     */
                    uint64_t GetPublishSubscribeId() const;

                    /**
                     * 设置发布订阅ID，可通过DescribePublishSubscribe接口获得
                     * @param _publishSubscribeId 发布订阅ID，可通过DescribePublishSubscribe接口获得
                     * 
                     */
                    void SetPublishSubscribeId(const uint64_t& _publishSubscribeId);

                    /**
                     * 判断参数 PublishSubscribeId 是否已赋值
                     * @return PublishSubscribeId 是否已赋值
                     * 
                     */
                    bool PublishSubscribeIdHasBeenSet() const;

                    /**
                     * 获取待删除的数据库的订阅发布关系集合
                     * @return DatabaseTupleSet 待删除的数据库的订阅发布关系集合
                     * 
                     */
                    std::vector<DatabaseTuple> GetDatabaseTupleSet() const;

                    /**
                     * 设置待删除的数据库的订阅发布关系集合
                     * @param _databaseTupleSet 待删除的数据库的订阅发布关系集合
                     * 
                     */
                    void SetDatabaseTupleSet(const std::vector<DatabaseTuple>& _databaseTupleSet);

                    /**
                     * 判断参数 DatabaseTupleSet 是否已赋值
                     * @return DatabaseTupleSet 是否已赋值
                     * 
                     */
                    bool DatabaseTupleSetHasBeenSet() const;

                private:

                    /**
                     * 发布订阅ID，可通过DescribePublishSubscribe接口获得
                     */
                    uint64_t m_publishSubscribeId;
                    bool m_publishSubscribeIdHasBeenSet;

                    /**
                     * 待删除的数据库的订阅发布关系集合
                     */
                    std::vector<DatabaseTuple> m_databaseTupleSet;
                    bool m_databaseTupleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELETEPUBLISHSUBSCRIBEREQUEST_H_
