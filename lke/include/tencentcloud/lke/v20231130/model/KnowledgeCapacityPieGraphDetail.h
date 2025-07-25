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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGECAPACITYPIEGRAPHDETAIL_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGECAPACITYPIEGRAPHDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 知识库容量饼图详情
                */
                class KnowledgeCapacityPieGraphDetail : public AbstractModel
                {
                public:
                    KnowledgeCapacityPieGraphDetail();
                    ~KnowledgeCapacityPieGraphDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppName 当前应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置当前应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appName 当前应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取当前应用使用的字符数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsedCharSize 当前应用使用的字符数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsedCharSize() const;

                    /**
                     * 设置当前应用使用的字符数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usedCharSize 当前应用使用的字符数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsedCharSize(const std::string& _usedCharSize);

                    /**
                     * 判断参数 UsedCharSize 是否已赋值
                     * @return UsedCharSize 是否已赋值
                     * 
                     */
                    bool UsedCharSizeHasBeenSet() const;

                    /**
                     * 获取当前应用对于总用量的占比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Proportion 当前应用对于总用量的占比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetProportion() const;

                    /**
                     * 设置当前应用对于总用量的占比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proportion 当前应用对于总用量的占比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProportion(const double& _proportion);

                    /**
                     * 判断参数 Proportion 是否已赋值
                     * @return Proportion 是否已赋值
                     * 
                     */
                    bool ProportionHasBeenSet() const;

                    /**
                     * 获取知识库类型:0默认1共享
                     * @return KnowledgeType 知识库类型:0默认1共享
                     * 
                     */
                    int64_t GetKnowledgeType() const;

                    /**
                     * 设置知识库类型:0默认1共享
                     * @param _knowledgeType 知识库类型:0默认1共享
                     * 
                     */
                    void SetKnowledgeType(const int64_t& _knowledgeType);

                    /**
                     * 判断参数 KnowledgeType 是否已赋值
                     * @return KnowledgeType 是否已赋值
                     * 
                     */
                    bool KnowledgeTypeHasBeenSet() const;

                private:

                    /**
                     * 当前应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 当前应用使用的字符数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_usedCharSize;
                    bool m_usedCharSizeHasBeenSet;

                    /**
                     * 当前应用对于总用量的占比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_proportion;
                    bool m_proportionHasBeenSet;

                    /**
                     * 知识库类型:0默认1共享
                     */
                    int64_t m_knowledgeType;
                    bool m_knowledgeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGECAPACITYPIEGRAPHDETAIL_H_
