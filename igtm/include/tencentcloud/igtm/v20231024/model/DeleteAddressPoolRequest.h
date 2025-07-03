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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_DELETEADDRESSPOOLREQUEST_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_DELETEADDRESSPOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * DeleteAddressPool请求参数结构体
                */
                class DeleteAddressPoolRequest : public AbstractModel
                {
                public:
                    DeleteAddressPoolRequest();
                    ~DeleteAddressPoolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取地址池id
                     * @return PoolId 地址池id
                     * 
                     */
                    uint64_t GetPoolId() const;

                    /**
                     * 设置地址池id
                     * @param _poolId 地址池id
                     * 
                     */
                    void SetPoolId(const uint64_t& _poolId);

                    /**
                     * 判断参数 PoolId 是否已赋值
                     * @return PoolId 是否已赋值
                     * 
                     */
                    bool PoolIdHasBeenSet() const;

                private:

                    /**
                     * 地址池id
                     */
                    uint64_t m_poolId;
                    bool m_poolIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_DELETEADDRESSPOOLREQUEST_H_
