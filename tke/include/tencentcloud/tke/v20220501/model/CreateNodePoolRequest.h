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
                     * 获取<p>集群 ID</p>
                     * @return ClusterId <p>集群 ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群 ID</p>
                     * @param _clusterId <p>集群 ID</p>
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
                     * 获取<p>节点池名称</p>
                     * @return Name <p>节点池名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>节点池名称</p>
                     * @param _name <p>节点池名称</p>
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
                     * 获取<p>节点池类型</p>
                     * @return Type <p>节点池类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>节点池类型</p>
                     * @param _type <p>节点池类型</p>
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
                     * 获取<p>节点  Labels</p>
                     * @return Labels <p>节点  Labels</p>
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置<p>节点  Labels</p>
                     * @param _labels <p>节点  Labels</p>
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
                     * 获取<p>节点污点</p>
                     * @return Taints <p>节点污点</p>
                     * 
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置<p>节点污点</p>
                     * @param _taints <p>节点污点</p>
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
                     * 获取<p>节点标签</p>
                     * @return Tags <p>节点标签</p>
                     * 
                     */
                    std::vector<TagSpecification> GetTags() const;

                    /**
                     * 设置<p>节点标签</p>
                     * @param _tags <p>节点标签</p>
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
                     * 获取<p>是否开启删除保护</p>
                     * @return DeletionProtection <p>是否开启删除保护</p>
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置<p>是否开启删除保护</p>
                     * @param _deletionProtection <p>是否开启删除保护</p>
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
                     * 获取<p>节点是否默认不可调度</p>
                     * @return Unschedulable <p>节点是否默认不可调度</p>
                     * 
                     */
                    bool GetUnschedulable() const;

                    /**
                     * 设置<p>节点是否默认不可调度</p>
                     * @param _unschedulable <p>节点是否默认不可调度</p>
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
                     * 获取<p>原生节点池创建参数（Type字段设置为Native时需填写）</p>
                     * @return Native <p>原生节点池创建参数（Type字段设置为Native时需填写）</p>
                     * 
                     */
                    CreateNativeNodePoolParam GetNative() const;

                    /**
                     * 设置<p>原生节点池创建参数（Type字段设置为Native时需填写）</p>
                     * @param _native <p>原生节点池创建参数（Type字段设置为Native时需填写）</p>
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
                     * 获取<p>节点 Annotation 列表</p>
                     * @return Annotations <p>节点 Annotation 列表</p>
                     * 
                     */
                    std::vector<Annotation> GetAnnotations() const;

                    /**
                     * 设置<p>节点 Annotation 列表</p>
                     * @param _annotations <p>节点 Annotation 列表</p>
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
                     * <p>集群 ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>节点池名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>节点池类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>节点  Labels</p>
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>节点污点</p>
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * <p>节点标签</p>
                     */
                    std::vector<TagSpecification> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>是否开启删除保护</p>
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * <p>节点是否默认不可调度</p>
                     */
                    bool m_unschedulable;
                    bool m_unschedulableHasBeenSet;

                    /**
                     * <p>原生节点池创建参数（Type字段设置为Native时需填写）</p>
                     */
                    CreateNativeNodePoolParam m_native;
                    bool m_nativeHasBeenSet;

                    /**
                     * <p>节点 Annotation 列表</p>
                     */
                    std::vector<Annotation> m_annotations;
                    bool m_annotationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_CREATENODEPOOLREQUEST_H_
