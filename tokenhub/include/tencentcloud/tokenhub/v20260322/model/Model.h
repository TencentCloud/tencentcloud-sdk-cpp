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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODEL_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/ModelImage.h>
#include <tencentcloud/tokenhub/v20260322/model/ModelChargingInfo.h>
#include <tencentcloud/tokenhub/v20260322/model/ModelSpec.h>
#include <tencentcloud/tokenhub/v20260322/model/ModelAccessInfo.h>
#include <tencentcloud/tokenhub/v20260322/model/ModelFreeTrialInfo.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * 模型信息
                */
                class Model : public AbstractModel
                {
                public:
                    Model();
                    ~Model() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型名称</p>
                     * @return ModelName <p>模型名称</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名称</p>
                     * @param _modelName <p>模型名称</p>
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>模型 ID。</p>
                     * @return ModelId <p>模型 ID。</p>
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置<p>模型 ID。</p>
                     * @param _modelId <p>模型 ID。</p>
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取<p>模型显示名称。</p>
                     * @return DisplayName <p>模型显示名称。</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>模型显示名称。</p>
                     * @param _displayName <p>模型显示名称。</p>
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>模型描述。</p>
                     * @return Description <p>模型描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>模型描述。</p>
                     * @param _description <p>模型描述。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>模型概要。</p>
                     * @return Summary <p>模型概要。</p>
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置<p>模型概要。</p>
                     * @param _summary <p>模型概要。</p>
                     * 
                     */
                    void SetSummary(const std::string& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取<p>模型类型。取值：Text（文本）、Vision（视觉）、Multimodal（多模态）、Speech（语音）、Embedding（向量）。</p><p>枚举值：</p><ul><li>Text： 语言模型</li><li>Vision： 视觉模型</li><li>Multimodal： 多模态模型</li></ul>
                     * @return ModelType <p>模型类型。取值：Text（文本）、Vision（视觉）、Multimodal（多模态）、Speech（语音）、Embedding（向量）。</p><p>枚举值：</p><ul><li>Text： 语言模型</li><li>Vision： 视觉模型</li><li>Multimodal： 多模态模型</li></ul>
                     * 
                     */
                    std::string GetModelType() const;

                    /**
                     * 设置<p>模型类型。取值：Text（文本）、Vision（视觉）、Multimodal（多模态）、Speech（语音）、Embedding（向量）。</p><p>枚举值：</p><ul><li>Text： 语言模型</li><li>Vision： 视觉模型</li><li>Multimodal： 多模态模型</li></ul>
                     * @param _modelType <p>模型类型。取值：Text（文本）、Vision（视觉）、Multimodal（多模态）、Speech（语音）、Embedding（向量）。</p><p>枚举值：</p><ul><li>Text： 语言模型</li><li>Vision： 视觉模型</li><li>Multimodal： 多模态模型</li></ul>
                     * 
                     */
                    void SetModelType(const std::string& _modelType);

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     * 
                     */
                    bool ModelTypeHasBeenSet() const;

                    /**
                     * 获取<p>模型品牌。</p>
                     * @return Brand <p>模型品牌。</p>
                     * 
                     */
                    std::string GetBrand() const;

                    /**
                     * 设置<p>模型品牌。</p>
                     * @param _brand <p>模型品牌。</p>
                     * 
                     */
                    void SetBrand(const std::string& _brand);

                    /**
                     * 判断参数 Brand 是否已赋值
                     * @return Brand 是否已赋值
                     * 
                     */
                    bool BrandHasBeenSet() const;

                    /**
                     * 获取<p>模型图标。</p>
                     * @return ModelImage <p>模型图标。</p>
                     * 
                     */
                    ModelImage GetModelImage() const;

                    /**
                     * 设置<p>模型图标。</p>
                     * @param _modelImage <p>模型图标。</p>
                     * 
                     */
                    void SetModelImage(const ModelImage& _modelImage);

                    /**
                     * 判断参数 ModelImage 是否已赋值
                     * @return ModelImage 是否已赋值
                     * 
                     */
                    bool ModelImageHasBeenSet() const;

                    /**
                     * 获取<p>模型供应商。</p>
                     * @return Provider <p>模型供应商。</p>
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置<p>模型供应商。</p>
                     * @param _provider <p>模型供应商。</p>
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取<p>模型状态。取值：online（上线）、offline（下线）。</p><p>枚举值：</p><ul><li>online ： 上线</li><li>pre-offline： 预下线</li></ul>
                     * @return Status <p>模型状态。取值：online（上线）、offline（下线）。</p><p>枚举值：</p><ul><li>online ： 上线</li><li>pre-offline： 预下线</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>模型状态。取值：online（上线）、offline（下线）。</p><p>枚举值：</p><ul><li>online ： 上线</li><li>pre-offline： 预下线</li></ul>
                     * @param _status <p>模型状态。取值：online（上线）、offline（下线）。</p><p>枚举值：</p><ul><li>online ： 上线</li><li>pre-offline： 预下线</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>标签列表。</p>
                     * @return Tags <p>标签列表。</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>标签列表。</p>
                     * @param _tags <p>标签列表。</p>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>计费信息列表。</p>
                     * @return ModelChargingInfo <p>计费信息列表。</p>
                     * 
                     */
                    std::vector<ModelChargingInfo> GetModelChargingInfo() const;

                    /**
                     * 设置<p>计费信息列表。</p>
                     * @param _modelChargingInfo <p>计费信息列表。</p>
                     * 
                     */
                    void SetModelChargingInfo(const std::vector<ModelChargingInfo>& _modelChargingInfo);

                    /**
                     * 判断参数 ModelChargingInfo 是否已赋值
                     * @return ModelChargingInfo 是否已赋值
                     * 
                     */
                    bool ModelChargingInfoHasBeenSet() const;

                    /**
                     * 获取<p>模型规格。</p>
                     * @return ModelSpec <p>模型规格。</p>
                     * 
                     */
                    ModelSpec GetModelSpec() const;

                    /**
                     * 设置<p>模型规格。</p>
                     * @param _modelSpec <p>模型规格。</p>
                     * 
                     */
                    void SetModelSpec(const ModelSpec& _modelSpec);

                    /**
                     * 判断参数 ModelSpec 是否已赋值
                     * @return ModelSpec 是否已赋值
                     * 
                     */
                    bool ModelSpecHasBeenSet() const;

                    /**
                     * 获取<p>发布时间。</p>
                     * @return ReleaseAt <p>发布时间。</p>
                     * 
                     */
                    std::string GetReleaseAt() const;

                    /**
                     * 设置<p>发布时间。</p>
                     * @param _releaseAt <p>发布时间。</p>
                     * 
                     */
                    void SetReleaseAt(const std::string& _releaseAt);

                    /**
                     * 判断参数 ReleaseAt 是否已赋值
                     * @return ReleaseAt 是否已赋值
                     * 
                     */
                    bool ReleaseAtHasBeenSet() const;

                    /**
                     * 获取<p>推荐顺序，值越小排序越靠前。</p>
                     * @return RecommendWeight <p>推荐顺序，值越小排序越靠前。</p>
                     * 
                     */
                    int64_t GetRecommendWeight() const;

                    /**
                     * 设置<p>推荐顺序，值越小排序越靠前。</p>
                     * @param _recommendWeight <p>推荐顺序，值越小排序越靠前。</p>
                     * 
                     */
                    void SetRecommendWeight(const int64_t& _recommendWeight);

                    /**
                     * 判断参数 RecommendWeight 是否已赋值
                     * @return RecommendWeight 是否已赋值
                     * 
                     */
                    bool RecommendWeightHasBeenSet() const;

                    /**
                     * 获取<p>模型访问信息。包含模型在各站点和地域的可用性配置。为空时表示未配置地域信息，模型不可用。</p>
                     * @return ModelAccessInfo <p>模型访问信息。包含模型在各站点和地域的可用性配置。为空时表示未配置地域信息，模型不可用。</p>
                     * 
                     */
                    ModelAccessInfo GetModelAccessInfo() const;

                    /**
                     * 设置<p>模型访问信息。包含模型在各站点和地域的可用性配置。为空时表示未配置地域信息，模型不可用。</p>
                     * @param _modelAccessInfo <p>模型访问信息。包含模型在各站点和地域的可用性配置。为空时表示未配置地域信息，模型不可用。</p>
                     * 
                     */
                    void SetModelAccessInfo(const ModelAccessInfo& _modelAccessInfo);

                    /**
                     * 判断参数 ModelAccessInfo 是否已赋值
                     * @return ModelAccessInfo 是否已赋值
                     * 
                     */
                    bool ModelAccessInfoHasBeenSet() const;

                    /**
                     * 获取<p>体验包信息。</p>
                     * @return FreeTrialInfo <p>体验包信息。</p>
                     * 
                     */
                    ModelFreeTrialInfo GetFreeTrialInfo() const;

                    /**
                     * 设置<p>体验包信息。</p>
                     * @param _freeTrialInfo <p>体验包信息。</p>
                     * 
                     */
                    void SetFreeTrialInfo(const ModelFreeTrialInfo& _freeTrialInfo);

                    /**
                     * 判断参数 FreeTrialInfo 是否已赋值
                     * @return FreeTrialInfo 是否已赋值
                     * 
                     */
                    bool FreeTrialInfoHasBeenSet() const;

                    /**
                     * 获取<p>模型下线时间，Status=pre-offline 时，会配置模型下线时间</p>
                     * @return OfflineAt <p>模型下线时间，Status=pre-offline 时，会配置模型下线时间</p>
                     * 
                     */
                    std::string GetOfflineAt() const;

                    /**
                     * 设置<p>模型下线时间，Status=pre-offline 时，会配置模型下线时间</p>
                     * @param _offlineAt <p>模型下线时间，Status=pre-offline 时，会配置模型下线时间</p>
                     * 
                     */
                    void SetOfflineAt(const std::string& _offlineAt);

                    /**
                     * 判断参数 OfflineAt 是否已赋值
                     * @return OfflineAt 是否已赋值
                     * 
                     */
                    bool OfflineAtHasBeenSet() const;

                private:

                    /**
                     * <p>模型名称</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>模型 ID。</p>
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * <p>模型显示名称。</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>模型描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>模型概要。</p>
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * <p>模型类型。取值：Text（文本）、Vision（视觉）、Multimodal（多模态）、Speech（语音）、Embedding（向量）。</p><p>枚举值：</p><ul><li>Text： 语言模型</li><li>Vision： 视觉模型</li><li>Multimodal： 多模态模型</li></ul>
                     */
                    std::string m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * <p>模型品牌。</p>
                     */
                    std::string m_brand;
                    bool m_brandHasBeenSet;

                    /**
                     * <p>模型图标。</p>
                     */
                    ModelImage m_modelImage;
                    bool m_modelImageHasBeenSet;

                    /**
                     * <p>模型供应商。</p>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>模型状态。取值：online（上线）、offline（下线）。</p><p>枚举值：</p><ul><li>online ： 上线</li><li>pre-offline： 预下线</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>标签列表。</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>计费信息列表。</p>
                     */
                    std::vector<ModelChargingInfo> m_modelChargingInfo;
                    bool m_modelChargingInfoHasBeenSet;

                    /**
                     * <p>模型规格。</p>
                     */
                    ModelSpec m_modelSpec;
                    bool m_modelSpecHasBeenSet;

                    /**
                     * <p>发布时间。</p>
                     */
                    std::string m_releaseAt;
                    bool m_releaseAtHasBeenSet;

                    /**
                     * <p>推荐顺序，值越小排序越靠前。</p>
                     */
                    int64_t m_recommendWeight;
                    bool m_recommendWeightHasBeenSet;

                    /**
                     * <p>模型访问信息。包含模型在各站点和地域的可用性配置。为空时表示未配置地域信息，模型不可用。</p>
                     */
                    ModelAccessInfo m_modelAccessInfo;
                    bool m_modelAccessInfoHasBeenSet;

                    /**
                     * <p>体验包信息。</p>
                     */
                    ModelFreeTrialInfo m_freeTrialInfo;
                    bool m_freeTrialInfoHasBeenSet;

                    /**
                     * <p>模型下线时间，Status=pre-offline 时，会配置模型下线时间</p>
                     */
                    std::string m_offlineAt;
                    bool m_offlineAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODEL_H_
