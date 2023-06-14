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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBCONFIGSREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBCONFIGSREQUEST_H_

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
                * DescribeJobConfigs请求参数结构体
                */
                class DescribeJobConfigsRequest : public AbstractModel
                {
                public:
                    DescribeJobConfigsRequest();
                    ~DescribeJobConfigsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作业Id
                     * @return JobId 作业Id
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业Id
                     * @param _jobId 作业Id
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取作业配置版本
                     * @return JobConfigVersions 作业配置版本
                     * 
                     */
                    std::vector<uint64_t> GetJobConfigVersions() const;

                    /**
                     * 设置作业配置版本
                     * @param _jobConfigVersions 作业配置版本
                     * 
                     */
                    void SetJobConfigVersions(const std::vector<uint64_t>& _jobConfigVersions);

                    /**
                     * 判断参数 JobConfigVersions 是否已赋值
                     * @return JobConfigVersions 是否已赋值
                     * 
                     */
                    bool JobConfigVersionsHasBeenSet() const;

                    /**
                     * 获取偏移量，默认0
                     * @return Offset 偏移量，默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认0
                     * @param _offset 偏移量，默认0
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
                     * 获取分页大小，默认20，最大100
                     * @return Limit 分页大小，默认20，最大100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页大小，默认20，最大100
                     * @param _limit 分页大小，默认20，最大100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取过滤条件
                     * @return Filters 过滤条件
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件
                     * @param _filters 过滤条件
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
                     * 获取true 表示只展示草稿
                     * @return OnlyDraft true 表示只展示草稿
                     * 
                     */
                    bool GetOnlyDraft() const;

                    /**
                     * 设置true 表示只展示草稿
                     * @param _onlyDraft true 表示只展示草稿
                     * 
                     */
                    void SetOnlyDraft(const bool& _onlyDraft);

                    /**
                     * 判断参数 OnlyDraft 是否已赋值
                     * @return OnlyDraft 是否已赋值
                     * 
                     */
                    bool OnlyDraftHasBeenSet() const;

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

                private:

                    /**
                     * 作业Id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 作业配置版本
                     */
                    std::vector<uint64_t> m_jobConfigVersions;
                    bool m_jobConfigVersionsHasBeenSet;

                    /**
                     * 偏移量，默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页大小，默认20，最大100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * true 表示只展示草稿
                     */
                    bool m_onlyDraft;
                    bool m_onlyDraftHasBeenSet;

                    /**
                     * 工作空间 SerialId
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBCONFIGSREQUEST_H_
