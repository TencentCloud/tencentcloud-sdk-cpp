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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEREALSERVERSSTATUSRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEREALSERVERSSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/RealServerStatus.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeRealServersStatus返回参数结构体
                */
                class DescribeRealServersStatusResponse : public AbstractModel
                {
                public:
                    DescribeRealServersStatusResponse();
                    ~DescribeRealServersStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回源站查询结果的个数
                     * @return TotalCount 返回源站查询结果的个数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取源站被绑定状态列表
                     * @return RealServerStatusSet 源站被绑定状态列表
                     * 
                     */
                    std::vector<RealServerStatus> GetRealServerStatusSet() const;

                    /**
                     * 判断参数 RealServerStatusSet 是否已赋值
                     * @return RealServerStatusSet 是否已赋值
                     * 
                     */
                    bool RealServerStatusSetHasBeenSet() const;

                private:

                    /**
                     * 返回源站查询结果的个数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 源站被绑定状态列表
                     */
                    std::vector<RealServerStatus> m_realServerStatusSet;
                    bool m_realServerStatusSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEREALSERVERSSTATUSRESPONSE_H_
