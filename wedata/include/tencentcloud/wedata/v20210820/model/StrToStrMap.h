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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_STRTOSTRMAP_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_STRTOSTRMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * map
                */
                class StrToStrMap : public AbstractModel
                {
                public:
                    StrToStrMap();
                    ~StrToStrMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取k
注意：此字段可能返回 null，表示取不到有效值。
                     * @return K k
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetK() const;

                    /**
                     * 设置k
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _k k
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetK(const std::string& _k);

                    /**
                     * 判断参数 K 是否已赋值
                     * @return K 是否已赋值
                     * 
                     */
                    bool KHasBeenSet() const;

                    /**
                     * 获取v
注意：此字段可能返回 null，表示取不到有效值。
                     * @return V v
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetV() const;

                    /**
                     * 设置v
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _v v
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetV(const std::string& _v);

                    /**
                     * 判断参数 V 是否已赋值
                     * @return V 是否已赋值
                     * 
                     */
                    bool VHasBeenSet() const;

                private:

                    /**
                     * k
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_k;
                    bool m_kHasBeenSet;

                    /**
                     * v
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_v;
                    bool m_vHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_STRTOSTRMAP_H_
