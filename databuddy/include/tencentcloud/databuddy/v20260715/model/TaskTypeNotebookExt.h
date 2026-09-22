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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKTYPENOTEBOOKEXT_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKTYPENOTEBOOKEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Notebook 类型任务扩展
                */
                class TaskTypeNotebookExt : public AbstractModel
                {
                public:
                    TaskTypeNotebookExt();
                    ~TaskTypeNotebookExt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>脚本来源。取值：SCRIPT_SOURCE_LOCAL（本地）/ SCRIPT_SOURCE_GIT（Git 仓库）/<br>SCRIPT_SOURCE_CFS（CFS 文件系统）/ SCRIPT_SOURCE_COS（COS 对象存储）/<br>SCRIPT_SOURCE_WORKSPACE（工作空间）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source <p>脚本来源。取值：SCRIPT_SOURCE_LOCAL（本地）/ SCRIPT_SOURCE_GIT（Git 仓库）/<br>SCRIPT_SOURCE_CFS（CFS 文件系统）/ SCRIPT_SOURCE_COS（COS 对象存储）/<br>SCRIPT_SOURCE_WORKSPACE（工作空间）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>脚本来源。取值：SCRIPT_SOURCE_LOCAL（本地）/ SCRIPT_SOURCE_GIT（Git 仓库）/<br>SCRIPT_SOURCE_CFS（CFS 文件系统）/ SCRIPT_SOURCE_COS（COS 对象存储）/<br>SCRIPT_SOURCE_WORKSPACE（工作空间）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _source <p>脚本来源。取值：SCRIPT_SOURCE_LOCAL（本地）/ SCRIPT_SOURCE_GIT（Git 仓库）/<br>SCRIPT_SOURCE_CFS（CFS 文件系统）/ SCRIPT_SOURCE_COS（COS 对象存储）/<br>SCRIPT_SOURCE_WORKSPACE（工作空间）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>前端显示使用，对执行平台无意义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayPath <p>前端显示使用，对执行平台无意义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayPath() const;

                    /**
                     * 设置<p>前端显示使用，对执行平台无意义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayPath <p>前端显示使用，对执行平台无意义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisplayPath(const std::string& _displayPath);

                    /**
                     * 判断参数 DisplayPath 是否已赋值
                     * @return DisplayPath 是否已赋值
                     * 
                     */
                    bool DisplayPathHasBeenSet() const;

                    /**
                     * 获取<p>Notebook 相对路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotebookPath <p>Notebook 相对路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNotebookPath() const;

                    /**
                     * 设置<p>Notebook 相对路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notebookPath <p>Notebook 相对路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotebookPath(const std::string& _notebookPath);

                    /**
                     * 判断参数 NotebookPath 是否已赋值
                     * @return NotebookPath 是否已赋值
                     * 
                     */
                    bool NotebookPathHasBeenSet() const;

                    /**
                     * 获取<p>Notebook 绝对路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotebookAbsolutePath <p>Notebook 绝对路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNotebookAbsolutePath() const;

                    /**
                     * 设置<p>Notebook 绝对路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notebookAbsolutePath <p>Notebook 绝对路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotebookAbsolutePath(const std::string& _notebookAbsolutePath);

                    /**
                     * 判断参数 NotebookAbsolutePath 是否已赋值
                     * @return NotebookAbsolutePath 是否已赋值
                     * 
                     */
                    bool NotebookAbsolutePathHasBeenSet() const;

                private:

                    /**
                     * <p>脚本来源。取值：SCRIPT_SOURCE_LOCAL（本地）/ SCRIPT_SOURCE_GIT（Git 仓库）/<br>SCRIPT_SOURCE_CFS（CFS 文件系统）/ SCRIPT_SOURCE_COS（COS 对象存储）/<br>SCRIPT_SOURCE_WORKSPACE（工作空间）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>前端显示使用，对执行平台无意义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayPath;
                    bool m_displayPathHasBeenSet;

                    /**
                     * <p>Notebook 相对路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_notebookPath;
                    bool m_notebookPathHasBeenSet;

                    /**
                     * <p>Notebook 绝对路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_notebookAbsolutePath;
                    bool m_notebookAbsolutePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKTYPENOTEBOOKEXT_H_
