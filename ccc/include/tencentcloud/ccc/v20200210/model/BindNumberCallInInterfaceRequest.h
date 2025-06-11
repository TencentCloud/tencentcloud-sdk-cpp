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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_BINDNUMBERCALLININTERFACEREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_BINDNUMBERCALLININTERFACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/Interface.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * BindNumberCallInInterface请求参数结构体
                */
                class BindNumberCallInInterfaceRequest : public AbstractModel
                {
                public:
                    BindNumberCallInInterfaceRequest();
                    ~BindNumberCallInInterfaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @return SdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @param _sdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取待绑定的号码
                     * @return Number 待绑定的号码
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置待绑定的号码
                     * @param _number 待绑定的号码
                     * 
                     */
                    void SetNumber(const std::string& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取待绑定的回调地址
                     * @return CallInInterface 待绑定的回调地址
                     * 
                     */
                    Interface GetCallInInterface() const;

                    /**
                     * 设置待绑定的回调地址
                     * @param _callInInterface 待绑定的回调地址
                     * 
                     */
                    void SetCallInInterface(const Interface& _callInInterface);

                    /**
                     * 判断参数 CallInInterface 是否已赋值
                     * @return CallInInterface 是否已赋值
                     * 
                     */
                    bool CallInInterfaceHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 待绑定的号码
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 待绑定的回调地址
                     */
                    Interface m_callInInterface;
                    bool m_callInInterfaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_BINDNUMBERCALLININTERFACEREQUEST_H_
