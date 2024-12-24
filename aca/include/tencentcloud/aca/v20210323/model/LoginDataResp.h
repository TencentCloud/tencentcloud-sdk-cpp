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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_LOGINDATARESP_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_LOGINDATARESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 登录返回数据
                */
                class LoginDataResp : public AbstractModel
                {
                public:
                    LoginDataResp();
                    ~LoginDataResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取token
                     * @return Token token
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置token
                     * @param _token token
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpiresIn 过期时间
                     * 
                     */
                    int64_t GetExpiresIn() const;

                    /**
                     * 设置过期时间
                     * @param _expiresIn 过期时间
                     * 
                     */
                    void SetExpiresIn(const int64_t& _expiresIn);

                    /**
                     * 判断参数 ExpiresIn 是否已赋值
                     * @return ExpiresIn 是否已赋值
                     * 
                     */
                    bool ExpiresInHasBeenSet() const;

                    /**
                     * 获取服务端时间戳，时间戳校验失败时返回
                     * @return Timestamp 服务端时间戳，时间戳校验失败时返回
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置服务端时间戳，时间戳校验失败时返回
                     * @param _timestamp 服务端时间戳，时间戳校验失败时返回
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                private:

                    /**
                     * token
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * 过期时间
                     */
                    int64_t m_expiresIn;
                    bool m_expiresInHasBeenSet;

                    /**
                     * 服务端时间戳，时间戳校验失败时返回
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_LOGINDATARESP_H_
