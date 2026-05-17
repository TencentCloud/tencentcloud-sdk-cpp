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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SPEC_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 计费项内容
                */
                class Spec : public AbstractModel
                {
                public:
                    Spec();
                    ~Spec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>计费项标签</p>
                     * @return SpecId <p>计费项标签</p>
                     * 
                     */
                    std::string GetSpecId() const;

                    /**
                     * 设置<p>计费项标签</p>
                     * @param _specId <p>计费项标签</p>
                     * 
                     */
                    void SetSpecId(const std::string& _specId);

                    /**
                     * 判断参数 SpecId 是否已赋值
                     * @return SpecId 是否已赋值
                     * 
                     */
                    bool SpecIdHasBeenSet() const;

                    /**
                     * 获取<p>计费项名称</p>
                     * @return SpecName <p>计费项名称</p>
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置<p>计费项名称</p>
                     * @param _specName <p>计费项名称</p>
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取<p>计费项显示名称</p>
                     * @return SpecAlias <p>计费项显示名称</p>
                     * 
                     */
                    std::string GetSpecAlias() const;

                    /**
                     * 设置<p>计费项显示名称</p>
                     * @param _specAlias <p>计费项显示名称</p>
                     * 
                     */
                    void SetSpecAlias(const std::string& _specAlias);

                    /**
                     * 判断参数 SpecAlias 是否已赋值
                     * @return SpecAlias 是否已赋值
                     * 
                     */
                    bool SpecAliasHasBeenSet() const;

                    /**
                     * 获取<p>是否售罄</p>
                     * @return Available <p>是否售罄</p>
                     * 
                     */
                    bool GetAvailable() const;

                    /**
                     * 设置<p>是否售罄</p>
                     * @param _available <p>是否售罄</p>
                     * 
                     */
                    void SetAvailable(const bool& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                    /**
                     * 获取<p>当前资源售罄时，可用的区域有哪些</p>
                     * @return AvailableRegion <p>当前资源售罄时，可用的区域有哪些</p>
                     * 
                     */
                    std::vector<std::string> GetAvailableRegion() const;

                    /**
                     * 设置<p>当前资源售罄时，可用的区域有哪些</p>
                     * @param _availableRegion <p>当前资源售罄时，可用的区域有哪些</p>
                     * 
                     */
                    void SetAvailableRegion(const std::vector<std::string>& _availableRegion);

                    /**
                     * 判断参数 AvailableRegion 是否已赋值
                     * @return AvailableRegion 是否已赋值
                     * 
                     */
                    bool AvailableRegionHasBeenSet() const;

                    /**
                     * 获取<p>当前计费项支持的特性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecFeatures <p>当前计费项支持的特性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSpecFeatures() const;

                    /**
                     * 设置<p>当前计费项支持的特性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _specFeatures <p>当前计费项支持的特性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpecFeatures(const std::vector<std::string>& _specFeatures);

                    /**
                     * 判断参数 SpecFeatures 是否已赋值
                     * @return SpecFeatures 是否已赋值
                     * 
                     */
                    bool SpecFeaturesHasBeenSet() const;

                    /**
                     * 获取<p>计费项类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecType <p>计费项类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpecType() const;

                    /**
                     * 设置<p>计费项类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _specType <p>计费项类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpecType(const std::string& _specType);

                    /**
                     * 判断参数 SpecType 是否已赋值
                     * @return SpecType 是否已赋值
                     * 
                     */
                    bool SpecTypeHasBeenSet() const;

                    /**
                     * 获取<p>GPU类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GpuType <p>GPU类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置<p>GPU类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpuType <p>GPU类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGpuType(const std::string& _gpuType);

                    /**
                     * 判断参数 GpuType 是否已赋值
                     * @return GpuType 是否已赋值
                     * 
                     */
                    bool GpuTypeHasBeenSet() const;

                    /**
                     * 获取<p>计费项CategoryId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CategoryId <p>计费项CategoryId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置<p>计费项CategoryId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _categoryId <p>计费项CategoryId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCategoryId(const std::string& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                private:

                    /**
                     * <p>计费项标签</p>
                     */
                    std::string m_specId;
                    bool m_specIdHasBeenSet;

                    /**
                     * <p>计费项名称</p>
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * <p>计费项显示名称</p>
                     */
                    std::string m_specAlias;
                    bool m_specAliasHasBeenSet;

                    /**
                     * <p>是否售罄</p>
                     */
                    bool m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * <p>当前资源售罄时，可用的区域有哪些</p>
                     */
                    std::vector<std::string> m_availableRegion;
                    bool m_availableRegionHasBeenSet;

                    /**
                     * <p>当前计费项支持的特性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_specFeatures;
                    bool m_specFeaturesHasBeenSet;

                    /**
                     * <p>计费项类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specType;
                    bool m_specTypeHasBeenSet;

                    /**
                     * <p>GPU类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * <p>计费项CategoryId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SPEC_H_
