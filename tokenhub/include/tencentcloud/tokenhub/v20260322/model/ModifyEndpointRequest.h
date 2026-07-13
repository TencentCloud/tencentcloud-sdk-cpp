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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYENDPOINTREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * ModifyEndpoint请求参数结构体
                */
                class ModifyEndpointRequest : public AbstractModel
                {
                public:
                    ModifyEndpointRequest();
                    ~ModifyEndpointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取自动调整配额
                     * @return AutoAdjustQuota 自动调整配额
                     * 
                     */
                    int64_t GetAutoAdjustQuota() const;

                    /**
                     * 设置自动调整配额
                     * @param _autoAdjustQuota 自动调整配额
                     * 
                     */
                    void SetAutoAdjustQuota(const int64_t& _autoAdjustQuota);

                    /**
                     * 判断参数 AutoAdjustQuota 是否已赋值
                     * @return AutoAdjustQuota 是否已赋值
                     * 
                     */
                    bool AutoAdjustQuotaHasBeenSet() const;

                private:

                    /**
                     * 自动调整配额
                     */
                    int64_t m_autoAdjustQuota;
                    bool m_autoAdjustQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYENDPOINTREQUEST_H_
