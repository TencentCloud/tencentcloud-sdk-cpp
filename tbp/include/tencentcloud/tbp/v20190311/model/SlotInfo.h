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

#ifndef TENCENTCLOUD_TBP_V20190311_MODEL_SLOTINFO_H_
#define TENCENTCLOUD_TBP_V20190311_MODEL_SLOTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbp
    {
        namespace V20190311
        {
            namespace Model
            {
                /**
                * 槽位信息
                */
                class SlotInfo : public AbstractModel
                {
                public:
                    SlotInfo();
                    ~SlotInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取槽位名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SlotName 槽位名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSlotName() const;

                    /**
                     * 设置槽位名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _slotName 槽位名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSlotName(const std::string& _slotName);

                    /**
                     * 判断参数 SlotName 是否已赋值
                     * @return SlotName 是否已赋值
                     * 
                     */
                    bool SlotNameHasBeenSet() const;

                    /**
                     * 获取槽位值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SlotValue 槽位值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSlotValue() const;

                    /**
                     * 设置槽位值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _slotValue 槽位值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSlotValue(const std::string& _slotValue);

                    /**
                     * 判断参数 SlotValue 是否已赋值
                     * @return SlotValue 是否已赋值
                     * 
                     */
                    bool SlotValueHasBeenSet() const;

                private:

                    /**
                     * 槽位名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_slotName;
                    bool m_slotNameHasBeenSet;

                    /**
                     * 槽位值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_slotValue;
                    bool m_slotValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBP_V20190311_MODEL_SLOTINFO_H_
