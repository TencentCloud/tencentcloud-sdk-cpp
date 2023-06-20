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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATENOTEBOOKSESSIONSTATEMENTSUPPORTBATCHSQLREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATENOTEBOOKSESSIONSTATEMENTSUPPORTBATCHSQLREQUEST_H_

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
                * CreateNotebookSessionStatementSupportBatchSQL请求参数结构体
                */
                class CreateNotebookSessionStatementSupportBatchSQLRequest : public AbstractModel
                {
                public:
                    CreateNotebookSessionStatementSupportBatchSQLRequest();
                    ~CreateNotebookSessionStatementSupportBatchSQLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Session唯一标识
                     * @return SessionId Session唯一标识
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Session唯一标识
                     * @param _sessionId Session唯一标识
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取执行的代码
                     * @return Code 执行的代码
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置执行的代码
                     * @param _code 执行的代码
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取类型，当前支持：sql
                     * @return Kind 类型，当前支持：sql
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置类型，当前支持：sql
                     * @param _kind 类型，当前支持：sql
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取是否保存运行结果
                     * @return SaveResult 是否保存运行结果
                     * 
                     */
                    bool GetSaveResult() const;

                    /**
                     * 设置是否保存运行结果
                     * @param _saveResult 是否保存运行结果
                     * 
                     */
                    void SetSaveResult(const bool& _saveResult);

                    /**
                     * 判断参数 SaveResult 是否已赋值
                     * @return SaveResult 是否已赋值
                     * 
                     */
                    bool SaveResultHasBeenSet() const;

                private:

                    /**
                     * Session唯一标识
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 执行的代码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 类型，当前支持：sql
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 是否保存运行结果
                     */
                    bool m_saveResult;
                    bool m_saveResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATENOTEBOOKSESSIONSTATEMENTSUPPORTBATCHSQLREQUEST_H_
