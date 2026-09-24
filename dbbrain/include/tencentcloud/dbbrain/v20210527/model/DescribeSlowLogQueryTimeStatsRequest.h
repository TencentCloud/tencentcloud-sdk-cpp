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
                     * 获取<p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。</p>
                     * @return InstanceId <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。</p>
                     * @param _instanceId <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。</p>
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
                     * 获取<p>开始时间，如“2019-09-10 12:13:14”，截止时间与开始时间的间隔小于7天。</p>
                     * @return StartTime <p>开始时间，如“2019-09-10 12:13:14”，截止时间与开始时间的间隔小于7天。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间，如“2019-09-10 12:13:14”，截止时间与开始时间的间隔小于7天。</p>
                     * @param _startTime <p>开始时间，如“2019-09-10 12:13:14”，截止时间与开始时间的间隔小于7天。</p>
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
                     * 获取<p>截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。</p>
                     * @return EndTime <p>截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。</p>
                     * @param _endTime <p>截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。</p>
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
                     * 获取<p>&quot;mysql&quot; - 云数据库 MySQL， &quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;redis&quot; - 云数据库 Redis，&quot;mongodb&quot; - 云数据库 MongoDB，&quot;sqlserver&quot; - 云数据库 SQL Server，默认为&quot;mysql&quot;。</p>
                     * @return Product <p>&quot;mysql&quot; - 云数据库 MySQL， &quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;redis&quot; - 云数据库 Redis，&quot;mongodb&quot; - 云数据库 MongoDB，&quot;sqlserver&quot; - 云数据库 SQL Server，默认为&quot;mysql&quot;。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>&quot;mysql&quot; - 云数据库 MySQL， &quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;redis&quot; - 云数据库 Redis，&quot;mongodb&quot; - 云数据库 MongoDB，&quot;sqlserver&quot; - 云数据库 SQL Server，默认为&quot;mysql&quot;。</p>
                     * @param _product <p>&quot;mysql&quot; - 云数据库 MySQL， &quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;redis&quot; - 云数据库 Redis，&quot;mongodb&quot; - 云数据库 MongoDB，&quot;sqlserver&quot; - 云数据库 SQL Server，默认为&quot;mysql&quot;。</p>
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
                     * 获取<p>Proxy节点ID。</p>
                     * @return InstanceProxyId <p>Proxy节点ID。</p>
                     * 
                     */
                    std::string GetInstanceProxyId() const;

                    /**
                     * 设置<p>Proxy节点ID。</p>
                     * @param _instanceProxyId <p>Proxy节点ID。</p>
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
                     * 获取<p>实例节点ID。</p>
                     * @return InstanceNodeId <p>实例节点ID。</p>
                     * 
                     */
                    std::string GetInstanceNodeId() const;

                    /**
                     * 设置<p>实例节点ID。</p>
                     * @param _instanceNodeId <p>实例节点ID。</p>
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
                     * 获取<p>查询类型，目前支持值：mongod，mongos。<br>其中：<br>mongod - MongoDB的数据存储节点<br>mongos - MongoDB的路由节点</p>
                     * @return Type <p>查询类型，目前支持值：mongod，mongos。<br>其中：<br>mongod - MongoDB的数据存储节点<br>mongos - MongoDB的路由节点</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>查询类型，目前支持值：mongod，mongos。<br>其中：<br>mongod - MongoDB的数据存储节点<br>mongos - MongoDB的路由节点</p>
                     * @param _type <p>查询类型，目前支持值：mongod，mongos。<br>其中：<br>mongod - MongoDB的数据存储节点<br>mongos - MongoDB的路由节点</p>
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
                     * <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>开始时间，如“2019-09-10 12:13:14”，截止时间与开始时间的间隔小于7天。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>&quot;mysql&quot; - 云数据库 MySQL， &quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;redis&quot; - 云数据库 Redis，&quot;mongodb&quot; - 云数据库 MongoDB，&quot;sqlserver&quot; - 云数据库 SQL Server，默认为&quot;mysql&quot;。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>Proxy节点ID。</p>
                     */
                    std::string m_instanceProxyId;
                    bool m_instanceProxyIdHasBeenSet;

                    /**
                     * <p>实例节点ID。</p>
                     */
                    std::string m_instanceNodeId;
                    bool m_instanceNodeIdHasBeenSet;

                    /**
                     * <p>查询类型，目前支持值：mongod，mongos。<br>其中：<br>mongod - MongoDB的数据存储节点<br>mongos - MongoDB的路由节点</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESLOWLOGQUERYTIMESTATSREQUEST_H_
