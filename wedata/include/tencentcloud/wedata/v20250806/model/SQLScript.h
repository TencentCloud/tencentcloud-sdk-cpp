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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_SQLSCRIPT_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_SQLSCRIPT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/SQLScriptConfig.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 数据探索脚本业务处理实体
                */
                class SQLScript : public AbstractModel
                {
                public:
                    SQLScript();
                    ~SQLScript() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取脚本id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptId 脚本id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScriptId() const;

                    /**
                     * 设置脚本id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptId 脚本id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScriptId(const std::string& _scriptId);

                    /**
                     * 判断参数 ScriptId 是否已赋值
                     * @return ScriptId 是否已赋值
                     * 
                     */
                    bool ScriptIdHasBeenSet() const;

                    /**
                     * 获取脚本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptName 脚本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScriptName() const;

                    /**
                     * 设置脚本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptName 脚本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScriptName(const std::string& _scriptName);

                    /**
                     * 判断参数 ScriptName 是否已赋值
                     * @return ScriptName 是否已赋值
                     * 
                     */
                    bool ScriptNameHasBeenSet() const;

                    /**
                     * 获取脚本所有者 uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin 脚本所有者 uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置脚本所有者 uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin 脚本所有者 uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取父文件夹path，/aaa/bbb/ccc
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentFolderPath 父文件夹path，/aaa/bbb/ccc
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置父文件夹path，/aaa/bbb/ccc
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentFolderPath 父文件夹path，/aaa/bbb/ccc
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentFolderPath(const std::string& _parentFolderPath);

                    /**
                     * 判断参数 ParentFolderPath 是否已赋值
                     * @return ParentFolderPath 是否已赋值
                     * 
                     */
                    bool ParentFolderPathHasBeenSet() const;

                    /**
                     * 获取脚本配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptConfig 脚本配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SQLScriptConfig GetScriptConfig() const;

                    /**
                     * 设置脚本配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptConfig 脚本配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScriptConfig(const SQLScriptConfig& _scriptConfig);

                    /**
                     * 判断参数 ScriptConfig 是否已赋值
                     * @return ScriptConfig 是否已赋值
                     * 
                     */
                    bool ScriptConfigHasBeenSet() const;

                    /**
                     * 获取脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptContent 脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptContent 脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScriptContent(const std::string& _scriptContent);

                    /**
                     * 判断参数 ScriptContent 是否已赋值
                     * @return ScriptContent 是否已赋值
                     * 
                     */
                    bool ScriptContentHasBeenSet() const;

                    /**
                     * 获取最近一次操作人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUserUin 最近一次操作人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateUserUin() const;

                    /**
                     * 设置最近一次操作人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateUserUin 最近一次操作人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateUserUin(const std::string& _updateUserUin);

                    /**
                     * 判断参数 UpdateUserUin 是否已赋值
                     * @return UpdateUserUin 是否已赋值
                     * 
                     */
                    bool UpdateUserUinHasBeenSet() const;

                    /**
                     * 获取项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取更新时间 yyyy-MM-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间 yyyy-MM-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间 yyyy-MM-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间 yyyy-MM-dd hh:mm:ss
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
                     * 获取创建时间 yyyy-MM-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间 yyyy-MM-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间 yyyy-MM-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间 yyyy-MM-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取权限范围：SHARED, PRIVATE
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessScope 权限范围：SHARED, PRIVATE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccessScope() const;

                    /**
                     * 设置权限范围：SHARED, PRIVATE
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessScope 权限范围：SHARED, PRIVATE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessScope(const std::string& _accessScope);

                    /**
                     * 判断参数 AccessScope 是否已赋值
                     * @return AccessScope 是否已赋值
                     * 
                     */
                    bool AccessScopeHasBeenSet() const;

                    /**
                     * 获取节点全路径，/aaa/bbb/ccc.ipynb，由各个节点的名称组成
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path 节点全路径，/aaa/bbb/ccc.ipynb，由各个节点的名称组成
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置节点全路径，/aaa/bbb/ccc.ipynb，由各个节点的名称组成
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path 节点全路径，/aaa/bbb/ccc.ipynb，由各个节点的名称组成
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                private:

                    /**
                     * 脚本id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scriptId;
                    bool m_scriptIdHasBeenSet;

                    /**
                     * 脚本名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scriptName;
                    bool m_scriptNameHasBeenSet;

                    /**
                     * 脚本所有者 uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 父文件夹path，/aaa/bbb/ccc
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * 脚本配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SQLScriptConfig m_scriptConfig;
                    bool m_scriptConfigHasBeenSet;

                    /**
                     * 脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * 最近一次操作人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUserUin;
                    bool m_updateUserUinHasBeenSet;

                    /**
                     * 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 更新时间 yyyy-MM-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 创建时间 yyyy-MM-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 权限范围：SHARED, PRIVATE
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accessScope;
                    bool m_accessScopeHasBeenSet;

                    /**
                     * 节点全路径，/aaa/bbb/ccc.ipynb，由各个节点的名称组成
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_SQLSCRIPT_H_
