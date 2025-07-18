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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_GETRESOURCECONNECTIONSTATUSRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_GETRESOURCECONNECTIONSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * GetResourceConnectionStatus返回参数结构体
                */
                class GetResourceConnectionStatusResponse : public AbstractModel
                {
                public:
                    GetResourceConnectionStatusResponse();
                    ~GetResourceConnectionStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取连接状态，success -- 连接成功，failed -- 连接失败
                     * @return ConnectionStatus 连接状态，success -- 连接成功，failed -- 连接失败
                     * 
                     */
                    std::string GetConnectionStatus() const;

                    /**
                     * 判断参数 ConnectionStatus 是否已赋值
                     * @return ConnectionStatus 是否已赋值
                     * 
                     */
                    bool ConnectionStatusHasBeenSet() const;

                    /**
                     * 获取连接状态的描述信息。
                     * @return ConnectionDesc 连接状态的描述信息。
                     * 
                     */
                    std::string GetConnectionDesc() const;

                    /**
                     * 判断参数 ConnectionDesc 是否已赋值
                     * @return ConnectionDesc 是否已赋值
                     * 
                     */
                    bool ConnectionDescHasBeenSet() const;

                private:

                    /**
                     * 连接状态，success -- 连接成功，failed -- 连接失败
                     */
                    std::string m_connectionStatus;
                    bool m_connectionStatusHasBeenSet;

                    /**
                     * 连接状态的描述信息。
                     */
                    std::string m_connectionDesc;
                    bool m_connectionDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_GETRESOURCECONNECTIONSTATUSRESPONSE_H_
