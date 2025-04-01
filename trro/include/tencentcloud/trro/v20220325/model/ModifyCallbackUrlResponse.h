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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYCALLBACKURLRESPONSE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYCALLBACKURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * ModifyCallbackUrl返回参数结构体
                */
                class ModifyCallbackUrlResponse : public AbstractModel
                {
                public:
                    ModifyCallbackUrlResponse();
                    ~ModifyCallbackUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取响应码，0：成功，其他：失败
                     * @return Code 响应码，0：成功，其他：失败
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
                     * 获取响应消息，ok:成功，其他：失败
                     * @return Msg 响应消息，ok:成功，其他：失败
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                private:

                    /**
                     * 响应码，0：成功，其他：失败
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 响应消息，ok:成功，其他：失败
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYCALLBACKURLRESPONSE_H_
