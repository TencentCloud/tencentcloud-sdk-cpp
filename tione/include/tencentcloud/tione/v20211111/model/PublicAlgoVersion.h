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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_PUBLICALGOVERSION_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_PUBLICALGOVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ImageInfo.h>
#include <tencentcloud/tione/v20211111/model/MaterialInfo.h>
#include <tencentcloud/tione/v20211111/model/ResourceSpec.h>
#include <tencentcloud/tione/v20211111/model/TrainParam.h>
#include <tencentcloud/tione/v20211111/model/DeviceImageInfo.h>
#include <tencentcloud/tione/v20211111/model/DeviceMaterialInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 公共算法版本信息
                */
                class PublicAlgoVersion : public AbstractModel
                {
                public:
                    PublicAlgoVersion();
                    ~PublicAlgoVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公共算法版本Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicAlgoVersionId 公共算法版本Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicAlgoVersionId() const;

                    /**
                     * 设置公共算法版本Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicAlgoVersionId 公共算法版本Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicAlgoVersionId(const std::string& _publicAlgoVersionId);

                    /**
                     * 判断参数 PublicAlgoVersionId 是否已赋值
                     * @return PublicAlgoVersionId 是否已赋值
                     * 
                     */
                    bool PublicAlgoVersionIdHasBeenSet() const;

                    /**
                     * 获取对应的公共算法组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicAlgoGroupId 对应的公共算法组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicAlgoGroupId() const;

                    /**
                     * 设置对应的公共算法组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicAlgoGroupId 对应的公共算法组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicAlgoGroupId(const std::string& _publicAlgoGroupId);

                    /**
                     * 判断参数 PublicAlgoGroupId 是否已赋值
                     * @return PublicAlgoGroupId 是否已赋值
                     * 
                     */
                    bool PublicAlgoGroupIdHasBeenSet() const;

                    /**
                     * 获取版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取模型简介
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Introduction 模型简介
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIntroduction() const;

                    /**
                     * 设置模型简介
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _introduction 模型简介
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntroduction(const std::string& _introduction);

                    /**
                     * 判断参数 Introduction 是否已赋值
                     * @return Introduction 是否已赋值
                     * 
                     */
                    bool IntroductionHasBeenSet() const;

                    /**
                     * 获取预览信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PreviewInfo 预览信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPreviewInfo() const;

                    /**
                     * 设置预览信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _previewInfo 预览信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPreviewInfo(const std::string& _previewInfo);

                    /**
                     * 判断参数 PreviewInfo 是否已赋值
                     * @return PreviewInfo 是否已赋值
                     * 
                     */
                    bool PreviewInfoHasBeenSet() const;

                    /**
                     * 获取预置训练镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PresetTrainImageInfo 预置训练镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageInfo GetPresetTrainImageInfo() const;

                    /**
                     * 设置预置训练镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _presetTrainImageInfo 预置训练镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPresetTrainImageInfo(const ImageInfo& _presetTrainImageInfo);

                    /**
                     * 判断参数 PresetTrainImageInfo 是否已赋值
                     * @return PresetTrainImageInfo 是否已赋值
                     * 
                     */
                    bool PresetTrainImageInfoHasBeenSet() const;

                    /**
                     * 获取预置训练代码信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PresetTrainCodeInfo 预置训练代码信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MaterialInfo GetPresetTrainCodeInfo() const;

                    /**
                     * 设置预置训练代码信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _presetTrainCodeInfo 预置训练代码信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPresetTrainCodeInfo(const MaterialInfo& _presetTrainCodeInfo);

                    /**
                     * 判断参数 PresetTrainCodeInfo 是否已赋值
                     * @return PresetTrainCodeInfo 是否已赋值
                     * 
                     */
                    bool PresetTrainCodeInfoHasBeenSet() const;

                    /**
                     * 获取预置模型信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PresetModelInfo 预置模型信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MaterialInfo GetPresetModelInfo() const;

                    /**
                     * 设置预置模型信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _presetModelInfo 预置模型信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPresetModelInfo(const MaterialInfo& _presetModelInfo);

                    /**
                     * 判断参数 PresetModelInfo 是否已赋值
                     * @return PresetModelInfo 是否已赋值
                     * 
                     */
                    bool PresetModelInfoHasBeenSet() const;

                    /**
                     * 获取是否已经被导入到我的算法
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsImported 是否已经被导入到我的算法
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsImported() const;

                    /**
                     * 设置是否已经被导入到我的算法
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isImported 是否已经被导入到我的算法
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsImported(const bool& _isImported);

                    /**
                     * 判断参数 IsImported 是否已赋值
                     * @return IsImported 是否已赋值
                     * 
                     */
                    bool IsImportedHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取默认训练资源规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultResourceSpec 默认训练资源规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResourceSpec GetDefaultResourceSpec() const;

                    /**
                     * 设置默认训练资源规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultResourceSpec 默认训练资源规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefaultResourceSpec(const ResourceSpec& _defaultResourceSpec);

                    /**
                     * 判断参数 DefaultResourceSpec 是否已赋值
                     * @return DefaultResourceSpec 是否已赋值
                     * 
                     */
                    bool DefaultResourceSpecHasBeenSet() const;

                    /**
                     * 获取默认推理资源规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultInferenceResourceSpec 默认推理资源规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResourceSpec GetDefaultInferenceResourceSpec() const;

                    /**
                     * 设置默认推理资源规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultInferenceResourceSpec 默认推理资源规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefaultInferenceResourceSpec(const ResourceSpec& _defaultInferenceResourceSpec);

                    /**
                     * 判断参数 DefaultInferenceResourceSpec 是否已赋值
                     * @return DefaultInferenceResourceSpec 是否已赋值
                     * 
                     */
                    bool DefaultInferenceResourceSpecHasBeenSet() const;

                    /**
                     * 获取是否支持直接部署推理服务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportDeploy 是否支持直接部署推理服务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSupportDeploy() const;

                    /**
                     * 设置是否支持直接部署推理服务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportDeploy 是否支持直接部署推理服务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSupportDeploy(const bool& _supportDeploy);

                    /**
                     * 判断参数 SupportDeploy 是否已赋值
                     * @return SupportDeploy 是否已赋值
                     * 
                     */
                    bool SupportDeployHasBeenSet() const;

                    /**
                     * 获取内置训练数据集
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PresetTrainDataset 内置训练数据集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MaterialInfo GetPresetTrainDataset() const;

                    /**
                     * 设置内置训练数据集
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _presetTrainDataset 内置训练数据集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPresetTrainDataset(const MaterialInfo& _presetTrainDataset);

                    /**
                     * 判断参数 PresetTrainDataset 是否已赋值
                     * @return PresetTrainDataset 是否已赋值
                     * 
                     */
                    bool PresetTrainDatasetHasBeenSet() const;

                    /**
                     * 获取训练代码包下载路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainCodeDownloadUrl 训练代码包下载路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrainCodeDownloadUrl() const;

                    /**
                     * 设置训练代码包下载路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trainCodeDownloadUrl 训练代码包下载路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrainCodeDownloadUrl(const std::string& _trainCodeDownloadUrl);

                    /**
                     * 判断参数 TrainCodeDownloadUrl 是否已赋值
                     * @return TrainCodeDownloadUrl 是否已赋值
                     * 
                     */
                    bool TrainCodeDownloadUrlHasBeenSet() const;

                    /**
                     * 获取内置数据下载路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainDataDownloadUrl 内置数据下载路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrainDataDownloadUrl() const;

                    /**
                     * 设置内置数据下载路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trainDataDownloadUrl 内置数据下载路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrainDataDownloadUrl(const std::string& _trainDataDownloadUrl);

                    /**
                     * 判断参数 TrainDataDownloadUrl 是否已赋值
                     * @return TrainDataDownloadUrl 是否已赋值
                     * 
                     */
                    bool TrainDataDownloadUrlHasBeenSet() const;

                    /**
                     * 获取训练参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainParams 训练参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TrainParam> GetTrainParams() const;

                    /**
                     * 设置训练参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trainParams 训练参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrainParams(const std::vector<TrainParam>& _trainParams);

                    /**
                     * 判断参数 TrainParams 是否已赋值
                     * @return TrainParams 是否已赋值
                     * 
                     */
                    bool TrainParamsHasBeenSet() const;

                    /**
                     * 获取训练启动命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PresetTrainCodeStartCmd 训练启动命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPresetTrainCodeStartCmd() const;

                    /**
                     * 设置训练启动命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _presetTrainCodeStartCmd 训练启动命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPresetTrainCodeStartCmd(const std::string& _presetTrainCodeStartCmd);

                    /**
                     * 判断参数 PresetTrainCodeStartCmd 是否已赋值
                     * @return PresetTrainCodeStartCmd 是否已赋值
                     * 
                     */
                    bool PresetTrainCodeStartCmdHasBeenSet() const;

                    /**
                     * 获取是否非公开模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsPrivateModel 是否非公开模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsPrivateModel() const;

                    /**
                     * 设置是否非公开模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isPrivateModel 是否非公开模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsPrivateModel(const bool& _isPrivateModel);

                    /**
                     * 判断参数 IsPrivateModel 是否已赋值
                     * @return IsPrivateModel 是否已赋值
                     * 
                     */
                    bool IsPrivateModelHasBeenSet() const;

                    /**
                     * 获取各种设备下的训练镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PresetTrainImageInfoList 各种设备下的训练镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DeviceImageInfo> GetPresetTrainImageInfoList() const;

                    /**
                     * 设置各种设备下的训练镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _presetTrainImageInfoList 各种设备下的训练镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPresetTrainImageInfoList(const std::vector<DeviceImageInfo>& _presetTrainImageInfoList);

                    /**
                     * 判断参数 PresetTrainImageInfoList 是否已赋值
                     * @return PresetTrainImageInfoList 是否已赋值
                     * 
                     */
                    bool PresetTrainImageInfoListHasBeenSet() const;

                    /**
                     * 获取各种设备下的推理镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PresetInferenceImageInfoList 各种设备下的推理镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DeviceImageInfo> GetPresetInferenceImageInfoList() const;

                    /**
                     * 设置各种设备下的推理镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _presetInferenceImageInfoList 各种设备下的推理镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPresetInferenceImageInfoList(const std::vector<DeviceImageInfo>& _presetInferenceImageInfoList);

                    /**
                     * 判断参数 PresetInferenceImageInfoList 是否已赋值
                     * @return PresetInferenceImageInfoList 是否已赋值
                     * 
                     */
                    bool PresetInferenceImageInfoListHasBeenSet() const;

                    /**
                     * 获取各种设备下的训练代码信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PresetTrainCodeInfoList 各种设备下的训练代码信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DeviceMaterialInfo> GetPresetTrainCodeInfoList() const;

                    /**
                     * 设置各种设备下的训练代码信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _presetTrainCodeInfoList 各种设备下的训练代码信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPresetTrainCodeInfoList(const std::vector<DeviceMaterialInfo>& _presetTrainCodeInfoList);

                    /**
                     * 判断参数 PresetTrainCodeInfoList 是否已赋值
                     * @return PresetTrainCodeInfoList 是否已赋值
                     * 
                     */
                    bool PresetTrainCodeInfoListHasBeenSet() const;

                    /**
                     * 获取各种设备下的内置模型信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PresetModelInfoList 各种设备下的内置模型信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DeviceMaterialInfo> GetPresetModelInfoList() const;

                    /**
                     * 设置各种设备下的内置模型信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _presetModelInfoList 各种设备下的内置模型信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPresetModelInfoList(const std::vector<DeviceMaterialInfo>& _presetModelInfoList);

                    /**
                     * 判断参数 PresetModelInfoList 是否已赋值
                     * @return PresetModelInfoList 是否已赋值
                     * 
                     */
                    bool PresetModelInfoListHasBeenSet() const;

                    /**
                     * 获取模型类别，比如LLM/MultiModal
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelCategory 模型类别，比如LLM/MultiModal
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelCategory() const;

                    /**
                     * 设置模型类别，比如LLM/MultiModal
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelCategory 模型类别，比如LLM/MultiModal
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelCategory(const std::string& _modelCategory);

                    /**
                     * 判断参数 ModelCategory 是否已赋值
                     * @return ModelCategory 是否已赋值
                     * 
                     */
                    bool ModelCategoryHasBeenSet() const;

                    /**
                     * 获取公共算法Id
                     * @return PublicAlgoSeriesId 公共算法Id
                     * 
                     */
                    std::string GetPublicAlgoSeriesId() const;

                    /**
                     * 设置公共算法Id
                     * @param _publicAlgoSeriesId 公共算法Id
                     * 
                     */
                    void SetPublicAlgoSeriesId(const std::string& _publicAlgoSeriesId);

                    /**
                     * 判断参数 PublicAlgoSeriesId 是否已赋值
                     * @return PublicAlgoSeriesId 是否已赋值
                     * 
                     */
                    bool PublicAlgoSeriesIdHasBeenSet() const;

                private:

                    /**
                     * 公共算法版本Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicAlgoVersionId;
                    bool m_publicAlgoVersionIdHasBeenSet;

                    /**
                     * 对应的公共算法组Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicAlgoGroupId;
                    bool m_publicAlgoGroupIdHasBeenSet;

                    /**
                     * 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 模型简介
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_introduction;
                    bool m_introductionHasBeenSet;

                    /**
                     * 预览信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_previewInfo;
                    bool m_previewInfoHasBeenSet;

                    /**
                     * 预置训练镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageInfo m_presetTrainImageInfo;
                    bool m_presetTrainImageInfoHasBeenSet;

                    /**
                     * 预置训练代码信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MaterialInfo m_presetTrainCodeInfo;
                    bool m_presetTrainCodeInfoHasBeenSet;

                    /**
                     * 预置模型信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MaterialInfo m_presetModelInfo;
                    bool m_presetModelInfoHasBeenSet;

                    /**
                     * 是否已经被导入到我的算法
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isImported;
                    bool m_isImportedHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 默认训练资源规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResourceSpec m_defaultResourceSpec;
                    bool m_defaultResourceSpecHasBeenSet;

                    /**
                     * 默认推理资源规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResourceSpec m_defaultInferenceResourceSpec;
                    bool m_defaultInferenceResourceSpecHasBeenSet;

                    /**
                     * 是否支持直接部署推理服务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_supportDeploy;
                    bool m_supportDeployHasBeenSet;

                    /**
                     * 内置训练数据集
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MaterialInfo m_presetTrainDataset;
                    bool m_presetTrainDatasetHasBeenSet;

                    /**
                     * 训练代码包下载路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trainCodeDownloadUrl;
                    bool m_trainCodeDownloadUrlHasBeenSet;

                    /**
                     * 内置数据下载路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trainDataDownloadUrl;
                    bool m_trainDataDownloadUrlHasBeenSet;

                    /**
                     * 训练参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TrainParam> m_trainParams;
                    bool m_trainParamsHasBeenSet;

                    /**
                     * 训练启动命令
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_presetTrainCodeStartCmd;
                    bool m_presetTrainCodeStartCmdHasBeenSet;

                    /**
                     * 是否非公开模型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isPrivateModel;
                    bool m_isPrivateModelHasBeenSet;

                    /**
                     * 各种设备下的训练镜像
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DeviceImageInfo> m_presetTrainImageInfoList;
                    bool m_presetTrainImageInfoListHasBeenSet;

                    /**
                     * 各种设备下的推理镜像
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DeviceImageInfo> m_presetInferenceImageInfoList;
                    bool m_presetInferenceImageInfoListHasBeenSet;

                    /**
                     * 各种设备下的训练代码信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DeviceMaterialInfo> m_presetTrainCodeInfoList;
                    bool m_presetTrainCodeInfoListHasBeenSet;

                    /**
                     * 各种设备下的内置模型信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DeviceMaterialInfo> m_presetModelInfoList;
                    bool m_presetModelInfoListHasBeenSet;

                    /**
                     * 模型类别，比如LLM/MultiModal
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelCategory;
                    bool m_modelCategoryHasBeenSet;

                    /**
                     * 公共算法Id
                     */
                    std::string m_publicAlgoSeriesId;
                    bool m_publicAlgoSeriesIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_PUBLICALGOVERSION_H_
