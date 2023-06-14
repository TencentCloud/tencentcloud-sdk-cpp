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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DMSTABLEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DMSTABLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DMSTable.h>
#include <tencentcloud/dlc/v20210125/model/Asset.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DMSTable信息
                */
                class DMSTableInfo : public AbstractModel
                {
                public:
                    DMSTableInfo();
                    ~DMSTableInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DMS表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Table DMS表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DMSTable GetTable() const;

                    /**
                     * 设置DMS表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _table DMS表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTable(const DMSTable& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取基础对象信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Asset 基础对象信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Asset GetAsset() const;

                    /**
                     * 设置基础对象信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _asset 基础对象信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAsset(const Asset& _asset);

                    /**
                     * 判断参数 Asset 是否已赋值
                     * @return Asset 是否已赋值
                     * 
                     */
                    bool AssetHasBeenSet() const;

                private:

                    /**
                     * DMS表信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DMSTable m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 基础对象信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Asset m_asset;
                    bool m_assetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DMSTABLEINFO_H_
