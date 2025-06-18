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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEDETAIL_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEDETAIL_H_

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
                * 应用使用知识库容量详情
                */
                class KnowledgeDetail : public AbstractModel
                {
                public:
                    KnowledgeDetail();
                    ~KnowledgeDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppName 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appName 应用名称
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
                     * 获取已用字符数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsedCharSize 已用字符数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsedCharSize() const;

                    /**
                     * 设置已用字符数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usedCharSize 已用字符数
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
                     * 获取使用占比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Proportion 使用占比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetProportion() const;

                    /**
                     * 设置使用占比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proportion 使用占比
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
                     * 获取超量字符数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExceedCharSize 超量字符数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExceedCharSize() const;

                    /**
                     * 设置超量字符数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exceedCharSize 超量字符数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExceedCharSize(const std::string& _exceedCharSize);

                    /**
                     * 判断参数 ExceedCharSize 是否已赋值
                     * @return ExceedCharSize 是否已赋值
                     * 
                     */
                    bool ExceedCharSizeHasBeenSet() const;

                    /**
                     * 获取是否共享知识库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsSharedKnowledge 是否共享知识库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsSharedKnowledge() const;

                    /**
                     * 设置是否共享知识库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isSharedKnowledge 是否共享知识库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsSharedKnowledge(const bool& _isSharedKnowledge);

                    /**
                     * 判断参数 IsSharedKnowledge 是否已赋值
                     * @return IsSharedKnowledge 是否已赋值
                     * 
                     */
                    bool IsSharedKnowledgeHasBeenSet() const;

                private:

                    /**
                     * 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 已用字符数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_usedCharSize;
                    bool m_usedCharSizeHasBeenSet;

                    /**
                     * 使用占比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_proportion;
                    bool m_proportionHasBeenSet;

                    /**
                     * 超量字符数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_exceedCharSize;
                    bool m_exceedCharSizeHasBeenSet;

                    /**
                     * 是否共享知识库类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isSharedKnowledge;
                    bool m_isSharedKnowledgeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEDETAIL_H_
