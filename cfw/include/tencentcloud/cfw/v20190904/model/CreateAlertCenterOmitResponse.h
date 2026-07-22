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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTEROMITRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTEROMITRESPONSE_H_

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
                * CreateAlertCenterOmit返回参数结构体
                */
                class CreateAlertCenterOmitResponse : public AbstractModel
                {
                public:
                    CreateAlertCenterOmitResponse();
                    ~CreateAlertCenterOmitResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Cloud API 处理返回码。0 表示 Action 处理函数未返回顶层错误，-1 表示入口参数校验或路由处理失败。忽略记录的数据库处理结果由 Status 表示；ReturnCode=0 不代表一定有记录被更新。</p>
                     * @return ReturnCode <p>Cloud API 处理返回码。0 表示 Action 处理函数未返回顶层错误，-1 表示入口参数校验或路由处理失败。忽略记录的数据库处理结果由 Status 表示；ReturnCode=0 不代表一定有记录被更新。</p>
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
                     * 获取<p>Cloud API 处理信息。Action 处理函数未返回顶层错误时为 success；入口参数校验或路由处理失败时为 failed，并同时返回 Error。</p>
                     * @return ReturnMsg <p>Cloud API 处理信息。Action 处理函数未返回顶层错误时为 success；入口参数校验或路由处理失败时为 failed，并同时返回 Error。</p>
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
                     * 获取<p>忽略处理状态。0 表示目标表更新语句执行时未返回数据库错误，但接口不检查受影响行数，因此不保证有记录命中；-1 表示参数归一化后无有效目标或下游处理失败；-3 表示下游报告重复记录错误。应结合 ReturnCode 判断入口校验是否通过。</p>
                     * @return Status <p>忽略处理状态。0 表示目标表更新语句执行时未返回数据库错误，但接口不检查受影响行数，因此不保证有记录命中；-1 表示参数归一化后无有效目标或下游处理失败；-3 表示下游报告重复记录错误。应结合 ReturnCode 判断入口校验是否通过。</p>
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
                     * <p>Cloud API 处理返回码。0 表示 Action 处理函数未返回顶层错误，-1 表示入口参数校验或路由处理失败。忽略记录的数据库处理结果由 Status 表示；ReturnCode=0 不代表一定有记录被更新。</p>
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * <p>Cloud API 处理信息。Action 处理函数未返回顶层错误时为 success；入口参数校验或路由处理失败时为 failed，并同时返回 Error。</p>
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                    /**
                     * <p>忽略处理状态。0 表示目标表更新语句执行时未返回数据库错误，但接口不检查受影响行数，因此不保证有记录命中；-1 表示参数归一化后无有效目标或下游处理失败；-3 表示下游报告重复记录错误。应结合 ReturnCode 判断入口校验是否通过。</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTEROMITRESPONSE_H_
