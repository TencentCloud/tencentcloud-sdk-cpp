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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MATERIALMODIFIEDEVENT_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MATERIALMODIFIEDEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 媒体更新事件。
                */
                class MaterialModifiedEvent : public AbstractModel
                {
                public:
                    MaterialModifiedEvent();
                    ~MaterialModifiedEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体 Id。
                     * @return MaterialId 媒体 Id。
                     * 
                     */
                    std::string GetMaterialId() const;

                    /**
                     * 设置媒体 Id。
                     * @param _materialId 媒体 Id。
                     * 
                     */
                    void SetMaterialId(const std::string& _materialId);

                    /**
                     * 判断参数 MaterialId 是否已赋值
                     * @return MaterialId 是否已赋值
                     * 
                     */
                    bool MaterialIdHasBeenSet() const;

                    /**
                     * 获取更新后的媒体名称。如未更新则为空。
                     * @return Name 更新后的媒体名称。如未更新则为空。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置更新后的媒体名称。如未更新则为空。
                     * @param _name 更新后的媒体名称。如未更新则为空。
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
                     * 获取更新后的媒体预置标签列表。如未更新媒体预置标签，则该字段为空数组。
                     * @return PresetTagIdSet 更新后的媒体预置标签列表。如未更新媒体预置标签，则该字段为空数组。
                     * 
                     */
                    std::vector<std::string> GetPresetTagIdSet() const;

                    /**
                     * 设置更新后的媒体预置标签列表。如未更新媒体预置标签，则该字段为空数组。
                     * @param _presetTagIdSet 更新后的媒体预置标签列表。如未更新媒体预置标签，则该字段为空数组。
                     * 
                     */
                    void SetPresetTagIdSet(const std::vector<std::string>& _presetTagIdSet);

                    /**
                     * 判断参数 PresetTagIdSet 是否已赋值
                     * @return PresetTagIdSet 是否已赋值
                     * 
                     */
                    bool PresetTagIdSetHasBeenSet() const;

                    /**
                     * 获取更新后的媒体自定义标签列表。如未更新媒体自定义标签，则该字段为空数组。
                     * @return TagSet 更新后的媒体自定义标签列表。如未更新媒体自定义标签，则该字段为空数组。
                     * 
                     */
                    std::vector<std::string> GetTagSet() const;

                    /**
                     * 设置更新后的媒体自定义标签列表。如未更新媒体自定义标签，则该字段为空数组。
                     * @param _tagSet 更新后的媒体自定义标签列表。如未更新媒体自定义标签，则该字段为空数组。
                     * 
                     */
                    void SetTagSet(const std::vector<std::string>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * 媒体 Id。
                     */
                    std::string m_materialId;
                    bool m_materialIdHasBeenSet;

                    /**
                     * 更新后的媒体名称。如未更新则为空。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 更新后的媒体预置标签列表。如未更新媒体预置标签，则该字段为空数组。
                     */
                    std::vector<std::string> m_presetTagIdSet;
                    bool m_presetTagIdSetHasBeenSet;

                    /**
                     * 更新后的媒体自定义标签列表。如未更新媒体自定义标签，则该字段为空数组。
                     */
                    std::vector<std::string> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MATERIALMODIFIEDEVENT_H_
