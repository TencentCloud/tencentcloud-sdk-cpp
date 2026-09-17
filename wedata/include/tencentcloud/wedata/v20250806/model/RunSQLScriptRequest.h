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
                * RunSQLScript请求参数结构体
                */
                class RunSQLScriptRequest : public AbstractModel
                {
                public:
                    RunSQLScriptRequest();
                    ~RunSQLScriptRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取脚本id。如果不填则需要传入 ScriptConfig、ScriptContent，此时为免脚本临时运行模式，服务端不保存脚本
                     * @return ScriptId 脚本id。如果不填则需要传入 ScriptConfig、ScriptContent，此时为免脚本临时运行模式，服务端不保存脚本
                     * 
                     */
                    std::string GetScriptId() const;

                    /**
                     * 设置脚本id。如果不填则需要传入 ScriptConfig、ScriptContent，此时为免脚本临时运行模式，服务端不保存脚本
                     * @param _scriptId 脚本id。如果不填则需要传入 ScriptConfig、ScriptContent，此时为免脚本临时运行模式，服务端不保存脚本
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
                     * 获取脚本配置。免脚本临时运行模式（未传 ScriptId）下必填，其中 DatasourceId 必填、ExecutorGroupId 选填（缺省时使用项目管理-数据分析配置中的执行资源组）；传入 ScriptId 时本字段被忽略，配置取自已保存的脚本
                     * @return ScriptConfig 脚本配置。免脚本临时运行模式（未传 ScriptId）下必填，其中 DatasourceId 必填、ExecutorGroupId 选填（缺省时使用项目管理-数据分析配置中的执行资源组）；传入 ScriptId 时本字段被忽略，配置取自已保存的脚本
                     * 
                     */
                    SQLScriptConfig GetScriptConfig() const;

                    /**
                     * 设置脚本配置。免脚本临时运行模式（未传 ScriptId）下必填，其中 DatasourceId 必填、ExecutorGroupId 选填（缺省时使用项目管理-数据分析配置中的执行资源组）；传入 ScriptId 时本字段被忽略，配置取自已保存的脚本
                     * @param _scriptConfig 脚本配置。免脚本临时运行模式（未传 ScriptId）下必填，其中 DatasourceId 必填、ExecutorGroupId 选填（缺省时使用项目管理-数据分析配置中的执行资源组）；传入 ScriptId 时本字段被忽略，配置取自已保存的脚本
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
                     * 获取脚本内容，支持传递代码原文或者 Base64 编码，服务端自动识别。传 ScriptId 时不传则执行已保存的全量脚本内容；免脚本临时运行模式下必填。注意：若原文恰好由 Base64 字符集组成且长度为 4 的倍数（如 descTBLS），会被识别为已编码，此类内容请显式 Base64 编码后传入
                     * @return ScriptContent 脚本内容，支持传递代码原文或者 Base64 编码，服务端自动识别。传 ScriptId 时不传则执行已保存的全量脚本内容；免脚本临时运行模式下必填。注意：若原文恰好由 Base64 字符集组成且长度为 4 的倍数（如 descTBLS），会被识别为已编码，此类内容请显式 Base64 编码后传入
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置脚本内容，支持传递代码原文或者 Base64 编码，服务端自动识别。传 ScriptId 时不传则执行已保存的全量脚本内容；免脚本临时运行模式下必填。注意：若原文恰好由 Base64 字符集组成且长度为 4 的倍数（如 descTBLS），会被识别为已编码，此类内容请显式 Base64 编码后传入
                     * @param _scriptContent 脚本内容，支持传递代码原文或者 Base64 编码，服务端自动识别。传 ScriptId 时不传则执行已保存的全量脚本内容；免脚本临时运行模式下必填。注意：若原文恰好由 Base64 字符集组成且长度为 4 的倍数（如 descTBLS），会被识别为已编码，此类内容请显式 Base64 编码后传入
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
                     * 获取高级运行参数，支持传递 JSON 格式原文或者 Base64 编码，服务端自动识别。示例：{"executorNum":1} 或 eyJleGVjdXRvck51bSI6MX0=
                     * @return Params 高级运行参数，支持传递 JSON 格式原文或者 Base64 编码，服务端自动识别。示例：{"executorNum":1} 或 eyJleGVjdXRvck51bSI6MX0=
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置高级运行参数，支持传递 JSON 格式原文或者 Base64 编码，服务端自动识别。示例：{"executorNum":1} 或 eyJleGVjdXRvck51bSI6MX0=
                     * @param _params 高级运行参数，支持传递 JSON 格式原文或者 Base64 编码，服务端自动识别。示例：{"executorNum":1} 或 eyJleGVjdXRvck51bSI6MX0=
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
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 脚本id。如果不填则需要传入 ScriptConfig、ScriptContent，此时为免脚本临时运行模式，服务端不保存脚本
                     */
                    std::string m_scriptId;
                    bool m_scriptIdHasBeenSet;

                    /**
                     * 脚本配置。免脚本临时运行模式（未传 ScriptId）下必填，其中 DatasourceId 必填、ExecutorGroupId 选填（缺省时使用项目管理-数据分析配置中的执行资源组）；传入 ScriptId 时本字段被忽略，配置取自已保存的脚本
                     */
                    SQLScriptConfig m_scriptConfig;
                    bool m_scriptConfigHasBeenSet;

                    /**
                     * 脚本内容，支持传递代码原文或者 Base64 编码，服务端自动识别。传 ScriptId 时不传则执行已保存的全量脚本内容；免脚本临时运行模式下必填。注意：若原文恰好由 Base64 字符集组成且长度为 4 的倍数（如 descTBLS），会被识别为已编码，此类内容请显式 Base64 编码后传入
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * 高级运行参数，支持传递 JSON 格式原文或者 Base64 编码，服务端自动识别。示例：{"executorNum":1} 或 eyJleGVjdXRvck51bSI6MX0=
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RUNSQLSCRIPTREQUEST_H_
