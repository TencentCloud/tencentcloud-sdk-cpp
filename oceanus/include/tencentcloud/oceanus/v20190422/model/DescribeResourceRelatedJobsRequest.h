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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBERESOURCERELATEDJOBSREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBERESOURCERELATEDJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * DescribeResourceRelatedJobs请求参数结构体
                */
                class DescribeResourceRelatedJobsRequest : public AbstractModel
                {
                public:
                    DescribeResourceRelatedJobsRequest();
                    ~DescribeResourceRelatedJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源ID
                     * @return ResourceId 资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID
                     * @param _resourceId 资源ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取默认0;   1： 按照作业版本创建时间降序
                     * @return DESCByJobConfigCreateTime 默认0;   1： 按照作业版本创建时间降序
                     * 
                     */
                    int64_t GetDESCByJobConfigCreateTime() const;

                    /**
                     * 设置默认0;   1： 按照作业版本创建时间降序
                     * @param _dESCByJobConfigCreateTime 默认0;   1： 按照作业版本创建时间降序
                     * 
                     */
                    void SetDESCByJobConfigCreateTime(const int64_t& _dESCByJobConfigCreateTime);

                    /**
                     * 判断参数 DESCByJobConfigCreateTime 是否已赋值
                     * @return DESCByJobConfigCreateTime 是否已赋值
                     * 
                     */
                    bool DESCByJobConfigCreateTimeHasBeenSet() const;

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
                     * 获取资源版本号
                     * @return ResourceConfigVersion 资源版本号
                     * 
                     */
                    int64_t GetResourceConfigVersion() const;

                    /**
                     * 设置资源版本号
                     * @param _resourceConfigVersion 资源版本号
                     * 
                     */
                    void SetResourceConfigVersion(const int64_t& _resourceConfigVersion);

                    /**
                     * 判断参数 ResourceConfigVersion 是否已赋值
                     * @return ResourceConfigVersion 是否已赋值
                     * 
                     */
                    bool ResourceConfigVersionHasBeenSet() const;

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
                     * 资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 默认0;   1： 按照作业版本创建时间降序
                     */
                    int64_t m_dESCByJobConfigCreateTime;
                    bool m_dESCByJobConfigCreateTimeHasBeenSet;

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
                     * 资源版本号
                     */
                    int64_t m_resourceConfigVersion;
                    bool m_resourceConfigVersionHasBeenSet;

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

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBERESOURCERELATEDJOBSREQUEST_H_
