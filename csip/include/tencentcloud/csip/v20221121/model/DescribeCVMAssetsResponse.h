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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECVMASSETSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECVMASSETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CVMAssetVO.h>
#include <tencentcloud/csip/v20221121/model/FilterDataObject.h>
#include <tencentcloud/csip/v20221121/model/AssetInstanceTypeMap.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCVMAssets返回参数结构体
                */
                class DescribeCVMAssetsResponse : public AbstractModel
                {
                public:
                    DescribeCVMAssetsResponse();
                    ~DescribeCVMAssetsResponse() = default;
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
                     * 获取机器列表
                     * @return Data 机器列表
                     * 
                     */
                    std::vector<CVMAssetVO> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

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

                    /**
                     * 获取防护状态
                     * @return DefenseStatusList 防护状态
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
                     * 获取vpc枚举
                     * @return VpcList vpc枚举
                     * 
                     */
                    std::vector<FilterDataObject> GetVpcList() const;

                    /**
                     * 判断参数 VpcList 是否已赋值
                     * @return VpcList 是否已赋值
                     * 
                     */
                    bool VpcListHasBeenSet() const;

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
                     * 获取操作系统枚举
                     * @return SystemTypeList 操作系统枚举
                     * 
                     */
                    std::vector<FilterDataObject> GetSystemTypeList() const;

                    /**
                     * 判断参数 SystemTypeList 是否已赋值
                     * @return SystemTypeList 是否已赋值
                     * 
                     */
                    bool SystemTypeListHasBeenSet() const;

                    /**
                     * 获取ip列表
                     * @return IpTypeList ip列表
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
                     * 获取appid列表
                     * @return AppIdList appid列表
                     * 
                     */
                    std::vector<FilterDataObject> GetAppIdList() const;

                    /**
                     * 判断参数 AppIdList 是否已赋值
                     * @return AppIdList 是否已赋值
                     * 
                     */
                    bool AppIdListHasBeenSet() const;

                    /**
                     * 获取可用区列表
                     * @return ZoneList 可用区列表
                     * 
                     */
                    std::vector<FilterDataObject> GetZoneList() const;

                    /**
                     * 判断参数 ZoneList 是否已赋值
                     * @return ZoneList 是否已赋值
                     * 
                     */
                    bool ZoneListHasBeenSet() const;

                    /**
                     * 获取os列表
                     * @return OsList os列表
                     * 
                     */
                    std::vector<FilterDataObject> GetOsList() const;

                    /**
                     * 判断参数 OsList 是否已赋值
                     * @return OsList 是否已赋值
                     * 
                     */
                    bool OsListHasBeenSet() const;

                    /**
                     * 获取资产类型和实例类型的对应关系
                     * @return AssetMapInstanceTypeList 资产类型和实例类型的对应关系
                     * 
                     */
                    std::vector<AssetInstanceTypeMap> GetAssetMapInstanceTypeList() const;

                    /**
                     * 判断参数 AssetMapInstanceTypeList 是否已赋值
                     * @return AssetMapInstanceTypeList 是否已赋值
                     * 
                     */
                    bool AssetMapInstanceTypeListHasBeenSet() const;

                    /**
                     * 获取公网内网枚举
                     * @return PublicPrivateAttr 公网内网枚举
                     * 
                     */
                    std::vector<FilterDataObject> GetPublicPrivateAttr() const;

                    /**
                     * 判断参数 PublicPrivateAttr 是否已赋值
                     * @return PublicPrivateAttr 是否已赋值
                     * 
                     */
                    bool PublicPrivateAttrHasBeenSet() const;

                    /**
                     * 获取主机防护状态
                     * @return ProtectStatusList 主机防护状态
                     * 
                     */
                    std::vector<FilterDataObject> GetProtectStatusList() const;

                    /**
                     * 判断参数 ProtectStatusList 是否已赋值
                     * @return ProtectStatusList 是否已赋值
                     * 
                     */
                    bool ProtectStatusListHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 机器列表
                     */
                    std::vector<CVMAssetVO> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 地域列表
                     */
                    std::vector<FilterDataObject> m_regionList;
                    bool m_regionListHasBeenSet;

                    /**
                     * 防护状态
                     */
                    std::vector<FilterDataObject> m_defenseStatusList;
                    bool m_defenseStatusListHasBeenSet;

                    /**
                     * vpc枚举
                     */
                    std::vector<FilterDataObject> m_vpcList;
                    bool m_vpcListHasBeenSet;

                    /**
                     * 资产类型枚举
                     */
                    std::vector<FilterDataObject> m_assetTypeList;
                    bool m_assetTypeListHasBeenSet;

                    /**
                     * 操作系统枚举
                     */
                    std::vector<FilterDataObject> m_systemTypeList;
                    bool m_systemTypeListHasBeenSet;

                    /**
                     * ip列表
                     */
                    std::vector<FilterDataObject> m_ipTypeList;
                    bool m_ipTypeListHasBeenSet;

                    /**
                     * appid列表
                     */
                    std::vector<FilterDataObject> m_appIdList;
                    bool m_appIdListHasBeenSet;

                    /**
                     * 可用区列表
                     */
                    std::vector<FilterDataObject> m_zoneList;
                    bool m_zoneListHasBeenSet;

                    /**
                     * os列表
                     */
                    std::vector<FilterDataObject> m_osList;
                    bool m_osListHasBeenSet;

                    /**
                     * 资产类型和实例类型的对应关系
                     */
                    std::vector<AssetInstanceTypeMap> m_assetMapInstanceTypeList;
                    bool m_assetMapInstanceTypeListHasBeenSet;

                    /**
                     * 公网内网枚举
                     */
                    std::vector<FilterDataObject> m_publicPrivateAttr;
                    bool m_publicPrivateAttrHasBeenSet;

                    /**
                     * 主机防护状态
                     */
                    std::vector<FilterDataObject> m_protectStatusList;
                    bool m_protectStatusListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECVMASSETSRESPONSE_H_
