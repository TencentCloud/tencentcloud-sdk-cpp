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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYAPPLICATIONTRIGGERPERSONALREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYAPPLICATIONTRIGGERPERSONALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * ModifyApplicationTriggerPersonal请求参数结构体
                */
                class ModifyApplicationTriggerPersonalRequest : public AbstractModel
                {
                public:
                    ModifyApplicationTriggerPersonalRequest();
                    ~ModifyApplicationTriggerPersonalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取触发器关联的镜像仓库，library/test格式
                     * @return RepoName 触发器关联的镜像仓库，library/test格式
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置触发器关联的镜像仓库，library/test格式
                     * @param _repoName 触发器关联的镜像仓库，library/test格式
                     * 
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     * 
                     */
                    bool RepoNameHasBeenSet() const;

                    /**
                     * 获取触发器名称，必填参数
                     * @return TriggerName 触发器名称，必填参数
                     * 
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置触发器名称，必填参数
                     * @param _triggerName 触发器名称，必填参数
                     * 
                     */
                    void SetTriggerName(const std::string& _triggerName);

                    /**
                     * 判断参数 TriggerName 是否已赋值
                     * @return TriggerName 是否已赋值
                     * 
                     */
                    bool TriggerNameHasBeenSet() const;

                    /**
                     * 获取触发方式，"all"全部触发，"taglist"指定tag触发，"regex"正则触发
                     * @return InvokeMethod 触发方式，"all"全部触发，"taglist"指定tag触发，"regex"正则触发
                     * 
                     */
                    std::string GetInvokeMethod() const;

                    /**
                     * 设置触发方式，"all"全部触发，"taglist"指定tag触发，"regex"正则触发
                     * @param _invokeMethod 触发方式，"all"全部触发，"taglist"指定tag触发，"regex"正则触发
                     * 
                     */
                    void SetInvokeMethod(const std::string& _invokeMethod);

                    /**
                     * 判断参数 InvokeMethod 是否已赋值
                     * @return InvokeMethod 是否已赋值
                     * 
                     */
                    bool InvokeMethodHasBeenSet() const;

                    /**
                     * 获取触发方式对应的表达式
                     * @return InvokeExpr 触发方式对应的表达式
                     * 
                     */
                    std::string GetInvokeExpr() const;

                    /**
                     * 设置触发方式对应的表达式
                     * @param _invokeExpr 触发方式对应的表达式
                     * 
                     */
                    void SetInvokeExpr(const std::string& _invokeExpr);

                    /**
                     * 判断参数 InvokeExpr 是否已赋值
                     * @return InvokeExpr 是否已赋值
                     * 
                     */
                    bool InvokeExprHasBeenSet() const;

                    /**
                     * 获取应用所在TKE集群ID
                     * @return ClusterId 应用所在TKE集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置应用所在TKE集群ID
                     * @param _clusterId 应用所在TKE集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取应用所在TKE集群命名空间
                     * @return Namespace 应用所在TKE集群命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置应用所在TKE集群命名空间
                     * @param _namespace 应用所在TKE集群命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取应用所在TKE集群工作负载类型,支持Deployment、StatefulSet、DaemonSet、CronJob、Job。
                     * @return WorkloadType 应用所在TKE集群工作负载类型,支持Deployment、StatefulSet、DaemonSet、CronJob、Job。
                     * 
                     */
                    std::string GetWorkloadType() const;

                    /**
                     * 设置应用所在TKE集群工作负载类型,支持Deployment、StatefulSet、DaemonSet、CronJob、Job。
                     * @param _workloadType 应用所在TKE集群工作负载类型,支持Deployment、StatefulSet、DaemonSet、CronJob、Job。
                     * 
                     */
                    void SetWorkloadType(const std::string& _workloadType);

                    /**
                     * 判断参数 WorkloadType 是否已赋值
                     * @return WorkloadType 是否已赋值
                     * 
                     */
                    bool WorkloadTypeHasBeenSet() const;

                    /**
                     * 获取应用所在TKE集群工作负载名称
                     * @return WorkloadName 应用所在TKE集群工作负载名称
                     * 
                     */
                    std::string GetWorkloadName() const;

                    /**
                     * 设置应用所在TKE集群工作负载名称
                     * @param _workloadName 应用所在TKE集群工作负载名称
                     * 
                     */
                    void SetWorkloadName(const std::string& _workloadName);

                    /**
                     * 判断参数 WorkloadName 是否已赋值
                     * @return WorkloadName 是否已赋值
                     * 
                     */
                    bool WorkloadNameHasBeenSet() const;

                    /**
                     * 获取应用所在TKE集群工作负载下容器名称
                     * @return ContainerName 应用所在TKE集群工作负载下容器名称
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置应用所在TKE集群工作负载下容器名称
                     * @param _containerName 应用所在TKE集群工作负载下容器名称
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取应用所在TKE集群地域数字ID，如1（广州）、16（成都）
                     * @return ClusterRegion 应用所在TKE集群地域数字ID，如1（广州）、16（成都）
                     * 
                     */
                    int64_t GetClusterRegion() const;

                    /**
                     * 设置应用所在TKE集群地域数字ID，如1（广州）、16（成都）
                     * @param _clusterRegion 应用所在TKE集群地域数字ID，如1（广州）、16（成都）
                     * 
                     */
                    void SetClusterRegion(const int64_t& _clusterRegion);

                    /**
                     * 判断参数 ClusterRegion 是否已赋值
                     * @return ClusterRegion 是否已赋值
                     * 
                     */
                    bool ClusterRegionHasBeenSet() const;

                    /**
                     * 获取新触发器名称
                     * @return NewTriggerName 新触发器名称
                     * 
                     */
                    std::string GetNewTriggerName() const;

                    /**
                     * 设置新触发器名称
                     * @param _newTriggerName 新触发器名称
                     * 
                     */
                    void SetNewTriggerName(const std::string& _newTriggerName);

                    /**
                     * 判断参数 NewTriggerName 是否已赋值
                     * @return NewTriggerName 是否已赋值
                     * 
                     */
                    bool NewTriggerNameHasBeenSet() const;

                private:

                    /**
                     * 触发器关联的镜像仓库，library/test格式
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * 触发器名称，必填参数
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * 触发方式，"all"全部触发，"taglist"指定tag触发，"regex"正则触发
                     */
                    std::string m_invokeMethod;
                    bool m_invokeMethodHasBeenSet;

                    /**
                     * 触发方式对应的表达式
                     */
                    std::string m_invokeExpr;
                    bool m_invokeExprHasBeenSet;

                    /**
                     * 应用所在TKE集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 应用所在TKE集群命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 应用所在TKE集群工作负载类型,支持Deployment、StatefulSet、DaemonSet、CronJob、Job。
                     */
                    std::string m_workloadType;
                    bool m_workloadTypeHasBeenSet;

                    /**
                     * 应用所在TKE集群工作负载名称
                     */
                    std::string m_workloadName;
                    bool m_workloadNameHasBeenSet;

                    /**
                     * 应用所在TKE集群工作负载下容器名称
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 应用所在TKE集群地域数字ID，如1（广州）、16（成都）
                     */
                    int64_t m_clusterRegion;
                    bool m_clusterRegionHasBeenSet;

                    /**
                     * 新触发器名称
                     */
                    std::string m_newTriggerName;
                    bool m_newTriggerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYAPPLICATIONTRIGGERPERSONALREQUEST_H_
