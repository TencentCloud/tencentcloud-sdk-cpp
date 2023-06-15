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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERPODASSETSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERPODASSETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetClusterPod.h>
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
                * DescribeClusterPodAssets返回参数结构体
                */
                class DescribeClusterPodAssetsResponse : public AbstractModel
                {
                public:
                    DescribeClusterPodAssetsResponse();
                    ~DescribeClusterPodAssetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取列表
                     * @return Data 列表
                     * 
                     */
                    std::vector<AssetClusterPod> GetData() const;

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
                     * 获取集群pod状态枚举
                     * @return PodStatusList 集群pod状态枚举
                     * 
                     */
                    std::vector<FilterDataObject> GetPodStatusList() const;

                    /**
                     * 判断参数 PodStatusList 是否已赋值
                     * @return PodStatusList 是否已赋值
                     * 
                     */
                    bool PodStatusListHasBeenSet() const;

                    /**
                     * 获取命名空间枚举
                     * @return NamespaceList 命名空间枚举
                     * 
                     */
                    std::vector<FilterDataObject> GetNamespaceList() const;

                    /**
                     * 判断参数 NamespaceList 是否已赋值
                     * @return NamespaceList 是否已赋值
                     * 
                     */
                    bool NamespaceListHasBeenSet() const;

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

                private:

                    /**
                     * 列表
                     */
                    std::vector<AssetClusterPod> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 集群pod状态枚举
                     */
                    std::vector<FilterDataObject> m_podStatusList;
                    bool m_podStatusListHasBeenSet;

                    /**
                     * 命名空间枚举
                     */
                    std::vector<FilterDataObject> m_namespaceList;
                    bool m_namespaceListHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERPODASSETSRESPONSE_H_
