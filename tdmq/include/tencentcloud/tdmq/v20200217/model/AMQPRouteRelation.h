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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_AMQPROUTERELATION_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_AMQPROUTERELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * AMQP路由关系
                */
                class AMQPRouteRelation : public AbstractModel
                {
                public:
                    AMQPRouteRelation();
                    ~AMQPRouteRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取路由关系ID
                     * @return RouteRelationId 路由关系ID
                     * 
                     */
                    std::string GetRouteRelationId() const;

                    /**
                     * 设置路由关系ID
                     * @param _routeRelationId 路由关系ID
                     * 
                     */
                    void SetRouteRelationId(const std::string& _routeRelationId);

                    /**
                     * 判断参数 RouteRelationId 是否已赋值
                     * @return RouteRelationId 是否已赋值
                     * 
                     */
                    bool RouteRelationIdHasBeenSet() const;

                    /**
                     * 获取源Exchange
                     * @return SourceExchange 源Exchange
                     * 
                     */
                    std::string GetSourceExchange() const;

                    /**
                     * 设置源Exchange
                     * @param _sourceExchange 源Exchange
                     * 
                     */
                    void SetSourceExchange(const std::string& _sourceExchange);

                    /**
                     * 判断参数 SourceExchange 是否已赋值
                     * @return SourceExchange 是否已赋值
                     * 
                     */
                    bool SourceExchangeHasBeenSet() const;

                    /**
                     * 获取目标类型:Queue|Exchange
                     * @return DestType 目标类型:Queue|Exchange
                     * 
                     */
                    std::string GetDestType() const;

                    /**
                     * 设置目标类型:Queue|Exchange
                     * @param _destType 目标类型:Queue|Exchange
                     * 
                     */
                    void SetDestType(const std::string& _destType);

                    /**
                     * 判断参数 DestType 是否已赋值
                     * @return DestType 是否已赋值
                     * 
                     */
                    bool DestTypeHasBeenSet() const;

                    /**
                     * 获取目标值
                     * @return DestValue 目标值
                     * 
                     */
                    std::string GetDestValue() const;

                    /**
                     * 设置目标值
                     * @param _destValue 目标值
                     * 
                     */
                    void SetDestValue(const std::string& _destValue);

                    /**
                     * 判断参数 DestValue 是否已赋值
                     * @return DestValue 是否已赋值
                     * 
                     */
                    bool DestValueHasBeenSet() const;

                    /**
                     * 获取绑定key
                     * @return RoutingKey 绑定key
                     * 
                     */
                    std::string GetRoutingKey() const;

                    /**
                     * 设置绑定key
                     * @param _routingKey 绑定key
                     * 
                     */
                    void SetRoutingKey(const std::string& _routingKey);

                    /**
                     * 判断参数 RoutingKey 是否已赋值
                     * @return RoutingKey 是否已赋值
                     * 
                     */
                    bool RoutingKeyHasBeenSet() const;

                    /**
                     * 获取源路由类型:Direct|Topic|Fanout
                     * @return SourceExchangeType 源路由类型:Direct|Topic|Fanout
                     * 
                     */
                    std::string GetSourceExchangeType() const;

                    /**
                     * 设置源路由类型:Direct|Topic|Fanout
                     * @param _sourceExchangeType 源路由类型:Direct|Topic|Fanout
                     * 
                     */
                    void SetSourceExchangeType(const std::string& _sourceExchangeType);

                    /**
                     * 判断参数 SourceExchangeType 是否已赋值
                     * @return SourceExchangeType 是否已赋值
                     * 
                     */
                    bool SourceExchangeTypeHasBeenSet() const;

                    /**
                     * 获取创建时间，以毫秒为单位
                     * @return CreateTime 创建时间，以毫秒为单位
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，以毫秒为单位
                     * @param _createTime 创建时间，以毫秒为单位
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间，以毫秒为单位
                     * @return UpdateTime 修改时间，以毫秒为单位
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置修改时间，以毫秒为单位
                     * @param _updateTime 修改时间，以毫秒为单位
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取说明信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 说明信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 说明信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 路由关系ID
                     */
                    std::string m_routeRelationId;
                    bool m_routeRelationIdHasBeenSet;

                    /**
                     * 源Exchange
                     */
                    std::string m_sourceExchange;
                    bool m_sourceExchangeHasBeenSet;

                    /**
                     * 目标类型:Queue|Exchange
                     */
                    std::string m_destType;
                    bool m_destTypeHasBeenSet;

                    /**
                     * 目标值
                     */
                    std::string m_destValue;
                    bool m_destValueHasBeenSet;

                    /**
                     * 绑定key
                     */
                    std::string m_routingKey;
                    bool m_routingKeyHasBeenSet;

                    /**
                     * 源路由类型:Direct|Topic|Fanout
                     */
                    std::string m_sourceExchangeType;
                    bool m_sourceExchangeTypeHasBeenSet;

                    /**
                     * 创建时间，以毫秒为单位
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间，以毫秒为单位
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 说明信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_AMQPROUTERELATION_H_
