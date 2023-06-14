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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKLIFECYCLESCRIPTRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKLIFECYCLESCRIPTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * DescribeNotebookLifecycleScript返回参数结构体
                */
                class DescribeNotebookLifecycleScriptResponse : public AbstractModel
                {
                public:
                    DescribeNotebookLifecycleScriptResponse();
                    ~DescribeNotebookLifecycleScriptResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取生命周期脚本名称
                     * @return NotebookLifecycleScriptsName 生命周期脚本名称
                     * 
                     */
                    std::string GetNotebookLifecycleScriptsName() const;

                    /**
                     * 判断参数 NotebookLifecycleScriptsName 是否已赋值
                     * @return NotebookLifecycleScriptsName 是否已赋值
                     * 
                     */
                    bool NotebookLifecycleScriptsNameHasBeenSet() const;

                    /**
                     * 获取创建脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateScript 创建脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateScript() const;

                    /**
                     * 判断参数 CreateScript 是否已赋值
                     * @return CreateScript 是否已赋值
                     * 
                     */
                    bool CreateScriptHasBeenSet() const;

                    /**
                     * 获取启动脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartScript 启动脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartScript() const;

                    /**
                     * 判断参数 StartScript 是否已赋值
                     * @return StartScript 是否已赋值
                     * 
                     */
                    bool StartScriptHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreationTime 创建时间
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取最后修改时间
                     * @return LastModifiedTime 最后修改时间
                     * 
                     */
                    std::string GetLastModifiedTime() const;

                    /**
                     * 判断参数 LastModifiedTime 是否已赋值
                     * @return LastModifiedTime 是否已赋值
                     * 
                     */
                    bool LastModifiedTimeHasBeenSet() const;

                private:

                    /**
                     * 生命周期脚本名称
                     */
                    std::string m_notebookLifecycleScriptsName;
                    bool m_notebookLifecycleScriptsNameHasBeenSet;

                    /**
                     * 创建脚本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createScript;
                    bool m_createScriptHasBeenSet;

                    /**
                     * 启动脚本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startScript;
                    bool m_startScriptHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 最后修改时间
                     */
                    std::string m_lastModifiedTime;
                    bool m_lastModifiedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKLIFECYCLESCRIPTRESPONSE_H_
