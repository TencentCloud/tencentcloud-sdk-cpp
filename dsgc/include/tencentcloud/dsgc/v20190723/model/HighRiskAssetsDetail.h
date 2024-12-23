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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_HIGHRISKASSETSDETAIL_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_HIGHRISKASSETSDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 高风险资产详情信息
                */
                class HighRiskAssetsDetail : public AbstractModel
                {
                public:
                    HighRiskAssetsDetail();
                    ~HighRiskAssetsDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取数据源类型
                     * @return DataSourceType 数据源类型
                     * 
                     */
                    std::string GetDataSourceType() const;

                    /**
                     * 设置数据源类型
                     * @param _dataSourceType 数据源类型
                     * 
                     */
                    void SetDataSourceType(const std::string& _dataSourceType);

                    /**
                     * 判断参数 DataSourceType 是否已赋值
                     * @return DataSourceType 是否已赋值
                     * 
                     */
                    bool DataSourceTypeHasBeenSet() const;

                    /**
                     * 获取数据源名称
                     * @return DataSourceName 数据源名称
                     * 
                     */
                    std::string GetDataSourceName() const;

                    /**
                     * 设置数据源名称
                     * @param _dataSourceName 数据源名称
                     * 
                     */
                    void SetDataSourceName(const std::string& _dataSourceName);

                    /**
                     * 判断参数 DataSourceName 是否已赋值
                     * @return DataSourceName 是否已赋值
                     * 
                     */
                    bool DataSourceNameHasBeenSet() const;

                    /**
                     * 获取资产对象名称
                     * @return AssetsName 资产对象名称
                     * 
                     */
                    std::string GetAssetsName() const;

                    /**
                     * 设置资产对象名称
                     * @param _assetsName 资产对象名称
                     * 
                     */
                    void SetAssetsName(const std::string& _assetsName);

                    /**
                     * 判断参数 AssetsName 是否已赋值
                     * @return AssetsName 是否已赋值
                     * 
                     */
                    bool AssetsNameHasBeenSet() const;

                    /**
                     * 获取高风险个数
                     * @return HighRiskCount 高风险个数
                     * 
                     */
                    int64_t GetHighRiskCount() const;

                    /**
                     * 设置高风险个数
                     * @param _highRiskCount 高风险个数
                     * 
                     */
                    void SetHighRiskCount(const int64_t& _highRiskCount);

                    /**
                     * 判断参数 HighRiskCount 是否已赋值
                     * @return HighRiskCount 是否已赋值
                     * 
                     */
                    bool HighRiskCountHasBeenSet() const;

                    /**
                     * 获取风险类型
                     * @return RiskType 风险类型
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置风险类型
                     * @param _riskType 风险类型
                     * 
                     */
                    void SetRiskType(const std::string& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取总的风险个数
                     * @return TotalRiskCount 总的风险个数
                     * 
                     */
                    int64_t GetTotalRiskCount() const;

                    /**
                     * 设置总的风险个数
                     * @param _totalRiskCount 总的风险个数
                     * 
                     */
                    void SetTotalRiskCount(const int64_t& _totalRiskCount);

                    /**
                     * 判断参数 TotalRiskCount 是否已赋值
                     * @return TotalRiskCount 是否已赋值
                     * 
                     */
                    bool TotalRiskCountHasBeenSet() const;

                    /**
                     * 获取风险面
                     * @return RiskSide 风险面
                     * 
                     */
                    std::string GetRiskSide() const;

                    /**
                     * 设置风险面
                     * @param _riskSide 风险面
                     * 
                     */
                    void SetRiskSide(const std::string& _riskSide);

                    /**
                     * 判断参数 RiskSide 是否已赋值
                     * @return RiskSide 是否已赋值
                     * 
                     */
                    bool RiskSideHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return ResourceRegion 地域
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置地域
                     * @param _resourceRegion 地域
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据源类型
                     */
                    std::string m_dataSourceType;
                    bool m_dataSourceTypeHasBeenSet;

                    /**
                     * 数据源名称
                     */
                    std::string m_dataSourceName;
                    bool m_dataSourceNameHasBeenSet;

                    /**
                     * 资产对象名称
                     */
                    std::string m_assetsName;
                    bool m_assetsNameHasBeenSet;

                    /**
                     * 高风险个数
                     */
                    int64_t m_highRiskCount;
                    bool m_highRiskCountHasBeenSet;

                    /**
                     * 风险类型
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * 总的风险个数
                     */
                    int64_t m_totalRiskCount;
                    bool m_totalRiskCountHasBeenSet;

                    /**
                     * 风险面
                     */
                    std::string m_riskSide;
                    bool m_riskSideHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_HIGHRISKASSETSDETAIL_H_
