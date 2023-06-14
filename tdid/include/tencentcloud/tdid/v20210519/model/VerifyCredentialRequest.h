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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_VERIFYCREDENTIALREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_VERIFYCREDENTIALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/VerifyFunctionArg.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * VerifyCredential请求参数结构体
                */
                class VerifyCredentialRequest : public AbstractModel
                {
                public:
                    VerifyCredentialRequest();
                    ~VerifyCredentialRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取参数集合
                     * @return FunctionArg 参数集合
                     * 
                     */
                    VerifyFunctionArg GetFunctionArg() const;

                    /**
                     * 设置参数集合
                     * @param _functionArg 参数集合
                     * 
                     */
                    void SetFunctionArg(const VerifyFunctionArg& _functionArg);

                    /**
                     * 判断参数 FunctionArg 是否已赋值
                     * @return FunctionArg 是否已赋值
                     * 
                     */
                    bool FunctionArgHasBeenSet() const;

                private:

                    /**
                     * 参数集合
                     */
                    VerifyFunctionArg m_functionArg;
                    bool m_functionArgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_VERIFYCREDENTIALREQUEST_H_
