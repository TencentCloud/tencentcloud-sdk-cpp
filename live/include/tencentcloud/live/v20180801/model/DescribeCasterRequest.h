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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECASTERREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECASTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeCaster请求参数结构体
                */
                class DescribeCasterRequest : public AbstractModel
                {
                public:
                    DescribeCasterRequest();
                    ~DescribeCasterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需查询的导播台ID
                     * @return CasterId 需查询的导播台ID
                     * 
                     */
                    uint64_t GetCasterId() const;

                    /**
                     * 设置需查询的导播台ID
                     * @param _casterId 需查询的导播台ID
                     * 
                     */
                    void SetCasterId(const uint64_t& _casterId);

                    /**
                     * 判断参数 CasterId 是否已赋值
                     * @return CasterId 是否已赋值
                     * 
                     */
                    bool CasterIdHasBeenSet() const;

                private:

                    /**
                     * 需查询的导播台ID
                     */
                    uint64_t m_casterId;
                    bool m_casterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECASTERREQUEST_H_
