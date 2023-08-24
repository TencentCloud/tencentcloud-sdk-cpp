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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEWAFINFORESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEWAFINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ClbHostResult.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeWafInfo返回参数结构体
                */
                class DescribeWafInfoResponse : public AbstractModel
                {
                public:
                    DescribeWafInfoResponse();
                    ~DescribeWafInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的WAF信息数组的长度，为0则表示没有查询到对应的信息
                     * @return Total 返回的WAF信息数组的长度，为0则表示没有查询到对应的信息
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取对应的WAF信息的数组。
                     * @return HostList 对应的WAF信息的数组。
                     * 
                     */
                    std::vector<ClbHostResult> GetHostList() const;

                    /**
                     * 判断参数 HostList 是否已赋值
                     * @return HostList 是否已赋值
                     * 
                     */
                    bool HostListHasBeenSet() const;

                private:

                    /**
                     * 返回的WAF信息数组的长度，为0则表示没有查询到对应的信息
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 对应的WAF信息的数组。
                     */
                    std::vector<ClbHostResult> m_hostList;
                    bool m_hostListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEWAFINFORESPONSE_H_
