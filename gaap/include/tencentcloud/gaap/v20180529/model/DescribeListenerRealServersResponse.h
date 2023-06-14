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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBELISTENERREALSERVERSRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBELISTENERREALSERVERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/RealServer.h>
#include <tencentcloud/gaap/v20180529/model/BindRealServer.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeListenerRealServers返回参数结构体
                */
                class DescribeListenerRealServersResponse : public AbstractModel
                {
                public:
                    DescribeListenerRealServersResponse();
                    ~DescribeListenerRealServersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取可绑定源站的个数
                     * @return TotalCount 可绑定源站的个数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取源站信息列表
                     * @return RealServerSet 源站信息列表
                     * 
                     */
                    std::vector<RealServer> GetRealServerSet() const;

                    /**
                     * 判断参数 RealServerSet 是否已赋值
                     * @return RealServerSet 是否已赋值
                     * 
                     */
                    bool RealServerSetHasBeenSet() const;

                    /**
                     * 获取已绑定源站的个数
                     * @return BindRealServerTotalCount 已绑定源站的个数
                     * 
                     */
                    uint64_t GetBindRealServerTotalCount() const;

                    /**
                     * 判断参数 BindRealServerTotalCount 是否已赋值
                     * @return BindRealServerTotalCount 是否已赋值
                     * 
                     */
                    bool BindRealServerTotalCountHasBeenSet() const;

                    /**
                     * 获取已绑定源站信息列表
                     * @return BindRealServerSet 已绑定源站信息列表
                     * 
                     */
                    std::vector<BindRealServer> GetBindRealServerSet() const;

                    /**
                     * 判断参数 BindRealServerSet 是否已赋值
                     * @return BindRealServerSet 是否已赋值
                     * 
                     */
                    bool BindRealServerSetHasBeenSet() const;

                private:

                    /**
                     * 可绑定源站的个数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 源站信息列表
                     */
                    std::vector<RealServer> m_realServerSet;
                    bool m_realServerSetHasBeenSet;

                    /**
                     * 已绑定源站的个数
                     */
                    uint64_t m_bindRealServerTotalCount;
                    bool m_bindRealServerTotalCountHasBeenSet;

                    /**
                     * 已绑定源站信息列表
                     */
                    std::vector<BindRealServer> m_bindRealServerSet;
                    bool m_bindRealServerSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBELISTENERREALSERVERSRESPONSE_H_
