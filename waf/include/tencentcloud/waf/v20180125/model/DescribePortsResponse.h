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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPORTSRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPORTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribePorts返回参数结构体
                */
                class DescribePortsResponse : public AbstractModel
                {
                public:
                    DescribePortsResponse();
                    ~DescribePortsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取http端口列表
                     * @return HttpPorts http端口列表
                     * 
                     */
                    std::vector<std::string> GetHttpPorts() const;

                    /**
                     * 判断参数 HttpPorts 是否已赋值
                     * @return HttpPorts 是否已赋值
                     * 
                     */
                    bool HttpPortsHasBeenSet() const;

                    /**
                     * 获取https端口列表
                     * @return HttpsPorts https端口列表
                     * 
                     */
                    std::vector<std::string> GetHttpsPorts() const;

                    /**
                     * 判断参数 HttpsPorts 是否已赋值
                     * @return HttpsPorts 是否已赋值
                     * 
                     */
                    bool HttpsPortsHasBeenSet() const;

                private:

                    /**
                     * http端口列表
                     */
                    std::vector<std::string> m_httpPorts;
                    bool m_httpPortsHasBeenSet;

                    /**
                     * https端口列表
                     */
                    std::vector<std::string> m_httpsPorts;
                    bool m_httpsPortsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPORTSRESPONSE_H_
