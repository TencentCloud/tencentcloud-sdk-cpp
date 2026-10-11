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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETTABLESRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETTABLESRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/TableInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 批量获取表元数据响应
                */
                class GetTablesRsp : public AbstractModel
                {
                public:
                    GetTablesRsp();
                    ~GetTablesRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表信息列表。注意：仅返回当前workspace有权限的catalog下的表，无权限的表会被静默跳过
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items 表信息列表。注意：仅返回当前workspace有权限的catalog下的表，无权限的表会被静默跳过
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TableInfo> GetItems() const;

                    /**
                     * 设置表信息列表。注意：仅返回当前workspace有权限的catalog下的表，无权限的表会被静默跳过
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _items 表信息列表。注意：仅返回当前workspace有权限的catalog下的表，无权限的表会被静默跳过
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItems(const std::vector<TableInfo>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 表信息列表。注意：仅返回当前workspace有权限的catalog下的表，无权限的表会被静默跳过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TableInfo> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETTABLESRSP_H_
