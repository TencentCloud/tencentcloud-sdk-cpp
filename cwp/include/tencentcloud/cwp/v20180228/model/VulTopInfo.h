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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULTOPINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULTOPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 漏洞top统计实体
                */
                class VulTopInfo : public AbstractModel
                {
                public:
                    VulTopInfo();
                    ~VulTopInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞 名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulName 漏洞 名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置漏洞 名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vulName 漏洞 名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取危害等级：1-低危；2-中危；3-高危；4-严重
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulLevel 危害等级：1-低危；2-中危；3-高危；4-严重
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetVulLevel() const;

                    /**
                     * 设置危害等级：1-低危；2-中危；3-高危；4-严重
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vulLevel 危害等级：1-低危；2-中危；3-高危；4-严重
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVulLevel(const uint64_t& _vulLevel);

                    /**
                     * 判断参数 VulLevel 是否已赋值
                     * @return VulLevel 是否已赋值
                     * 
                     */
                    bool VulLevelHasBeenSet() const;

                    /**
                     * 获取漏洞数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulCount 漏洞数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetVulCount() const;

                    /**
                     * 设置漏洞数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vulCount 漏洞数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVulCount(const uint64_t& _vulCount);

                    /**
                     * 判断参数 VulCount 是否已赋值
                     * @return VulCount 是否已赋值
                     * 
                     */
                    bool VulCountHasBeenSet() const;

                    /**
                     * 获取漏洞id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulId 漏洞id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置漏洞id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vulId 漏洞id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                private:

                    /**
                     * 漏洞 名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 危害等级：1-低危；2-中危；3-高危；4-严重
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_vulLevel;
                    bool m_vulLevelHasBeenSet;

                    /**
                     * 漏洞数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_vulCount;
                    bool m_vulCountHasBeenSet;

                    /**
                     * 漏洞id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULTOPINFO_H_
