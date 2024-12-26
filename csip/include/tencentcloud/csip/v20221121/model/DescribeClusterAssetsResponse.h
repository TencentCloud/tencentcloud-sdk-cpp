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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERASSETSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERASSETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetCluster.h>
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
                * DescribeClusterAssets返回参数结构体
                */
                class DescribeClusterAssetsResponse : public AbstractModel
                {
                public:
                    DescribeClusterAssetsResponse();
                    ~DescribeClusterAssetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取列表
                     * @return Data 列表
                     * 
                     */
                    std::vector<AssetCluster> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return TotalCount 总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取集群类型枚举
                     * @return ClusterTypeList 集群类型枚举
                     * 
                     */
                    std::vector<FilterDataObject> GetClusterTypeList() const;

                    /**
                     * 判断参数 ClusterTypeList 是否已赋值
                     * @return ClusterTypeList 是否已赋值
                     * 
                     */
                    bool ClusterTypeListHasBeenSet() const;

                    /**
                     * 获取集群状态枚举
                     * @return ClusterStatusList 集群状态枚举
                     * 
                     */
                    std::vector<FilterDataObject> GetClusterStatusList() const;

                    /**
                     * 判断参数 ClusterStatusList 是否已赋值
                     * @return ClusterStatusList 是否已赋值
                     * 
                     */
                    bool ClusterStatusListHasBeenSet() const;

                    /**
                     * 获取组件状态枚举
                     * @return ComponentStatusList 组件状态枚举
                     * 
                     */
                    std::vector<FilterDataObject> GetComponentStatusList() const;

                    /**
                     * 判断参数 ComponentStatusList 是否已赋值
                     * @return ComponentStatusList 是否已赋值
                     * 
                     */
                    bool ComponentStatusListHasBeenSet() const;

                    /**
                     * 获取私有网络枚举
                     * @return VpcList 私有网络枚举
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
                     * 获取地域枚举
                     * @return RegionList 地域枚举
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
                     * 获取租户枚举
                     * @return AppIdList 租户枚举
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
                     * 获取集群防护状态枚举
                     * @return ProtectStatusList 集群防护状态枚举
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
                     * 列表
                     */
                    std::vector<AssetCluster> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 集群类型枚举
                     */
                    std::vector<FilterDataObject> m_clusterTypeList;
                    bool m_clusterTypeListHasBeenSet;

                    /**
                     * 集群状态枚举
                     */
                    std::vector<FilterDataObject> m_clusterStatusList;
                    bool m_clusterStatusListHasBeenSet;

                    /**
                     * 组件状态枚举
                     */
                    std::vector<FilterDataObject> m_componentStatusList;
                    bool m_componentStatusListHasBeenSet;

                    /**
                     * 私有网络枚举
                     */
                    std::vector<FilterDataObject> m_vpcList;
                    bool m_vpcListHasBeenSet;

                    /**
                     * 地域枚举
                     */
                    std::vector<FilterDataObject> m_regionList;
                    bool m_regionListHasBeenSet;

                    /**
                     * 租户枚举
                     */
                    std::vector<FilterDataObject> m_appIdList;
                    bool m_appIdListHasBeenSet;

                    /**
                     * 集群防护状态枚举
                     */
                    std::vector<FilterDataObject> m_protectStatusList;
                    bool m_protectStatusListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERASSETSRESPONSE_H_
