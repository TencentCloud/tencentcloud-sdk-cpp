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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DYNAMICINSTANCEFORM_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DYNAMICINSTANCEFORM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/CustomImage.h>
#include <tencentcloud/emr/v20190103/model/DynamicInstanceGroup.h>
#include <tencentcloud/emr/v20190103/model/CBSVolume.h>
#include <tencentcloud/emr/v20190103/model/CFSVolume.h>
#include <tencentcloud/emr/v20190103/model/COSVolume.h>
#include <tencentcloud/emr/v20190103/model/VolumeMount.h>
#include <tencentcloud/emr/v20190103/model/TkeLabel.h>
#include <tencentcloud/emr/v20190103/model/Toleration.h>
#include <tencentcloud/emr/v20190103/model/NameValue.h>
#include <tencentcloud/emr/v20190103/model/DependService.h>
#include <tencentcloud/emr/v20190103/model/CFSTurboVolume.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 创建DynamicInstance提交的表单数据
                */
                class DynamicInstanceForm : public AbstractModel
                {
                public:
                    DynamicInstanceForm();
                    ~DynamicInstanceForm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>DynamicInstance名，长度限制1-64字符，只能包含小写字母</p>
                     * @return DynamicInstanceName <p>DynamicInstance名，长度限制1-64字符，只能包含小写字母</p>
                     * 
                     */
                    std::string GetDynamicInstanceName() const;

                    /**
                     * 设置<p>DynamicInstance名，长度限制1-64字符，只能包含小写字母</p>
                     * @param _dynamicInstanceName <p>DynamicInstance名，长度限制1-64字符，只能包含小写字母</p>
                     * 
                     */
                    void SetDynamicInstanceName(const std::string& _dynamicInstanceName);

                    /**
                     * 判断参数 DynamicInstanceName 是否已赋值
                     * @return DynamicInstanceName 是否已赋值
                     * 
                     */
                    bool DynamicInstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>命名空间</p>
                     * @return Namespace <p>命名空间</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>命名空间</p>
                     * @param _namespace <p>命名空间</p>
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
                     * 获取<p>是否支持高可用</p>
                     * @return SupportHA <p>是否支持高可用</p>
                     * 
                     */
                    bool GetSupportHA() const;

                    /**
                     * 设置<p>是否支持高可用</p>
                     * @param _supportHA <p>是否支持高可用</p>
                     * 
                     */
                    void SetSupportHA(const bool& _supportHA);

                    /**
                     * 判断参数 SupportHA 是否已赋值
                     * @return SupportHA 是否已赋值
                     * 
                     */
                    bool SupportHAHasBeenSet() const;

                    /**
                     * 获取<p>自定义镜像信息</p>
                     * @return CustomImage <p>自定义镜像信息</p>
                     * 
                     */
                    CustomImage GetCustomImage() const;

                    /**
                     * 设置<p>自定义镜像信息</p>
                     * @param _customImage <p>自定义镜像信息</p>
                     * 
                     */
                    void SetCustomImage(const CustomImage& _customImage);

                    /**
                     * 判断参数 CustomImage 是否已赋值
                     * @return CustomImage 是否已赋值
                     * 
                     */
                    bool CustomImageHasBeenSet() const;

                    /**
                     * 获取<p>资源组配置</p>
                     * @return DynamicInstanceGroups <p>资源组配置</p>
                     * 
                     */
                    std::vector<DynamicInstanceGroup> GetDynamicInstanceGroups() const;

                    /**
                     * 设置<p>资源组配置</p>
                     * @param _dynamicInstanceGroups <p>资源组配置</p>
                     * 
                     */
                    void SetDynamicInstanceGroups(const std::vector<DynamicInstanceGroup>& _dynamicInstanceGroups);

                    /**
                     * 判断参数 DynamicInstanceGroups 是否已赋值
                     * @return DynamicInstanceGroups 是否已赋值
                     * 
                     */
                    bool DynamicInstanceGroupsHasBeenSet() const;

                    /**
                     * 获取<p>是否支持存储配置</p>
                     * @return SupportPV <p>是否支持存储配置</p>
                     * 
                     */
                    bool GetSupportPV() const;

                    /**
                     * 设置<p>是否支持存储配置</p>
                     * @param _supportPV <p>是否支持存储配置</p>
                     * 
                     */
                    void SetSupportPV(const bool& _supportPV);

                    /**
                     * 判断参数 SupportPV 是否已赋值
                     * @return SupportPV 是否已赋值
                     * 
                     */
                    bool SupportPVHasBeenSet() const;

                    /**
                     * 获取<p>cbs存储卷列表</p>
                     * @return CBSVolumes <p>cbs存储卷列表</p>
                     * 
                     */
                    std::vector<CBSVolume> GetCBSVolumes() const;

                    /**
                     * 设置<p>cbs存储卷列表</p>
                     * @param _cBSVolumes <p>cbs存储卷列表</p>
                     * 
                     */
                    void SetCBSVolumes(const std::vector<CBSVolume>& _cBSVolumes);

                    /**
                     * 判断参数 CBSVolumes 是否已赋值
                     * @return CBSVolumes 是否已赋值
                     * 
                     */
                    bool CBSVolumesHasBeenSet() const;

                    /**
                     * 获取<p>cfs存储卷列表，只包含cfs，不包含cfs turbo</p>
                     * @return CFSVolumes <p>cfs存储卷列表，只包含cfs，不包含cfs turbo</p>
                     * 
                     */
                    std::vector<CFSVolume> GetCFSVolumes() const;

                    /**
                     * 设置<p>cfs存储卷列表，只包含cfs，不包含cfs turbo</p>
                     * @param _cFSVolumes <p>cfs存储卷列表，只包含cfs，不包含cfs turbo</p>
                     * 
                     */
                    void SetCFSVolumes(const std::vector<CFSVolume>& _cFSVolumes);

                    /**
                     * 判断参数 CFSVolumes 是否已赋值
                     * @return CFSVolumes 是否已赋值
                     * 
                     */
                    bool CFSVolumesHasBeenSet() const;

                    /**
                     * 获取<p>cos存储卷列表</p>
                     * @return COSVolumes <p>cos存储卷列表</p>
                     * 
                     */
                    std::vector<COSVolume> GetCOSVolumes() const;

                    /**
                     * 设置<p>cos存储卷列表</p>
                     * @param _cOSVolumes <p>cos存储卷列表</p>
                     * 
                     */
                    void SetCOSVolumes(const std::vector<COSVolume>& _cOSVolumes);

                    /**
                     * 判断参数 COSVolumes 是否已赋值
                     * @return COSVolumes 是否已赋值
                     * 
                     */
                    bool COSVolumesHasBeenSet() const;

                    /**
                     * 获取<p>挂载卷列表</p>
                     * @return VolumeMounts <p>挂载卷列表</p>
                     * 
                     */
                    std::vector<VolumeMount> GetVolumeMounts() const;

                    /**
                     * 设置<p>挂载卷列表</p>
                     * @param _volumeMounts <p>挂载卷列表</p>
                     * 
                     */
                    void SetVolumeMounts(const std::vector<VolumeMount>& _volumeMounts);

                    /**
                     * 判断参数 VolumeMounts 是否已赋值
                     * @return VolumeMounts 是否已赋值
                     * 
                     */
                    bool VolumeMountsHasBeenSet() const;

                    /**
                     * 获取<p>pod标签</p>
                     * @return Labels <p>pod标签</p>
                     * 
                     */
                    std::vector<TkeLabel> GetLabels() const;

                    /**
                     * 设置<p>pod标签</p>
                     * @param _labels <p>pod标签</p>
                     * 
                     */
                    void SetLabels(const std::vector<TkeLabel>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<p>Tolerations定义</p>
                     * @return Tolerations <p>Tolerations定义</p>
                     * 
                     */
                    std::vector<Toleration> GetTolerations() const;

                    /**
                     * 设置<p>Tolerations定义</p>
                     * @param _tolerations <p>Tolerations定义</p>
                     * 
                     */
                    void SetTolerations(const std::vector<Toleration>& _tolerations);

                    /**
                     * 判断参数 Tolerations 是否已赋值
                     * @return Tolerations 是否已赋值
                     * 
                     */
                    bool TolerationsHasBeenSet() const;

                    /**
                     * 获取<p>环境变量</p>
                     * @return Envs <p>环境变量</p>
                     * 
                     */
                    std::vector<NameValue> GetEnvs() const;

                    /**
                     * 设置<p>环境变量</p>
                     * @param _envs <p>环境变量</p>
                     * 
                     */
                    void SetEnvs(const std::vector<NameValue>& _envs);

                    /**
                     * 判断参数 Envs 是否已赋值
                     * @return Envs 是否已赋值
                     * 
                     */
                    bool EnvsHasBeenSet() const;

                    /**
                     * 获取<p>依赖外部组件</p>
                     * @return DependServices <p>依赖外部组件</p>
                     * 
                     */
                    std::vector<DependService> GetDependServices() const;

                    /**
                     * 设置<p>依赖外部组件</p>
                     * @param _dependServices <p>依赖外部组件</p>
                     * 
                     */
                    void SetDependServices(const std::vector<DependService>& _dependServices);

                    /**
                     * 判断参数 DependServices 是否已赋值
                     * @return DependServices 是否已赋值
                     * 
                     */
                    bool DependServicesHasBeenSet() const;

                    /**
                     * 获取<p>是否开启token鉴权</p>
                     * @return SupportToken <p>是否开启token鉴权</p>
                     * 
                     */
                    bool GetSupportToken() const;

                    /**
                     * 设置<p>是否开启token鉴权</p>
                     * @param _supportToken <p>是否开启token鉴权</p>
                     * 
                     */
                    void SetSupportToken(const bool& _supportToken);

                    /**
                     * 判断参数 SupportToken 是否已赋值
                     * @return SupportToken 是否已赋值
                     * 
                     */
                    bool SupportTokenHasBeenSet() const;

                    /**
                     * 获取<p>cfs trubo挂载列表，不包含标准版cfs</p>
                     * @return CFSTurboVolumes <p>cfs trubo挂载列表，不包含标准版cfs</p>
                     * 
                     */
                    std::vector<CFSTurboVolume> GetCFSTurboVolumes() const;

                    /**
                     * 设置<p>cfs trubo挂载列表，不包含标准版cfs</p>
                     * @param _cFSTurboVolumes <p>cfs trubo挂载列表，不包含标准版cfs</p>
                     * 
                     */
                    void SetCFSTurboVolumes(const std::vector<CFSTurboVolume>& _cFSTurboVolumes);

                    /**
                     * 判断参数 CFSTurboVolumes 是否已赋值
                     * @return CFSTurboVolumes 是否已赋值
                     * 
                     */
                    bool CFSTurboVolumesHasBeenSet() const;

                private:

                    /**
                     * <p>DynamicInstance名，长度限制1-64字符，只能包含小写字母</p>
                     */
                    std::string m_dynamicInstanceName;
                    bool m_dynamicInstanceNameHasBeenSet;

                    /**
                     * <p>命名空间</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>是否支持高可用</p>
                     */
                    bool m_supportHA;
                    bool m_supportHAHasBeenSet;

                    /**
                     * <p>自定义镜像信息</p>
                     */
                    CustomImage m_customImage;
                    bool m_customImageHasBeenSet;

                    /**
                     * <p>资源组配置</p>
                     */
                    std::vector<DynamicInstanceGroup> m_dynamicInstanceGroups;
                    bool m_dynamicInstanceGroupsHasBeenSet;

                    /**
                     * <p>是否支持存储配置</p>
                     */
                    bool m_supportPV;
                    bool m_supportPVHasBeenSet;

                    /**
                     * <p>cbs存储卷列表</p>
                     */
                    std::vector<CBSVolume> m_cBSVolumes;
                    bool m_cBSVolumesHasBeenSet;

                    /**
                     * <p>cfs存储卷列表，只包含cfs，不包含cfs turbo</p>
                     */
                    std::vector<CFSVolume> m_cFSVolumes;
                    bool m_cFSVolumesHasBeenSet;

                    /**
                     * <p>cos存储卷列表</p>
                     */
                    std::vector<COSVolume> m_cOSVolumes;
                    bool m_cOSVolumesHasBeenSet;

                    /**
                     * <p>挂载卷列表</p>
                     */
                    std::vector<VolumeMount> m_volumeMounts;
                    bool m_volumeMountsHasBeenSet;

                    /**
                     * <p>pod标签</p>
                     */
                    std::vector<TkeLabel> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>Tolerations定义</p>
                     */
                    std::vector<Toleration> m_tolerations;
                    bool m_tolerationsHasBeenSet;

                    /**
                     * <p>环境变量</p>
                     */
                    std::vector<NameValue> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * <p>依赖外部组件</p>
                     */
                    std::vector<DependService> m_dependServices;
                    bool m_dependServicesHasBeenSet;

                    /**
                     * <p>是否开启token鉴权</p>
                     */
                    bool m_supportToken;
                    bool m_supportTokenHasBeenSet;

                    /**
                     * <p>cfs trubo挂载列表，不包含标准版cfs</p>
                     */
                    std::vector<CFSTurboVolume> m_cFSTurboVolumes;
                    bool m_cFSTurboVolumesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DYNAMICINSTANCEFORM_H_
