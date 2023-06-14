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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCACITEM_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCACITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/BetaInfoByACL.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 访问控制列表对象
                */
                class DescAcItem : public AbstractModel
                {
                public:
                    DescAcItem();
                    ~DescAcItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceContent 访问源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置访问源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceContent 访问源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceContent(const std::string& _sourceContent);

                    /**
                     * 判断参数 SourceContent 是否已赋值
                     * @return SourceContent 是否已赋值
                     * 
                     */
                    bool SourceContentHasBeenSet() const;

                    /**
                     * 获取访问目的
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetContent 访问目的
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetContent() const;

                    /**
                     * 设置访问目的
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetContent 访问目的
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetContent(const std::string& _targetContent);

                    /**
                     * 判断参数 TargetContent 是否已赋值
                     * @return TargetContent 是否已赋值
                     * 
                     */
                    bool TargetContentHasBeenSet() const;

                    /**
                     * 获取协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol 协议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocol 协议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port 端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取访问控制策略中设置的流量通过云防火墙的方式。取值： accept：放行 drop：拒绝 log：观察
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleAction 访问控制策略中设置的流量通过云防火墙的方式。取值： accept：放行 drop：拒绝 log：观察
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置访问控制策略中设置的流量通过云防火墙的方式。取值： accept：放行 drop：拒绝 log：观察
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleAction 访问控制策略中设置的流量通过云防火墙的方式。取值： accept：放行 drop：拒绝 log：观察
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleAction(const std::string& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取命中次数
                     * @return Count 命中次数
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置命中次数
                     * @param _count 命中次数
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取执行顺序
                     * @return OrderIndex 执行顺序
                     * 
                     */
                    uint64_t GetOrderIndex() const;

                    /**
                     * 设置执行顺序
                     * @param _orderIndex 执行顺序
                     * 
                     */
                    void SetOrderIndex(const uint64_t& _orderIndex);

                    /**
                     * 判断参数 OrderIndex 是否已赋值
                     * @return OrderIndex 是否已赋值
                     * 
                     */
                    bool OrderIndexHasBeenSet() const;

                    /**
                     * 获取访问源类型：入向规则时类型可以为 ip,net,template,location；出向规则时可以为 ip,net,template,instance,group,tag
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceType 访问源类型：入向规则时类型可以为 ip,net,template,location；出向规则时可以为 ip,net,template,instance,group,tag
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置访问源类型：入向规则时类型可以为 ip,net,template,location；出向规则时可以为 ip,net,template,instance,group,tag
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceType 访问源类型：入向规则时类型可以为 ip,net,template,location；出向规则时可以为 ip,net,template,instance,group,tag
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取访问目的类型：入向规则时类型可以为ip,net,template,instance,group,tag；出向规则时可以为 ip,net,domain,template,location
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetType 访问目的类型：入向规则时类型可以为ip,net,template,instance,group,tag；出向规则时可以为 ip,net,domain,template,location
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置访问目的类型：入向规则时类型可以为ip,net,template,instance,group,tag；出向规则时可以为 ip,net,domain,template,location
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetType 访问目的类型：入向规则时类型可以为ip,net,template,instance,group,tag；出向规则时可以为 ip,net,domain,template,location
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取规则对应的唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uuid 规则对应的唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUuid() const;

                    /**
                     * 设置规则对应的唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uuid 规则对应的唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUuid(const uint64_t& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取规则有效性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Invalid 规则有效性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInvalid() const;

                    /**
                     * 设置规则有效性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _invalid 规则有效性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInvalid(const uint64_t& _invalid);

                    /**
                     * 判断参数 Invalid 是否已赋值
                     * @return Invalid 是否已赋值
                     * 
                     */
                    bool InvalidHasBeenSet() const;

                    /**
                     * 获取0为正常规则,1为地域规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsRegion 0为正常规则,1为地域规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsRegion() const;

                    /**
                     * 设置0为正常规则,1为地域规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isRegion 0为正常规则,1为地域规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsRegion(const uint64_t& _isRegion);

                    /**
                     * 判断参数 IsRegion 是否已赋值
                     * @return IsRegion 是否已赋值
                     * 
                     */
                    bool IsRegionHasBeenSet() const;

                    /**
                     * 获取国家id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CountryCode 国家id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCountryCode() const;

                    /**
                     * 设置国家id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _countryCode 国家id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCountryCode(const uint64_t& _countryCode);

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     * 
                     */
                    bool CountryCodeHasBeenSet() const;

                    /**
                     * 获取城市id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CityCode 城市id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCityCode() const;

                    /**
                     * 设置城市id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cityCode 城市id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCityCode(const uint64_t& _cityCode);

                    /**
                     * 判断参数 CityCode 是否已赋值
                     * @return CityCode 是否已赋值
                     * 
                     */
                    bool CityCodeHasBeenSet() const;

                    /**
                     * 获取国家名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CountryName 国家名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCountryName() const;

                    /**
                     * 设置国家名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _countryName 国家名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCountryName(const std::string& _countryName);

                    /**
                     * 判断参数 CountryName 是否已赋值
                     * @return CountryName 是否已赋值
                     * 
                     */
                    bool CountryNameHasBeenSet() const;

                    /**
                     * 获取省名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CityName 省名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCityName() const;

                    /**
                     * 设置省名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cityName 省名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCityName(const std::string& _cityName);

                    /**
                     * 判断参数 CityName 是否已赋值
                     * @return CityName 是否已赋值
                     * 
                     */
                    bool CityNameHasBeenSet() const;

                    /**
                     * 获取云厂商code
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CloudCode 云厂商code
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCloudCode() const;

                    /**
                     * 设置云厂商code
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cloudCode 云厂商code
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCloudCode(const std::string& _cloudCode);

                    /**
                     * 判断参数 CloudCode 是否已赋值
                     * @return CloudCode 是否已赋值
                     * 
                     */
                    bool CloudCodeHasBeenSet() const;

                    /**
                     * 获取0为正常规则,1为云厂商规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsCloud 0为正常规则,1为云厂商规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsCloud() const;

                    /**
                     * 设置0为正常规则,1为云厂商规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isCloud 0为正常规则,1为云厂商规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsCloud(const uint64_t& _isCloud);

                    /**
                     * 判断参数 IsCloud 是否已赋值
                     * @return IsCloud 是否已赋值
                     * 
                     */
                    bool IsCloudHasBeenSet() const;

                    /**
                     * 获取规则状态，true表示启用，false表示禁用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enable 规则状态，true表示启用，false表示禁用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置规则状态，true表示启用，false表示禁用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enable 规则状态，true表示启用，false表示禁用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnable(const std::string& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取规则方向：1，入向；0，出向
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Direction 规则方向：1，入向；0，出向
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置规则方向：1，入向；0，出向
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _direction 规则方向：1，入向；0，出向
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取内部使用的uuid，一般情况下不会使用到该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InternalUuid 内部使用的uuid，一般情况下不会使用到该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInternalUuid() const;

                    /**
                     * 设置内部使用的uuid，一般情况下不会使用到该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _internalUuid 内部使用的uuid，一般情况下不会使用到该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInternalUuid(const int64_t& _internalUuid);

                    /**
                     * 判断参数 InternalUuid 是否已赋值
                     * @return InternalUuid 是否已赋值
                     * 
                     */
                    bool InternalUuidHasBeenSet() const;

                    /**
                     * 获取规则状态，查询规则命中详情时该字段有效，0：新增，1: 已删除, 2: 编辑删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 规则状态，查询规则命中详情时该字段有效，0：新增，1: 已删除, 2: 编辑删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置规则状态，查询规则命中详情时该字段有效，0：新增，1: 已删除, 2: 编辑删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 规则状态，查询规则命中详情时该字段有效，0：新增，1: 已删除, 2: 编辑删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取关联任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BetaList 关联任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BetaInfoByACL> GetBetaList() const;

                    /**
                     * 设置关联任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _betaList 关联任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBetaList(const std::vector<BetaInfoByACL>& _betaList);

                    /**
                     * 判断参数 BetaList 是否已赋值
                     * @return BetaList 是否已赋值
                     * 
                     */
                    bool BetaListHasBeenSet() const;

                private:

                    /**
                     * 访问源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * 访问目的
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetContent;
                    bool m_targetContentHasBeenSet;

                    /**
                     * 协议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 访问控制策略中设置的流量通过云防火墙的方式。取值： accept：放行 drop：拒绝 log：观察
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 命中次数
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 执行顺序
                     */
                    uint64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * 访问源类型：入向规则时类型可以为 ip,net,template,location；出向规则时可以为 ip,net,template,instance,group,tag
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 访问目的类型：入向规则时类型可以为ip,net,template,instance,group,tag；出向规则时可以为 ip,net,domain,template,location
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 规则对应的唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 规则有效性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_invalid;
                    bool m_invalidHasBeenSet;

                    /**
                     * 0为正常规则,1为地域规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isRegion;
                    bool m_isRegionHasBeenSet;

                    /**
                     * 国家id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * 城市id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cityCode;
                    bool m_cityCodeHasBeenSet;

                    /**
                     * 国家名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_countryName;
                    bool m_countryNameHasBeenSet;

                    /**
                     * 省名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cityName;
                    bool m_cityNameHasBeenSet;

                    /**
                     * 云厂商code
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cloudCode;
                    bool m_cloudCodeHasBeenSet;

                    /**
                     * 0为正常规则,1为云厂商规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isCloud;
                    bool m_isCloudHasBeenSet;

                    /**
                     * 规则状态，true表示启用，false表示禁用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 规则方向：1，入向；0，出向
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 内部使用的uuid，一般情况下不会使用到该字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_internalUuid;
                    bool m_internalUuidHasBeenSet;

                    /**
                     * 规则状态，查询规则命中详情时该字段有效，0：新增，1: 已删除, 2: 编辑删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 关联任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BetaInfoByACL> m_betaList;
                    bool m_betaListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCACITEM_H_
