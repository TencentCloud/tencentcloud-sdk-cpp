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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_SECURITYCAPABILITIES_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_SECURITYCAPABILITIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 安全能力
                */
                class SecurityCapabilities : public AbstractModel
                {
                public:
                    SecurityCapabilities();
                    ~SecurityCapabilities() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取允许操作列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Add 允许操作列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAdd() const;

                    /**
                     * 设置允许操作列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _add 允许操作列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdd(const std::vector<std::string>& _add);

                    /**
                     * 判断参数 Add 是否已赋值
                     * @return Add 是否已赋值
                     * 
                     */
                    bool AddHasBeenSet() const;

                    /**
                     * 获取禁止操作列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Drop 禁止操作列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDrop() const;

                    /**
                     * 设置禁止操作列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _drop 禁止操作列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDrop(const std::vector<std::string>& _drop);

                    /**
                     * 判断参数 Drop 是否已赋值
                     * @return Drop 是否已赋值
                     * 
                     */
                    bool DropHasBeenSet() const;

                private:

                    /**
                     * 允许操作列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_add;
                    bool m_addHasBeenSet;

                    /**
                     * 禁止操作列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_drop;
                    bool m_dropHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_SECURITYCAPABILITIES_H_
