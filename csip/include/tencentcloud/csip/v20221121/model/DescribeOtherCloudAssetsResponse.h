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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEOTHERCLOUDASSETSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEOTHERCLOUDASSETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DBAssetVO.h>
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
                * DescribeOtherCloudAssets返回参数结构体
                */
                class DescribeOtherCloudAssetsResponse : public AbstractModel
                {
                public:
                    DescribeOtherCloudAssetsResponse();
                    ~DescribeOtherCloudAssetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 总数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取资产总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 资产总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DBAssetVO> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取地域枚举
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionList 地域枚举
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取资产类型枚举
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetTypeList 资产类型枚举
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Vpc枚举
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcList Vpc枚举
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Appid枚举
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppIdList Appid枚举
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 资产总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DBAssetVO> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 地域枚举
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterDataObject> m_regionList;
                    bool m_regionListHasBeenSet;

                    /**
                     * 资产类型枚举
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterDataObject> m_assetTypeList;
                    bool m_assetTypeListHasBeenSet;

                    /**
                     * Vpc枚举
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterDataObject> m_vpcList;
                    bool m_vpcListHasBeenSet;

                    /**
                     * Appid枚举
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterDataObject> m_appIdList;
                    bool m_appIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEOTHERCLOUDASSETSRESPONSE_H_
