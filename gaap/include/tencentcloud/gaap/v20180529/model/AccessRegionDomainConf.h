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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_ACCESSREGIONDOMAINCONF_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_ACCESSREGIONDOMAINCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 域名就近接入配置
                */
                class AccessRegionDomainConf : public AbstractModel
                {
                public:
                    AccessRegionDomainConf();
                    ~AccessRegionDomainConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域ID。
                     * @return RegionId 地域ID。
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置地域ID。
                     * @param _regionId 地域ID。
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取就近接入区域国家内部编码，编码列表可通过DescribeCountryAreaMapping接口获取。
                     * @return NationCountryInnerList 就近接入区域国家内部编码，编码列表可通过DescribeCountryAreaMapping接口获取。
                     * 
                     */
                    std::vector<std::string> GetNationCountryInnerList() const;

                    /**
                     * 设置就近接入区域国家内部编码，编码列表可通过DescribeCountryAreaMapping接口获取。
                     * @param _nationCountryInnerList 就近接入区域国家内部编码，编码列表可通过DescribeCountryAreaMapping接口获取。
                     * 
                     */
                    void SetNationCountryInnerList(const std::vector<std::string>& _nationCountryInnerList);

                    /**
                     * 判断参数 NationCountryInnerList 是否已赋值
                     * @return NationCountryInnerList 是否已赋值
                     * 
                     */
                    bool NationCountryInnerListHasBeenSet() const;

                private:

                    /**
                     * 地域ID。
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 就近接入区域国家内部编码，编码列表可通过DescribeCountryAreaMapping接口获取。
                     */
                    std::vector<std::string> m_nationCountryInnerList;
                    bool m_nationCountryInnerListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_ACCESSREGIONDOMAINCONF_H_
