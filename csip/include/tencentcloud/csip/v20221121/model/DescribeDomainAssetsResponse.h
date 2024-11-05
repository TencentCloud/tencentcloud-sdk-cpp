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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDOMAINASSETSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDOMAINASSETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DomainAssetVO.h>
#include <tencentcloud/csip/v20221121/model/FilterDataObject.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDomainAssets返回参数结构体
                */
                class DescribeDomainAssetsResponse : public AbstractModel
                {
                public:
                    DescribeDomainAssetsResponse();
                    ~DescribeDomainAssetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数
                     * @return Total 总数
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
                     * 获取域名列表
                     * @return Data 域名列表
                     * 
                     */
                    std::vector<DomainAssetVO> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取防护状态列表
                     * @return DefenseStatusList 防护状态列表
                     * 
                     */
                    std::vector<FilterDataObject> GetDefenseStatusList() const;

                    /**
                     * 判断参数 DefenseStatusList 是否已赋值
                     * @return DefenseStatusList 是否已赋值
                     * 
                     */
                    bool DefenseStatusListHasBeenSet() const;

                    /**
                     * 获取资产归属地列表
                     * @return AssetLocationList 资产归属地列表
                     * 
                     */
                    std::vector<FilterDataObject> GetAssetLocationList() const;

                    /**
                     * 判断参数 AssetLocationList 是否已赋值
                     * @return AssetLocationList 是否已赋值
                     * 
                     */
                    bool AssetLocationListHasBeenSet() const;

                    /**
                     * 获取资产类型列表
                     * @return SourceTypeList 资产类型列表
                     * 
                     */
                    std::vector<FilterDataObject> GetSourceTypeList() const;

                    /**
                     * 判断参数 SourceTypeList 是否已赋值
                     * @return SourceTypeList 是否已赋值
                     * 
                     */
                    bool SourceTypeListHasBeenSet() const;

                    /**
                     * 获取地域列表
                     * @return RegionList 地域列表
                     * 
                     */
                    std::vector<FilterDataObject> GetRegionList() const;

                    /**
                     * 判断参数 RegionList 是否已赋值
                     * @return RegionList 是否已赋值
                     * 
                     */
                    bool RegionListHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 域名列表
                     */
                    std::vector<DomainAssetVO> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 防护状态列表
                     */
                    std::vector<FilterDataObject> m_defenseStatusList;
                    bool m_defenseStatusListHasBeenSet;

                    /**
                     * 资产归属地列表
                     */
                    std::vector<FilterDataObject> m_assetLocationList;
                    bool m_assetLocationListHasBeenSet;

                    /**
                     * 资产类型列表
                     */
                    std::vector<FilterDataObject> m_sourceTypeList;
                    bool m_sourceTypeListHasBeenSet;

                    /**
                     * 地域列表
                     */
                    std::vector<FilterDataObject> m_regionList;
                    bool m_regionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDOMAINASSETSRESPONSE_H_
