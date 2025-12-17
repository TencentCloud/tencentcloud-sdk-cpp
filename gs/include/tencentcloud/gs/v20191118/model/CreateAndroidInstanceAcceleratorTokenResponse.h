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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCEACCELERATORTOKENRESPONSE_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCEACCELERATORTOKENRESPONSE_H_

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
                * CreateAndroidInstanceAcceleratorToken返回参数结构体
                */
                class CreateAndroidInstanceAcceleratorTokenResponse : public AbstractModel
                {
                public:
                    CreateAndroidInstanceAcceleratorTokenResponse();
                    ~CreateAndroidInstanceAcceleratorTokenResponse() = default;
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
                     * 获取加速信息
                     * @return AcceleratorInfo 加速信息
                     * 
                     */
                    std::string GetAcceleratorInfo() const;

                    /**
                     * 判断参数 AcceleratorInfo 是否已赋值
                     * @return AcceleratorInfo 是否已赋值
                     * 
                     */
                    bool AcceleratorInfoHasBeenSet() const;

                    /**
                     * 获取安卓实例错误列表。列表包含有问题的安卓实例 ID 以及发生的错误信息。
                     * @return AndroidInstanceErrors 安卓实例错误列表。列表包含有问题的安卓实例 ID 以及发生的错误信息。
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
                     * 加速信息
                     */
                    std::string m_acceleratorInfo;
                    bool m_acceleratorInfoHasBeenSet;

                    /**
                     * 安卓实例错误列表。列表包含有问题的安卓实例 ID 以及发生的错误信息。
                     */
                    std::vector<AndroidInstanceError> m_androidInstanceErrors;
                    bool m_androidInstanceErrorsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCEACCELERATORTOKENRESPONSE_H_
