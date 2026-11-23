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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_EIPOUTCONFIG_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_EIPOUTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 同[EipOutConfig](https://document.capi.woa.com/document/product/583/17244#EipOutConfig)
                */
                class EipOutConfig : public AbstractModel
                {
                public:
                    EipOutConfig();
                    ~EipOutConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否固定 EIP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EipFixed <p>是否固定 EIP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEipFixed() const;

                    /**
                     * 设置<p>是否固定 EIP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eipFixed <p>是否固定 EIP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEipFixed(const std::string& _eipFixed);

                    /**
                     * 判断参数 EipFixed 是否已赋值
                     * @return EipFixed 是否已赋值
                     * 
                     */
                    bool EipFixedHasBeenSet() const;

                    /**
                     * 获取<p>EIP 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Eips <p>EIP 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetEips() const;

                    /**
                     * 设置<p>EIP 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eips <p>EIP 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEips(const std::vector<std::string>& _eips);

                    /**
                     * 判断参数 Eips 是否已赋值
                     * @return Eips 是否已赋值
                     * 
                     */
                    bool EipsHasBeenSet() const;

                private:

                    /**
                     * <p>是否固定 EIP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eipFixed;
                    bool m_eipFixedHasBeenSet;

                    /**
                     * <p>EIP 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_eips;
                    bool m_eipsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_EIPOUTCONFIG_H_
