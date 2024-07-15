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

#ifndef TENCENTCLOUD_CDZ_V20221123_MODEL_CLOUDDEDICATEDZONERESOURCESUMMARYINFO_H_
#define TENCENTCLOUD_CDZ_V20221123_MODEL_CLOUDDEDICATEDZONERESOURCESUMMARYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdz/v20221123/model/CloudDedicatedZoneResourceStatisticsInfo.h>


namespace TencentCloud
{
    namespace Cdz
    {
        namespace V20221123
        {
            namespace Model
            {
                /**
                * 专属可用区资源水位数据详情，对应一个具体的垂直产品。
                */
                class CloudDedicatedZoneResourceSummaryInfo : public AbstractModel
                {
                public:
                    CloudDedicatedZoneResourceSummaryInfo();
                    ~CloudDedicatedZoneResourceSummaryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品名称
                     * @return ProductName 产品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
                     * @param _productName 产品名称
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取子产品名称
                     * @return SubProductName 子产品名称
                     * 
                     */
                    std::string GetSubProductName() const;

                    /**
                     * 设置子产品名称
                     * @param _subProductName 子产品名称
                     * 
                     */
                    void SetSubProductName(const std::string& _subProductName);

                    /**
                     * 判断参数 SubProductName 是否已赋值
                     * @return SubProductName 是否已赋值
                     * 
                     */
                    bool SubProductNameHasBeenSet() const;

                    /**
                     * 获取资源统计详情
                     * @return Statistics 资源统计详情
                     * 
                     */
                    std::vector<CloudDedicatedZoneResourceStatisticsInfo> GetStatistics() const;

                    /**
                     * 设置资源统计详情
                     * @param _statistics 资源统计详情
                     * 
                     */
                    void SetStatistics(const std::vector<CloudDedicatedZoneResourceStatisticsInfo>& _statistics);

                    /**
                     * 判断参数 Statistics 是否已赋值
                     * @return Statistics 是否已赋值
                     * 
                     */
                    bool StatisticsHasBeenSet() const;

                private:

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 子产品名称
                     */
                    std::string m_subProductName;
                    bool m_subProductNameHasBeenSet;

                    /**
                     * 资源统计详情
                     */
                    std::vector<CloudDedicatedZoneResourceStatisticsInfo> m_statistics;
                    bool m_statisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDZ_V20221123_MODEL_CLOUDDEDICATEDZONERESOURCESUMMARYINFO_H_
