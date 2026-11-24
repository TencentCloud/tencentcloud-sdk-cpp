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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTABLEUPDATERECORD_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTABLEUPDATERECORD_H_

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
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 触发本次运行的一条表更新记录（某张表在某个时刻、某个版本的一次更新）
                */
                class TriggerTableUpdateRecord : public AbstractModel
                {
                public:
                    TriggerTableUpdateRecord();
                    ~TriggerTableUpdateRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>表全名</p><p>参数格式：格式 catalog.schema.table</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableQualifier <p>表全名</p><p>参数格式：格式 catalog.schema.table</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableQualifier() const;

                    /**
                     * 设置<p>表全名</p><p>参数格式：格式 catalog.schema.table</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableQualifier <p>表全名</p><p>参数格式：格式 catalog.schema.table</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableQualifier(const std::string& _tableQualifier);

                    /**
                     * 判断参数 TableQualifier 是否已赋值
                     * @return TableQualifier 是否已赋值
                     * 
                     */
                    bool TableQualifierHasBeenSet() const;

                    /**
                     * 获取<p>表更新时间</p><p>参数格式：时间戳格式，如：1792951200000</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>表更新时间</p><p>参数格式：时间戳格式，如：1792951200000</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>表更新时间</p><p>参数格式：时间戳格式，如：1792951200000</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>表更新时间</p><p>参数格式：时间戳格式，如：1792951200000</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>表更新版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateVersion <p>表更新版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateVersion() const;

                    /**
                     * 设置<p>表更新版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateVersion <p>表更新版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateVersion(const std::string& _updateVersion);

                    /**
                     * 判断参数 UpdateVersion 是否已赋值
                     * @return UpdateVersion 是否已赋值
                     * 
                     */
                    bool UpdateVersionHasBeenSet() const;

                    /**
                     * 获取<p>数据资产ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetGuid <p>数据资产ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetGuid() const;

                    /**
                     * 设置<p>数据资产ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetGuid <p>数据资产ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetGuid(const std::string& _assetGuid);

                    /**
                     * 判断参数 AssetGuid 是否已赋值
                     * @return AssetGuid 是否已赋值
                     * 
                     */
                    bool AssetGuidHasBeenSet() const;

                private:

                    /**
                     * <p>表全名</p><p>参数格式：格式 catalog.schema.table</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableQualifier;
                    bool m_tableQualifierHasBeenSet;

                    /**
                     * <p>表更新时间</p><p>参数格式：时间戳格式，如：1792951200000</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>表更新版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateVersion;
                    bool m_updateVersionHasBeenSet;

                    /**
                     * <p>数据资产ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetGuid;
                    bool m_assetGuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTABLEUPDATERECORD_H_
