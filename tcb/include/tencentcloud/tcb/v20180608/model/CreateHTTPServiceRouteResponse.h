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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATEHTTPSERVICEROUTERESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATEHTTPSERVICEROUTERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/OwnershipVerificationInfo.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * CreateHTTPServiceRoute返回参数结构体
                */
                class CreateHTTPServiceRouteResponse : public AbstractModel
                {
                public:
                    CreateHTTPServiceRouteResponse();
                    ~CreateHTTPServiceRouteResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>归属权校验不通过返回信息，根据校验信息配置dns或者文件验证，可通过VerifyHTTPServiceRoute接口验证归属权是否通过</p>
                     * @return OwnershipVerification <p>归属权校验不通过返回信息，根据校验信息配置dns或者文件验证，可通过VerifyHTTPServiceRoute接口验证归属权是否通过</p>
                     * 
                     */
                    OwnershipVerificationInfo GetOwnershipVerification() const;

                    /**
                     * 判断参数 OwnershipVerification 是否已赋值
                     * @return OwnershipVerification 是否已赋值
                     * 
                     */
                    bool OwnershipVerificationHasBeenSet() const;

                private:

                    /**
                     * <p>归属权校验不通过返回信息，根据校验信息配置dns或者文件验证，可通过VerifyHTTPServiceRoute接口验证归属权是否通过</p>
                     */
                    OwnershipVerificationInfo m_ownershipVerification;
                    bool m_ownershipVerificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATEHTTPSERVICEROUTERESPONSE_H_
