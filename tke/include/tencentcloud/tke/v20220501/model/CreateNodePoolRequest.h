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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_CREATENODEPOOLREQUEST_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_CREATENODEPOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/Label.h>
#include <tencentcloud/tke/v20220501/model/Taint.h>
#include <tencentcloud/tke/v20220501/model/TagSpecification.h>
#include <tencentcloud/tke/v20220501/model/CreateNativeNodePoolParam.h>
#include <tencentcloud/tke/v20220501/model/Annotation.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * CreateNodePool请求参数结构体
                */
                class CreateNodePoolRequest : public AbstractModel
                {
                public:
                    CreateNodePoolRequest();
                    ~CreateNodePoolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群 ID
                     * @return ClusterId 集群 ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID
                     * @param _clusterId 集群 ID
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
                     * 获取节点池名称
                     * @return Name 节点池名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置节点池名称
                     * @param _name 节点池名称
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
                     * 获取节点池类型
                     * @return Type 节点池类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置节点池类型
                     * @param _type 节点池类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取节点  Labels
                     * @return Labels 节点  Labels
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置节点  Labels
                     * @param _labels 节点  Labels
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
                     * 获取节点污点
                     * @return Taints 节点污点
                     * 
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置节点污点
                     * @param _taints 节点污点
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
                     * 获取节点标签
                     * @return Tags 节点标签
                     * 
                     */
                    std::vector<TagSpecification> GetTags() const;

                    /**
                     * 设置节点标签
                     * @param _tags 节点标签
                     * 
                     */
                    void SetTags(const std::vector<TagSpecification>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取是否开启删除保护
                     * @return DeletionProtection 是否开启删除保护
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置是否开启删除保护
                     * @param _deletionProtection 是否开启删除保护
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
                     * 获取节点是否默认不可调度
                     * @return Unschedulable 节点是否默认不可调度
                     * 
                     */
                    bool GetUnschedulable() const;

                    /**
                     * 设置节点是否默认不可调度
                     * @param _unschedulable 节点是否默认不可调度
                     * 
                     */
                    void SetUnschedulable(const bool& _unschedulable);

                    /**
                     * 判断参数 Unschedulable 是否已赋值
                     * @return Unschedulable 是否已赋值
                     * 
                     */
                    bool UnschedulableHasBeenSet() const;

                    /**
                     * 获取原生节点池创建参数
                     * @return Native 原生节点池创建参数
                     * 
                     */
                    CreateNativeNodePoolParam GetNative() const;

                    /**
                     * 设置原生节点池创建参数
                     * @param _native 原生节点池创建参数
                     * 
                     */
                    void SetNative(const CreateNativeNodePoolParam& _native);

                    /**
                     * 判断参数 Native 是否已赋值
                     * @return Native 是否已赋值
                     * 
                     */
                    bool NativeHasBeenSet() const;

                    /**
                     * 获取节点 Annotation 列表
                     * @return Annotations 节点 Annotation 列表
                     * 
                     */
                    std::vector<Annotation> GetAnnotations() const;

                    /**
                     * 设置节点 Annotation 列表
                     * @param _annotations 节点 Annotation 列表
                     * 
                     */
                    void SetAnnotations(const std::vector<Annotation>& _annotations);

                    /**
                     * 判断参数 Annotations 是否已赋值
                     * @return Annotations 是否已赋值
                     * 
                     */
                    bool AnnotationsHasBeenSet() const;

                private:

                    /**
                     * 集群 ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 节点池名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 节点池类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 节点  Labels
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 节点污点
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * 节点标签
                     */
                    std::vector<TagSpecification> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 是否开启删除保护
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * 节点是否默认不可调度
                     */
                    bool m_unschedulable;
                    bool m_unschedulableHasBeenSet;

                    /**
                     * 原生节点池创建参数
                     */
                    CreateNativeNodePoolParam m_native;
                    bool m_nativeHasBeenSet;

                    /**
                     * 节点 Annotation 列表
                     */
                    std::vector<Annotation> m_annotations;
                    bool m_annotationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_CREATENODEPOOLREQUEST_H_
