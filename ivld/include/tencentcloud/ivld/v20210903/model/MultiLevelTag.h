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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_MULTILEVELTAG_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_MULTILEVELTAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/L1Tag.h>
#include <tencentcloud/ivld/v20210903/model/AppearInfo.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 标签信息结构体

包含多级(最多三级)标签结果，以及这些标签在识别结果中的出现位置
                */
                class MultiLevelTag : public AbstractModel
                {
                public:
                    MultiLevelTag();
                    ~MultiLevelTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取树状标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagSet 树状标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<L1Tag> GetTagSet() const;

                    /**
                     * 设置树状标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagSet 树状标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagSet(const std::vector<L1Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取标签在识别结果中的定位信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppearInfo 标签在识别结果中的定位信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppearInfo GetAppearInfo() const;

                    /**
                     * 设置标签在识别结果中的定位信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appearInfo 标签在识别结果中的定位信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppearInfo(const AppearInfo& _appearInfo);

                    /**
                     * 判断参数 AppearInfo 是否已赋值
                     * @return AppearInfo 是否已赋值
                     * 
                     */
                    bool AppearInfoHasBeenSet() const;

                private:

                    /**
                     * 树状标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<L1Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 标签在识别结果中的定位信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppearInfo m_appearInfo;
                    bool m_appearInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_MULTILEVELTAG_H_
