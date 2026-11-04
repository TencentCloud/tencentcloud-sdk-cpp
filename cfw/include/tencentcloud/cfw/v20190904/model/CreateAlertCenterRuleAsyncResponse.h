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
                     * 获取<p>返回状态码：<br>0 成功<br>非0 失败</p>
                     * @return ReturnCode <p>返回状态码：<br>0 成功<br>非0 失败</p>
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
                     * 获取<p>返回信息：<br>success 成功<br>其他</p>
                     * @return ReturnMsg <p>返回信息：<br>success 成功<br>其他</p>
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
                     * 获取<p>处置状态码：0  处置成功 1处置中  -1 通用错误，不用处理-3 表示重复，需重新刷新列表其他</p>
                     * @return Status <p>处置状态码：0  处置成功 1处置中  -1 通用错误，不用处理-3 表示重复，需重新刷新列表其他</p>
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
                     * <p>返回状态码：<br>0 成功<br>非0 失败</p>
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * <p>返回信息：<br>success 成功<br>其他</p>
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                    /**
                     * <p>处置状态码：0  处置成功 1处置中  -1 通用错误，不用处理-3 表示重复，需重新刷新列表其他</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTERRULEASYNCRESPONSE_H_
