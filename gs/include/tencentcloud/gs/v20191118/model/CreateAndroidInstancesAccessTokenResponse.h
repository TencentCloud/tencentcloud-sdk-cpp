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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCESACCESSTOKENRESPONSE_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCESACCESSTOKENRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gs/v20191118/model/AndroidInstanceError.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * CreateAndroidInstancesAccessToken返回参数结构体
                */
                class CreateAndroidInstancesAccessTokenResponse : public AbstractModel
                {
                public:
                    CreateAndroidInstancesAccessTokenResponse();
                    ~CreateAndroidInstancesAccessTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取token
                     * @return Token token
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取访问信息
                     * @return AccessInfo 访问信息
                     * 
                     */
                    std::string GetAccessInfo() const;

                    /**
                     * 判断参数 AccessInfo 是否已赋值
                     * @return AccessInfo 是否已赋值
                     * 
                     */
                    bool AccessInfoHasBeenSet() const;

                    /**
                     * 获取安卓实例错误列表。列表包含有问题的安卓实例 ID，生成的 Token 对这些有问题的实例无效。
                     * @return AndroidInstanceErrors 安卓实例错误列表。列表包含有问题的安卓实例 ID，生成的 Token 对这些有问题的实例无效。
                     * 
                     */
                    std::vector<AndroidInstanceError> GetAndroidInstanceErrors() const;

                    /**
                     * 判断参数 AndroidInstanceErrors 是否已赋值
                     * @return AndroidInstanceErrors 是否已赋值
                     * 
                     */
                    bool AndroidInstanceErrorsHasBeenSet() const;

                private:

                    /**
                     * token
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * 访问信息
                     */
                    std::string m_accessInfo;
                    bool m_accessInfoHasBeenSet;

                    /**
                     * 安卓实例错误列表。列表包含有问题的安卓实例 ID，生成的 Token 对这些有问题的实例无效。
                     */
                    std::vector<AndroidInstanceError> m_androidInstanceErrors;
                    bool m_androidInstanceErrorsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCESACCESSTOKENRESPONSE_H_
