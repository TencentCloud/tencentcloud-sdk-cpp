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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEPUBLICIPASSETSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEPUBLICIPASSETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/IpAssetListVO.h>
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
                * DescribePublicIpAssets返回参数结构体
                */
                class DescribePublicIpAssetsResponse : public AbstractModel
                {
                public:
                    DescribePublicIpAssetsResponse();
                    ~DescribePublicIpAssetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取列表
                     * @return Data 列表
                     * 
                     */
                    std::vector<IpAssetListVO> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

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
                     * 获取资产归属地
                     * @return AssetLocationList 资产归属地
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
                     * 获取ip列表枚举
                     * @return IpTypeList ip列表枚举
                     * 
                     */
                    std::vector<FilterDataObject> GetIpTypeList() const;

                    /**
                     * 判断参数 IpTypeList 是否已赋值
                     * @return IpTypeList 是否已赋值
                     * 
                     */
                    bool IpTypeListHasBeenSet() const;

                    /**
                     * 获取地域列表枚举
                     * @return RegionList 地域列表枚举
                     * 
                     */
                    std::vector<FilterDataObject> GetRegionList() const;

                    /**
                     * 判断参数 RegionList 是否已赋值
                     * @return RegionList 是否已赋值
                     * 
                     */
                    bool RegionListHasBeenSet() const;

                    /**
                     * 获取防护枚举
                     * @return DefenseStatusList 防护枚举
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
                     * 获取资产类型枚举
                     * @return AssetTypeList 资产类型枚举
                     * 
                     */
                    std::vector<FilterDataObject> GetAssetTypeList() const;

                    /**
                     * 判断参数 AssetTypeList 是否已赋值
                     * @return AssetTypeList 是否已赋值
                     * 
                     */
                    bool AssetTypeListHasBeenSet() const;

                    /**
                     * 获取AppId枚举
                     * @return AppIdList AppId枚举
                     * 
                     */
                    std::vector<FilterDataObject> GetAppIdList() const;

                    /**
                     * 判断参数 AppIdList 是否已赋值
                     * @return AppIdList 是否已赋值
                     * 
                     */
                    bool AppIdListHasBeenSet() const;

                private:

                    /**
                     * 列表
                     */
                    std::vector<IpAssetListVO> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 资产归属地
                     */
                    std::vector<FilterDataObject> m_assetLocationList;
                    bool m_assetLocationListHasBeenSet;

                    /**
                     * ip列表枚举
                     */
                    std::vector<FilterDataObject> m_ipTypeList;
                    bool m_ipTypeListHasBeenSet;

                    /**
                     * 地域列表枚举
                     */
                    std::vector<FilterDataObject> m_regionList;
                    bool m_regionListHasBeenSet;

                    /**
                     * 防护枚举
                     */
                    std::vector<FilterDataObject> m_defenseStatusList;
                    bool m_defenseStatusListHasBeenSet;

                    /**
                     * 资产类型枚举
                     */
                    std::vector<FilterDataObject> m_assetTypeList;
                    bool m_assetTypeListHasBeenSet;

                    /**
                     * AppId枚举
                     */
                    std::vector<FilterDataObject> m_appIdList;
                    bool m_appIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEPUBLICIPASSETSRESPONSE_H_
