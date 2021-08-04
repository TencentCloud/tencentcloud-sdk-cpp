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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_VERIFYRESULTRESPONSE_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_VERIFYRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * VerifyResult返回参数结构体
                */
                class VerifyResultResponse : public AbstractModel
                {
                public:
                    VerifyResultResponse();
                    ~VerifyResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取错误的原因
                     * @return ErrorReason 错误的原因
                     */
                    std::string GetErrorReason() const;

                    /**
                     * 判断参数 ErrorReason 是否已赋值
                     * @return ErrorReason 是否已赋值
                     */
                    bool ErrorReasonHasBeenSet() const;

                    /**
                     * 获取错误号
                     * @return ResultCode 错误号
                     */
                    int64_t GetResultCode() const;

                    /**
                     * 判断参数 ResultCode 是否已赋值
                     * @return ResultCode 是否已赋值
                     */
                    bool ResultCodeHasBeenSet() const;

                private:

                    /**
                     * 错误的原因
                     */
                    std::string m_errorReason;
                    bool m_errorReasonHasBeenSet;

                    /**
                     * 错误号
                     */
                    int64_t m_resultCode;
                    bool m_resultCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_VERIFYRESULTRESPONSE_H_
