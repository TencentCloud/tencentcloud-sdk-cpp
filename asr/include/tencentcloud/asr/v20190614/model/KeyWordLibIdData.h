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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_KEYWORDLIBIDDATA_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_KEYWORDLIBIDDATA_H_

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
                * 关键词ID
                */
                class KeyWordLibIdData : public AbstractModel
                {
                public:
                    KeyWordLibIdData();
                    ~KeyWordLibIdData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关键词ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyWordLibId 关键词ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeyWordLibId() const;

                    /**
                     * 设置关键词ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyWordLibId 关键词ID
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

                private:

                    /**
                     * 关键词ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyWordLibId;
                    bool m_keyWordLibIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_KEYWORDLIBIDDATA_H_
