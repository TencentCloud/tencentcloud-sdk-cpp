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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_L1TAG_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_L1TAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/L2Tag.h>
#include <tencentcloud/ivld/v20210903/model/AppearIndexPair.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 一级标签信息

请注意，一级标签信息可能不包含二级标签(此时L2TagSet为空)。在这种情况下，一级标签可直接包含出现信息。
                */
                class L1Tag : public AbstractModel
                {
                public:
                    L1Tag();
                    ~L1Tag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取一级标签名
                     * @return Name 一级标签名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置一级标签名
                     * @param _name 一级标签名
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
                     * 获取二级标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return L2TagSet 二级标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<L2Tag> GetL2TagSet() const;

                    /**
                     * 设置二级标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _l2TagSet 二级标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetL2TagSet(const std::vector<L2Tag>& _l2TagSet);

                    /**
                     * 判断参数 L2TagSet 是否已赋值
                     * @return L2TagSet 是否已赋值
                     * 
                     */
                    bool L2TagSetHasBeenSet() const;

                    /**
                     * 获取一级标签出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppearIndexPairSet 一级标签出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AppearIndexPair> GetAppearIndexPairSet() const;

                    /**
                     * 设置一级标签出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appearIndexPairSet 一级标签出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppearIndexPairSet(const std::vector<AppearIndexPair>& _appearIndexPairSet);

                    /**
                     * 判断参数 AppearIndexPairSet 是否已赋值
                     * @return AppearIndexPairSet 是否已赋值
                     * 
                     */
                    bool AppearIndexPairSetHasBeenSet() const;

                    /**
                     * 获取一级标签首次出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstAppear 一级标签首次出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFirstAppear() const;

                    /**
                     * 设置一级标签首次出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstAppear 一级标签首次出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFirstAppear(const int64_t& _firstAppear);

                    /**
                     * 判断参数 FirstAppear 是否已赋值
                     * @return FirstAppear 是否已赋值
                     * 
                     */
                    bool FirstAppearHasBeenSet() const;

                private:

                    /**
                     * 一级标签名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 二级标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<L2Tag> m_l2TagSet;
                    bool m_l2TagSetHasBeenSet;

                    /**
                     * 一级标签出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AppearIndexPair> m_appearIndexPairSet;
                    bool m_appearIndexPairSetHasBeenSet;

                    /**
                     * 一级标签首次出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_firstAppear;
                    bool m_firstAppearHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_L1TAG_H_
