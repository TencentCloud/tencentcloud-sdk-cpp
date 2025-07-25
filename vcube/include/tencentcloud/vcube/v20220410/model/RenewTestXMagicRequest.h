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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_RENEWTESTXMAGICREQUEST_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_RENEWTESTXMAGICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * RenewTestXMagic请求参数结构体
                */
                class RenewTestXMagicRequest : public AbstractModel
                {
                public:
                    RenewTestXMagicRequest();
                    ~RenewTestXMagicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取优图美视Id
                     * @return XMagicId 优图美视Id
                     * 
                     */
                    uint64_t GetXMagicId() const;

                    /**
                     * 设置优图美视Id
                     * @param _xMagicId 优图美视Id
                     * 
                     */
                    void SetXMagicId(const uint64_t& _xMagicId);

                    /**
                     * 判断参数 XMagicId 是否已赋值
                     * @return XMagicId 是否已赋值
                     * 
                     */
                    bool XMagicIdHasBeenSet() const;

                private:

                    /**
                     * 优图美视Id
                     */
                    uint64_t m_xMagicId;
                    bool m_xMagicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_RENEWTESTXMAGICREQUEST_H_
