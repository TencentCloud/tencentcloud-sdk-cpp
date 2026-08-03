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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_GETLABSERVICEURLSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_GETLABSERVICEURLSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * GetLabServiceUrls返回参数结构体
                */
                class GetLabServiceUrlsResponse : public AbstractModel
                {
                public:
                    GetLabServiceUrlsResponse();
                    ~GetLabServiceUrlsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数据实验室服务入口（服务类型 -&gt; 访问地址）</p>
                     * @return ServiceUrls <p>数据实验室服务入口（服务类型 -&gt; 访问地址）</p>
                     * 
                     */
                    std::vector<KVPair> GetServiceUrls() const;

                    /**
                     * 判断参数 ServiceUrls 是否已赋值
                     * @return ServiceUrls 是否已赋值
                     * 
                     */
                    bool ServiceUrlsHasBeenSet() const;

                private:

                    /**
                     * <p>数据实验室服务入口（服务类型 -&gt; 访问地址）</p>
                     */
                    std::vector<KVPair> m_serviceUrls;
                    bool m_serviceUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_GETLABSERVICEURLSRESPONSE_H_
