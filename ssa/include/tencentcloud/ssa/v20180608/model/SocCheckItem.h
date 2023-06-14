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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_SOCCHECKITEM_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_SOCCHECKITEM_H_

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
                * SocCheckItem类型
                */
                class SocCheckItem : public AbstractModel
                {
                public:
                    SocCheckItem();
                    ~SocCheckItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 名字
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
                     * 获取唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LevelId 唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLevelId() const;

                    /**
                     * 设置唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _levelId 唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLevelId(const std::string& _levelId);

                    /**
                     * 判断参数 LevelId 是否已赋值
                     * @return LevelId 是否已赋值
                     * 
                     */
                    bool LevelIdHasBeenSet() const;

                    /**
                     * 获取成功数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessCount 成功数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置成功数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _successCount 成功数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuccessCount(const int64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取失败数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailCount 失败数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFailCount() const;

                    /**
                     * 设置失败数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failCount 失败数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailCount(const int64_t& _failCount);

                    /**
                     * 判断参数 FailCount 是否已赋值
                     * @return FailCount 是否已赋值
                     * 
                     */
                    bool FailCountHasBeenSet() const;

                private:

                    /**
                     * 名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_levelId;
                    bool m_levelIdHasBeenSet;

                    /**
                     * 成功数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 失败数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_failCount;
                    bool m_failCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_SOCCHECKITEM_H_
