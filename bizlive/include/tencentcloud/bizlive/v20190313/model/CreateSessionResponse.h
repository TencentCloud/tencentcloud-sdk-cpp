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

#ifndef TENCENTCLOUD_BIZLIVE_V20190313_MODEL_CREATESESSIONRESPONSE_H_
#define TENCENTCLOUD_BIZLIVE_V20190313_MODEL_CREATESESSIONRESPONSE_H_

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
                * CreateSession返回参数结构体
                */
                class CreateSessionResponse : public AbstractModel
                {
                public:
                    CreateSessionResponse();
                    ~CreateSessionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取服务端session信息，返回给JSSDK
                     * @return ServerSession 服务端session信息，返回给JSSDK
                     * 
                     */
                    std::string GetServerSession() const;

                    /**
                     * 判断参数 ServerSession 是否已赋值
                     * @return ServerSession 是否已赋值
                     * 
                     */
                    bool ServerSessionHasBeenSet() const;

                private:

                    /**
                     * 服务端session信息，返回给JSSDK
                     */
                    std::string m_serverSession;
                    bool m_serverSessionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BIZLIVE_V20190313_MODEL_CREATESESSIONRESPONSE_H_
