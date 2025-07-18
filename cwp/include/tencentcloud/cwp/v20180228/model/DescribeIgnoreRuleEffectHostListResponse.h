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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIGNORERULEEFFECTHOSTLISTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIGNORERULEEFFECTHOSTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/IgnoreRuleEffectHostInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeIgnoreRuleEffectHostList返回参数结构体
                */
                class DescribeIgnoreRuleEffectHostListResponse : public AbstractModel
                {
                public:
                    DescribeIgnoreRuleEffectHostListResponse();
                    ~DescribeIgnoreRuleEffectHostListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取忽略检测项影响主机列表
                     * @return IgnoreRuleEffectHostList 忽略检测项影响主机列表
                     * 
                     */
                    std::vector<IgnoreRuleEffectHostInfo> GetIgnoreRuleEffectHostList() const;

                    /**
                     * 判断参数 IgnoreRuleEffectHostList 是否已赋值
                     * @return IgnoreRuleEffectHostList 是否已赋值
                     * 
                     */
                    bool IgnoreRuleEffectHostListHasBeenSet() const;

                    /**
                     * 获取分页查询记录总数
                     * @return TotalCount 分页查询记录总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 忽略检测项影响主机列表
                     */
                    std::vector<IgnoreRuleEffectHostInfo> m_ignoreRuleEffectHostList;
                    bool m_ignoreRuleEffectHostListHasBeenSet;

                    /**
                     * 分页查询记录总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIGNORERULEEFFECTHOSTLISTRESPONSE_H_
