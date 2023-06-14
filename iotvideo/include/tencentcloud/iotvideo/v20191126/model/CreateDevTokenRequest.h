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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEDEVTOKENREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEDEVTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * CreateDevToken请求参数结构体
                */
                class CreateDevTokenRequest : public AbstractModel
                {
                public:
                    CreateDevTokenRequest();
                    ~CreateDevTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户的终端用户在IoT Video上的唯一标识ID
                     * @return AccessId 客户的终端用户在IoT Video上的唯一标识ID
                     * 
                     */
                    std::string GetAccessId() const;

                    /**
                     * 设置客户的终端用户在IoT Video上的唯一标识ID
                     * @param _accessId 客户的终端用户在IoT Video上的唯一标识ID
                     * 
                     */
                    void SetAccessId(const std::string& _accessId);

                    /**
                     * 判断参数 AccessId 是否已赋值
                     * @return AccessId 是否已赋值
                     * 
                     */
                    bool AccessIdHasBeenSet() const;

                    /**
                     * 获取设备TID列表,0<元素数量<=100
                     * @return Tids 设备TID列表,0<元素数量<=100
                     * 
                     */
                    std::vector<std::string> GetTids() const;

                    /**
                     * 设置设备TID列表,0<元素数量<=100
                     * @param _tids 设备TID列表,0<元素数量<=100
                     * 
                     */
                    void SetTids(const std::vector<std::string>& _tids);

                    /**
                     * 判断参数 Tids 是否已赋值
                     * @return Tids 是否已赋值
                     * 
                     */
                    bool TidsHasBeenSet() const;

                    /**
                     * 获取Token的TTL(time to alive)分钟数
                     * @return TtlMinutes Token的TTL(time to alive)分钟数
                     * 
                     */
                    uint64_t GetTtlMinutes() const;

                    /**
                     * 设置Token的TTL(time to alive)分钟数
                     * @param _ttlMinutes Token的TTL(time to alive)分钟数
                     * 
                     */
                    void SetTtlMinutes(const uint64_t& _ttlMinutes);

                    /**
                     * 判断参数 TtlMinutes 是否已赋值
                     * @return TtlMinutes 是否已赋值
                     * 
                     */
                    bool TtlMinutesHasBeenSet() const;

                private:

                    /**
                     * 客户的终端用户在IoT Video上的唯一标识ID
                     */
                    std::string m_accessId;
                    bool m_accessIdHasBeenSet;

                    /**
                     * 设备TID列表,0<元素数量<=100
                     */
                    std::vector<std::string> m_tids;
                    bool m_tidsHasBeenSet;

                    /**
                     * Token的TTL(time to alive)分钟数
                     */
                    uint64_t m_ttlMinutes;
                    bool m_ttlMinutesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEDEVTOKENREQUEST_H_
