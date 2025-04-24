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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_AUTHTOKEN_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_AUTHTOKEN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/AuthTokenBase.h>
#include <tencentcloud/tione/v20211111/model/AuthTokenLimit.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 在线服务的 AuthToken 数据
                */
                class AuthToken : public AbstractModel
                {
                public:
                    AuthToken();
                    ~AuthToken() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AuthToken 基础信息
                     * @return Base AuthToken 基础信息
                     * 
                     */
                    AuthTokenBase GetBase() const;

                    /**
                     * 设置AuthToken 基础信息
                     * @param _base AuthToken 基础信息
                     * 
                     */
                    void SetBase(const AuthTokenBase& _base);

                    /**
                     * 判断参数 Base 是否已赋值
                     * @return Base 是否已赋值
                     * 
                     */
                    bool BaseHasBeenSet() const;

                    /**
                     * 获取AuthToken 限流数组
                     * @return Limits AuthToken 限流数组
                     * 
                     */
                    std::vector<AuthTokenLimit> GetLimits() const;

                    /**
                     * 设置AuthToken 限流数组
                     * @param _limits AuthToken 限流数组
                     * 
                     */
                    void SetLimits(const std::vector<AuthTokenLimit>& _limits);

                    /**
                     * 判断参数 Limits 是否已赋值
                     * @return Limits 是否已赋值
                     * 
                     */
                    bool LimitsHasBeenSet() const;

                private:

                    /**
                     * AuthToken 基础信息
                     */
                    AuthTokenBase m_base;
                    bool m_baseHasBeenSet;

                    /**
                     * AuthToken 限流数组
                     */
                    std::vector<AuthTokenLimit> m_limits;
                    bool m_limitsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_AUTHTOKEN_H_
