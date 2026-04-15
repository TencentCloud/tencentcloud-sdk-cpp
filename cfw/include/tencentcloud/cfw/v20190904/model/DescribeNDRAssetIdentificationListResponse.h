/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENDRASSETIDENTIFICATIONLISTRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENDRASSETIDENTIFICATIONLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/NDRAssetServiceInfo.h>
#include <tencentcloud/cfw/v20190904/model/NDRAssetCategoryStats.h>
#include <tencentcloud/cfw/v20190904/model/FieldOption.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeNDRAssetIdentificationList返回参数结构体
                */
                class DescribeNDRAssetIdentificationListResponse : public AbstractModel
                {
                public:
                    DescribeNDRAssetIdentificationListResponse();
                    ~DescribeNDRAssetIdentificationListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合查询条件的总条数
                     * @return Total 符合查询条件的总条数
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
                     * 获取查询结果列表
                     * @return Data 查询结果列表
                     * 
                     */
                    std::vector<NDRAssetServiceInfo> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取服务类型统计结果
                     * @return AssetCategoryStats 服务类型统计结果
                     * 
                     */
                    std::vector<NDRAssetCategoryStats> GetAssetCategoryStats() const;

                    /**
                     * 判断参数 AssetCategoryStats 是否已赋值
                     * @return AssetCategoryStats 是否已赋值
                     * 
                     */
                    bool AssetCategoryStatsHasBeenSet() const;

                    /**
                     * 获取地域可选项
                     * @return RegionOptions 地域可选项
                     * 
                     */
                    std::vector<FieldOption> GetRegionOptions() const;

                    /**
                     * 判断参数 RegionOptions 是否已赋值
                     * @return RegionOptions 是否已赋值
                     * 
                     */
                    bool RegionOptionsHasBeenSet() const;

                    /**
                     * 获取IP版本可选项
                     * @return IpVersionOptions IP版本可选项
                     * 
                     */
                    std::vector<FieldOption> GetIpVersionOptions() const;

                    /**
                     * 判断参数 IpVersionOptions 是否已赋值
                     * @return IpVersionOptions 是否已赋值
                     * 
                     */
                    bool IpVersionOptionsHasBeenSet() const;

                    /**
                     * 获取IP类型可选项
                     * @return IpTypeOptions IP类型可选项
                     * 
                     */
                    std::vector<FieldOption> GetIpTypeOptions() const;

                    /**
                     * 判断参数 IpTypeOptions 是否已赋值
                     * @return IpTypeOptions 是否已赋值
                     * 
                     */
                    bool IpTypeOptionsHasBeenSet() const;

                    /**
                     * 获取服务类型可选项
                     * @return AssetCategoryOptions 服务类型可选项
                     * 
                     */
                    std::vector<FieldOption> GetAssetCategoryOptions() const;

                    /**
                     * 判断参数 AssetCategoryOptions 是否已赋值
                     * @return AssetCategoryOptions 是否已赋值
                     * 
                     */
                    bool AssetCategoryOptionsHasBeenSet() const;

                    /**
                     * 获取识别来源可选项
                     * @return IdentificationSourceOptions 识别来源可选项
                     * 
                     */
                    std::vector<FieldOption> GetIdentificationSourceOptions() const;

                    /**
                     * 判断参数 IdentificationSourceOptions 是否已赋值
                     * @return IdentificationSourceOptions 是否已赋值
                     * 
                     */
                    bool IdentificationSourceOptionsHasBeenSet() const;

                    /**
                     * 获取协议可选项
                     * @return ProtocolOptions 协议可选项
                     * 
                     */
                    std::vector<FieldOption> GetProtocolOptions() const;

                    /**
                     * 判断参数 ProtocolOptions 是否已赋值
                     * @return ProtocolOptions 是否已赋值
                     * 
                     */
                    bool ProtocolOptionsHasBeenSet() const;

                    /**
                     * 获取实例类型可选项
                     * @return InstanceTypeOptions 实例类型可选项
                     * 
                     */
                    std::vector<FieldOption> GetInstanceTypeOptions() const;

                    /**
                     * 判断参数 InstanceTypeOptions 是否已赋值
                     * @return InstanceTypeOptions 是否已赋值
                     * 
                     */
                    bool InstanceTypeOptionsHasBeenSet() const;

                private:

                    /**
                     * 符合查询条件的总条数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 查询结果列表
                     */
                    std::vector<NDRAssetServiceInfo> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 服务类型统计结果
                     */
                    std::vector<NDRAssetCategoryStats> m_assetCategoryStats;
                    bool m_assetCategoryStatsHasBeenSet;

                    /**
                     * 地域可选项
                     */
                    std::vector<FieldOption> m_regionOptions;
                    bool m_regionOptionsHasBeenSet;

                    /**
                     * IP版本可选项
                     */
                    std::vector<FieldOption> m_ipVersionOptions;
                    bool m_ipVersionOptionsHasBeenSet;

                    /**
                     * IP类型可选项
                     */
                    std::vector<FieldOption> m_ipTypeOptions;
                    bool m_ipTypeOptionsHasBeenSet;

                    /**
                     * 服务类型可选项
                     */
                    std::vector<FieldOption> m_assetCategoryOptions;
                    bool m_assetCategoryOptionsHasBeenSet;

                    /**
                     * 识别来源可选项
                     */
                    std::vector<FieldOption> m_identificationSourceOptions;
                    bool m_identificationSourceOptionsHasBeenSet;

                    /**
                     * 协议可选项
                     */
                    std::vector<FieldOption> m_protocolOptions;
                    bool m_protocolOptionsHasBeenSet;

                    /**
                     * 实例类型可选项
                     */
                    std::vector<FieldOption> m_instanceTypeOptions;
                    bool m_instanceTypeOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENDRASSETIDENTIFICATIONLISTRESPONSE_H_
