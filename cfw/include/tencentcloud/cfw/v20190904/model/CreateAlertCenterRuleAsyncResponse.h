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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTERRULEASYNCRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTERRULEASYNCRESPONSE_H_

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
                * CreateAlertCenterRuleAsync返回参数结构体
                */
                class CreateAlertCenterRuleAsyncResponse : public AbstractModel
                {
                public:
                    CreateAlertCenterRuleAsyncResponse();
                    ~CreateAlertCenterRuleAsyncResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取请求返回码，0 表示已进入异步处理；处理进度见 Status。
                     * @return ReturnCode 请求返回码，0 表示已进入异步处理；处理进度见 Status。
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
                     * 获取与 ReturnCode 对应的结果信息，成功时为 success。
                     * @return ReturnMsg 与 ReturnCode 对应的结果信息，成功时为 success。
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
                     * 获取异步处理状态：1 表示处理中，使用完全相同的请求参数继续查询；修改参数会发起新的操作。0 表示处理结束，处置结果通过对应查询接口获取。
                     * @return Status 异步处理状态：1 表示处理中，使用完全相同的请求参数继续查询；修改参数会发起新的操作。0 表示处理结束，处置结果通过对应查询接口获取。
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
                     * 请求返回码，0 表示已进入异步处理；处理进度见 Status。
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * 与 ReturnCode 对应的结果信息，成功时为 success。
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                    /**
                     * 异步处理状态：1 表示处理中，使用完全相同的请求参数继续查询；修改参数会发起新的操作。0 表示处理结束，处置结果通过对应查询接口获取。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTERRULEASYNCRESPONSE_H_
