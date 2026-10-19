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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_VOLUMETEMPLATEREF_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_VOLUMETEMPLATEREF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 对 VolumeTemplate 的引用
                */
                class VolumeTemplateRef : public AbstractModel
                {
                public:
                    VolumeTemplateRef();
                    ~VolumeTemplateRef() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>VolumeTemplate 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeTemplateName <p>VolumeTemplate 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVolumeTemplateName() const;

                    /**
                     * 设置<p>VolumeTemplate 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeTemplateName <p>VolumeTemplate 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVolumeTemplateName(const std::string& _volumeTemplateName);

                    /**
                     * 判断参数 VolumeTemplateName 是否已赋值
                     * @return VolumeTemplateName 是否已赋值
                     * 
                     */
                    bool VolumeTemplateNameHasBeenSet() const;

                    /**
                     * 获取<p>复用键，可为字面量或 ${metadata.xxx}</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReuseKey <p>复用键，可为字面量或 ${metadata.xxx}</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReuseKey() const;

                    /**
                     * 设置<p>复用键，可为字面量或 ${metadata.xxx}</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reuseKey <p>复用键，可为字面量或 ${metadata.xxx}</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReuseKey(const std::string& _reuseKey);

                    /**
                     * 判断参数 ReuseKey 是否已赋值
                     * @return ReuseKey 是否已赋值
                     * 
                     */
                    bool ReuseKeyHasBeenSet() const;

                private:

                    /**
                     * <p>VolumeTemplate 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_volumeTemplateName;
                    bool m_volumeTemplateNameHasBeenSet;

                    /**
                     * <p>复用键，可为字面量或 ${metadata.xxx}</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reuseKey;
                    bool m_reuseKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_VOLUMETEMPLATEREF_H_
