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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBERESOURCECONFIGSREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBERESOURCECONFIGSREQUEST_H_

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
                * DescribeResourceConfigs请求参数结构体
                */
                class DescribeResourceConfigsRequest : public AbstractModel
                {
                public:
                    DescribeResourceConfigsRequest();
                    ~DescribeResourceConfigsRequest() = default;
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
                     * 获取偏移量，仅当设置 Limit 时该参数有效
                     * @return Offset 偏移量，仅当设置 Limit 时该参数有效
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，仅当设置 Limit 时该参数有效
                     * @param _offset 偏移量，仅当设置 Limit 时该参数有效
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
                     * 获取返回值大小，不填则返回全量数据
                     * @return Limit 返回值大小，不填则返回全量数据
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回值大小，不填则返回全量数据
                     * @param _limit 返回值大小，不填则返回全量数据
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
                     * 获取资源配置Versions集合
                     * @return ResourceConfigVersions 资源配置Versions集合
                     * 
                     */
                    std::vector<int64_t> GetResourceConfigVersions() const;

                    /**
                     * 设置资源配置Versions集合
                     * @param _resourceConfigVersions 资源配置Versions集合
                     * 
                     */
                    void SetResourceConfigVersions(const std::vector<int64_t>& _resourceConfigVersions);

                    /**
                     * 判断参数 ResourceConfigVersions 是否已赋值
                     * @return ResourceConfigVersions 是否已赋值
                     * 
                     */
                    bool ResourceConfigVersionsHasBeenSet() const;

                    /**
                     * 获取作业配置版本
                     * @return JobConfigVersion 作业配置版本
                     * 
                     */
                    int64_t GetJobConfigVersion() const;

                    /**
                     * 设置作业配置版本
                     * @param _jobConfigVersion 作业配置版本
                     * 
                     */
                    void SetJobConfigVersion(const int64_t& _jobConfigVersion);

                    /**
                     * 判断参数 JobConfigVersion 是否已赋值
                     * @return JobConfigVersion 是否已赋值
                     * 
                     */
                    bool JobConfigVersionHasBeenSet() const;

                    /**
                     * 获取作业ID
                     * @return JobId 作业ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业ID
                     * @param _jobId 作业ID
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
                     * 偏移量，仅当设置 Limit 时该参数有效
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回值大小，不填则返回全量数据
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 资源配置Versions集合
                     */
                    std::vector<int64_t> m_resourceConfigVersions;
                    bool m_resourceConfigVersionsHasBeenSet;

                    /**
                     * 作业配置版本
                     */
                    int64_t m_jobConfigVersion;
                    bool m_jobConfigVersionHasBeenSet;

                    /**
                     * 作业ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

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

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBERESOURCECONFIGSREQUEST_H_
