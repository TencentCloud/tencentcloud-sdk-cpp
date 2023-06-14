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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATESCRIPTREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATESCRIPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateScript请求参数结构体
                */
                class CreateScriptRequest : public AbstractModel
                {
                public:
                    CreateScriptRequest();
                    ~CreateScriptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取脚本名称，最大不能超过255个字符。
                     * @return ScriptName 脚本名称，最大不能超过255个字符。
                     * 
                     */
                    std::string GetScriptName() const;

                    /**
                     * 设置脚本名称，最大不能超过255个字符。
                     * @param _scriptName 脚本名称，最大不能超过255个字符。
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
                     * 获取base64编码后的sql语句
                     * @return SQLStatement base64编码后的sql语句
                     * 
                     */
                    std::string GetSQLStatement() const;

                    /**
                     * 设置base64编码后的sql语句
                     * @param _sQLStatement base64编码后的sql语句
                     * 
                     */
                    void SetSQLStatement(const std::string& _sQLStatement);

                    /**
                     * 判断参数 SQLStatement 是否已赋值
                     * @return SQLStatement 是否已赋值
                     * 
                     */
                    bool SQLStatementHasBeenSet() const;

                    /**
                     * 获取脚本描述， 不能超过50个字符
                     * @return ScriptDesc 脚本描述， 不能超过50个字符
                     * 
                     */
                    std::string GetScriptDesc() const;

                    /**
                     * 设置脚本描述， 不能超过50个字符
                     * @param _scriptDesc 脚本描述， 不能超过50个字符
                     * 
                     */
                    void SetScriptDesc(const std::string& _scriptDesc);

                    /**
                     * 判断参数 ScriptDesc 是否已赋值
                     * @return ScriptDesc 是否已赋值
                     * 
                     */
                    bool ScriptDescHasBeenSet() const;

                    /**
                     * 获取数据库名称
                     * @return DatabaseName 数据库名称
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称
                     * @param _databaseName 数据库名称
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                private:

                    /**
                     * 脚本名称，最大不能超过255个字符。
                     */
                    std::string m_scriptName;
                    bool m_scriptNameHasBeenSet;

                    /**
                     * base64编码后的sql语句
                     */
                    std::string m_sQLStatement;
                    bool m_sQLStatementHasBeenSet;

                    /**
                     * 脚本描述， 不能超过50个字符
                     */
                    std::string m_scriptDesc;
                    bool m_scriptDescHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATESCRIPTREQUEST_H_
