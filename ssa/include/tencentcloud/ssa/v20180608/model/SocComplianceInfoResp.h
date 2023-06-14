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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_SOCCOMPLIANCEINFORESP_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_SOCCOMPLIANCEINFORESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/SocComplianceItem.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 返回结构
                */
                class SocComplianceInfoResp : public AbstractModel
                {
                public:
                    SocComplianceInfoResp();
                    ~SocComplianceInfoResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合格项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items 合格项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SocComplianceItem> GetItems() const;

                    /**
                     * 设置合格项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _items 合格项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItems(const std::vector<SocComplianceItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 合格项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SocComplianceItem> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_SOCCOMPLIANCEINFORESP_H_
