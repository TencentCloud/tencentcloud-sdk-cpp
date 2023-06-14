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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_ROTATEPRODUCTSECRETRESPONSE_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_ROTATEPRODUCTSECRETRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * RotateProductSecret返回参数结构体
                */
                class RotateProductSecretResponse : public AbstractModel
                {
                public:
                    RotateProductSecretResponse();
                    ~RotateProductSecretResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当凭据类型为云产品凭据时（即SecretType为1，如MySQL、Tdsql等托管凭据）此字段有效，返回轮转异步任务ID号。
                     * @return FlowID 当凭据类型为云产品凭据时（即SecretType为1，如MySQL、Tdsql等托管凭据）此字段有效，返回轮转异步任务ID号。
                     * 
                     */
                    int64_t GetFlowID() const;

                    /**
                     * 判断参数 FlowID 是否已赋值
                     * @return FlowID 是否已赋值
                     * 
                     */
                    bool FlowIDHasBeenSet() const;

                private:

                    /**
                     * 当凭据类型为云产品凭据时（即SecretType为1，如MySQL、Tdsql等托管凭据）此字段有效，返回轮转异步任务ID号。
                     */
                    int64_t m_flowID;
                    bool m_flowIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_ROTATEPRODUCTSECRETRESPONSE_H_
