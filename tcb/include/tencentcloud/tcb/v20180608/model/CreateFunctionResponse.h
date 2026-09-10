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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATEFUNCTIONRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATEFUNCTIONRESPONSE_H_

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
                * CreateFunction返回参数结构体
                */
                class CreateFunctionResponse : public AbstractModel
                {
                public:
                    CreateFunctionResponse();
                    ~CreateFunctionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>调用scf返回的错误码</p>
                     * @return SCFErrorCode <p>调用scf返回的错误码</p>
                     * 
                     */
                    std::string GetSCFErrorCode() const;

                    /**
                     * 判断参数 SCFErrorCode 是否已赋值
                     * @return SCFErrorCode 是否已赋值
                     * 
                     */
                    bool SCFErrorCodeHasBeenSet() const;

                    /**
                     * 获取<p>错误码对应的描述信息</p>
                     * @return SCFErrorMsg <p>错误码对应的描述信息</p>
                     * 
                     */
                    std::string GetSCFErrorMsg() const;

                    /**
                     * 判断参数 SCFErrorMsg 是否已赋值
                     * @return SCFErrorMsg 是否已赋值
                     * 
                     */
                    bool SCFErrorMsgHasBeenSet() const;

                private:

                    /**
                     * <p>调用scf返回的错误码</p>
                     */
                    std::string m_sCFErrorCode;
                    bool m_sCFErrorCodeHasBeenSet;

                    /**
                     * <p>错误码对应的描述信息</p>
                     */
                    std::string m_sCFErrorMsg;
                    bool m_sCFErrorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATEFUNCTIONRESPONSE_H_
