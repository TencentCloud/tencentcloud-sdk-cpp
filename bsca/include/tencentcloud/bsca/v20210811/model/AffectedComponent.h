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

#ifndef TENCENTCLOUD_BSCA_V20210811_MODEL_AFFECTEDCOMPONENT_H_
#define TENCENTCLOUD_BSCA_V20210811_MODEL_AFFECTEDCOMPONENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bsca
    {
        namespace V20210811
        {
            namespace Model
            {
                /**
                * 受漏洞影响的组件信息。
                */
                class AffectedComponent : public AbstractModel
                {
                public:
                    AffectedComponent();
                    ~AffectedComponent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取受漏洞影响的组件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 受漏洞影响的组件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置受漏洞影响的组件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 受漏洞影响的组件名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取受漏洞影响的版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AffectedVersionList 受漏洞影响的版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAffectedVersionList() const;

                    /**
                     * 设置受漏洞影响的版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _affectedVersionList 受漏洞影响的版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAffectedVersionList(const std::vector<std::string>& _affectedVersionList);

                    /**
                     * 判断参数 AffectedVersionList 是否已赋值
                     * @return AffectedVersionList 是否已赋值
                     * 
                     */
                    bool AffectedVersionListHasBeenSet() const;

                    /**
                     * 获取修复此漏洞的版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FixedVersionList 修复此漏洞的版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetFixedVersionList() const;

                    /**
                     * 设置修复此漏洞的版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fixedVersionList 修复此漏洞的版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFixedVersionList(const std::vector<std::string>& _fixedVersionList);

                    /**
                     * 判断参数 FixedVersionList 是否已赋值
                     * @return FixedVersionList 是否已赋值
                     * 
                     */
                    bool FixedVersionListHasBeenSet() const;

                private:

                    /**
                     * 受漏洞影响的组件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 受漏洞影响的版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_affectedVersionList;
                    bool m_affectedVersionListHasBeenSet;

                    /**
                     * 修复此漏洞的版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_fixedVersionList;
                    bool m_fixedVersionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BSCA_V20210811_MODEL_AFFECTEDCOMPONENT_H_
