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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERNODEPOOLREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERNODEPOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Label.h>
#include <tencentcloud/tke/v20180525/model/Taint.h>
#include <tencentcloud/tke/v20180525/model/AnnotationValue.h>
#include <tencentcloud/tke/v20180525/model/GPUArgs.h>
#include <tencentcloud/tke/v20180525/model/InstanceExtraArgs.h>
#include <tencentcloud/tke/v20180525/model/Tag.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ModifyClusterNodePool请求参数结构体
                */
                class ModifyClusterNodePoolRequest : public AbstractModel
                {
                public:
                    ModifyClusterNodePoolRequest();
                    ~ModifyClusterNodePoolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
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
                     * 获取<p>节点池ID</p>
                     * @return NodePoolId <p>节点池ID</p>
                     * 
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置<p>节点池ID</p>
                     * @param _nodePoolId <p>节点池ID</p>
                     * 
                     */
                    void SetNodePoolId(const std::string& _nodePoolId);

                    /**
                     * 判断参数 NodePoolId 是否已赋值
                     * @return NodePoolId 是否已赋值
                     * 
                     */
                    bool NodePoolIdHasBeenSet() const;

                    /**
                     * 获取<p>名称，最长63个字符，只能包含小写字母、数字及分隔符“_”，且必须以小写字母开头，数字或小写字母结尾</p>
                     * @return Name <p>名称，最长63个字符，只能包含小写字母、数字及分隔符“_”，且必须以小写字母开头，数字或小写字母结尾</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称，最长63个字符，只能包含小写字母、数字及分隔符“_”，且必须以小写字母开头，数字或小写字母结尾</p>
                     * @param _name <p>名称，最长63个字符，只能包含小写字母、数字及分隔符“_”，且必须以小写字母开头，数字或小写字母结尾</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>最大节点数</p>
                     * @return MaxNodesNum <p>最大节点数</p>
                     * 
                     */
                    int64_t GetMaxNodesNum() const;

                    /**
                     * 设置<p>最大节点数</p>
                     * @param _maxNodesNum <p>最大节点数</p>
                     * 
                     */
                    void SetMaxNodesNum(const int64_t& _maxNodesNum);

                    /**
                     * 判断参数 MaxNodesNum 是否已赋值
                     * @return MaxNodesNum 是否已赋值
                     * 
                     */
                    bool MaxNodesNumHasBeenSet() const;

                    /**
                     * 获取<p>最小节点数</p>
                     * @return MinNodesNum <p>最小节点数</p>
                     * 
                     */
                    int64_t GetMinNodesNum() const;

                    /**
                     * 设置<p>最小节点数</p>
                     * @param _minNodesNum <p>最小节点数</p>
                     * 
                     */
                    void SetMinNodesNum(const int64_t& _minNodesNum);

                    /**
                     * 判断参数 MinNodesNum 是否已赋值
                     * @return MinNodesNum 是否已赋值
                     * 
                     */
                    bool MinNodesNumHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return Labels <p>标签</p>
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _labels <p>标签</p>
                     * 
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<p>污点</p>
                     * @return Taints <p>污点</p>
                     * 
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置<p>污点</p>
                     * @param _taints <p>污点</p>
                     * 
                     */
                    void SetTaints(const std::vector<Taint>& _taints);

                    /**
                     * 判断参数 Taints 是否已赋值
                     * @return Taints 是否已赋值
                     * 
                     */
                    bool TaintsHasBeenSet() const;

                    /**
                     * 获取<p>节点 Annotation 列表</p>
                     * @return Annotations <p>节点 Annotation 列表</p>
                     * 
                     */
                    std::vector<AnnotationValue> GetAnnotations() const;

                    /**
                     * 设置<p>节点 Annotation 列表</p>
                     * @param _annotations <p>节点 Annotation 列表</p>
                     * 
                     */
                    void SetAnnotations(const std::vector<AnnotationValue>& _annotations);

                    /**
                     * 判断参数 Annotations 是否已赋值
                     * @return Annotations 是否已赋值
                     * 
                     */
                    bool AnnotationsHasBeenSet() const;

                    /**
                     * 获取<p>是否开启伸缩</p>
                     * @return EnableAutoscale <p>是否开启伸缩</p>
                     * 
                     */
                    bool GetEnableAutoscale() const;

                    /**
                     * 设置<p>是否开启伸缩</p>
                     * @param _enableAutoscale <p>是否开启伸缩</p>
                     * 
                     */
                    void SetEnableAutoscale(const bool& _enableAutoscale);

                    /**
                     * 判断参数 EnableAutoscale 是否已赋值
                     * @return EnableAutoscale 是否已赋值
                     * 
                     */
                    bool EnableAutoscaleHasBeenSet() const;

                    /**
                     * 获取<p>操作系统名称</p>
                     * @return OsName <p>操作系统名称</p>
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置<p>操作系统名称</p>
                     * @param _osName <p>操作系统名称</p>
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取<p>镜像版本，&quot;DOCKER_CUSTOMIZE&quot;(容器定制版),&quot;GENERAL&quot;(普通版本，默认值)</p>
                     * @return OsCustomizeType <p>镜像版本，&quot;DOCKER_CUSTOMIZE&quot;(容器定制版),&quot;GENERAL&quot;(普通版本，默认值)</p>
                     * 
                     */
                    std::string GetOsCustomizeType() const;

                    /**
                     * 设置<p>镜像版本，&quot;DOCKER_CUSTOMIZE&quot;(容器定制版),&quot;GENERAL&quot;(普通版本，默认值)</p>
                     * @param _osCustomizeType <p>镜像版本，&quot;DOCKER_CUSTOMIZE&quot;(容器定制版),&quot;GENERAL&quot;(普通版本，默认值)</p>
                     * 
                     */
                    void SetOsCustomizeType(const std::string& _osCustomizeType);

                    /**
                     * 判断参数 OsCustomizeType 是否已赋值
                     * @return OsCustomizeType 是否已赋值
                     * 
                     */
                    bool OsCustomizeTypeHasBeenSet() const;

                    /**
                     * 获取<p>GPU驱动版本，CUDA版本，cuDNN版本以及是否启用MIG特性</p>
                     * @return GPUArgs <p>GPU驱动版本，CUDA版本，cuDNN版本以及是否启用MIG特性</p>
                     * 
                     */
                    GPUArgs GetGPUArgs() const;

                    /**
                     * 设置<p>GPU驱动版本，CUDA版本，cuDNN版本以及是否启用MIG特性</p>
                     * @param _gPUArgs <p>GPU驱动版本，CUDA版本，cuDNN版本以及是否启用MIG特性</p>
                     * 
                     */
                    void SetGPUArgs(const GPUArgs& _gPUArgs);

                    /**
                     * 判断参数 GPUArgs 是否已赋值
                     * @return GPUArgs 是否已赋值
                     * 
                     */
                    bool GPUArgsHasBeenSet() const;

                    /**
                     * 获取<p>base64编码后的自定义脚本</p>
                     * @return UserScript <p>base64编码后的自定义脚本</p>
                     * 
                     */
                    std::string GetUserScript() const;

                    /**
                     * 设置<p>base64编码后的自定义脚本</p>
                     * @param _userScript <p>base64编码后的自定义脚本</p>
                     * 
                     */
                    void SetUserScript(const std::string& _userScript);

                    /**
                     * 判断参数 UserScript 是否已赋值
                     * @return UserScript 是否已赋值
                     * 
                     */
                    bool UserScriptHasBeenSet() const;

                    /**
                     * 获取<p>更新label和taint时忽略存量节点</p>
                     * @return IgnoreExistedNode <p>更新label和taint时忽略存量节点</p>
                     * 
                     */
                    bool GetIgnoreExistedNode() const;

                    /**
                     * 设置<p>更新label和taint时忽略存量节点</p>
                     * @param _ignoreExistedNode <p>更新label和taint时忽略存量节点</p>
                     * 
                     */
                    void SetIgnoreExistedNode(const bool& _ignoreExistedNode);

                    /**
                     * 判断参数 IgnoreExistedNode 是否已赋值
                     * @return IgnoreExistedNode 是否已赋值
                     * 
                     */
                    bool IgnoreExistedNodeHasBeenSet() const;

                    /**
                     * 获取<p>节点自定义参数</p>
                     * @return ExtraArgs <p>节点自定义参数</p>
                     * 
                     */
                    InstanceExtraArgs GetExtraArgs() const;

                    /**
                     * 设置<p>节点自定义参数</p>
                     * @param _extraArgs <p>节点自定义参数</p>
                     * 
                     */
                    void SetExtraArgs(const InstanceExtraArgs& _extraArgs);

                    /**
                     * 判断参数 ExtraArgs 是否已赋值
                     * @return ExtraArgs 是否已赋值
                     * 
                     */
                    bool ExtraArgsHasBeenSet() const;

                    /**
                     * 获取<p>资源标签</p>
                     * @return Tags <p>资源标签</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>资源标签</p>
                     * @param _tags <p>资源标签</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>设置加入的节点是否参与调度，默认值为0，表示参与调度；非0表示不参与调度, 待节点初始化完成之后, 可执行kubectl uncordon nodename使node加入调度.</p>
                     * @return Unschedulable <p>设置加入的节点是否参与调度，默认值为0，表示参与调度；非0表示不参与调度, 待节点初始化完成之后, 可执行kubectl uncordon nodename使node加入调度.</p>
                     * 
                     */
                    int64_t GetUnschedulable() const;

                    /**
                     * 设置<p>设置加入的节点是否参与调度，默认值为0，表示参与调度；非0表示不参与调度, 待节点初始化完成之后, 可执行kubectl uncordon nodename使node加入调度.</p>
                     * @param _unschedulable <p>设置加入的节点是否参与调度，默认值为0，表示参与调度；非0表示不参与调度, 待节点初始化完成之后, 可执行kubectl uncordon nodename使node加入调度.</p>
                     * 
                     */
                    void SetUnschedulable(const int64_t& _unschedulable);

                    /**
                     * 判断参数 Unschedulable 是否已赋值
                     * @return Unschedulable 是否已赋值
                     * 
                     */
                    bool UnschedulableHasBeenSet() const;

                    /**
                     * 获取<p>删除保护开关</p>
                     * @return DeletionProtection <p>删除保护开关</p>
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置<p>删除保护开关</p>
                     * @param _deletionProtection <p>删除保护开关</p>
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                    /**
                     * 获取<p>dockerd --graph 指定值, 默认为 /var/lib/docker</p>
                     * @return DockerGraphPath <p>dockerd --graph 指定值, 默认为 /var/lib/docker</p>
                     * 
                     */
                    std::string GetDockerGraphPath() const;

                    /**
                     * 设置<p>dockerd --graph 指定值, 默认为 /var/lib/docker</p>
                     * @param _dockerGraphPath <p>dockerd --graph 指定值, 默认为 /var/lib/docker</p>
                     * 
                     */
                    void SetDockerGraphPath(const std::string& _dockerGraphPath);

                    /**
                     * 判断参数 DockerGraphPath 是否已赋值
                     * @return DockerGraphPath 是否已赋值
                     * 
                     */
                    bool DockerGraphPathHasBeenSet() const;

                    /**
                     * 获取<p>base64编码后的自定义脚本</p>
                     * @return PreStartUserScript <p>base64编码后的自定义脚本</p>
                     * 
                     */
                    std::string GetPreStartUserScript() const;

                    /**
                     * 设置<p>base64编码后的自定义脚本</p>
                     * @param _preStartUserScript <p>base64编码后的自定义脚本</p>
                     * 
                     */
                    void SetPreStartUserScript(const std::string& _preStartUserScript);

                    /**
                     * 判断参数 PreStartUserScript 是否已赋值
                     * @return PreStartUserScript 是否已赋值
                     * 
                     */
                    bool PreStartUserScriptHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>节点池ID</p>
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * <p>名称，最长63个字符，只能包含小写字母、数字及分隔符“_”，且必须以小写字母开头，数字或小写字母结尾</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>最大节点数</p>
                     */
                    int64_t m_maxNodesNum;
                    bool m_maxNodesNumHasBeenSet;

                    /**
                     * <p>最小节点数</p>
                     */
                    int64_t m_minNodesNum;
                    bool m_minNodesNumHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>污点</p>
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * <p>节点 Annotation 列表</p>
                     */
                    std::vector<AnnotationValue> m_annotations;
                    bool m_annotationsHasBeenSet;

                    /**
                     * <p>是否开启伸缩</p>
                     */
                    bool m_enableAutoscale;
                    bool m_enableAutoscaleHasBeenSet;

                    /**
                     * <p>操作系统名称</p>
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * <p>镜像版本，&quot;DOCKER_CUSTOMIZE&quot;(容器定制版),&quot;GENERAL&quot;(普通版本，默认值)</p>
                     */
                    std::string m_osCustomizeType;
                    bool m_osCustomizeTypeHasBeenSet;

                    /**
                     * <p>GPU驱动版本，CUDA版本，cuDNN版本以及是否启用MIG特性</p>
                     */
                    GPUArgs m_gPUArgs;
                    bool m_gPUArgsHasBeenSet;

                    /**
                     * <p>base64编码后的自定义脚本</p>
                     */
                    std::string m_userScript;
                    bool m_userScriptHasBeenSet;

                    /**
                     * <p>更新label和taint时忽略存量节点</p>
                     */
                    bool m_ignoreExistedNode;
                    bool m_ignoreExistedNodeHasBeenSet;

                    /**
                     * <p>节点自定义参数</p>
                     */
                    InstanceExtraArgs m_extraArgs;
                    bool m_extraArgsHasBeenSet;

                    /**
                     * <p>资源标签</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>设置加入的节点是否参与调度，默认值为0，表示参与调度；非0表示不参与调度, 待节点初始化完成之后, 可执行kubectl uncordon nodename使node加入调度.</p>
                     */
                    int64_t m_unschedulable;
                    bool m_unschedulableHasBeenSet;

                    /**
                     * <p>删除保护开关</p>
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * <p>dockerd --graph 指定值, 默认为 /var/lib/docker</p>
                     */
                    std::string m_dockerGraphPath;
                    bool m_dockerGraphPathHasBeenSet;

                    /**
                     * <p>base64编码后的自定义脚本</p>
                     */
                    std::string m_preStartUserScript;
                    bool m_preStartUserScriptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERNODEPOOLREQUEST_H_
