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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_SOCCHECKITEMV1_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_SOCCHECKITEMV1_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 检查项相关信息
                */
                class SocCheckItemV1 : public AbstractModel
                {
                public:
                    SocCheckItemV1();
                    ~SocCheckItemV1() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检查项id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckId 检查项id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCheckId() const;

                    /**
                     * 设置检查项id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkId 检查项id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCheckId(const std::string& _checkId);

                    /**
                     * 判断参数 CheckId 是否已赋值
                     * @return CheckId 是否已赋值
                     * 
                     */
                    bool CheckIdHasBeenSet() const;

                    /**
                     * 获取配置要求
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 配置要求
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置配置要求
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 配置要求
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
                     * 获取检查项类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 检查项类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置检查项类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 检查项类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取检查对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetType 检查对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置检查对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetType 检查对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取默认风险等级 2:低危 3:中危 4:高危
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 默认风险等级 2:低危 3:中危 4:高危
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置默认风险等级 2:低危 3:中危 4:高危
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _level 默认风险等级 2:低危 3:中危 4:高危
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取相关规范
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Standard 相关规范
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStandard() const;

                    /**
                     * 设置相关规范
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _standard 相关规范
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStandard(const std::string& _standard);

                    /**
                     * 判断参数 Standard 是否已赋值
                     * @return Standard 是否已赋值
                     * 
                     */
                    bool StandardHasBeenSet() const;

                    /**
                     * 获取检查项是否付费 1:免费 2:付费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsFree 检查项是否付费 1:免费 2:付费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsFree() const;

                    /**
                     * 设置检查项是否付费 1:免费 2:付费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isFree 检查项是否付费 1:免费 2:付费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsFree(const int64_t& _isFree);

                    /**
                     * 判断参数 IsFree 是否已赋值
                     * @return IsFree 是否已赋值
                     * 
                     */
                    bool IsFreeHasBeenSet() const;

                private:

                    /**
                     * 检查项id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_checkId;
                    bool m_checkIdHasBeenSet;

                    /**
                     * 配置要求
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 检查项类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 检查对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 默认风险等级 2:低危 3:中危 4:高危
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 相关规范
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_standard;
                    bool m_standardHasBeenSet;

                    /**
                     * 检查项是否付费 1:免费 2:付费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isFree;
                    bool m_isFreeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_SOCCHECKITEMV1_H_
