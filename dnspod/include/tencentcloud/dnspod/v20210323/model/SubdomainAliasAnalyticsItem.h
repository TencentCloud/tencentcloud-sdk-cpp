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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_SUBDOMAINALIASANALYTICSITEM_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_SUBDOMAINALIASANALYTICSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/SubdomainAnalyticsInfo.h>
#include <tencentcloud/dnspod/v20210323/model/DomainAnalyticsDetail.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 子域名别名解析量统计信息
                */
                class SubdomainAliasAnalyticsItem : public AbstractModel
                {
                public:
                    SubdomainAliasAnalyticsItem();
                    ~SubdomainAliasAnalyticsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子域名解析量统计查询信息
                     * @return Info 子域名解析量统计查询信息
                     * 
                     */
                    SubdomainAnalyticsInfo GetInfo() const;

                    /**
                     * 设置子域名解析量统计查询信息
                     * @param _info 子域名解析量统计查询信息
                     * 
                     */
                    void SetInfo(const SubdomainAnalyticsInfo& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取当前统计维度解析量小计
                     * @return Data 当前统计维度解析量小计
                     * 
                     */
                    std::vector<DomainAnalyticsDetail> GetData() const;

                    /**
                     * 设置当前统计维度解析量小计
                     * @param _data 当前统计维度解析量小计
                     * 
                     */
                    void SetData(const std::vector<DomainAnalyticsDetail>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 子域名解析量统计查询信息
                     */
                    SubdomainAnalyticsInfo m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * 当前统计维度解析量小计
                     */
                    std::vector<DomainAnalyticsDetail> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_SUBDOMAINALIASANALYTICSITEM_H_
