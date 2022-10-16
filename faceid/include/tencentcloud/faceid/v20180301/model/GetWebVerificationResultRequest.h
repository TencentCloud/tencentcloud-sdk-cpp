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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETWEBVERIFICATIONRESULTREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETWEBVERIFICATIONRESULTREQUEST_H_

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
                * GetWebVerificationResult请求参数结构体
                */
                class GetWebVerificationResultRequest : public AbstractModel
                {
                public:
                    GetWebVerificationResultRequest();
                    ~GetWebVerificationResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Web核验令牌，由ApplyWebVerificationToken接口生成。
                     * @return BizToken Web核验令牌，由ApplyWebVerificationToken接口生成。
                     */
                    std::string GetBizToken() const;

                    /**
                     * 设置Web核验令牌，由ApplyWebVerificationToken接口生成。
                     * @param BizToken Web核验令牌，由ApplyWebVerificationToken接口生成。
                     */
                    void SetBizToken(const std::string& _bizToken);

                    /**
                     * 判断参数 BizToken 是否已赋值
                     * @return BizToken 是否已赋值
                     */
                    bool BizTokenHasBeenSet() const;

                private:

                    /**
                     * Web核验令牌，由ApplyWebVerificationToken接口生成。
                     */
                    std::string m_bizToken;
                    bool m_bizTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETWEBVERIFICATIONRESULTREQUEST_H_
