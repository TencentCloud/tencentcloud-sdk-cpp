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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SCRIPT_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SCRIPT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * script实例。
                */
                class Script : public AbstractModel
                {
                public:
                    Script();
                    ~Script() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取脚本Id，长度36字节。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptId 脚本Id，长度36字节。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetScriptId() const;

                    /**
                     * 设置脚本Id，长度36字节。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ScriptId 脚本Id，长度36字节。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetScriptId(const std::string& _scriptId);

                    /**
                     * 判断参数 ScriptId 是否已赋值
                     * @return ScriptId 是否已赋值
                     */
                    bool ScriptIdHasBeenSet() const;

                    /**
                     * 获取脚本名称，长度0-25。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptName 脚本名称，长度0-25。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetScriptName() const;

                    /**
                     * 设置脚本名称，长度0-25。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ScriptName 脚本名称，长度0-25。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetScriptName(const std::string& _scriptName);

                    /**
                     * 判断参数 ScriptName 是否已赋值
                     * @return ScriptName 是否已赋值
                     */
                    bool ScriptNameHasBeenSet() const;

                    /**
                     * 获取脚本描述，长度0-50。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptDesc 脚本描述，长度0-50。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetScriptDesc() const;

                    /**
                     * 设置脚本描述，长度0-50。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ScriptDesc 脚本描述，长度0-50。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetScriptDesc(const std::string& _scriptDesc);

                    /**
                     * 判断参数 ScriptDesc 是否已赋值
                     * @return ScriptDesc 是否已赋值
                     */
                    bool ScriptDescHasBeenSet() const;

                    /**
                     * 获取默认关联数据库。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName 默认关联数据库。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置默认关联数据库。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatabaseName 默认关联数据库。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取SQL描述，长度0-10000。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SQLStatement SQL描述，长度0-10000。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSQLStatement() const;

                    /**
                     * 设置SQL描述，长度0-10000。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SQLStatement SQL描述，长度0-10000。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSQLStatement(const std::string& _sQLStatement);

                    /**
                     * 判断参数 SQLStatement 是否已赋值
                     * @return SQLStatement 是否已赋值
                     */
                    bool SQLStatementHasBeenSet() const;

                    /**
                     * 获取更新时间戳， 单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间戳， 单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间戳， 单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 更新时间戳， 单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 脚本Id，长度36字节。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scriptId;
                    bool m_scriptIdHasBeenSet;

                    /**
                     * 脚本名称，长度0-25。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scriptName;
                    bool m_scriptNameHasBeenSet;

                    /**
                     * 脚本描述，长度0-50。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scriptDesc;
                    bool m_scriptDescHasBeenSet;

                    /**
                     * 默认关联数据库。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * SQL描述，长度0-10000。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sQLStatement;
                    bool m_sQLStatementHasBeenSet;

                    /**
                     * 更新时间戳， 单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SCRIPT_H_
