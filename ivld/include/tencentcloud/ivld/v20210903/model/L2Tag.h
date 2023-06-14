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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_L2TAG_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_L2TAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/L3Tag.h>
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
                * 二级标签信息

请注意，二级标签信息可能不包含三级标签(此时L3TagSet为空)。

                */
                class L2Tag : public AbstractModel
                {
                public:
                    L2Tag();
                    ~L2Tag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取二级标签名
                     * @return Name 二级标签名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置二级标签名
                     * @param _name 二级标签名
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
                     * 获取从属于此二级标签的三级标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return L3TagSet 从属于此二级标签的三级标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<L3Tag> GetL3TagSet() const;

                    /**
                     * 设置从属于此二级标签的三级标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _l3TagSet 从属于此二级标签的三级标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetL3TagSet(const std::vector<L3Tag>& _l3TagSet);

                    /**
                     * 判断参数 L3TagSet 是否已赋值
                     * @return L3TagSet 是否已赋值
                     * 
                     */
                    bool L3TagSetHasBeenSet() const;

                    /**
                     * 获取二级标签出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppearIndexPairSet 二级标签出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AppearIndexPair> GetAppearIndexPairSet() const;

                    /**
                     * 设置二级标签出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appearIndexPairSet 二级标签出现信息
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
                     * 获取二级标签首次出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstAppear 二级标签首次出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFirstAppear() const;

                    /**
                     * 设置二级标签首次出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstAppear 二级标签首次出现信息
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
                     * 二级标签名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 从属于此二级标签的三级标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<L3Tag> m_l3TagSet;
                    bool m_l3TagSetHasBeenSet;

                    /**
                     * 二级标签出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AppearIndexPair> m_appearIndexPairSet;
                    bool m_appearIndexPairSetHasBeenSet;

                    /**
                     * 二级标签首次出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_firstAppear;
                    bool m_firstAppearHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_L2TAG_H_
