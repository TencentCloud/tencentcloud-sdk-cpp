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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_LOGICALTYPE_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_LOGICALTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * SqlGateway返回LogicalType类型
                */
                class LogicalType : public AbstractModel
                {
                public:
                    LogicalType();
                    ~LogicalType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 类型
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
                     * 获取是否允许为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NullAble 是否允许为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetNullAble() const;

                    /**
                     * 设置是否允许为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nullAble 是否允许为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNullAble(const bool& _nullAble);

                    /**
                     * 判断参数 NullAble 是否已赋值
                     * @return NullAble 是否已赋值
                     * 
                     */
                    bool NullAbleHasBeenSet() const;

                    /**
                     * 获取长度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Length 长度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLength() const;

                    /**
                     * 设置长度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _length 长度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLength(const int64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                private:

                    /**
                     * 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 是否允许为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_nullAble;
                    bool m_nullAbleHasBeenSet;

                    /**
                     * 长度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_length;
                    bool m_lengthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_LOGICALTYPE_H_
