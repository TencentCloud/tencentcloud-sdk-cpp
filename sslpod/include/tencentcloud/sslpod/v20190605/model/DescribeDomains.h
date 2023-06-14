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

#ifndef TENCENTCLOUD_SSLPOD_V20190605_MODEL_DESCRIBEDOMAINS_H_
#define TENCENTCLOUD_SSLPOD_V20190605_MODEL_DESCRIBEDOMAINS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sslpod/v20190605/model/DomainSiteInfo.h>


namespace TencentCloud
{
    namespace Sslpod
    {
        namespace V20190605
        {
            namespace Model
            {
                /**
                * 监控域名列表
                */
                class DescribeDomains : public AbstractModel
                {
                public:
                    DescribeDomains();
                    ~DescribeDomains() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取列表数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 列表数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DomainSiteInfo> GetResult() const;

                    /**
                     * 设置列表数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _result 列表数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResult(const std::vector<DomainSiteInfo>& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取搜索出来的数量
                     * @return SearchTotal 搜索出来的数量
                     * 
                     */
                    int64_t GetSearchTotal() const;

                    /**
                     * 设置搜索出来的数量
                     * @param _searchTotal 搜索出来的数量
                     * 
                     */
                    void SetSearchTotal(const int64_t& _searchTotal);

                    /**
                     * 判断参数 SearchTotal 是否已赋值
                     * @return SearchTotal 是否已赋值
                     * 
                     */
                    bool SearchTotalHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return Total 总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置总数
                     * @param _total 总数
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取允许的监控数量
                     * @return AllowMonitoringCount 允许的监控数量
                     * 
                     */
                    int64_t GetAllowMonitoringCount() const;

                    /**
                     * 设置允许的监控数量
                     * @param _allowMonitoringCount 允许的监控数量
                     * 
                     */
                    void SetAllowMonitoringCount(const int64_t& _allowMonitoringCount);

                    /**
                     * 判断参数 AllowMonitoringCount 是否已赋值
                     * @return AllowMonitoringCount 是否已赋值
                     * 
                     */
                    bool AllowMonitoringCountHasBeenSet() const;

                    /**
                     * 获取当前监控的数量
                     * @return CurrentMonitoringCount 当前监控的数量
                     * 
                     */
                    int64_t GetCurrentMonitoringCount() const;

                    /**
                     * 设置当前监控的数量
                     * @param _currentMonitoringCount 当前监控的数量
                     * 
                     */
                    void SetCurrentMonitoringCount(const int64_t& _currentMonitoringCount);

                    /**
                     * 判断参数 CurrentMonitoringCount 是否已赋值
                     * @return CurrentMonitoringCount 是否已赋值
                     * 
                     */
                    bool CurrentMonitoringCountHasBeenSet() const;

                    /**
                     * 获取允许添加域名总数
                     * @return AllowMaxAddDomain 允许添加域名总数
                     * 
                     */
                    int64_t GetAllowMaxAddDomain() const;

                    /**
                     * 设置允许添加域名总数
                     * @param _allowMaxAddDomain 允许添加域名总数
                     * 
                     */
                    void SetAllowMaxAddDomain(const int64_t& _allowMaxAddDomain);

                    /**
                     * 判断参数 AllowMaxAddDomain 是否已赋值
                     * @return AllowMaxAddDomain 是否已赋值
                     * 
                     */
                    bool AllowMaxAddDomainHasBeenSet() const;

                private:

                    /**
                     * 列表数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DomainSiteInfo> m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 搜索出来的数量
                     */
                    int64_t m_searchTotal;
                    bool m_searchTotalHasBeenSet;

                    /**
                     * 总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 允许的监控数量
                     */
                    int64_t m_allowMonitoringCount;
                    bool m_allowMonitoringCountHasBeenSet;

                    /**
                     * 当前监控的数量
                     */
                    int64_t m_currentMonitoringCount;
                    bool m_currentMonitoringCountHasBeenSet;

                    /**
                     * 允许添加域名总数
                     */
                    int64_t m_allowMaxAddDomain;
                    bool m_allowMaxAddDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSLPOD_V20190605_MODEL_DESCRIBEDOMAINS_H_
