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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DELETEIDSWHITERULERESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DELETEIDSWHITERULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DeleteIdsWhiteRule返回参数结构体
                */
                class DeleteIdsWhiteRuleResponse : public AbstractModel
                {
                public:
                    DeleteIdsWhiteRuleResponse();
                    ~DeleteIdsWhiteRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回状态码：
0 成功
非0 失败
                     * @return ReturnCode 返回状态码：
0 成功
非0 失败
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
                     * 获取返回信息：
success 成功
其他
                     * @return ReturnMsg 返回信息：
success 成功
其他
                     * 
                     */
                    std::string GetReturnMsg() const;

                    /**
                     * 判断参数 ReturnMsg 是否已赋值
                     * @return ReturnMsg 是否已赋值
                     * 
                     */
                    bool ReturnMsgHasBeenSet() const;

                    /**
                     * 获取返回状态码：
0  处置成功
-1 通用错误，不用处理
                     * @return Status 返回状态码：
0  处置成功
-1 通用错误，不用处理
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 返回状态码：
0 成功
非0 失败
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * 返回信息：
success 成功
其他
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                    /**
                     * 返回状态码：
0  处置成功
-1 通用错误，不用处理
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DELETEIDSWHITERULERESPONSE_H_
