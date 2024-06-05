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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATEIVRSESSIONREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATEIVRSESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/Variable.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * CreateIVRSession请求参数结构体
                */
                class CreateIVRSessionRequest : public AbstractModel
                {
                public:
                    CreateIVRSessionRequest();
                    ~CreateIVRSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @return SdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @param _sdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取被叫
                     * @return Callee 被叫
                     * 
                     */
                    std::string GetCallee() const;

                    /**
                     * 设置被叫
                     * @param _callee 被叫
                     * 
                     */
                    void SetCallee(const std::string& _callee);

                    /**
                     * 判断参数 Callee 是否已赋值
                     * @return Callee 是否已赋值
                     * 
                     */
                    bool CalleeHasBeenSet() const;

                    /**
                     * 获取指定的 IVR Id，目前支持呼入和自动外呼两种类型
                     * @return IVRId 指定的 IVR Id，目前支持呼入和自动外呼两种类型
                     * 
                     */
                    int64_t GetIVRId() const;

                    /**
                     * 设置指定的 IVR Id，目前支持呼入和自动外呼两种类型
                     * @param _iVRId 指定的 IVR Id，目前支持呼入和自动外呼两种类型
                     * 
                     */
                    void SetIVRId(const int64_t& _iVRId);

                    /**
                     * 判断参数 IVRId 是否已赋值
                     * @return IVRId 是否已赋值
                     * 
                     */
                    bool IVRIdHasBeenSet() const;

                    /**
                     * 获取主叫号码列表
                     * @return Callers 主叫号码列表
                     * 
                     */
                    std::vector<std::string> GetCallers() const;

                    /**
                     * 设置主叫号码列表
                     * @param _callers 主叫号码列表
                     * 
                     */
                    void SetCallers(const std::vector<std::string>& _callers);

                    /**
                     * 判断参数 Callers 是否已赋值
                     * @return Callers 是否已赋值
                     * 
                     */
                    bool CallersHasBeenSet() const;

                    /**
                     * 获取自定义变量
                     * @return Variables 自定义变量
                     * 
                     */
                    std::vector<Variable> GetVariables() const;

                    /**
                     * 设置自定义变量
                     * @param _variables 自定义变量
                     * 
                     */
                    void SetVariables(const std::vector<Variable>& _variables);

                    /**
                     * 判断参数 Variables 是否已赋值
                     * @return Variables 是否已赋值
                     * 
                     */
                    bool VariablesHasBeenSet() const;

                    /**
                     * 获取用户数据
                     * @return UUI 用户数据
                     * 
                     */
                    std::string GetUUI() const;

                    /**
                     * 设置用户数据
                     * @param _uUI 用户数据
                     * 
                     */
                    void SetUUI(const std::string& _uUI);

                    /**
                     * 判断参数 UUI 是否已赋值
                     * @return UUI 是否已赋值
                     * 
                     */
                    bool UUIHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 被叫
                     */
                    std::string m_callee;
                    bool m_calleeHasBeenSet;

                    /**
                     * 指定的 IVR Id，目前支持呼入和自动外呼两种类型
                     */
                    int64_t m_iVRId;
                    bool m_iVRIdHasBeenSet;

                    /**
                     * 主叫号码列表
                     */
                    std::vector<std::string> m_callers;
                    bool m_callersHasBeenSet;

                    /**
                     * 自定义变量
                     */
                    std::vector<Variable> m_variables;
                    bool m_variablesHasBeenSet;

                    /**
                     * 用户数据
                     */
                    std::string m_uUI;
                    bool m_uUIHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATEIVRSESSIONREQUEST_H_
