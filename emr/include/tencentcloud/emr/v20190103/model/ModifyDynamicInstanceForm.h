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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYDYNAMICINSTANCEFORM_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYDYNAMICINSTANCEFORM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
#include <tencentcloud/emr/v20190103/model/CustomImage.h>
#include <tencentcloud/emr/v20190103/model/ImageInfoV2.h>
#include <tencentcloud/emr/v20190103/model/GooseFSVolume.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 更新DynamicInstance提交的表单数据
                */
                class ModifyDynamicInstanceForm : public AbstractModel
                {
                public:
                    ModifyDynamicInstanceForm();
                    ~ModifyDynamicInstanceForm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>更新作用域：<br>1：添加workerGroup（DynamicInstance级别）<br>2：更新存储配置（DynamicInstance级别）<br>3：更新标签配置（DynamicInstance级别）<br>4：更新高级配置（DynamicInstance级别）<br>5：更新PodCpu、PodMem（DynamicInstance-group级别）<br>6：更新PodNum、MinPodNum、MaxPodNum（DynamicInstance-group级别）<br>7：更新存储配置（DynamicInstance-group级别）<br>8：更新标签配置（DynamicInstance-group级别）</p>
                     * @return ModifyScope <p>更新作用域：<br>1：添加workerGroup（DynamicInstance级别）<br>2：更新存储配置（DynamicInstance级别）<br>3：更新标签配置（DynamicInstance级别）<br>4：更新高级配置（DynamicInstance级别）<br>5：更新PodCpu、PodMem（DynamicInstance-group级别）<br>6：更新PodNum、MinPodNum、MaxPodNum（DynamicInstance-group级别）<br>7：更新存储配置（DynamicInstance-group级别）<br>8：更新标签配置（DynamicInstance-group级别）</p>
                     * 
                     */
                    int64_t GetModifyScope() const;

                    /**
                     * 设置<p>更新作用域：<br>1：添加workerGroup（DynamicInstance级别）<br>2：更新存储配置（DynamicInstance级别）<br>3：更新标签配置（DynamicInstance级别）<br>4：更新高级配置（DynamicInstance级别）<br>5：更新PodCpu、PodMem（DynamicInstance-group级别）<br>6：更新PodNum、MinPodNum、MaxPodNum（DynamicInstance-group级别）<br>7：更新存储配置（DynamicInstance-group级别）<br>8：更新标签配置（DynamicInstance-group级别）</p>
                     * @param _modifyScope <p>更新作用域：<br>1：添加workerGroup（DynamicInstance级别）<br>2：更新存储配置（DynamicInstance级别）<br>3：更新标签配置（DynamicInstance级别）<br>4：更新高级配置（DynamicInstance级别）<br>5：更新PodCpu、PodMem（DynamicInstance-group级别）<br>6：更新PodNum、MinPodNum、MaxPodNum（DynamicInstance-group级别）<br>7：更新存储配置（DynamicInstance-group级别）<br>8：更新标签配置（DynamicInstance-group级别）</p>
                     * 
                     */
                    void SetModifyScope(const int64_t& _modifyScope);

                    /**
                     * 判断参数 ModifyScope 是否已赋值
                     * @return ModifyScope 是否已赋值
                     * 
                     */
                    bool ModifyScopeHasBeenSet() const;

                    /**
                     * 获取<p>添加的workerGroup信息</p>
                     * @return AddDynamicInstanceGroup <p>添加的workerGroup信息</p>
                     * 
                     */
                    DynamicInstanceGroup GetAddDynamicInstanceGroup() const;

                    /**
                     * 设置<p>添加的workerGroup信息</p>
                     * @param _addDynamicInstanceGroup <p>添加的workerGroup信息</p>
                     * 
                     */
                    void SetAddDynamicInstanceGroup(const DynamicInstanceGroup& _addDynamicInstanceGroup);

                    /**
                     * 判断参数 AddDynamicInstanceGroup 是否已赋值
                     * @return AddDynamicInstanceGroup 是否已赋值
                     * 
                     */
                    bool AddDynamicInstanceGroupHasBeenSet() const;

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
                     * 获取<p>cfs存储卷列表，不包含cfs turbo列表</p>
                     * @return CFSVolumes <p>cfs存储卷列表，不包含cfs turbo列表</p>
                     * 
                     */
                    std::vector<CFSVolume> GetCFSVolumes() const;

                    /**
                     * 设置<p>cfs存储卷列表，不包含cfs turbo列表</p>
                     * @param _cFSVolumes <p>cfs存储卷列表，不包含cfs turbo列表</p>
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
                     * 获取<p>是否生成新token鉴权</p>
                     * @return SupportNewToken <p>是否生成新token鉴权</p>
                     * 
                     */
                    bool GetSupportNewToken() const;

                    /**
                     * 设置<p>是否生成新token鉴权</p>
                     * @param _supportNewToken <p>是否生成新token鉴权</p>
                     * 
                     */
                    void SetSupportNewToken(const bool& _supportNewToken);

                    /**
                     * 判断参数 SupportNewToken 是否已赋值
                     * @return SupportNewToken 是否已赋值
                     * 
                     */
                    bool SupportNewTokenHasBeenSet() const;

                    /**
                     * 获取<p>DynamicInstance-group级别的更新信息</p>
                     * @return ModifyDynamicInstanceGroup <p>DynamicInstance-group级别的更新信息</p>
                     * 
                     */
                    DynamicInstanceGroup GetModifyDynamicInstanceGroup() const;

                    /**
                     * 设置<p>DynamicInstance-group级别的更新信息</p>
                     * @param _modifyDynamicInstanceGroup <p>DynamicInstance-group级别的更新信息</p>
                     * 
                     */
                    void SetModifyDynamicInstanceGroup(const DynamicInstanceGroup& _modifyDynamicInstanceGroup);

                    /**
                     * 判断参数 ModifyDynamicInstanceGroup 是否已赋值
                     * @return ModifyDynamicInstanceGroup 是否已赋值
                     * 
                     */
                    bool ModifyDynamicInstanceGroupHasBeenSet() const;

                    /**
                     * 获取<p>cfs turbo挂载列表，不包含标准版</p>
                     * @return CFSTurboVolumes <p>cfs turbo挂载列表，不包含标准版</p>
                     * 
                     */
                    std::vector<CFSTurboVolume> GetCFSTurboVolumes() const;

                    /**
                     * 设置<p>cfs turbo挂载列表，不包含标准版</p>
                     * @param _cFSTurboVolumes <p>cfs turbo挂载列表，不包含标准版</p>
                     * 
                     */
                    void SetCFSTurboVolumes(const std::vector<CFSTurboVolume>& _cFSTurboVolumes);

                    /**
                     * 判断参数 CFSTurboVolumes 是否已赋值
                     * @return CFSTurboVolumes 是否已赋值
                     * 
                     */
                    bool CFSTurboVolumesHasBeenSet() const;

                    /**
                     * 获取<p>自定义镜像</p>
                     * @return CustomImage <p>自定义镜像</p>
                     * 
                     */
                    CustomImage GetCustomImage() const;

                    /**
                     * 设置<p>自定义镜像</p>
                     * @param _customImage <p>自定义镜像</p>
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
                     * 获取<p>自定义镜像</p>
                     * @return ImageInfoV2 <p>自定义镜像</p>
                     * 
                     */
                    ImageInfoV2 GetImageInfoV2() const;

                    /**
                     * 设置<p>自定义镜像</p>
                     * @param _imageInfoV2 <p>自定义镜像</p>
                     * 
                     */
                    void SetImageInfoV2(const ImageInfoV2& _imageInfoV2);

                    /**
                     * 判断参数 ImageInfoV2 是否已赋值
                     * @return ImageInfoV2 是否已赋值
                     * 
                     */
                    bool ImageInfoV2HasBeenSet() const;

                    /**
                     * 获取<p>GooseFS盘</p>
                     * @return GooseFSVolumes <p>GooseFS盘</p>
                     * 
                     */
                    std::vector<GooseFSVolume> GetGooseFSVolumes() const;

                    /**
                     * 设置<p>GooseFS盘</p>
                     * @param _gooseFSVolumes <p>GooseFS盘</p>
                     * 
                     */
                    void SetGooseFSVolumes(const std::vector<GooseFSVolume>& _gooseFSVolumes);

                    /**
                     * 判断参数 GooseFSVolumes 是否已赋值
                     * @return GooseFSVolumes 是否已赋值
                     * 
                     */
                    bool GooseFSVolumesHasBeenSet() const;

                private:

                    /**
                     * <p>更新作用域：<br>1：添加workerGroup（DynamicInstance级别）<br>2：更新存储配置（DynamicInstance级别）<br>3：更新标签配置（DynamicInstance级别）<br>4：更新高级配置（DynamicInstance级别）<br>5：更新PodCpu、PodMem（DynamicInstance-group级别）<br>6：更新PodNum、MinPodNum、MaxPodNum（DynamicInstance-group级别）<br>7：更新存储配置（DynamicInstance-group级别）<br>8：更新标签配置（DynamicInstance-group级别）</p>
                     */
                    int64_t m_modifyScope;
                    bool m_modifyScopeHasBeenSet;

                    /**
                     * <p>添加的workerGroup信息</p>
                     */
                    DynamicInstanceGroup m_addDynamicInstanceGroup;
                    bool m_addDynamicInstanceGroupHasBeenSet;

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
                     * <p>cfs存储卷列表，不包含cfs turbo列表</p>
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
                     * <p>是否生成新token鉴权</p>
                     */
                    bool m_supportNewToken;
                    bool m_supportNewTokenHasBeenSet;

                    /**
                     * <p>DynamicInstance-group级别的更新信息</p>
                     */
                    DynamicInstanceGroup m_modifyDynamicInstanceGroup;
                    bool m_modifyDynamicInstanceGroupHasBeenSet;

                    /**
                     * <p>cfs turbo挂载列表，不包含标准版</p>
                     */
                    std::vector<CFSTurboVolume> m_cFSTurboVolumes;
                    bool m_cFSTurboVolumesHasBeenSet;

                    /**
                     * <p>自定义镜像</p>
                     */
                    CustomImage m_customImage;
                    bool m_customImageHasBeenSet;

                    /**
                     * <p>自定义镜像</p>
                     */
                    ImageInfoV2 m_imageInfoV2;
                    bool m_imageInfoV2HasBeenSet;

                    /**
                     * <p>GooseFS盘</p>
                     */
                    std::vector<GooseFSVolume> m_gooseFSVolumes;
                    bool m_gooseFSVolumesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYDYNAMICINSTANCEFORM_H_
