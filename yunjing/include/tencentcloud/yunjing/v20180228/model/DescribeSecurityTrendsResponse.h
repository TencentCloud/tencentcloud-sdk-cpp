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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBESECURITYTRENDSRESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBESECURITYTRENDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yunjing/v20180228/model/SecurityTrend.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeSecurityTrends返回参数结构体
                */
                class DescribeSecurityTrendsResponse : public AbstractModel
                {
                public:
                    DescribeSecurityTrendsResponse();
                    ~DescribeSecurityTrendsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取木马事件统计数据数组。
                     * @return Malwares 木马事件统计数据数组。
                     */
                    std::vector<SecurityTrend> GetMalwares() const;

                    /**
                     * 判断参数 Malwares 是否已赋值
                     * @return Malwares 是否已赋值
                     */
                    bool MalwaresHasBeenSet() const;

                    /**
                     * 获取异地登录事件统计数据数组。
                     * @return NonLocalLoginPlaces 异地登录事件统计数据数组。
                     */
                    std::vector<SecurityTrend> GetNonLocalLoginPlaces() const;

                    /**
                     * 判断参数 NonLocalLoginPlaces 是否已赋值
                     * @return NonLocalLoginPlaces 是否已赋值
                     */
                    bool NonLocalLoginPlacesHasBeenSet() const;

                    /**
                     * 获取密码破解事件统计数据数组。
                     * @return BruteAttacks 密码破解事件统计数据数组。
                     */
                    std::vector<SecurityTrend> GetBruteAttacks() const;

                    /**
                     * 判断参数 BruteAttacks 是否已赋值
                     * @return BruteAttacks 是否已赋值
                     */
                    bool BruteAttacksHasBeenSet() const;

                    /**
                     * 获取漏洞统计数据数组。
                     * @return Vuls 漏洞统计数据数组。
                     */
                    std::vector<SecurityTrend> GetVuls() const;

                    /**
                     * 判断参数 Vuls 是否已赋值
                     * @return Vuls 是否已赋值
                     */
                    bool VulsHasBeenSet() const;

                    /**
                     * 获取基线统计数据数组。
                     * @return BaseLines 基线统计数据数组。
                     */
                    std::vector<SecurityTrend> GetBaseLines() const;

                    /**
                     * 判断参数 BaseLines 是否已赋值
                     * @return BaseLines 是否已赋值
                     */
                    bool BaseLinesHasBeenSet() const;

                private:

                    /**
                     * 木马事件统计数据数组。
                     */
                    std::vector<SecurityTrend> m_malwares;
                    bool m_malwaresHasBeenSet;

                    /**
                     * 异地登录事件统计数据数组。
                     */
                    std::vector<SecurityTrend> m_nonLocalLoginPlaces;
                    bool m_nonLocalLoginPlacesHasBeenSet;

                    /**
                     * 密码破解事件统计数据数组。
                     */
                    std::vector<SecurityTrend> m_bruteAttacks;
                    bool m_bruteAttacksHasBeenSet;

                    /**
                     * 漏洞统计数据数组。
                     */
                    std::vector<SecurityTrend> m_vuls;
                    bool m_vulsHasBeenSet;

                    /**
                     * 基线统计数据数组。
                     */
                    std::vector<SecurityTrend> m_baseLines;
                    bool m_baseLinesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBESECURITYTRENDSRESPONSE_H_
