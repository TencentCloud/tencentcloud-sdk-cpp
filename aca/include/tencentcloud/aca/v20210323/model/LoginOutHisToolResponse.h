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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_LOGINOUTHISTOOLRESPONSE_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_LOGINOUTHISTOOLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aca/v20210323/model/LoginOutResponseData.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * LoginOutHisTool返回参数结构体
                */
                class LoginOutHisToolResponse : public AbstractModel
                {
                public:
                    LoginOutHisToolResponse();
                    ~LoginOutHisToolResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取错误码
                     * @return Code 错误码
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return Message 错误信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取响应数据
                     * @return Data 响应数据
                     * 
                     */
                    LoginOutResponseData GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 错误码
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 响应数据
                     */
                    LoginOutResponseData m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_LOGINOUTHISTOOLRESPONSE_H_
