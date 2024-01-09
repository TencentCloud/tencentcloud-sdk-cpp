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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSUBSCRIBEOBJECTSREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSUBSCRIBEOBJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/ModifiedSubscribeObject.h>
#include <tencentcloud/dts/v20211206/model/DistributeRule.h>
#include <tencentcloud/dts/v20211206/model/PipelineInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * ModifySubscribeObjects请求参数结构体
                */
                class ModifySubscribeObjectsRequest : public AbstractModel
                {
                public:
                    ModifySubscribeObjectsRequest();
                    ~ModifySubscribeObjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据订阅实例的ID
                     * @return SubscribeId 数据订阅实例的ID
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置数据订阅实例的ID
                     * @param _subscribeId 数据订阅实例的ID
                     * 
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取数据订阅的类型，非mongo任务的枚举值：0-全实例更新；1-数据更新；2-结构更新；3-数据更新+结构更新。mongo任务的枚举值：0-全实例更新；4-订阅单库；5-订阅单集合
                     * @return SubscribeObjectType 数据订阅的类型，非mongo任务的枚举值：0-全实例更新；1-数据更新；2-结构更新；3-数据更新+结构更新。mongo任务的枚举值：0-全实例更新；4-订阅单库；5-订阅单集合
                     * 
                     */
                    int64_t GetSubscribeObjectType() const;

                    /**
                     * 设置数据订阅的类型，非mongo任务的枚举值：0-全实例更新；1-数据更新；2-结构更新；3-数据更新+结构更新。mongo任务的枚举值：0-全实例更新；4-订阅单库；5-订阅单集合
                     * @param _subscribeObjectType 数据订阅的类型，非mongo任务的枚举值：0-全实例更新；1-数据更新；2-结构更新；3-数据更新+结构更新。mongo任务的枚举值：0-全实例更新；4-订阅单库；5-订阅单集合
                     * 
                     */
                    void SetSubscribeObjectType(const int64_t& _subscribeObjectType);

                    /**
                     * 判断参数 SubscribeObjectType 是否已赋值
                     * @return SubscribeObjectType 是否已赋值
                     * 
                     */
                    bool SubscribeObjectTypeHasBeenSet() const;

                    /**
                     * 获取修改后的订阅数据库表信息。会覆盖原来的订阅对象，所以除非 SubscribeObjectType = 0或2，否则改字段必填。
                     * @return Objects 修改后的订阅数据库表信息。会覆盖原来的订阅对象，所以除非 SubscribeObjectType = 0或2，否则改字段必填。
                     * 
                     */
                    std::vector<ModifiedSubscribeObject> GetObjects() const;

                    /**
                     * 设置修改后的订阅数据库表信息。会覆盖原来的订阅对象，所以除非 SubscribeObjectType = 0或2，否则改字段必填。
                     * @param _objects 修改后的订阅数据库表信息。会覆盖原来的订阅对象，所以除非 SubscribeObjectType = 0或2，否则改字段必填。
                     * 
                     */
                    void SetObjects(const std::vector<ModifiedSubscribeObject>& _objects);

                    /**
                     * 判断参数 Objects 是否已赋值
                     * @return Objects 是否已赋值
                     * 
                     */
                    bool ObjectsHasBeenSet() const;

                    /**
                     * 获取kafka分区策略。如果不填，默认不修改。如果填了，会覆盖原来的策略。
                     * @return DistributeRules kafka分区策略。如果不填，默认不修改。如果填了，会覆盖原来的策略。
                     * 
                     */
                    std::vector<DistributeRule> GetDistributeRules() const;

                    /**
                     * 设置kafka分区策略。如果不填，默认不修改。如果填了，会覆盖原来的策略。
                     * @param _distributeRules kafka分区策略。如果不填，默认不修改。如果填了，会覆盖原来的策略。
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
                     * 获取默认分区策略。不满足DistributeRules中正则表达式的数据，将按照默认分区策略计算分区。
非mongo产品支持的默认策略: table-按表名分区，pk-按表名+主键分区。mongo的默认策略仅支持：collection-按集合名分区。
该字段与DistributeRules搭配使用。如果配置了DistributeRules，该字段也必填。如果配置了该字段，视为配置了一条DistributeRules，原来的分区策略也会被覆盖。
                     * @return DefaultRuleType 默认分区策略。不满足DistributeRules中正则表达式的数据，将按照默认分区策略计算分区。
非mongo产品支持的默认策略: table-按表名分区，pk-按表名+主键分区。mongo的默认策略仅支持：collection-按集合名分区。
该字段与DistributeRules搭配使用。如果配置了DistributeRules，该字段也必填。如果配置了该字段，视为配置了一条DistributeRules，原来的分区策略也会被覆盖。
                     * 
                     */
                    std::string GetDefaultRuleType() const;

                    /**
                     * 设置默认分区策略。不满足DistributeRules中正则表达式的数据，将按照默认分区策略计算分区。
非mongo产品支持的默认策略: table-按表名分区，pk-按表名+主键分区。mongo的默认策略仅支持：collection-按集合名分区。
该字段与DistributeRules搭配使用。如果配置了DistributeRules，该字段也必填。如果配置了该字段，视为配置了一条DistributeRules，原来的分区策略也会被覆盖。
                     * @param _defaultRuleType 默认分区策略。不满足DistributeRules中正则表达式的数据，将按照默认分区策略计算分区。
非mongo产品支持的默认策略: table-按表名分区，pk-按表名+主键分区。mongo的默认策略仅支持：collection-按集合名分区。
该字段与DistributeRules搭配使用。如果配置了DistributeRules，该字段也必填。如果配置了该字段，视为配置了一条DistributeRules，原来的分区策略也会被覆盖。
                     * 
                     */
                    void SetDefaultRuleType(const std::string& _defaultRuleType);

                    /**
                     * 判断参数 DefaultRuleType 是否已赋值
                     * @return DefaultRuleType 是否已赋值
                     * 
                     */
                    bool DefaultRuleTypeHasBeenSet() const;

                    /**
                     * 获取mongo输出聚合设置，mongo任务可选。如果不填，默认不修改。
                     * @return PipelineInfo mongo输出聚合设置，mongo任务可选。如果不填，默认不修改。
                     * 
                     */
                    std::vector<PipelineInfo> GetPipelineInfo() const;

                    /**
                     * 设置mongo输出聚合设置，mongo任务可选。如果不填，默认不修改。
                     * @param _pipelineInfo mongo输出聚合设置，mongo任务可选。如果不填，默认不修改。
                     * 
                     */
                    void SetPipelineInfo(const std::vector<PipelineInfo>& _pipelineInfo);

                    /**
                     * 判断参数 PipelineInfo 是否已赋值
                     * @return PipelineInfo 是否已赋值
                     * 
                     */
                    bool PipelineInfoHasBeenSet() const;

                private:

                    /**
                     * 数据订阅实例的ID
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * 数据订阅的类型，非mongo任务的枚举值：0-全实例更新；1-数据更新；2-结构更新；3-数据更新+结构更新。mongo任务的枚举值：0-全实例更新；4-订阅单库；5-订阅单集合
                     */
                    int64_t m_subscribeObjectType;
                    bool m_subscribeObjectTypeHasBeenSet;

                    /**
                     * 修改后的订阅数据库表信息。会覆盖原来的订阅对象，所以除非 SubscribeObjectType = 0或2，否则改字段必填。
                     */
                    std::vector<ModifiedSubscribeObject> m_objects;
                    bool m_objectsHasBeenSet;

                    /**
                     * kafka分区策略。如果不填，默认不修改。如果填了，会覆盖原来的策略。
                     */
                    std::vector<DistributeRule> m_distributeRules;
                    bool m_distributeRulesHasBeenSet;

                    /**
                     * 默认分区策略。不满足DistributeRules中正则表达式的数据，将按照默认分区策略计算分区。
非mongo产品支持的默认策略: table-按表名分区，pk-按表名+主键分区。mongo的默认策略仅支持：collection-按集合名分区。
该字段与DistributeRules搭配使用。如果配置了DistributeRules，该字段也必填。如果配置了该字段，视为配置了一条DistributeRules，原来的分区策略也会被覆盖。
                     */
                    std::string m_defaultRuleType;
                    bool m_defaultRuleTypeHasBeenSet;

                    /**
                     * mongo输出聚合设置，mongo任务可选。如果不填，默认不修改。
                     */
                    std::vector<PipelineInfo> m_pipelineInfo;
                    bool m_pipelineInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSUBSCRIBEOBJECTSREQUEST_H_
