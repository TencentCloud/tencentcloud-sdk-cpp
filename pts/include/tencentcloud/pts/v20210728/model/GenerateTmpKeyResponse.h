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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_GENERATETMPKEYRESPONSE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_GENERATETMPKEYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Credentials.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * GenerateTmpKey返回参数结构体
                */
                class GenerateTmpKeyResponse : public AbstractModel
                {
                public:
                    GenerateTmpKeyResponse();
                    ~GenerateTmpKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取临时访问凭证获取时刻的时间戳（单位秒）
                     * @return StartTime 临时访问凭证获取时刻的时间戳（单位秒）
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取临时访问凭证超时 时刻的时间戳（单位秒）
                     * @return ExpiredTime 临时访问凭证超时 时刻的时间戳（单位秒）
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取临时访问凭证
                     * @return Credentials 临时访问凭证
                     * 
                     */
                    Credentials GetCredentials() const;

                    /**
                     * 判断参数 Credentials 是否已赋值
                     * @return Credentials 是否已赋值
                     * 
                     */
                    bool CredentialsHasBeenSet() const;

                private:

                    /**
                     * 临时访问凭证获取时刻的时间戳（单位秒）
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 临时访问凭证超时 时刻的时间戳（单位秒）
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 临时访问凭证
                     */
                    Credentials m_credentials;
                    bool m_credentialsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_GENERATETMPKEYRESPONSE_H_
