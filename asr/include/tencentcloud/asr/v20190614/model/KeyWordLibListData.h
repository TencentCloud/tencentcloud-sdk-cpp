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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_KEYWORDLIBLISTDATA_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_KEYWORDLIBLISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/asr/v20190614/model/KeyWordLib.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * 查询列表返回数据
                */
                class KeyWordLibListData : public AbstractModel
                {
                public:
                    KeyWordLibListData();
                    ~KeyWordLibListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关键词表列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyWordLibList 关键词表列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KeyWordLib> GetKeyWordLibList() const;

                    /**
                     * 设置关键词表列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyWordLibList 关键词表列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyWordLibList(const std::vector<KeyWordLib>& _keyWordLibList);

                    /**
                     * 判断参数 KeyWordLibList 是否已赋值
                     * @return KeyWordLibList 是否已赋值
                     * 
                     */
                    bool KeyWordLibListHasBeenSet() const;

                    /**
                     * 获取关键词列表总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 关键词列表总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置关键词列表总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 关键词列表总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 关键词表列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KeyWordLib> m_keyWordLibList;
                    bool m_keyWordLibListHasBeenSet;

                    /**
                     * 关键词列表总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_KEYWORDLIBLISTDATA_H_
