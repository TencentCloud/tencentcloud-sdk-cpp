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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_SRVINVOKERESPONSE_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_SRVINVOKERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * SrvInvoke返回参数结构体
                */
                class SrvInvokeResponse : public AbstractModel
                {
                public:
                    SrvInvokeResponse();
                    ~SrvInvokeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回码
                     * @return RetCode 返回码
                     * 
                     */
                    int64_t GetRetCode() const;

                    /**
                     * 判断参数 RetCode 是否已赋值
                     * @return RetCode 是否已赋值
                     * 
                     */
                    bool RetCodeHasBeenSet() const;

                    /**
                     * 获取返回消息
                     * @return RetMsg 返回消息
                     * 
                     */
                    std::string GetRetMsg() const;

                    /**
                     * 判断参数 RetMsg 是否已赋值
                     * @return RetMsg 是否已赋值
                     * 
                     */
                    bool RetMsgHasBeenSet() const;

                    /**
                     * 获取返回数据
                     * @return Data 返回数据
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 返回码
                     */
                    int64_t m_retCode;
                    bool m_retCodeHasBeenSet;

                    /**
                     * 返回消息
                     */
                    std::string m_retMsg;
                    bool m_retMsgHasBeenSet;

                    /**
                     * 返回数据
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_SRVINVOKERESPONSE_H_
