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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEINSTANCELOGINKEYPAIRATTRIBUTERESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEINSTANCELOGINKEYPAIRATTRIBUTERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeInstanceLoginKeyPairAttribute返回参数结构体
                */
                class DescribeInstanceLoginKeyPairAttributeResponse : public AbstractModel
                {
                public:
                    DescribeInstanceLoginKeyPairAttributeResponse();
                    ~DescribeInstanceLoginKeyPairAttributeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否允许使用默认密钥对登录，YES：允许登录 NO：禁止登录。
                     * @return PermitLogin 是否允许使用默认密钥对登录，YES：允许登录 NO：禁止登录。
                     * 
                     */
                    std::string GetPermitLogin() const;

                    /**
                     * 判断参数 PermitLogin 是否已赋值
                     * @return PermitLogin 是否已赋值
                     * 
                     */
                    bool PermitLoginHasBeenSet() const;

                private:

                    /**
                     * 是否允许使用默认密钥对登录，YES：允许登录 NO：禁止登录。
                     */
                    std::string m_permitLogin;
                    bool m_permitLoginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEINSTANCELOGINKEYPAIRATTRIBUTERESPONSE_H_
