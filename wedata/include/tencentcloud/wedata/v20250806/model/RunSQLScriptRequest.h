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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RUNSQLSCRIPTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RUNSQLSCRIPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * RunSQLScript请求参数结构体
                */
                class RunSQLScriptRequest : public AbstractModel
                {
                public:
                    RunSQLScriptRequest();
                    ~RunSQLScriptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取脚本id
                     * @return ScriptId 脚本id
                     * 
                     */
                    std::string GetScriptId() const;

                    /**
                     * 设置脚本id
                     * @param _scriptId 脚本id
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
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取脚本内容，不传则默认执行已保存的全量脚本内容；若传递则要用Base64编码
                     * @return ScriptContent 脚本内容，不传则默认执行已保存的全量脚本内容；若传递则要用Base64编码
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置脚本内容，不传则默认执行已保存的全量脚本内容；若传递则要用Base64编码
                     * @param _scriptContent 脚本内容，不传则默认执行已保存的全量脚本内容；若传递则要用Base64编码
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
                     * 获取高级运行参数，JSON格式base64编码
                     * @return Params 高级运行参数，JSON格式base64编码
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置高级运行参数，JSON格式base64编码
                     * @param _params 高级运行参数，JSON格式base64编码
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * 脚本id
                     */
                    std::string m_scriptId;
                    bool m_scriptIdHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 脚本内容，不传则默认执行已保存的全量脚本内容；若传递则要用Base64编码
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * 高级运行参数，JSON格式base64编码
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RUNSQLSCRIPTREQUEST_H_
