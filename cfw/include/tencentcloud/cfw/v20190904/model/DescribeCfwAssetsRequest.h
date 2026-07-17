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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWASSETSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWASSETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeCfwAssets请求参数结构体
                */
                class DescribeCfwAssetsRequest : public AbstractModel
                {
                public:
                    DescribeCfwAssetsRequest();
                    ~DescribeCfwAssetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取最大返回资产数。可选，默认 100；取值 1 至 1000。
                     * @return Limit 最大返回资产数。可选，默认 100；取值 1 至 1000。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置最大返回资产数。可选，默认 100；取值 1 至 1000。
                     * @param _limit 最大返回资产数。可选，默认 100；取值 1 至 1000。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 最大返回资产数。可选，默认 100；取值 1 至 1000。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWASSETSREQUEST_H_
