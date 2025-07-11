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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETLIVECODERESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETLIVECODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetLiveCode返回参数结构体
                */
                class GetLiveCodeResponse : public AbstractModel
                {
                public:
                    GetLiveCodeResponse();
                    ~GetLiveCodeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数字验证码。
                     * @return LiveCode 数字验证码。
                     * 
                     */
                    std::string GetLiveCode() const;

                    /**
                     * 判断参数 LiveCode 是否已赋值
                     * @return LiveCode 是否已赋值
                     * 
                     */
                    bool LiveCodeHasBeenSet() const;

                private:

                    /**
                     * 数字验证码。
                     */
                    std::string m_liveCode;
                    bool m_liveCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETLIVECODERESPONSE_H_
