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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_BEARERAUTH_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_BEARERAUTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Bearer 鉴权
                */
                class BearerAuth : public AbstractModel
                {
                public:
                    BearerAuth();
                    ~BearerAuth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return BearerToken 
                     * 
                     */
                    std::string GetBearerToken() const;

                    /**
                     * 设置
                     * @param _bearerToken 
                     * 
                     */
                    void SetBearerToken(const std::string& _bearerToken);

                    /**
                     * 判断参数 BearerToken 是否已赋值
                     * @return BearerToken 是否已赋值
                     * 
                     */
                    bool BearerTokenHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_bearerToken;
                    bool m_bearerTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_BEARERAUTH_H_
