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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATESIGNURLSRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATESIGNURLSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/SignUrlInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * CreateSignUrls返回参数结构体
                */
                class CreateSignUrlsResponse : public AbstractModel
                {
                public:
                    CreateSignUrlsResponse();
                    ~CreateSignUrlsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取生成的签署参与者的签署链接信息数组。
                     * @return SignUrlInfos 生成的签署参与者的签署链接信息数组。
                     * 
                     */
                    std::vector<SignUrlInfo> GetSignUrlInfos() const;

                    /**
                     * 判断参数 SignUrlInfos 是否已赋值
                     * @return SignUrlInfos 是否已赋值
                     * 
                     */
                    bool SignUrlInfosHasBeenSet() const;

                    /**
                     * 获取生成失败时的错误信息，成功返回”“，顺序和出参SignUrlInfos保持一致
                     * @return ErrorMessages 生成失败时的错误信息，成功返回”“，顺序和出参SignUrlInfos保持一致
                     * 
                     */
                    std::vector<std::string> GetErrorMessages() const;

                    /**
                     * 判断参数 ErrorMessages 是否已赋值
                     * @return ErrorMessages 是否已赋值
                     * 
                     */
                    bool ErrorMessagesHasBeenSet() const;

                private:

                    /**
                     * 生成的签署参与者的签署链接信息数组。
                     */
                    std::vector<SignUrlInfo> m_signUrlInfos;
                    bool m_signUrlInfosHasBeenSet;

                    /**
                     * 生成失败时的错误信息，成功返回”“，顺序和出参SignUrlInfos保持一致
                     */
                    std::vector<std::string> m_errorMessages;
                    bool m_errorMessagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATESIGNURLSRESPONSE_H_
