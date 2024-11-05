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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_CREATEPRODUCTSECRETRESPONSE_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_CREATEPRODUCTSECRETRESPONSE_H_

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
                * CreateProductSecret返回参数结构体
                */
                class CreateProductSecretResponse : public AbstractModel
                {
                public:
                    CreateProductSecretResponse();
                    ~CreateProductSecretResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取创建的凭据名称。
                     * @return SecretName 创建的凭据名称。
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取标签操作的返回码. 0: 成功；1: 内部错误；2: 业务处理错误。
                     * @return TagCode 标签操作的返回码. 0: 成功；1: 内部错误；2: 业务处理错误。
                     * 
                     */
                    uint64_t GetTagCode() const;

                    /**
                     * 判断参数 TagCode 是否已赋值
                     * @return TagCode 是否已赋值
                     * 
                     */
                    bool TagCodeHasBeenSet() const;

                    /**
                     * 获取标签操作的返回信息。
                     * @return TagMsg 标签操作的返回信息。
                     * 
                     */
                    std::string GetTagMsg() const;

                    /**
                     * 判断参数 TagMsg 是否已赋值
                     * @return TagMsg 是否已赋值
                     * 
                     */
                    bool TagMsgHasBeenSet() const;

                    /**
                     * 获取创建云产品凭据异步任务ID号。
                     * @return FlowID 创建云产品凭据异步任务ID号。
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
                     * 创建的凭据名称。
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * 标签操作的返回码. 0: 成功；1: 内部错误；2: 业务处理错误。
                     */
                    uint64_t m_tagCode;
                    bool m_tagCodeHasBeenSet;

                    /**
                     * 标签操作的返回信息。
                     */
                    std::string m_tagMsg;
                    bool m_tagMsgHasBeenSet;

                    /**
                     * 创建云产品凭据异步任务ID号。
                     */
                    int64_t m_flowID;
                    bool m_flowIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_CREATEPRODUCTSECRETRESPONSE_H_
