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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPROVERSIONINFORESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPROVERSIONINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeProVersionInfo返回参数结构体
                */
                class DescribeProVersionInfoResponse : public AbstractModel
                {
                public:
                    DescribeProVersionInfoResponse();
                    ~DescribeProVersionInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取昨日【专业版-按量付费】扣费明细,(实际已账单为准)
                     * @return PostPayCost 昨日【专业版-按量付费】扣费明细,(实际已账单为准)
                     * 
                     */
                    uint64_t GetPostPayCost() const;

                    /**
                     * 判断参数 PostPayCost 是否已赋值
                     * @return PostPayCost 是否已赋值
                     * 
                     */
                    bool PostPayCostHasBeenSet() const;

                    /**
                     * 获取新增主机是否自动开通专业版
                     * @return IsAutoOpenProVersion 新增主机是否自动开通专业版
                     * 
                     */
                    bool GetIsAutoOpenProVersion() const;

                    /**
                     * 判断参数 IsAutoOpenProVersion 是否已赋值
                     * @return IsAutoOpenProVersion 是否已赋值
                     * 
                     */
                    bool IsAutoOpenProVersionHasBeenSet() const;

                    /**
                     * 获取专业版主机数
                     * @return ProVersionNum 专业版主机数
                     * 
                     */
                    uint64_t GetProVersionNum() const;

                    /**
                     * 判断参数 ProVersionNum 是否已赋值
                     * @return ProVersionNum 是否已赋值
                     * 
                     */
                    bool ProVersionNumHasBeenSet() const;

                private:

                    /**
                     * 昨日【专业版-按量付费】扣费明细,(实际已账单为准)
                     */
                    uint64_t m_postPayCost;
                    bool m_postPayCostHasBeenSet;

                    /**
                     * 新增主机是否自动开通专业版
                     */
                    bool m_isAutoOpenProVersion;
                    bool m_isAutoOpenProVersionHasBeenSet;

                    /**
                     * 专业版主机数
                     */
                    uint64_t m_proVersionNum;
                    bool m_proVersionNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPROVERSIONINFORESPONSE_H_
