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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_CREATENOTEBOOKLIFECYCLESCRIPTREQUEST_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_CREATENOTEBOOKLIFECYCLESCRIPTREQUEST_H_

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
                * CreateNotebookLifecycleScript请求参数结构体
                */
                class CreateNotebookLifecycleScriptRequest : public AbstractModel
                {
                public:
                    CreateNotebookLifecycleScriptRequest();
                    ~CreateNotebookLifecycleScriptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Notebook生命周期脚本名称
                     * @return NotebookLifecycleScriptsName Notebook生命周期脚本名称
                     * 
                     */
                    std::string GetNotebookLifecycleScriptsName() const;

                    /**
                     * 设置Notebook生命周期脚本名称
                     * @param _notebookLifecycleScriptsName Notebook生命周期脚本名称
                     * 
                     */
                    void SetNotebookLifecycleScriptsName(const std::string& _notebookLifecycleScriptsName);

                    /**
                     * 判断参数 NotebookLifecycleScriptsName 是否已赋值
                     * @return NotebookLifecycleScriptsName 是否已赋值
                     * 
                     */
                    bool NotebookLifecycleScriptsNameHasBeenSet() const;

                    /**
                     * 获取创建脚本，base64编码
base64后的脚本长度不能超过16384个字符
                     * @return CreateScript 创建脚本，base64编码
base64后的脚本长度不能超过16384个字符
                     * 
                     */
                    std::string GetCreateScript() const;

                    /**
                     * 设置创建脚本，base64编码
base64后的脚本长度不能超过16384个字符
                     * @param _createScript 创建脚本，base64编码
base64后的脚本长度不能超过16384个字符
                     * 
                     */
                    void SetCreateScript(const std::string& _createScript);

                    /**
                     * 判断参数 CreateScript 是否已赋值
                     * @return CreateScript 是否已赋值
                     * 
                     */
                    bool CreateScriptHasBeenSet() const;

                    /**
                     * 获取启动脚本，base64编码
base64后的脚本长度不能超过16384个字符
                     * @return StartScript 启动脚本，base64编码
base64后的脚本长度不能超过16384个字符
                     * 
                     */
                    std::string GetStartScript() const;

                    /**
                     * 设置启动脚本，base64编码
base64后的脚本长度不能超过16384个字符
                     * @param _startScript 启动脚本，base64编码
base64后的脚本长度不能超过16384个字符
                     * 
                     */
                    void SetStartScript(const std::string& _startScript);

                    /**
                     * 判断参数 StartScript 是否已赋值
                     * @return StartScript 是否已赋值
                     * 
                     */
                    bool StartScriptHasBeenSet() const;

                private:

                    /**
                     * Notebook生命周期脚本名称
                     */
                    std::string m_notebookLifecycleScriptsName;
                    bool m_notebookLifecycleScriptsNameHasBeenSet;

                    /**
                     * 创建脚本，base64编码
base64后的脚本长度不能超过16384个字符
                     */
                    std::string m_createScript;
                    bool m_createScriptHasBeenSet;

                    /**
                     * 启动脚本，base64编码
base64后的脚本长度不能超过16384个字符
                     */
                    std::string m_startScript;
                    bool m_startScriptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_CREATENOTEBOOKLIFECYCLESCRIPTREQUEST_H_
