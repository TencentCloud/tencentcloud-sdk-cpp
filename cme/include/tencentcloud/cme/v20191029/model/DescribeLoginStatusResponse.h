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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBELOGINSTATUSRESPONSE_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBELOGINSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/LoginStatusInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * DescribeLoginStatus返回参数结构体
                */
                class DescribeLoginStatusResponse : public AbstractModel
                {
                public:
                    DescribeLoginStatusResponse();
                    ~DescribeLoginStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户登录状态列表。
                     * @return LoginStatusInfoSet 用户登录状态列表。
                     * 
                     */
                    std::vector<LoginStatusInfo> GetLoginStatusInfoSet() const;

                    /**
                     * 判断参数 LoginStatusInfoSet 是否已赋值
                     * @return LoginStatusInfoSet 是否已赋值
                     * 
                     */
                    bool LoginStatusInfoSetHasBeenSet() const;

                private:

                    /**
                     * 用户登录状态列表。
                     */
                    std::vector<LoginStatusInfo> m_loginStatusInfoSet;
                    bool m_loginStatusInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBELOGINSTATUSRESPONSE_H_
