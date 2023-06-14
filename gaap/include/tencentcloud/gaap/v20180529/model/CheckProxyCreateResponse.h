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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CHECKPROXYCREATERESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CHECKPROXYCREATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CheckProxyCreate返回参数结构体
                */
                class CheckProxyCreateResponse : public AbstractModel
                {
                public:
                    CheckProxyCreateResponse();
                    ~CheckProxyCreateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询能否创建给定配置的通道，1可以创建，0不可创建。
                     * @return CheckFlag 查询能否创建给定配置的通道，1可以创建，0不可创建。
                     * 
                     */
                    uint64_t GetCheckFlag() const;

                    /**
                     * 判断参数 CheckFlag 是否已赋值
                     * @return CheckFlag 是否已赋值
                     * 
                     */
                    bool CheckFlagHasBeenSet() const;

                private:

                    /**
                     * 查询能否创建给定配置的通道，1可以创建，0不可创建。
                     */
                    uint64_t m_checkFlag;
                    bool m_checkFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CHECKPROXYCREATERESPONSE_H_
