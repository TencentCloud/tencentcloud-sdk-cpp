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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAPITOKENRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAPITOKENRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateAigcApiToken返回参数结构体
                */
                class CreateAigcApiTokenResponse : public AbstractModel
                {
                public:
                    CreateAigcApiTokenResponse();
                    ~CreateAigcApiTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取API的Token
                     * @return ApiToken API的Token
                     * 
                     */
                    std::string GetApiToken() const;

                    /**
                     * 判断参数 ApiToken 是否已赋值
                     * @return ApiToken 是否已赋值
                     * 
                     */
                    bool ApiTokenHasBeenSet() const;

                private:

                    /**
                     * API的Token
                     */
                    std::string m_apiToken;
                    bool m_apiTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAPITOKENRESPONSE_H_
