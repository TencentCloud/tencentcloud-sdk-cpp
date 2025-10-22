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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_SHRINKINSTANCESREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_SHRINKINSTANCESREQUEST_H_

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
                * ShrinkInstances请求参数结构体
                */
                class ShrinkInstancesRequest : public AbstractModel
                {
                public:
                    ShrinkInstancesRequest();
                    ~ShrinkInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取部署组ID，可通过调用[获取虚拟机部署组列表](https://cloud.tencent.com/document/api/649/36065)接口时出参中的Result.Content.GroupId，或登录[控制台](https://console.cloud.tencent.com/tsf/app-detail?rid=1&id=application-aaaaaaaa&tab=publish&subTab=group)选择对应应用进入应用部署页面查看，同时也是调用[创建部署组](https://cloud.tencent.com/document/api/649/36074)接口返回的Result值
                     * @return GroupId 部署组ID，可通过调用[获取虚拟机部署组列表](https://cloud.tencent.com/document/api/649/36065)接口时出参中的Result.Content.GroupId，或登录[控制台](https://console.cloud.tencent.com/tsf/app-detail?rid=1&id=application-aaaaaaaa&tab=publish&subTab=group)选择对应应用进入应用部署页面查看，同时也是调用[创建部署组](https://cloud.tencent.com/document/api/649/36074)接口返回的Result值
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID，可通过调用[获取虚拟机部署组列表](https://cloud.tencent.com/document/api/649/36065)接口时出参中的Result.Content.GroupId，或登录[控制台](https://console.cloud.tencent.com/tsf/app-detail?rid=1&id=application-aaaaaaaa&tab=publish&subTab=group)选择对应应用进入应用部署页面查看，同时也是调用[创建部署组](https://cloud.tencent.com/document/api/649/36074)接口返回的Result值
                     * @param _groupId 部署组ID，可通过调用[获取虚拟机部署组列表](https://cloud.tencent.com/document/api/649/36065)接口时出参中的Result.Content.GroupId，或登录[控制台](https://console.cloud.tencent.com/tsf/app-detail?rid=1&id=application-aaaaaaaa&tab=publish&subTab=group)选择对应应用进入应用部署页面查看，同时也是调用[创建部署组](https://cloud.tencent.com/document/api/649/36074)接口返回的Result值
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
                     * 获取实例ID列表，实例ID可通过调用[查询虚拟机部署组云主机列表](https://cloud.tencent.com/document/product/649/36066)接口时出参中的Result.Content.InstanceId，或登录[控制台](https://console.cloud.tencent.com/tsf/resource-detail?rid=1&id=cluster-aaaaaaaa)选择对应的虚拟机集群查看云主机信息，同时也是[集群添加云主机](https://cloud.tencent.com/document/product/649/41225?ls=doc-search!current)接口的的返回值Result中的节点列表
                     * @return InstanceIdList 实例ID列表，实例ID可通过调用[查询虚拟机部署组云主机列表](https://cloud.tencent.com/document/product/649/36066)接口时出参中的Result.Content.InstanceId，或登录[控制台](https://console.cloud.tencent.com/tsf/resource-detail?rid=1&id=cluster-aaaaaaaa)选择对应的虚拟机集群查看云主机信息，同时也是[集群添加云主机](https://cloud.tencent.com/document/product/649/41225?ls=doc-search!current)接口的的返回值Result中的节点列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置实例ID列表，实例ID可通过调用[查询虚拟机部署组云主机列表](https://cloud.tencent.com/document/product/649/36066)接口时出参中的Result.Content.InstanceId，或登录[控制台](https://console.cloud.tencent.com/tsf/resource-detail?rid=1&id=cluster-aaaaaaaa)选择对应的虚拟机集群查看云主机信息，同时也是[集群添加云主机](https://cloud.tencent.com/document/product/649/41225?ls=doc-search!current)接口的的返回值Result中的节点列表
                     * @param _instanceIdList 实例ID列表，实例ID可通过调用[查询虚拟机部署组云主机列表](https://cloud.tencent.com/document/product/649/36066)接口时出参中的Result.Content.InstanceId，或登录[控制台](https://console.cloud.tencent.com/tsf/resource-detail?rid=1&id=cluster-aaaaaaaa)选择对应的虚拟机集群查看云主机信息，同时也是[集群添加云主机](https://cloud.tencent.com/document/product/649/41225?ls=doc-search!current)接口的的返回值Result中的节点列表
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
                     * 部署组ID，可通过调用[获取虚拟机部署组列表](https://cloud.tencent.com/document/api/649/36065)接口时出参中的Result.Content.GroupId，或登录[控制台](https://console.cloud.tencent.com/tsf/app-detail?rid=1&id=application-aaaaaaaa&tab=publish&subTab=group)选择对应应用进入应用部署页面查看，同时也是调用[创建部署组](https://cloud.tencent.com/document/api/649/36074)接口返回的Result值
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 实例ID列表，实例ID可通过调用[查询虚拟机部署组云主机列表](https://cloud.tencent.com/document/product/649/36066)接口时出参中的Result.Content.InstanceId，或登录[控制台](https://console.cloud.tencent.com/tsf/resource-detail?rid=1&id=cluster-aaaaaaaa)选择对应的虚拟机集群查看云主机信息，同时也是[集群添加云主机](https://cloud.tencent.com/document/product/649/41225?ls=doc-search!current)接口的的返回值Result中的节点列表
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_SHRINKINSTANCESREQUEST_H_
