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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_SUBSCRIBEKAFKACONFIG_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_SUBSCRIBEKAFKACONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/DistributeRule.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 订阅的kafka分区数和分区规则。mariadb，percona，tdsqlmysql，tdpg不支持自定义分区，所以DistributeRules和DefaultRuleType可以不填，但是NumberOfPartitions是必填。
                */
                class SubscribeKafkaConfig : public AbstractModel
                {
                public:
                    SubscribeKafkaConfig();
                    ~SubscribeKafkaConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取kafka分区数量，枚举值为1，4，8
                     * @return NumberOfPartitions kafka分区数量，枚举值为1，4，8
                     * 
                     */
                    uint64_t GetNumberOfPartitions() const;

                    /**
                     * 设置kafka分区数量，枚举值为1，4，8
                     * @param _numberOfPartitions kafka分区数量，枚举值为1，4，8
                     * 
                     */
                    void SetNumberOfPartitions(const uint64_t& _numberOfPartitions);

                    /**
                     * 判断参数 NumberOfPartitions 是否已赋值
                     * @return NumberOfPartitions 是否已赋值
                     * 
                     */
                    bool NumberOfPartitionsHasBeenSet() const;

                    /**
                     * 获取分区规则。当NumberOfPartitions > 1时，该项必填。
                     * @return DistributeRules 分区规则。当NumberOfPartitions > 1时，该项必填。
                     * 
                     */
                    std::vector<DistributeRule> GetDistributeRules() const;

                    /**
                     * 设置分区规则。当NumberOfPartitions > 1时，该项必填。
                     * @param _distributeRules 分区规则。当NumberOfPartitions > 1时，该项必填。
                     * 
                     */
                    void SetDistributeRules(const std::vector<DistributeRule>& _distributeRules);

                    /**
                     * 判断参数 DistributeRules 是否已赋值
                     * @return DistributeRules 是否已赋值
                     * 
                     */
                    bool DistributeRulesHasBeenSet() const;

                    /**
                     * 获取默认分区策略。当NumberOfPartitions > 1时，该项必填。不满足DistributeRules中正则表达式的数据，将按照默认分区策略计算分区。
非mongo产品的枚举值为: table-按表名分区，pk-按表名+主键分区。mongo的枚举值为：collection-按集合名分区。
该字段与DistributeRules搭配使用，如果配置了该字段，视为配置了一条DistributeRules。
                     * @return DefaultRuleType 默认分区策略。当NumberOfPartitions > 1时，该项必填。不满足DistributeRules中正则表达式的数据，将按照默认分区策略计算分区。
非mongo产品的枚举值为: table-按表名分区，pk-按表名+主键分区。mongo的枚举值为：collection-按集合名分区。
该字段与DistributeRules搭配使用，如果配置了该字段，视为配置了一条DistributeRules。
                     * 
                     */
                    std::string GetDefaultRuleType() const;

                    /**
                     * 设置默认分区策略。当NumberOfPartitions > 1时，该项必填。不满足DistributeRules中正则表达式的数据，将按照默认分区策略计算分区。
非mongo产品的枚举值为: table-按表名分区，pk-按表名+主键分区。mongo的枚举值为：collection-按集合名分区。
该字段与DistributeRules搭配使用，如果配置了该字段，视为配置了一条DistributeRules。
                     * @param _defaultRuleType 默认分区策略。当NumberOfPartitions > 1时，该项必填。不满足DistributeRules中正则表达式的数据，将按照默认分区策略计算分区。
非mongo产品的枚举值为: table-按表名分区，pk-按表名+主键分区。mongo的枚举值为：collection-按集合名分区。
该字段与DistributeRules搭配使用，如果配置了该字段，视为配置了一条DistributeRules。
                     * 
                     */
                    void SetDefaultRuleType(const std::string& _defaultRuleType);

                    /**
                     * 判断参数 DefaultRuleType 是否已赋值
                     * @return DefaultRuleType 是否已赋值
                     * 
                     */
                    bool DefaultRuleTypeHasBeenSet() const;

                private:

                    /**
                     * kafka分区数量，枚举值为1，4，8
                     */
                    uint64_t m_numberOfPartitions;
                    bool m_numberOfPartitionsHasBeenSet;

                    /**
                     * 分区规则。当NumberOfPartitions > 1时，该项必填。
                     */
                    std::vector<DistributeRule> m_distributeRules;
                    bool m_distributeRulesHasBeenSet;

                    /**
                     * 默认分区策略。当NumberOfPartitions > 1时，该项必填。不满足DistributeRules中正则表达式的数据，将按照默认分区策略计算分区。
非mongo产品的枚举值为: table-按表名分区，pk-按表名+主键分区。mongo的枚举值为：collection-按集合名分区。
该字段与DistributeRules搭配使用，如果配置了该字段，视为配置了一条DistributeRules。
                     */
                    std::string m_defaultRuleType;
                    bool m_defaultRuleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_SUBSCRIBEKAFKACONFIG_H_
