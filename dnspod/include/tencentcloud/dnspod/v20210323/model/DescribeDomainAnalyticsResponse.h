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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINANALYTICSRESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINANALYTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/DomainAnalyticsDetail.h>
#include <tencentcloud/dnspod/v20210323/model/DomainAnalyticsInfo.h>
#include <tencentcloud/dnspod/v20210323/model/DomainAliasAnalyticsItem.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeDomainAnalytics返回参数结构体
                */
                class DescribeDomainAnalyticsResponse : public AbstractModel
                {
                public:
                    DescribeDomainAnalyticsResponse();
                    ~DescribeDomainAnalyticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当前统计维度解析量小计
                     * @return Data 当前统计维度解析量小计
                     * 
                     */
                    std::vector<DomainAnalyticsDetail> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取域名解析量统计查询信息
                     * @return Info 域名解析量统计查询信息
                     * 
                     */
                    DomainAnalyticsInfo GetInfo() const;

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取域名别名解析量统计信息
                     * @return AliasData 域名别名解析量统计信息
                     * 
                     */
                    std::vector<DomainAliasAnalyticsItem> GetAliasData() const;

                    /**
                     * 判断参数 AliasData 是否已赋值
                     * @return AliasData 是否已赋值
                     * 
                     */
                    bool AliasDataHasBeenSet() const;

                private:

                    /**
                     * 当前统计维度解析量小计
                     */
                    std::vector<DomainAnalyticsDetail> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 域名解析量统计查询信息
                     */
                    DomainAnalyticsInfo m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * 域名别名解析量统计信息
                     */
                    std::vector<DomainAliasAnalyticsItem> m_aliasData;
                    bool m_aliasDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINANALYTICSRESPONSE_H_
