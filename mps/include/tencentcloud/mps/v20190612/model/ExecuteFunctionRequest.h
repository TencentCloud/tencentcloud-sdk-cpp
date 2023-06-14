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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EXECUTEFUNCTIONREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EXECUTEFUNCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ExecuteFunction请求参数结构体
                */
                class ExecuteFunctionRequest : public AbstractModel
                {
                public:
                    ExecuteFunctionRequest();
                    ~ExecuteFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用后端接口名称。
                     * @return FunctionName 调用后端接口名称。
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置调用后端接口名称。
                     * @param _functionName 调用后端接口名称。
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
                     * 获取接口参数，具体参数格式调用时与后端协调。
                     * @return FunctionArg 接口参数，具体参数格式调用时与后端协调。
                     * 
                     */
                    std::string GetFunctionArg() const;

                    /**
                     * 设置接口参数，具体参数格式调用时与后端协调。
                     * @param _functionArg 接口参数，具体参数格式调用时与后端协调。
                     * 
                     */
                    void SetFunctionArg(const std::string& _functionArg);

                    /**
                     * 判断参数 FunctionArg 是否已赋值
                     * @return FunctionArg 是否已赋值
                     * 
                     */
                    bool FunctionArgHasBeenSet() const;

                private:

                    /**
                     * 调用后端接口名称。
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 接口参数，具体参数格式调用时与后端协调。
                     */
                    std::string m_functionArg;
                    bool m_functionArgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EXECUTEFUNCTIONREQUEST_H_
