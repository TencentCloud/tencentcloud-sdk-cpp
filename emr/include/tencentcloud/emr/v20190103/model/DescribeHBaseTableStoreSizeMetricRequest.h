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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHBASETABLESTORESIZEMETRICREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHBASETABLESTORESIZEMETRICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeHBaseTableStoreSizeMetric请求参数结构体
                */
                class DescribeHBaseTableStoreSizeMetricRequest : public AbstractModel
                {
                public:
                    DescribeHBaseTableStoreSizeMetricRequest();
                    ~DescribeHBaseTableStoreSizeMetricRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return InstanceId 集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID
                     * @param _instanceId 集群ID
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
                     * 获取Hbase表名
                     * @return TableName Hbase表名
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Hbase表名
                     * @param _tableName Hbase表名
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取Hbase的RegionServer服务
                     * @return RegionServer Hbase的RegionServer服务
                     * 
                     */
                    std::string GetRegionServer() const;

                    /**
                     * 设置Hbase的RegionServer服务
                     * @param _regionServer Hbase的RegionServer服务
                     * 
                     */
                    void SetRegionServer(const std::string& _regionServer);

                    /**
                     * 判断参数 RegionServer 是否已赋值
                     * @return RegionServer 是否已赋值
                     * 
                     */
                    bool RegionServerHasBeenSet() const;

                    /**
                     * 获取获取监控的数据粒度
                     * @return Downsample 获取监控的数据粒度
                     * 
                     */
                    std::string GetDownsample() const;

                    /**
                     * 设置获取监控的数据粒度
                     * @param _downsample 获取监控的数据粒度
                     * 
                     */
                    void SetDownsample(const std::string& _downsample);

                    /**
                     * 判断参数 Downsample 是否已赋值
                     * @return Downsample 是否已赋值
                     * 
                     */
                    bool DownsampleHasBeenSet() const;

                    /**
                     * 获取查询监控数据起始时间戳
                     * @return StartTime 查询监控数据起始时间戳
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置查询监控数据起始时间戳
                     * @param _startTime 查询监控数据起始时间戳
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询监控数据结束时间戳
                     * @return EndTime 查询监控数据结束时间戳
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置查询监控数据结束时间戳
                     * @param _endTime 查询监控数据结束时间戳
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Hbase表名
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Hbase的RegionServer服务
                     */
                    std::string m_regionServer;
                    bool m_regionServerHasBeenSet;

                    /**
                     * 获取监控的数据粒度
                     */
                    std::string m_downsample;
                    bool m_downsampleHasBeenSet;

                    /**
                     * 查询监控数据起始时间戳
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询监控数据结束时间戳
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHBASETABLESTORESIZEMETRICREQUEST_H_
