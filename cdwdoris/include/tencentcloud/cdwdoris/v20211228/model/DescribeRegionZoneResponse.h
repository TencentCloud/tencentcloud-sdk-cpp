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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEREGIONZONERESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEREGIONZONERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/RegionAreaInfo.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeRegionZone返回参数结构体
                */
                class DescribeRegionZoneResponse : public AbstractModel
                {
                public:
                    DescribeRegionZoneResponse();
                    ~DescribeRegionZoneResponse() = default;
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
                     * 获取内核版本列表
                     * @return Versions 内核版本列表
                     * 
                     */
                    std::vector<std::string> GetVersions() const;

                    /**
                     * 判断参数 Versions 是否已赋值
                     * @return Versions 是否已赋值
                     * 
                     */
                    bool VersionsHasBeenSet() const;

                    /**
                     * 获取网络规则
                     * @return VpcRule 网络规则
                     * 
                     */
                    std::string GetVpcRule() const;

                    /**
                     * 判断参数 VpcRule 是否已赋值
                     * @return VpcRule 是否已赋值
                     * 
                     */
                    bool VpcRuleHasBeenSet() const;

                private:

                    /**
                     * 地域列表
                     */
                    std::vector<RegionAreaInfo> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 内核版本列表
                     */
                    std::vector<std::string> m_versions;
                    bool m_versionsHasBeenSet;

                    /**
                     * 网络规则
                     */
                    std::string m_vpcRule;
                    bool m_vpcRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEREGIONZONERESPONSE_H_
