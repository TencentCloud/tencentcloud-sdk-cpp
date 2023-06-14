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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DOMAINACCESSREGIONDICT_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DOMAINACCESSREGIONDICT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/NationCountryInnerInfo.h>
#include <tencentcloud/gaap/v20180529/model/ProxyIdDict.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 域名解析就近访问配置详情
                */
                class DomainAccessRegionDict : public AbstractModel
                {
                public:
                    DomainAccessRegionDict();
                    ~DomainAccessRegionDict() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取就近接入区域
                     * @return NationCountryInnerList 就近接入区域
                     * 
                     */
                    std::vector<NationCountryInnerInfo> GetNationCountryInnerList() const;

                    /**
                     * 设置就近接入区域
                     * @param _nationCountryInnerList 就近接入区域
                     * 
                     */
                    void SetNationCountryInnerList(const std::vector<NationCountryInnerInfo>& _nationCountryInnerList);

                    /**
                     * 判断参数 NationCountryInnerList 是否已赋值
                     * @return NationCountryInnerList 是否已赋值
                     * 
                     */
                    bool NationCountryInnerListHasBeenSet() const;

                    /**
                     * 获取加速区域通道列表
                     * @return ProxyList 加速区域通道列表
                     * 
                     */
                    std::vector<ProxyIdDict> GetProxyList() const;

                    /**
                     * 设置加速区域通道列表
                     * @param _proxyList 加速区域通道列表
                     * 
                     */
                    void SetProxyList(const std::vector<ProxyIdDict>& _proxyList);

                    /**
                     * 判断参数 ProxyList 是否已赋值
                     * @return ProxyList 是否已赋值
                     * 
                     */
                    bool ProxyListHasBeenSet() const;

                    /**
                     * 获取加速区域ID
                     * @return RegionId 加速区域ID
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置加速区域ID
                     * @param _regionId 加速区域ID
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
                     * 获取加速区域内部编码
                     * @return GeographicalZoneInnerCode 加速区域内部编码
                     * 
                     */
                    std::string GetGeographicalZoneInnerCode() const;

                    /**
                     * 设置加速区域内部编码
                     * @param _geographicalZoneInnerCode 加速区域内部编码
                     * 
                     */
                    void SetGeographicalZoneInnerCode(const std::string& _geographicalZoneInnerCode);

                    /**
                     * 判断参数 GeographicalZoneInnerCode 是否已赋值
                     * @return GeographicalZoneInnerCode 是否已赋值
                     * 
                     */
                    bool GeographicalZoneInnerCodeHasBeenSet() const;

                    /**
                     * 获取加速区域所属大洲内部编码
                     * @return ContinentInnerCode 加速区域所属大洲内部编码
                     * 
                     */
                    std::string GetContinentInnerCode() const;

                    /**
                     * 设置加速区域所属大洲内部编码
                     * @param _continentInnerCode 加速区域所属大洲内部编码
                     * 
                     */
                    void SetContinentInnerCode(const std::string& _continentInnerCode);

                    /**
                     * 判断参数 ContinentInnerCode 是否已赋值
                     * @return ContinentInnerCode 是否已赋值
                     * 
                     */
                    bool ContinentInnerCodeHasBeenSet() const;

                    /**
                     * 获取加速区域别名
                     * @return RegionName 加速区域别名
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置加速区域别名
                     * @param _regionName 加速区域别名
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                private:

                    /**
                     * 就近接入区域
                     */
                    std::vector<NationCountryInnerInfo> m_nationCountryInnerList;
                    bool m_nationCountryInnerListHasBeenSet;

                    /**
                     * 加速区域通道列表
                     */
                    std::vector<ProxyIdDict> m_proxyList;
                    bool m_proxyListHasBeenSet;

                    /**
                     * 加速区域ID
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 加速区域内部编码
                     */
                    std::string m_geographicalZoneInnerCode;
                    bool m_geographicalZoneInnerCodeHasBeenSet;

                    /**
                     * 加速区域所属大洲内部编码
                     */
                    std::string m_continentInnerCode;
                    bool m_continentInnerCodeHasBeenSet;

                    /**
                     * 加速区域别名
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DOMAINACCESSREGIONDICT_H_
