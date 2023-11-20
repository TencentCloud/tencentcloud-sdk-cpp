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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYPUBLISHSUBSCRIBEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYPUBLISHSUBSCRIBEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDataBaseTuple.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyPublishSubscribe请求参数结构体
                */
                class ModifyPublishSubscribeRequest : public AbstractModel
                {
                public:
                    ModifyPublishSubscribeRequest();
                    ~ModifyPublishSubscribeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，例如：mssql-dg32dcv
                     * @return InstanceId 实例ID，例如：mssql-dg32dcv
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，例如：mssql-dg32dcv
                     * @param _instanceId 实例ID，例如：mssql-dg32dcv
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
                     * 获取发布订阅ID
                     * @return PublishSubscribeId 发布订阅ID
                     * 
                     */
                    int64_t GetPublishSubscribeId() const;

                    /**
                     * 设置发布订阅ID
                     * @param _publishSubscribeId 发布订阅ID
                     * 
                     */
                    void SetPublishSubscribeId(const int64_t& _publishSubscribeId);

                    /**
                     * 判断参数 PublishSubscribeId 是否已赋值
                     * @return PublishSubscribeId 是否已赋值
                     * 
                     */
                    bool PublishSubscribeIdHasBeenSet() const;

                    /**
                     * 获取修改的数据库订阅发布关系集合
                     * @return DatabaseTupleSet 修改的数据库订阅发布关系集合
                     * 
                     */
                    std::vector<ModifyDataBaseTuple> GetDatabaseTupleSet() const;

                    /**
                     * 设置修改的数据库订阅发布关系集合
                     * @param _databaseTupleSet 修改的数据库订阅发布关系集合
                     * 
                     */
                    void SetDatabaseTupleSet(const std::vector<ModifyDataBaseTuple>& _databaseTupleSet);

                    /**
                     * 判断参数 DatabaseTupleSet 是否已赋值
                     * @return DatabaseTupleSet 是否已赋值
                     * 
                     */
                    bool DatabaseTupleSetHasBeenSet() const;

                private:

                    /**
                     * 实例ID，例如：mssql-dg32dcv
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 发布订阅ID
                     */
                    int64_t m_publishSubscribeId;
                    bool m_publishSubscribeIdHasBeenSet;

                    /**
                     * 修改的数据库订阅发布关系集合
                     */
                    std::vector<ModifyDataBaseTuple> m_databaseTupleSet;
                    bool m_databaseTupleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYPUBLISHSUBSCRIBEREQUEST_H_
