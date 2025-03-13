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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_KVPAIR_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_KVPAIR_H_

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
                * 键值对
                */
                class KVPair : public AbstractModel
                {
                public:
                    KVPair();
                    ~KVPair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取键名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return K 键名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetK() const;

                    /**
                     * 设置键名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _k 键名
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
                     * 获取值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return V 值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetV() const;

                    /**
                     * 设置值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _v 值
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
                     * 键名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_k;
                    bool m_kHasBeenSet;

                    /**
                     * 值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_v;
                    bool m_vHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_KVPAIR_H_
