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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYDETAILRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/ProxyInfo.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeProxyDetail返回参数结构体
                */
                class DescribeProxyDetailResponse : public AbstractModel
                {
                public:
                    DescribeProxyDetailResponse();
                    ~DescribeProxyDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取通道详情信息。
                     * @return ProxyDetail 通道详情信息。
                     * 
                     */
                    ProxyInfo GetProxyDetail() const;

                    /**
                     * 判断参数 ProxyDetail 是否已赋值
                     * @return ProxyDetail 是否已赋值
                     * 
                     */
                    bool ProxyDetailHasBeenSet() const;

                private:

                    /**
                     * 通道详情信息。
                     */
                    ProxyInfo m_proxyDetail;
                    bool m_proxyDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYDETAILRESPONSE_H_
