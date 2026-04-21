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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_RESOURCEDTO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_RESOURCEDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 资源权限信息
                */
                class ResourceDTO : public AbstractModel
                {
                public:
                    ResourceDTO();
                    ~ResourceDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceName 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceName 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取是否启用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceValue 是否启用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetResourceValue() const;

                    /**
                     * 设置是否启用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceValue 是否启用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceValue(const bool& _resourceValue);

                    /**
                     * 判断参数 ResourceValue 是否已赋值
                     * @return ResourceValue 是否已赋值
                     * 
                     */
                    bool ResourceValueHasBeenSet() const;

                    /**
                     * 获取能否变更
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanChange 能否变更
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCanChange() const;

                    /**
                     * 设置能否变更
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _canChange 能否变更
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCanChange(const bool& _canChange);

                    /**
                     * 判断参数 CanChange 是否已赋值
                     * @return CanChange 是否已赋值
                     * 
                     */
                    bool CanChangeHasBeenSet() const;

                    /**
                     * 获取提示
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tips 提示
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTips() const;

                    /**
                     * 设置提示
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tips 提示
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTips(const std::string& _tips);

                    /**
                     * 判断参数 Tips 是否已赋值
                     * @return Tips 是否已赋值
                     * 
                     */
                    bool TipsHasBeenSet() const;

                private:

                    /**
                     * 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 是否启用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_resourceValue;
                    bool m_resourceValueHasBeenSet;

                    /**
                     * 能否变更
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_canChange;
                    bool m_canChangeHasBeenSet;

                    /**
                     * 提示
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tips;
                    bool m_tipsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_RESOURCEDTO_H_
