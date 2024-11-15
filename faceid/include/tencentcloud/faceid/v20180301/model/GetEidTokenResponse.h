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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETEIDTOKENRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETEIDTOKENRESPONSE_H_

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
                * GetEidToken返回参数结构体
                */
                class GetEidTokenResponse : public AbstractModel
                {
                public:
                    GetEidTokenResponse();
                    ~GetEidTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取一次核身流程的标识。
- 有效时间为600秒。
- 完成核身后，可用该标识获取验证结果信息。
                     * @return EidToken 一次核身流程的标识。
- 有效时间为600秒。
- 完成核身后，可用该标识获取验证结果信息。
                     * 
                     */
                    std::string GetEidToken() const;

                    /**
                     * 判断参数 EidToken 是否已赋值
                     * @return EidToken 是否已赋值
                     * 
                     */
                    bool EidTokenHasBeenSet() const;

                    /**
                     * 获取发起核身流程的URL。
- 用于H5场景核身。
                     * @return Url 发起核身流程的URL。
- 用于H5场景核身。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 一次核身流程的标识。
- 有效时间为600秒。
- 完成核身后，可用该标识获取验证结果信息。
                     */
                    std::string m_eidToken;
                    bool m_eidTokenHasBeenSet;

                    /**
                     * 发起核身流程的URL。
- 用于H5场景核身。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETEIDTOKENRESPONSE_H_
