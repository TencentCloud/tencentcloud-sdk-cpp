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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECLUSTERCONFIGSHISTORYREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECLUSTERCONFIGSHISTORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeClusterConfigsHistory请求参数结构体
                */
                class DescribeClusterConfigsHistoryRequest : public AbstractModel
                {
                public:
                    DescribeClusterConfigsHistoryRequest();
                    ~DescribeClusterConfigsHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id名称
                     * @return InstanceId 集群id名称
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群id名称
                     * @param _instanceId 集群id名称
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
                     * 获取分页参数，第一页为0，第二页为10
                     * @return Offset 分页参数，第一页为0，第二页为10
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页参数，第一页为0，第二页为10
                     * @param _offset 分页参数，第一页为0，第二页为10
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页参数，分页步长，默认为10
                     * @return Limit 分页参数，分页步长，默认为10
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页参数，分页步长，默认为10
                     * @param _limit 分页参数，分页步长，默认为10
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取配置修改历史的时间范围开始
                     * @return StartTime 配置修改历史的时间范围开始
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置配置修改历史的时间范围开始
                     * @param _startTime 配置修改历史的时间范围开始
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
                     * 获取配置修改历史的时间范围结束
                     * @return EndTime 配置修改历史的时间范围结束
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置配置修改历史的时间范围结束
                     * @param _endTime 配置修改历史的时间范围结束
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
                     * 获取需要查询的配置文件名称数组，如果为空则查询全部历史记录。目前支持的配置文件名称有：
apache_hdfs_broker.conf、be.conf、fe.conf、core-site.xml、hdfs-site.xml、odbcinst.ini
                     * @return ConfigFileNames 需要查询的配置文件名称数组，如果为空则查询全部历史记录。目前支持的配置文件名称有：
apache_hdfs_broker.conf、be.conf、fe.conf、core-site.xml、hdfs-site.xml、odbcinst.ini
                     * 
                     */
                    std::vector<std::string> GetConfigFileNames() const;

                    /**
                     * 设置需要查询的配置文件名称数组，如果为空则查询全部历史记录。目前支持的配置文件名称有：
apache_hdfs_broker.conf、be.conf、fe.conf、core-site.xml、hdfs-site.xml、odbcinst.ini
                     * @param _configFileNames 需要查询的配置文件名称数组，如果为空则查询全部历史记录。目前支持的配置文件名称有：
apache_hdfs_broker.conf、be.conf、fe.conf、core-site.xml、hdfs-site.xml、odbcinst.ini
                     * 
                     */
                    void SetConfigFileNames(const std::vector<std::string>& _configFileNames);

                    /**
                     * 判断参数 ConfigFileNames 是否已赋值
                     * @return ConfigFileNames 是否已赋值
                     * 
                     */
                    bool ConfigFileNamesHasBeenSet() const;

                    /**
                     * 获取需要查询的计算组列表
                     * @return ComputeGroupIds 需要查询的计算组列表
                     * 
                     */
                    std::vector<std::string> GetComputeGroupIds() const;

                    /**
                     * 设置需要查询的计算组列表
                     * @param _computeGroupIds 需要查询的计算组列表
                     * 
                     */
                    void SetComputeGroupIds(const std::vector<std::string>& _computeGroupIds);

                    /**
                     * 判断参数 ComputeGroupIds 是否已赋值
                     * @return ComputeGroupIds 是否已赋值
                     * 
                     */
                    bool ComputeGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 集群id名称
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 分页参数，第一页为0，第二页为10
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页参数，分页步长，默认为10
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 配置修改历史的时间范围开始
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 配置修改历史的时间范围结束
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 需要查询的配置文件名称数组，如果为空则查询全部历史记录。目前支持的配置文件名称有：
apache_hdfs_broker.conf、be.conf、fe.conf、core-site.xml、hdfs-site.xml、odbcinst.ini
                     */
                    std::vector<std::string> m_configFileNames;
                    bool m_configFileNamesHasBeenSet;

                    /**
                     * 需要查询的计算组列表
                     */
                    std::vector<std::string> m_computeGroupIds;
                    bool m_computeGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECLUSTERCONFIGSHISTORYREQUEST_H_
