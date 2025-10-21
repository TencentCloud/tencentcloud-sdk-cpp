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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_EXPANDGROUPREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_EXPANDGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * ExpandGroup请求参数结构体
                */
                class ExpandGroupRequest : public AbstractModel
                {
                public:
                    ExpandGroupRequest();
                    ~ExpandGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取部署组ID，可通过调用[DescribeGroups](https://cloud.tencent.com/document/api/649/36065)查询已创建的部署组列表或登录控制台进行查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/api/649/36074)创建新的部署组。
                     * @return GroupId 部署组ID，可通过调用[DescribeGroups](https://cloud.tencent.com/document/api/649/36065)查询已创建的部署组列表或登录控制台进行查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/api/649/36074)创建新的部署组。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID，可通过调用[DescribeGroups](https://cloud.tencent.com/document/api/649/36065)查询已创建的部署组列表或登录控制台进行查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/api/649/36074)创建新的部署组。
                     * @param _groupId 部署组ID，可通过调用[DescribeGroups](https://cloud.tencent.com/document/api/649/36065)查询已创建的部署组列表或登录控制台进行查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/api/649/36074)创建新的部署组。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取扩容的机器实例ID列表，调用[DescribeClusters](https://console.cloud.tencent.com/tsf/resource?rid=1)接口，选定一个虚拟机集群，选择部署组，选择应用扩容可获取实例列表
                     * @return InstanceIdList 扩容的机器实例ID列表，调用[DescribeClusters](https://console.cloud.tencent.com/tsf/resource?rid=1)接口，选定一个虚拟机集群，选择部署组，选择应用扩容可获取实例列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置扩容的机器实例ID列表，调用[DescribeClusters](https://console.cloud.tencent.com/tsf/resource?rid=1)接口，选定一个虚拟机集群，选择部署组，选择应用扩容可获取实例列表
                     * @param _instanceIdList 扩容的机器实例ID列表，调用[DescribeClusters](https://console.cloud.tencent.com/tsf/resource?rid=1)接口，选定一个虚拟机集群，选择部署组，选择应用扩容可获取实例列表
                     * 
                     */
                    void SetInstanceIdList(const std::vector<std::string>& _instanceIdList);

                    /**
                     * 判断参数 InstanceIdList 是否已赋值
                     * @return InstanceIdList 是否已赋值
                     * 
                     */
                    bool InstanceIdListHasBeenSet() const;

                private:

                    /**
                     * 部署组ID，可通过调用[DescribeGroups](https://cloud.tencent.com/document/api/649/36065)查询已创建的部署组列表或登录控制台进行查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/api/649/36074)创建新的部署组。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 扩容的机器实例ID列表，调用[DescribeClusters](https://console.cloud.tencent.com/tsf/resource?rid=1)接口，选定一个虚拟机集群，选择部署组，选择应用扩容可获取实例列表
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_EXPANDGROUPREQUEST_H_
