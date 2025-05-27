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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBSREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/Filter.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * DescribeJobs请求参数结构体
                */
                class DescribeJobsRequest : public AbstractModel
                {
                public:
                    DescribeJobsRequest();
                    ~DescribeJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取按照一个或者多个作业ID查询。作业ID形如：cql-11112222，每次请求的作业上限为100。参数不支持同时指定JobIds和Filters。
                     * @return JobIds 按照一个或者多个作业ID查询。作业ID形如：cql-11112222，每次请求的作业上限为100。参数不支持同时指定JobIds和Filters。
                     * 
                     */
                    std::vector<std::string> GetJobIds() const;

                    /**
                     * 设置按照一个或者多个作业ID查询。作业ID形如：cql-11112222，每次请求的作业上限为100。参数不支持同时指定JobIds和Filters。
                     * @param _jobIds 按照一个或者多个作业ID查询。作业ID形如：cql-11112222，每次请求的作业上限为100。参数不支持同时指定JobIds和Filters。
                     * 
                     */
                    void SetJobIds(const std::vector<std::string>& _jobIds);

                    /**
                     * 判断参数 JobIds 是否已赋值
                     * @return JobIds 是否已赋值
                     * 
                     */
                    bool JobIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件，支持的 Filter.Name 为：作业名 Name、作业状态 Status、所属集群 ClusterId、作业id JobId、集群名称 ClusterName。 每次请求的 Filters 个数的上限为 5，Filter.Values 的个数上限为 5。参数不支持同时指定 JobIds 和 Filters。
                     * @return Filters 过滤条件，支持的 Filter.Name 为：作业名 Name、作业状态 Status、所属集群 ClusterId、作业id JobId、集群名称 ClusterName。 每次请求的 Filters 个数的上限为 5，Filter.Values 的个数上限为 5。参数不支持同时指定 JobIds 和 Filters。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，支持的 Filter.Name 为：作业名 Name、作业状态 Status、所属集群 ClusterId、作业id JobId、集群名称 ClusterName。 每次请求的 Filters 个数的上限为 5，Filter.Values 的个数上限为 5。参数不支持同时指定 JobIds 和 Filters。
                     * @param _filters 过滤条件，支持的 Filter.Name 为：作业名 Name、作业状态 Status、所属集群 ClusterId、作业id JobId、集群名称 ClusterName。 每次请求的 Filters 个数的上限为 5，Filter.Values 的个数上限为 5。参数不支持同时指定 JobIds 和 Filters。
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
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
                     * 获取分页大小，默认为20，最大值为100
                     * @return Limit 分页大小，默认为20，最大值为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页大小，默认为20，最大值为100
                     * @param _limit 分页大小，默认为20，最大值为100
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
                     * 获取工作空间 SerialId
                     * @return WorkSpaceId 工作空间 SerialId
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置工作空间 SerialId
                     * @param _workSpaceId 工作空间 SerialId
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                    /**
                     * 获取查询额外的作业信息,例如 JobEventInfo	
                     * @return ExtraResult 查询额外的作业信息,例如 JobEventInfo	
                     * 
                     */
                    std::vector<std::string> GetExtraResult() const;

                    /**
                     * 设置查询额外的作业信息,例如 JobEventInfo	
                     * @param _extraResult 查询额外的作业信息,例如 JobEventInfo	
                     * 
                     */
                    void SetExtraResult(const std::vector<std::string>& _extraResult);

                    /**
                     * 判断参数 ExtraResult 是否已赋值
                     * @return ExtraResult 是否已赋值
                     * 
                     */
                    bool ExtraResultHasBeenSet() const;

                    /**
                     * 获取查询引用connector
                     * @return ConnectorOptions 查询引用connector
                     * 
                     */
                    std::string GetConnectorOptions() const;

                    /**
                     * 设置查询引用connector
                     * @param _connectorOptions 查询引用connector
                     * 
                     */
                    void SetConnectorOptions(const std::string& _connectorOptions);

                    /**
                     * 判断参数 ConnectorOptions 是否已赋值
                     * @return ConnectorOptions 是否已赋值
                     * 
                     */
                    bool ConnectorOptionsHasBeenSet() const;

                private:

                    /**
                     * 按照一个或者多个作业ID查询。作业ID形如：cql-11112222，每次请求的作业上限为100。参数不支持同时指定JobIds和Filters。
                     */
                    std::vector<std::string> m_jobIds;
                    bool m_jobIdsHasBeenSet;

                    /**
                     * 过滤条件，支持的 Filter.Name 为：作业名 Name、作业状态 Status、所属集群 ClusterId、作业id JobId、集群名称 ClusterName。 每次请求的 Filters 个数的上限为 5，Filter.Values 的个数上限为 5。参数不支持同时指定 JobIds 和 Filters。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页大小，默认为20，最大值为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 工作空间 SerialId
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * 查询额外的作业信息,例如 JobEventInfo	
                     */
                    std::vector<std::string> m_extraResult;
                    bool m_extraResultHasBeenSet;

                    /**
                     * 查询引用connector
                     */
                    std::string m_connectorOptions;
                    bool m_connectorOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBSREQUEST_H_
