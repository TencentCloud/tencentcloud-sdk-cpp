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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEPODCONTAINERLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEPODCONTAINERLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribePodContainerList请求参数结构体
                */
                class DescribePodContainerListRequest : public AbstractModel
                {
                public:
                    DescribePodContainerListRequest();
                    ~DescribePodContainerListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Pod唯一标识ID</p>
                     * @return PodUniqueID <p>Pod唯一标识ID</p>
                     * 
                     */
                    std::string GetPodUniqueID() const;

                    /**
                     * 设置<p>Pod唯一标识ID</p>
                     * @param _podUniqueID <p>Pod唯一标识ID</p>
                     * 
                     */
                    void SetPodUniqueID(const std::string& _podUniqueID);

                    /**
                     * 判断参数 PodUniqueID 是否已赋值
                     * @return PodUniqueID 是否已赋值
                     * 
                     */
                    bool PodUniqueIDHasBeenSet() const;

                    /**
                     * 获取<p>通用过滤条件列表。支持的过滤字段：<br>ContainerId：容器ID，精确匹配。<br>ContainerName：容器名称，模糊匹配。<br>RunStatus：容器运行状态，精确匹配。取值：RUNNING、PAUSED、STOPPED、CREATED、DESTROYED、RESTARTING、REMOVING、DEAD、UNKNOWN。<br>ImageId：镜像ID，精确匹配。<br>ImageName：镜像名称，模糊匹配。<br>IsolateStatus：隔离状态，精确匹配。取值：NORMAL（未隔离）、ISOLATED（已隔离）、ISOLATING（隔离中）、ISOLATE_FAILED（隔离失败）、RESTORING（解除隔离中）、RESTORE_FAILED（解除隔离失败）。<br>NodeUniqueId：所属节点唯一ID，精确匹配（NodeAssetId 为等价别名）。<br>UUID：主机UUID，精确匹配。<br>NodeId：所属节点实例ID，精确匹配。<br>NodeType：节点类型，精确匹配。取值：SUPER、MASTER、WORKER。</p>
                     * @return Filter <p>通用过滤条件列表。支持的过滤字段：<br>ContainerId：容器ID，精确匹配。<br>ContainerName：容器名称，模糊匹配。<br>RunStatus：容器运行状态，精确匹配。取值：RUNNING、PAUSED、STOPPED、CREATED、DESTROYED、RESTARTING、REMOVING、DEAD、UNKNOWN。<br>ImageId：镜像ID，精确匹配。<br>ImageName：镜像名称，模糊匹配。<br>IsolateStatus：隔离状态，精确匹配。取值：NORMAL（未隔离）、ISOLATED（已隔离）、ISOLATING（隔离中）、ISOLATE_FAILED（隔离失败）、RESTORING（解除隔离中）、RESTORE_FAILED（解除隔离失败）。<br>NodeUniqueId：所属节点唯一ID，精确匹配（NodeAssetId 为等价别名）。<br>UUID：主机UUID，精确匹配。<br>NodeId：所属节点实例ID，精确匹配。<br>NodeType：节点类型，精确匹配。取值：SUPER、MASTER、WORKER。</p>
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置<p>通用过滤条件列表。支持的过滤字段：<br>ContainerId：容器ID，精确匹配。<br>ContainerName：容器名称，模糊匹配。<br>RunStatus：容器运行状态，精确匹配。取值：RUNNING、PAUSED、STOPPED、CREATED、DESTROYED、RESTARTING、REMOVING、DEAD、UNKNOWN。<br>ImageId：镜像ID，精确匹配。<br>ImageName：镜像名称，模糊匹配。<br>IsolateStatus：隔离状态，精确匹配。取值：NORMAL（未隔离）、ISOLATED（已隔离）、ISOLATING（隔离中）、ISOLATE_FAILED（隔离失败）、RESTORING（解除隔离中）、RESTORE_FAILED（解除隔离失败）。<br>NodeUniqueId：所属节点唯一ID，精确匹配（NodeAssetId 为等价别名）。<br>UUID：主机UUID，精确匹配。<br>NodeId：所属节点实例ID，精确匹配。<br>NodeType：节点类型，精确匹配。取值：SUPER、MASTER、WORKER。</p>
                     * @param _filter <p>通用过滤条件列表。支持的过滤字段：<br>ContainerId：容器ID，精确匹配。<br>ContainerName：容器名称，模糊匹配。<br>RunStatus：容器运行状态，精确匹配。取值：RUNNING、PAUSED、STOPPED、CREATED、DESTROYED、RESTARTING、REMOVING、DEAD、UNKNOWN。<br>ImageId：镜像ID，精确匹配。<br>ImageName：镜像名称，模糊匹配。<br>IsolateStatus：隔离状态，精确匹配。取值：NORMAL（未隔离）、ISOLATED（已隔离）、ISOLATING（隔离中）、ISOLATE_FAILED（隔离失败）、RESTORING（解除隔离中）、RESTORE_FAILED（解除隔离失败）。<br>NodeUniqueId：所属节点唯一ID，精确匹配（NodeAssetId 为等价别名）。<br>UUID：主机UUID，精确匹配。<br>NodeId：所属节点实例ID，精确匹配。<br>NodeType：节点类型，精确匹配。取值：SUPER、MASTER、WORKER。</p>
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Pod唯一标识ID</p>
                     */
                    std::string m_podUniqueID;
                    bool m_podUniqueIDHasBeenSet;

                    /**
                     * <p>通用过滤条件列表。支持的过滤字段：<br>ContainerId：容器ID，精确匹配。<br>ContainerName：容器名称，模糊匹配。<br>RunStatus：容器运行状态，精确匹配。取值：RUNNING、PAUSED、STOPPED、CREATED、DESTROYED、RESTARTING、REMOVING、DEAD、UNKNOWN。<br>ImageId：镜像ID，精确匹配。<br>ImageName：镜像名称，模糊匹配。<br>IsolateStatus：隔离状态，精确匹配。取值：NORMAL（未隔离）、ISOLATED（已隔离）、ISOLATING（隔离中）、ISOLATE_FAILED（隔离失败）、RESTORING（解除隔离中）、RESTORE_FAILED（解除隔离失败）。<br>NodeUniqueId：所属节点唯一ID，精确匹配（NodeAssetId 为等价别名）。<br>UUID：主机UUID，精确匹配。<br>NodeId：所属节点实例ID，精确匹配。<br>NodeType：节点类型，精确匹配。取值：SUPER、MASTER、WORKER。</p>
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEPODCONTAINERLISTREQUEST_H_
