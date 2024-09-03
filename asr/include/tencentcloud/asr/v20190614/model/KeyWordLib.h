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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_KEYWORDLIB_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_KEYWORDLIB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * 关键词表信息
                */
                class KeyWordLib : public AbstractModel
                {
                public:
                    KeyWordLib();
                    ~KeyWordLib() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关键词表ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyWordLibId 关键词表ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeyWordLibId() const;

                    /**
                     * 设置关键词表ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyWordLibId 关键词表ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyWordLibId(const std::string& _keyWordLibId);

                    /**
                     * 判断参数 KeyWordLibId 是否已赋值
                     * @return KeyWordLibId 是否已赋值
                     * 
                     */
                    bool KeyWordLibIdHasBeenSet() const;

                    /**
                     * 获取关键词表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 关键词表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置关键词表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 关键词表名称
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
                     * 获取关键词列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyWordList 关键词列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetKeyWordList() const;

                    /**
                     * 设置关键词列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyWordList 关键词列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyWordList(const std::vector<std::string>& _keyWordList);

                    /**
                     * 判断参数 KeyWordList 是否已赋值
                     * @return KeyWordList 是否已赋值
                     * 
                     */
                    bool KeyWordListHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 关键词表ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyWordLibId;
                    bool m_keyWordLibIdHasBeenSet;

                    /**
                     * 关键词表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 关键词列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_keyWordList;
                    bool m_keyWordListHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_KEYWORDLIB_H_
