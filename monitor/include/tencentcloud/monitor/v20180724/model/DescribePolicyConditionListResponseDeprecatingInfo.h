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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTRESPONSEDEPRECATINGINFO_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTRESPONSEDEPRECATINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePolicyConditionListResponseDeprecatingInfo
                */
                class DescribePolicyConditionListResponseDeprecatingInfo : public AbstractModel
                {
                public:
                    DescribePolicyConditionListResponseDeprecatingInfo();
                    ~DescribePolicyConditionListResponseDeprecatingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否隐藏
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Hidden 是否隐藏
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHidden() const;

                    /**
                     * 设置是否隐藏
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hidden 是否隐藏
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHidden(const bool& _hidden);

                    /**
                     * 判断参数 Hidden 是否已赋值
                     * @return Hidden 是否已赋值
                     * 
                     */
                    bool HiddenHasBeenSet() const;

                    /**
                     * 获取新视图名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewViewNames 新视图名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNewViewNames() const;

                    /**
                     * 设置新视图名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _newViewNames 新视图名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNewViewNames(const std::vector<std::string>& _newViewNames);

                    /**
                     * 判断参数 NewViewNames 是否已赋值
                     * @return NewViewNames 是否已赋值
                     * 
                     */
                    bool NewViewNamesHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 是否隐藏
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hidden;
                    bool m_hiddenHasBeenSet;

                    /**
                     * 新视图名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_newViewNames;
                    bool m_newViewNamesHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTRESPONSEDEPRECATINGINFO_H_
