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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEADVANCEDSETTINGS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEADVANCEDSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/GPUArgs.h>
#include <tencentcloud/tke/v20180525/model/Taint.h>
#include <tencentcloud/tke/v20180525/model/Label.h>
#include <tencentcloud/tke/v20180525/model/DataDisk.h>
#include <tencentcloud/tke/v20180525/model/InstanceExtraArgs.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 描述了k8s集群相关配置与信息。
                */
                class InstanceAdvancedSettings : public AbstractModel
                {
                public:
                    InstanceAdvancedSettings();
                    ~InstanceAdvancedSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该节点属于podCIDR大小自定义模式时，可指定节点上运行的pod数量上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DesiredPodNumber 该节点属于podCIDR大小自定义模式时，可指定节点上运行的pod数量上限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDesiredPodNumber() const;

                    /**
                     * 设置该节点属于podCIDR大小自定义模式时，可指定节点上运行的pod数量上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _desiredPodNumber 该节点属于podCIDR大小自定义模式时，可指定节点上运行的pod数量上限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDesiredPodNumber(const int64_t& _desiredPodNumber);

                    /**
                     * 判断参数 DesiredPodNumber 是否已赋值
                     * @return DesiredPodNumber 是否已赋值
                     * 
                     */
                    bool DesiredPodNumberHasBeenSet() const;

                    /**
                     * 获取GPU驱动相关参数,相关的GPU参数获取:https://cloud.tencent.com/document/api/213/15715
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GPUArgs GPU驱动相关参数,相关的GPU参数获取:https://cloud.tencent.com/document/api/213/15715
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GPUArgs GetGPUArgs() const;

                    /**
                     * 设置GPU驱动相关参数,相关的GPU参数获取:https://cloud.tencent.com/document/api/213/15715
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gPUArgs GPU驱动相关参数,相关的GPU参数获取:https://cloud.tencent.com/document/api/213/15715
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取base64 编码的用户脚本，在初始化节点之前执行，目前只对添加已有节点生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PreStartUserScript base64 编码的用户脚本，在初始化节点之前执行，目前只对添加已有节点生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPreStartUserScript() const;

                    /**
                     * 设置base64 编码的用户脚本，在初始化节点之前执行，目前只对添加已有节点生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _preStartUserScript base64 编码的用户脚本，在初始化节点之前执行，目前只对添加已有节点生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPreStartUserScript(const std::string& _preStartUserScript);

                    /**
                     * 判断参数 PreStartUserScript 是否已赋值
                     * @return PreStartUserScript 是否已赋值
                     * 
                     */
                    bool PreStartUserScriptHasBeenSet() const;

                    /**
                     * 获取节点污点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Taints 节点污点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置节点污点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taints 节点污点
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数据盘挂载点, 默认不挂载数据盘. 已格式化的 ext3，ext4，xfs 文件系统的数据盘将直接挂载，其他文件系统或未格式化的数据盘将自动格式化为ext4 (tlinux系统格式化成xfs)并挂载，请注意备份数据! 无数据盘或有多块数据盘的云主机此设置不生效。
注意，注意，多盘场景请使用下方的DataDisks数据结构，设置对应的云盘类型、云盘大小、挂载路径、是否格式化等信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MountTarget 数据盘挂载点, 默认不挂载数据盘. 已格式化的 ext3，ext4，xfs 文件系统的数据盘将直接挂载，其他文件系统或未格式化的数据盘将自动格式化为ext4 (tlinux系统格式化成xfs)并挂载，请注意备份数据! 无数据盘或有多块数据盘的云主机此设置不生效。
注意，注意，多盘场景请使用下方的DataDisks数据结构，设置对应的云盘类型、云盘大小、挂载路径、是否格式化等信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMountTarget() const;

                    /**
                     * 设置数据盘挂载点, 默认不挂载数据盘. 已格式化的 ext3，ext4，xfs 文件系统的数据盘将直接挂载，其他文件系统或未格式化的数据盘将自动格式化为ext4 (tlinux系统格式化成xfs)并挂载，请注意备份数据! 无数据盘或有多块数据盘的云主机此设置不生效。
注意，注意，多盘场景请使用下方的DataDisks数据结构，设置对应的云盘类型、云盘大小、挂载路径、是否格式化等信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mountTarget 数据盘挂载点, 默认不挂载数据盘. 已格式化的 ext3，ext4，xfs 文件系统的数据盘将直接挂载，其他文件系统或未格式化的数据盘将自动格式化为ext4 (tlinux系统格式化成xfs)并挂载，请注意备份数据! 无数据盘或有多块数据盘的云主机此设置不生效。
注意，注意，多盘场景请使用下方的DataDisks数据结构，设置对应的云盘类型、云盘大小、挂载路径、是否格式化等信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMountTarget(const std::string& _mountTarget);

                    /**
                     * 判断参数 MountTarget 是否已赋值
                     * @return MountTarget 是否已赋值
                     * 
                     */
                    bool MountTargetHasBeenSet() const;

                    /**
                     * 获取dockerd --graph 指定值, 默认为 /var/lib/docker
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DockerGraphPath dockerd --graph 指定值, 默认为 /var/lib/docker
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDockerGraphPath() const;

                    /**
                     * 设置dockerd --graph 指定值, 默认为 /var/lib/docker
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dockerGraphPath dockerd --graph 指定值, 默认为 /var/lib/docker
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取base64 编码的用户脚本, 此脚本会在 k8s 组件运行后执行, 需要用户保证脚本的可重入及重试逻辑, 脚本及其生成的日志文件可在节点的 /data/ccs_userscript/ 路径查看, 如果要求节点需要在进行初始化完成后才可加入调度, 可配合 unschedulable 参数使用, 在 userScript 最后初始化完成后, 添加 kubectl uncordon nodename --kubeconfig=/root/.kube/config 命令使节点加入调度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserScript base64 编码的用户脚本, 此脚本会在 k8s 组件运行后执行, 需要用户保证脚本的可重入及重试逻辑, 脚本及其生成的日志文件可在节点的 /data/ccs_userscript/ 路径查看, 如果要求节点需要在进行初始化完成后才可加入调度, 可配合 unschedulable 参数使用, 在 userScript 最后初始化完成后, 添加 kubectl uncordon nodename --kubeconfig=/root/.kube/config 命令使节点加入调度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserScript() const;

                    /**
                     * 设置base64 编码的用户脚本, 此脚本会在 k8s 组件运行后执行, 需要用户保证脚本的可重入及重试逻辑, 脚本及其生成的日志文件可在节点的 /data/ccs_userscript/ 路径查看, 如果要求节点需要在进行初始化完成后才可加入调度, 可配合 unschedulable 参数使用, 在 userScript 最后初始化完成后, 添加 kubectl uncordon nodename --kubeconfig=/root/.kube/config 命令使节点加入调度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userScript base64 编码的用户脚本, 此脚本会在 k8s 组件运行后执行, 需要用户保证脚本的可重入及重试逻辑, 脚本及其生成的日志文件可在节点的 /data/ccs_userscript/ 路径查看, 如果要求节点需要在进行初始化完成后才可加入调度, 可配合 unschedulable 参数使用, 在 userScript 最后初始化完成后, 添加 kubectl uncordon nodename --kubeconfig=/root/.kube/config 命令使节点加入调度
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取设置加入的节点是否参与调度，默认值为0，表示参与调度；非0表示不参与调度, 待节点初始化完成之后, 可执行kubectl uncordon nodename使node加入调度.
                     * @return Unschedulable 设置加入的节点是否参与调度，默认值为0，表示参与调度；非0表示不参与调度, 待节点初始化完成之后, 可执行kubectl uncordon nodename使node加入调度.
                     * 
                     */
                    int64_t GetUnschedulable() const;

                    /**
                     * 设置设置加入的节点是否参与调度，默认值为0，表示参与调度；非0表示不参与调度, 待节点初始化完成之后, 可执行kubectl uncordon nodename使node加入调度.
                     * @param _unschedulable 设置加入的节点是否参与调度，默认值为0，表示参与调度；非0表示不参与调度, 待节点初始化完成之后, 可执行kubectl uncordon nodename使node加入调度.
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
                     * 获取节点Label数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels 节点Label数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置节点Label数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labels 节点Label数组
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取多盘数据盘挂载信息：新建节点时请确保购买CVM的参数传递了购买多个数据盘的信息，如CreateClusterInstances API的RunInstancesPara下的DataDisks也需要设置购买多个数据盘, 具体可以参考CreateClusterInstances接口的添加集群节点(多块数据盘)样例；添加已有节点时，请确保填写的分区信息在节点上真实存在
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataDisks 多盘数据盘挂载信息：新建节点时请确保购买CVM的参数传递了购买多个数据盘的信息，如CreateClusterInstances API的RunInstancesPara下的DataDisks也需要设置购买多个数据盘, 具体可以参考CreateClusterInstances接口的添加集群节点(多块数据盘)样例；添加已有节点时，请确保填写的分区信息在节点上真实存在
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置多盘数据盘挂载信息：新建节点时请确保购买CVM的参数传递了购买多个数据盘的信息，如CreateClusterInstances API的RunInstancesPara下的DataDisks也需要设置购买多个数据盘, 具体可以参考CreateClusterInstances接口的添加集群节点(多块数据盘)样例；添加已有节点时，请确保填写的分区信息在节点上真实存在
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataDisks 多盘数据盘挂载信息：新建节点时请确保购买CVM的参数传递了购买多个数据盘的信息，如CreateClusterInstances API的RunInstancesPara下的DataDisks也需要设置购买多个数据盘, 具体可以参考CreateClusterInstances接口的添加集群节点(多块数据盘)样例；添加已有节点时，请确保填写的分区信息在节点上真实存在
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取节点相关的自定义参数信息
                     * @return ExtraArgs 节点相关的自定义参数信息
                     * 
                     */
                    InstanceExtraArgs GetExtraArgs() const;

                    /**
                     * 设置节点相关的自定义参数信息
                     * @param _extraArgs 节点相关的自定义参数信息
                     * 
                     */
                    void SetExtraArgs(const InstanceExtraArgs& _extraArgs);

                    /**
                     * 判断参数 ExtraArgs 是否已赋值
                     * @return ExtraArgs 是否已赋值
                     * 
                     */
                    bool ExtraArgsHasBeenSet() const;

                private:

                    /**
                     * 该节点属于podCIDR大小自定义模式时，可指定节点上运行的pod数量上限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_desiredPodNumber;
                    bool m_desiredPodNumberHasBeenSet;

                    /**
                     * GPU驱动相关参数,相关的GPU参数获取:https://cloud.tencent.com/document/api/213/15715
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GPUArgs m_gPUArgs;
                    bool m_gPUArgsHasBeenSet;

                    /**
                     * base64 编码的用户脚本，在初始化节点之前执行，目前只对添加已有节点生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_preStartUserScript;
                    bool m_preStartUserScriptHasBeenSet;

                    /**
                     * 节点污点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * 数据盘挂载点, 默认不挂载数据盘. 已格式化的 ext3，ext4，xfs 文件系统的数据盘将直接挂载，其他文件系统或未格式化的数据盘将自动格式化为ext4 (tlinux系统格式化成xfs)并挂载，请注意备份数据! 无数据盘或有多块数据盘的云主机此设置不生效。
注意，注意，多盘场景请使用下方的DataDisks数据结构，设置对应的云盘类型、云盘大小、挂载路径、是否格式化等信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mountTarget;
                    bool m_mountTargetHasBeenSet;

                    /**
                     * dockerd --graph 指定值, 默认为 /var/lib/docker
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dockerGraphPath;
                    bool m_dockerGraphPathHasBeenSet;

                    /**
                     * base64 编码的用户脚本, 此脚本会在 k8s 组件运行后执行, 需要用户保证脚本的可重入及重试逻辑, 脚本及其生成的日志文件可在节点的 /data/ccs_userscript/ 路径查看, 如果要求节点需要在进行初始化完成后才可加入调度, 可配合 unschedulable 参数使用, 在 userScript 最后初始化完成后, 添加 kubectl uncordon nodename --kubeconfig=/root/.kube/config 命令使节点加入调度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userScript;
                    bool m_userScriptHasBeenSet;

                    /**
                     * 设置加入的节点是否参与调度，默认值为0，表示参与调度；非0表示不参与调度, 待节点初始化完成之后, 可执行kubectl uncordon nodename使node加入调度.
                     */
                    int64_t m_unschedulable;
                    bool m_unschedulableHasBeenSet;

                    /**
                     * 节点Label数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 多盘数据盘挂载信息：新建节点时请确保购买CVM的参数传递了购买多个数据盘的信息，如CreateClusterInstances API的RunInstancesPara下的DataDisks也需要设置购买多个数据盘, 具体可以参考CreateClusterInstances接口的添加集群节点(多块数据盘)样例；添加已有节点时，请确保填写的分区信息在节点上真实存在
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * 节点相关的自定义参数信息
                     */
                    InstanceExtraArgs m_extraArgs;
                    bool m_extraArgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEADVANCEDSETTINGS_H_
