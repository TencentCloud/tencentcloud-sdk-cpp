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
                     * 获取Tag列表
                     * @return Tags Tag列表
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置Tag列表
                     * @param Tags Tag列表
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取搜索实例名
                     * @return InstanceName 搜索实例名
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置搜索实例名
                     * @param InstanceName 搜索实例名
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取过滤实例ID
                     * @return InstanceIds 过滤实例ID
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置过滤实例ID
                     * @param InstanceIds 过滤实例ID
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取是否查询官方demo实例
                     * @return DemoInstanceFlag 是否查询官方demo实例
                     */
                    int64_t GetDemoInstanceFlag() const;

                    /**
                     * 设置是否查询官方demo实例
                     * @param DemoInstanceFlag 是否查询官方demo实例
                     */
                    void SetDemoInstanceFlag(const int64_t& _demoInstanceFlag);

                    /**
                     * 判断参数 DemoInstanceFlag 是否已赋值
                     * @return DemoInstanceFlag 是否已赋值
                     */
                    bool DemoInstanceFlagHasBeenSet() const;

                private:

                    /**
                     * Tag列表
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 搜索实例名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 过滤实例ID
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 是否查询官方demo实例
                     */
                    int64_t m_demoInstanceFlag;
                    bool m_demoInstanceFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMINSTANCESREQUEST_H_
