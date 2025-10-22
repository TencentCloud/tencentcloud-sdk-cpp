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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BASICBOTSETTINGS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BASICBOTSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SourceIDC.h>
#include <tencentcloud/teo/v20220901/model/SearchEngineBots.h>
#include <tencentcloud/teo/v20220901/model/KnownBotCategories.h>
#include <tencentcloud/teo/v20220901/model/IPReputation.h>
#include <tencentcloud/teo/v20220901/model/BotIntelligence.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Bot 管理的基础配置，对策略关联的所有域名生效。可以通过 CustomRules 进行精细化定制。
                */
                class BasicBotSettings : public AbstractModel
                {
                public:
                    BasicBotSettings();
                    ~BasicBotSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端 IP 的来源 IDC 配置，用于处置来自 IDC（数据中心） 的客户端 IP 的访问请求。此类来源请求不是由移动端或浏览器端直接访问。
                     * @return SourceIDC 客户端 IP 的来源 IDC 配置，用于处置来自 IDC（数据中心） 的客户端 IP 的访问请求。此类来源请求不是由移动端或浏览器端直接访问。
                     * 
                     */
                    SourceIDC GetSourceIDC() const;

                    /**
                     * 设置客户端 IP 的来源 IDC 配置，用于处置来自 IDC（数据中心） 的客户端 IP 的访问请求。此类来源请求不是由移动端或浏览器端直接访问。
                     * @param _sourceIDC 客户端 IP 的来源 IDC 配置，用于处置来自 IDC（数据中心） 的客户端 IP 的访问请求。此类来源请求不是由移动端或浏览器端直接访问。
                     * 
                     */
                    void SetSourceIDC(const SourceIDC& _sourceIDC);

                    /**
                     * 判断参数 SourceIDC 是否已赋值
                     * @return SourceIDC 是否已赋值
                     * 
                     */
                    bool SourceIDCHasBeenSet() const;

                    /**
                     * 获取搜索引擎爬虫配置，用于处置来自搜索引擎爬虫的请求。此类请求的 IP、User-Agent 或 rDNS 结果匹配已知搜索引擎爬虫。
                     * @return SearchEngineBots 搜索引擎爬虫配置，用于处置来自搜索引擎爬虫的请求。此类请求的 IP、User-Agent 或 rDNS 结果匹配已知搜索引擎爬虫。
                     * 
                     */
                    SearchEngineBots GetSearchEngineBots() const;

                    /**
                     * 设置搜索引擎爬虫配置，用于处置来自搜索引擎爬虫的请求。此类请求的 IP、User-Agent 或 rDNS 结果匹配已知搜索引擎爬虫。
                     * @param _searchEngineBots 搜索引擎爬虫配置，用于处置来自搜索引擎爬虫的请求。此类请求的 IP、User-Agent 或 rDNS 结果匹配已知搜索引擎爬虫。
                     * 
                     */
                    void SetSearchEngineBots(const SearchEngineBots& _searchEngineBots);

                    /**
                     * 判断参数 SearchEngineBots 是否已赋值
                     * @return SearchEngineBots 是否已赋值
                     * 
                     */
                    bool SearchEngineBotsHasBeenSet() const;

                    /**
                     * 获取商业或开源工具 UA 特征配置（原 UA 特征规则），用于处置来自已知商业工具或开源工具的访问请求。此类请求的 User-Agent 头部符合已知商业或开源工具特征。
                     * @return KnownBotCategories 商业或开源工具 UA 特征配置（原 UA 特征规则），用于处置来自已知商业工具或开源工具的访问请求。此类请求的 User-Agent 头部符合已知商业或开源工具特征。
                     * 
                     */
                    KnownBotCategories GetKnownBotCategories() const;

                    /**
                     * 设置商业或开源工具 UA 特征配置（原 UA 特征规则），用于处置来自已知商业工具或开源工具的访问请求。此类请求的 User-Agent 头部符合已知商业或开源工具特征。
                     * @param _knownBotCategories 商业或开源工具 UA 特征配置（原 UA 特征规则），用于处置来自已知商业工具或开源工具的访问请求。此类请求的 User-Agent 头部符合已知商业或开源工具特征。
                     * 
                     */
                    void SetKnownBotCategories(const KnownBotCategories& _knownBotCategories);

                    /**
                     * 判断参数 KnownBotCategories 是否已赋值
                     * @return KnownBotCategories 是否已赋值
                     * 
                     */
                    bool KnownBotCategoriesHasBeenSet() const;

                    /**
                     * 获取IP 威胁情报库（原客户端画像分析）配置，用于处置近期访问行为具有特定风险特征的客户端 IP。
                     * @return IPReputation IP 威胁情报库（原客户端画像分析）配置，用于处置近期访问行为具有特定风险特征的客户端 IP。
                     * 
                     */
                    IPReputation GetIPReputation() const;

                    /**
                     * 设置IP 威胁情报库（原客户端画像分析）配置，用于处置近期访问行为具有特定风险特征的客户端 IP。
                     * @param _iPReputation IP 威胁情报库（原客户端画像分析）配置，用于处置近期访问行为具有特定风险特征的客户端 IP。
                     * 
                     */
                    void SetIPReputation(const IPReputation& _iPReputation);

                    /**
                     * 判断参数 IPReputation 是否已赋值
                     * @return IPReputation 是否已赋值
                     * 
                     */
                    bool IPReputationHasBeenSet() const;

                    /**
                     * 获取Bot 智能分析的具体配置。
                     * @return BotIntelligence Bot 智能分析的具体配置。
                     * 
                     */
                    BotIntelligence GetBotIntelligence() const;

                    /**
                     * 设置Bot 智能分析的具体配置。
                     * @param _botIntelligence Bot 智能分析的具体配置。
                     * 
                     */
                    void SetBotIntelligence(const BotIntelligence& _botIntelligence);

                    /**
                     * 判断参数 BotIntelligence 是否已赋值
                     * @return BotIntelligence 是否已赋值
                     * 
                     */
                    bool BotIntelligenceHasBeenSet() const;

                private:

                    /**
                     * 客户端 IP 的来源 IDC 配置，用于处置来自 IDC（数据中心） 的客户端 IP 的访问请求。此类来源请求不是由移动端或浏览器端直接访问。
                     */
                    SourceIDC m_sourceIDC;
                    bool m_sourceIDCHasBeenSet;

                    /**
                     * 搜索引擎爬虫配置，用于处置来自搜索引擎爬虫的请求。此类请求的 IP、User-Agent 或 rDNS 结果匹配已知搜索引擎爬虫。
                     */
                    SearchEngineBots m_searchEngineBots;
                    bool m_searchEngineBotsHasBeenSet;

                    /**
                     * 商业或开源工具 UA 特征配置（原 UA 特征规则），用于处置来自已知商业工具或开源工具的访问请求。此类请求的 User-Agent 头部符合已知商业或开源工具特征。
                     */
                    KnownBotCategories m_knownBotCategories;
                    bool m_knownBotCategoriesHasBeenSet;

                    /**
                     * IP 威胁情报库（原客户端画像分析）配置，用于处置近期访问行为具有特定风险特征的客户端 IP。
                     */
                    IPReputation m_iPReputation;
                    bool m_iPReputationHasBeenSet;

                    /**
                     * Bot 智能分析的具体配置。
                     */
                    BotIntelligence m_botIntelligence;
                    bool m_botIntelligenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BASICBOTSETTINGS_H_
