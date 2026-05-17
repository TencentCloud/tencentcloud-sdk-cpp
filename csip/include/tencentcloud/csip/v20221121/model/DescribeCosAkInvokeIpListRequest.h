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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSAKINVOKEIPLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSAKINVOKEIPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCosAkInvokeIpList请求参数结构体
                */
                class DescribeCosAkInvokeIpListRequest : public AbstractModel
                {
                public:
                    DescribeCosAkInvokeIpListRequest();
                    ~DescribeCosAkInvokeIpListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取appid
                     * @return RelAppId appid
                     * 
                     */
                    int64_t GetRelAppId() const;

                    /**
                     * 设置appid
                     * @param _relAppId appid
                     * 
                     */
                    void SetRelAppId(const int64_t& _relAppId);

                    /**
                     * 判断参数 RelAppId 是否已赋值
                     * @return RelAppId 是否已赋值
                     * 
                     */
                    bool RelAppIdHasBeenSet() const;

                    /**
                     * 获取ak
                     * @return Ak ak
                     * 
                     */
                    std::string GetAk() const;

                    /**
                     * 设置ak
                     * @param _ak ak
                     * 
                     */
                    void SetAk(const std::string& _ak);

                    /**
                     * 判断参数 Ak 是否已赋值
                     * @return Ak 是否已赋值
                     * 
                     */
                    bool AkHasBeenSet() const;

                    /**
                     * 获取过滤条件
                     * @return Filter 过滤条件
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置过滤条件
                     * @param _filter 过滤条件
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * appid
                     */
                    int64_t m_relAppId;
                    bool m_relAppIdHasBeenSet;

                    /**
                     * ak
                     */
                    std::string m_ak;
                    bool m_akHasBeenSet;

                    /**
                     * 过滤条件
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSAKINVOKEIPLISTREQUEST_H_
