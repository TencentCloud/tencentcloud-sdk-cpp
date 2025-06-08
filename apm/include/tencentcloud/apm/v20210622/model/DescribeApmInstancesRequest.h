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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMINSTANCESREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeApmInstances请求参数结构体
                */
                class DescribeApmInstancesRequest : public AbstractModel
                {
                public:
                    DescribeApmInstancesRequest();
                    ~DescribeApmInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Tag 列表
                     * @return Tags Tag 列表
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置Tag 列表
                     * @param _tags Tag 列表
                     * 
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取按业务系统名过滤，支持模糊检索
                     * @return InstanceName 按业务系统名过滤，支持模糊检索
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置按业务系统名过滤，支持模糊检索
                     * @param _instanceName 按业务系统名过滤，支持模糊检索
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取按业务系统 ID 过滤，支持模糊检索
                     * @return InstanceId 按业务系统 ID 过滤，支持模糊检索
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置按业务系统 ID 过滤，支持模糊检索
                     * @param _instanceId 按业务系统 ID 过滤，支持模糊检索
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
                     * 获取按业务系统 ID 过滤
                     * @return InstanceIds 按业务系统 ID 过滤
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置按业务系统 ID 过滤
                     * @param _instanceIds 按业务系统 ID 过滤
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取是否查询官方 Demo 业务系统（0=非 Demo 业务系统，1=Demo 业务系统，默认为0）
                     * @return DemoInstanceFlag 是否查询官方 Demo 业务系统（0=非 Demo 业务系统，1=Demo 业务系统，默认为0）
                     * 
                     */
                    int64_t GetDemoInstanceFlag() const;

                    /**
                     * 设置是否查询官方 Demo 业务系统（0=非 Demo 业务系统，1=Demo 业务系统，默认为0）
                     * @param _demoInstanceFlag 是否查询官方 Demo 业务系统（0=非 Demo 业务系统，1=Demo 业务系统，默认为0）
                     * 
                     */
                    void SetDemoInstanceFlag(const int64_t& _demoInstanceFlag);

                    /**
                     * 判断参数 DemoInstanceFlag 是否已赋值
                     * @return DemoInstanceFlag 是否已赋值
                     * 
                     */
                    bool DemoInstanceFlagHasBeenSet() const;

                    /**
                     * 获取是否查询全地域业务系统（0=不查询全地域，1=查询全地域，默认为0）
                     * @return AllRegionsFlag 是否查询全地域业务系统（0=不查询全地域，1=查询全地域，默认为0）
                     * 
                     */
                    int64_t GetAllRegionsFlag() const;

                    /**
                     * 设置是否查询全地域业务系统（0=不查询全地域，1=查询全地域，默认为0）
                     * @param _allRegionsFlag 是否查询全地域业务系统（0=不查询全地域，1=查询全地域，默认为0）
                     * 
                     */
                    void SetAllRegionsFlag(const int64_t& _allRegionsFlag);

                    /**
                     * 判断参数 AllRegionsFlag 是否已赋值
                     * @return AllRegionsFlag 是否已赋值
                     * 
                     */
                    bool AllRegionsFlagHasBeenSet() const;

                private:

                    /**
                     * Tag 列表
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 按业务系统名过滤，支持模糊检索
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 按业务系统 ID 过滤，支持模糊检索
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 按业务系统 ID 过滤
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 是否查询官方 Demo 业务系统（0=非 Demo 业务系统，1=Demo 业务系统，默认为0）
                     */
                    int64_t m_demoInstanceFlag;
                    bool m_demoInstanceFlagHasBeenSet;

                    /**
                     * 是否查询全地域业务系统（0=不查询全地域，1=查询全地域，默认为0）
                     */
                    int64_t m_allRegionsFlag;
                    bool m_allRegionsFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMINSTANCESREQUEST_H_
