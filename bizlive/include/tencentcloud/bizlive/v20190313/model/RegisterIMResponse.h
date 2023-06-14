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

#ifndef TENCENTCLOUD_BIZLIVE_V20190313_MODEL_REGISTERIMRESPONSE_H_
#define TENCENTCLOUD_BIZLIVE_V20190313_MODEL_REGISTERIMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bizlive
    {
        namespace V20190313
        {
            namespace Model
            {
                /**
                * RegisterIM返回参数结构体
                */
                class RegisterIMResponse : public AbstractModel
                {
                public:
                    RegisterIMResponse();
                    ~RegisterIMResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用来传递给插件的关键字段
                     * @return UserKey 用来传递给插件的关键字段
                     * 
                     */
                    std::string GetUserKey() const;

                    /**
                     * 判断参数 UserKey 是否已赋值
                     * @return UserKey 是否已赋值
                     * 
                     */
                    bool UserKeyHasBeenSet() const;

                private:

                    /**
                     * 用来传递给插件的关键字段
                     */
                    std::string m_userKey;
                    bool m_userKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BIZLIVE_V20190313_MODEL_REGISTERIMRESPONSE_H_
