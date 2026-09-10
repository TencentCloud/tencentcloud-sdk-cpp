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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DELETEFUNCTIONREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DELETEFUNCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DeleteFunction请求参数结构体
                */
                class DeleteFunctionRequest : public AbstractModel
                {
                public:
                    DeleteFunctionRequest();
                    ~DeleteFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境 ID。可通过 DescribeEnvs 接口获取。</p>
                     * @return EnvId <p>环境 ID。可通过 DescribeEnvs 接口获取。</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境 ID。可通过 DescribeEnvs 接口获取。</p>
                     * @param _envId <p>环境 ID。可通过 DescribeEnvs 接口获取。</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取<p>函数名称。最大 60 字符，以字母开头，支持字母、数字、下划线和连字符。可通过 ListFunctions 或 GetFunction 获取。</p>
                     * @return FunctionName <p>函数名称。最大 60 字符，以字母开头，支持字母、数字、下划线和连字符。可通过 ListFunctions 或 GetFunction 获取。</p>
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置<p>函数名称。最大 60 字符，以字母开头，支持字母、数字、下划线和连字符。可通过 ListFunctions 或 GetFunction 获取。</p>
                     * @param _functionName <p>函数名称。最大 60 字符，以字母开头，支持字母、数字、下划线和连字符。可通过 ListFunctions 或 GetFunction 获取。</p>
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取<p>函数版本。取值：$LATEST（最新版本）。不填默认 $LATEST。当前仅支持 $LATEST。</p>
                     * @return Qualifier <p>函数版本。取值：$LATEST（最新版本）。不填默认 $LATEST。当前仅支持 $LATEST。</p>
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置<p>函数版本。取值：$LATEST（最新版本）。不填默认 $LATEST。当前仅支持 $LATEST。</p>
                     * @param _qualifier <p>函数版本。取值：$LATEST（最新版本）。不填默认 $LATEST。当前仅支持 $LATEST。</p>
                     * 
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     * 
                     */
                    bool QualifierHasBeenSet() const;

                private:

                    /**
                     * <p>环境 ID。可通过 DescribeEnvs 接口获取。</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>函数名称。最大 60 字符，以字母开头，支持字母、数字、下划线和连字符。可通过 ListFunctions 或 GetFunction 获取。</p>
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * <p>函数版本。取值：$LATEST（最新版本）。不填默认 $LATEST。当前仅支持 $LATEST。</p>
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DELETEFUNCTIONREQUEST_H_
