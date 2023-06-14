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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_MULTILEVELPERSONINFO_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_MULTILEVELPERSONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/ClassifiedPersonInfo.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 带类型树的已分类人物信息
                */
                class MultiLevelPersonInfo : public AbstractModel
                {
                public:
                    MultiLevelPersonInfo();
                    ~MultiLevelPersonInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取一级分类名称(分类信息参见自定义人物类型)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return L1ClassifyName 一级分类名称(分类信息参见自定义人物类型)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetL1ClassifyName() const;

                    /**
                     * 设置一级分类名称(分类信息参见自定义人物类型)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _l1ClassifyName 一级分类名称(分类信息参见自定义人物类型)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetL1ClassifyName(const std::string& _l1ClassifyName);

                    /**
                     * 判断参数 L1ClassifyName 是否已赋值
                     * @return L1ClassifyName 是否已赋值
                     * 
                     */
                    bool L1ClassifyNameHasBeenSet() const;

                    /**
                     * 获取已分类人物信息数组(所有分类类型为二级分类)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return L2ClassifiedPersonInfoSet 已分类人物信息数组(所有分类类型为二级分类)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ClassifiedPersonInfo> GetL2ClassifiedPersonInfoSet() const;

                    /**
                     * 设置已分类人物信息数组(所有分类类型为二级分类)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _l2ClassifiedPersonInfoSet 已分类人物信息数组(所有分类类型为二级分类)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetL2ClassifiedPersonInfoSet(const std::vector<ClassifiedPersonInfo>& _l2ClassifiedPersonInfoSet);

                    /**
                     * 判断参数 L2ClassifiedPersonInfoSet 是否已赋值
                     * @return L2ClassifiedPersonInfoSet 是否已赋值
                     * 
                     */
                    bool L2ClassifiedPersonInfoSetHasBeenSet() const;

                    /**
                     * 获取检测结果来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source 检测结果来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSource() const;

                    /**
                     * 设置检测结果来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _source 检测结果来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSource(const uint64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                private:

                    /**
                     * 一级分类名称(分类信息参见自定义人物类型)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_l1ClassifyName;
                    bool m_l1ClassifyNameHasBeenSet;

                    /**
                     * 已分类人物信息数组(所有分类类型为二级分类)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ClassifiedPersonInfo> m_l2ClassifiedPersonInfoSet;
                    bool m_l2ClassifiedPersonInfoSetHasBeenSet;

                    /**
                     * 检测结果来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_source;
                    bool m_sourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_MULTILEVELPERSONINFO_H_
