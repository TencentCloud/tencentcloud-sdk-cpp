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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEAREAREGIONRESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEAREAREGIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/RegionAreaInfo.h>
#include <tencentcloud/cdwdoris/v20211228/model/FrontEndRule.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeAreaRegion返回参数结构体
                */
                class DescribeAreaRegionResponse : public AbstractModel
                {
                public:
                    DescribeAreaRegionResponse();
                    ~DescribeAreaRegionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取地域列表
                     * @return Items 地域列表
                     * 
                     */
                    std::vector<RegionAreaInfo> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取前端规则描述
                     * @return FrontEndRules 前端规则描述
                     * 
                     */
                    std::vector<FrontEndRule> GetFrontEndRules() const;

                    /**
                     * 判断参数 FrontEndRules 是否已赋值
                     * @return FrontEndRules 是否已赋值
                     * 
                     */
                    bool FrontEndRulesHasBeenSet() const;

                    /**
                     * 获取返回可用的白名单名称
                     * @return AvailableWhiteListNames 返回可用的白名单名称
                     * 
                     */
                    std::vector<std::string> GetAvailableWhiteListNames() const;

                    /**
                     * 判断参数 AvailableWhiteListNames 是否已赋值
                     * @return AvailableWhiteListNames 是否已赋值
                     * 
                     */
                    bool AvailableWhiteListNamesHasBeenSet() const;

                private:

                    /**
                     * 地域列表
                     */
                    std::vector<RegionAreaInfo> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 前端规则描述
                     */
                    std::vector<FrontEndRule> m_frontEndRules;
                    bool m_frontEndRulesHasBeenSet;

                    /**
                     * 返回可用的白名单名称
                     */
                    std::vector<std::string> m_availableWhiteListNames;
                    bool m_availableWhiteListNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEAREAREGIONRESPONSE_H_
