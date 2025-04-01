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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESLOWLOGQUERYTIMESTATSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESLOWLOGQUERYTIMESTATSREQUEST_H_

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
                * DescribeSlowLogQueryTimeStats请求参数结构体
                */
                class DescribeSlowLogQueryTimeStatsRequest : public AbstractModel
                {
                public:
                    DescribeSlowLogQueryTimeStatsRequest();
                    ~DescribeSlowLogQueryTimeStatsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID 。
                     * @return InstanceId 实例 ID 。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID 。
                     * @param _instanceId 实例 ID 。
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
                     * 获取开始时间，如“2019-09-10 12:13:14”。
                     * @return StartTime 开始时间，如“2019-09-10 12:13:14”。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，如“2019-09-10 12:13:14”。
                     * @param _startTime 开始时间，如“2019-09-10 12:13:14”。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。
                     * @return EndTime 截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。
                     * @param _endTime 截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取"mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，"redis" - 云数据库 Redis，"mongodb" - 云数据库 MongoDB，默认为"mysql"。
                     * @return Product "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，"redis" - 云数据库 Redis，"mongodb" - 云数据库 MongoDB，默认为"mysql"。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置"mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，"redis" - 云数据库 Redis，"mongodb" - 云数据库 MongoDB，默认为"mysql"。
                     * @param _product "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，"redis" - 云数据库 Redis，"mongodb" - 云数据库 MongoDB，默认为"mysql"。
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
                     * 获取Proxy节点ID。
                     * @return InstanceProxyId Proxy节点ID。
                     * 
                     */
                    std::string GetInstanceProxyId() const;

                    /**
                     * 设置Proxy节点ID。
                     * @param _instanceProxyId Proxy节点ID。
                     * 
                     */
                    void SetInstanceProxyId(const std::string& _instanceProxyId);

                    /**
                     * 判断参数 InstanceProxyId 是否已赋值
                     * @return InstanceProxyId 是否已赋值
                     * 
                     */
                    bool InstanceProxyIdHasBeenSet() const;

                    /**
                     * 获取实列节点ID。
                     * @return InstanceNodeId 实列节点ID。
                     * 
                     */
                    std::string GetInstanceNodeId() const;

                    /**
                     * 设置实列节点ID。
                     * @param _instanceNodeId 实列节点ID。
                     * 
                     */
                    void SetInstanceNodeId(const std::string& _instanceNodeId);

                    /**
                     * 判断参数 InstanceNodeId 是否已赋值
                     * @return InstanceNodeId 是否已赋值
                     * 
                     */
                    bool InstanceNodeIdHasBeenSet() const;

                    /**
                     * 获取查询类型，目前支持值：mongod，mongos。
                     * @return Type 查询类型，目前支持值：mongod，mongos。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置查询类型，目前支持值：mongod，mongos。
                     * @param _type 查询类型，目前支持值：mongod，mongos。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 实例 ID 。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 开始时间，如“2019-09-10 12:13:14”。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，"redis" - 云数据库 Redis，"mongodb" - 云数据库 MongoDB，默认为"mysql"。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Proxy节点ID。
                     */
                    std::string m_instanceProxyId;
                    bool m_instanceProxyIdHasBeenSet;

                    /**
                     * 实列节点ID。
                     */
                    std::string m_instanceNodeId;
                    bool m_instanceNodeIdHasBeenSet;

                    /**
                     * 查询类型，目前支持值：mongod，mongos。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESLOWLOGQUERYTIMESTATSREQUEST_H_
