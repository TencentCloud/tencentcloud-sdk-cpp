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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_RANKINFO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_RANKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/RowColumnConfig.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 行列权限内容
                */
                class RankInfo : public AbstractModel
                {
                public:
                    RankInfo();
                    ~RankInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mode 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mode 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取`
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RulerInfo `
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRulerInfo() const;

                    /**
                     * 设置`
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rulerInfo `
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRulerInfo(const std::string& _rulerInfo);

                    /**
                     * 判断参数 RulerInfo 是否已赋值
                     * @return RulerInfo 是否已赋值
                     * 
                     */
                    bool RulerInfoHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleId 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRoleId() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleId 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoleId(const int64_t& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleType 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoleType() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleType 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoleType(const std::string& _roleType);

                    /**
                     * 判断参数 RoleType 是否已赋值
                     * @return RoleType 是否已赋值
                     * 
                     */
                    bool RoleTypeHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableId 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTableId() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableId 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableId(const int64_t& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取行列权限配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RowColumnConfigList 行列权限配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RowColumnConfig> GetRowColumnConfigList() const;

                    /**
                     * 设置行列权限配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rowColumnConfigList 行列权限配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRowColumnConfigList(const std::vector<RowColumnConfig>& _rowColumnConfigList);

                    /**
                     * 判断参数 RowColumnConfigList 是否已赋值
                     * @return RowColumnConfigList 是否已赋值
                     * 
                     */
                    bool RowColumnConfigListHasBeenSet() const;

                private:

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * `
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rulerInfo;
                    bool m_rulerInfoHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleType;
                    bool m_roleTypeHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 行列权限配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RowColumnConfig> m_rowColumnConfigList;
                    bool m_rowColumnConfigListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_RANKINFO_H_
