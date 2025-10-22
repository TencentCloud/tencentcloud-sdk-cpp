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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_REPLAYSESSIONREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_REPLAYSESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ReplaySession请求参数结构体
                */
                class ReplaySessionRequest : public AbstractModel
                {
                public:
                    ReplaySessionRequest();
                    ~ReplaySessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取会话Sid
                     * @return Sid 会话Sid
                     * 
                     */
                    std::string GetSid() const;

                    /**
                     * 设置会话Sid
                     * @param _sid 会话Sid
                     * 
                     */
                    void SetSid(const std::string& _sid);

                    /**
                     * 判断参数 Sid 是否已赋值
                     * @return Sid 是否已赋值
                     * 
                     */
                    bool SidHasBeenSet() const;

                private:

                    /**
                     * 会话Sid
                     */
                    std::string m_sid;
                    bool m_sidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_REPLAYSESSIONREQUEST_H_
