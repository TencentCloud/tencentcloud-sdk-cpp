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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_NOTE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_NOTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 数据资产报告-各种key-value的展示数据结构
                */
                class Note : public AbstractModel
                {
                public:
                    Note();
                    ~Note() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通用key，比如分类名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key 通用key，比如分类名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置通用key，比如分类名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _key 通用key，比如分类名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取通用value，比如分类个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 通用value，比如分类个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置通用value，比如分类个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 通用value，比如分类个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 通用key，比如分类名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 通用value，比如分类个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_NOTE_H_
