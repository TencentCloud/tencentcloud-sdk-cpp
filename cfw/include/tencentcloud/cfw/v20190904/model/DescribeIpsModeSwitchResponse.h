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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEIPSMODESWITCHRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEIPSMODESWITCHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/ModeInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeIpsModeSwitch返回参数结构体
                */
                class DescribeIpsModeSwitchResponse : public AbstractModel
                {
                public:
                    DescribeIpsModeSwitchResponse();
                    ~DescribeIpsModeSwitchResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取// Mode 取值校验：0-观察模式, 1-拦截模式, 2-严格模式
                     * @return Data // Mode 取值校验：0-观察模式, 1-拦截模式, 2-严格模式
                     * 
                     */
                    ModeInfo GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取0 成功 非0失败
                     * @return ReturnCode 0 成功 非0失败
                     * 
                     */
                    int64_t GetReturnCode() const;

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                    /**
                     * 获取success 成功 其他失败
                     * @return ReturnMsg success 成功 其他失败
                     * 
                     */
                    std::string GetReturnMsg() const;

                    /**
                     * 判断参数 ReturnMsg 是否已赋值
                     * @return ReturnMsg 是否已赋值
                     * 
                     */
                    bool ReturnMsgHasBeenSet() const;

                private:

                    /**
                     * // Mode 取值校验：0-观察模式, 1-拦截模式, 2-严格模式
                     */
                    ModeInfo m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 0 成功 非0失败
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * success 成功 其他失败
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEIPSMODESWITCHRESPONSE_H_
