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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_ACLISTSDATA_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_ACLISTSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


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
                class AcListsData : public AbstractModel
                {
                public:
                    AcListsData();
                    ~AcListsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则id
                     * @return Id 规则id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置规则id
                     * @param _id 规则id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取访问源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceIp 访问源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置访问源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceIp 访问源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceIp(const std::string& _sourceIp);

                    /**
                     * 判断参数 SourceIp 是否已赋值
                     * @return SourceIp 是否已赋值
                     * 
                     */
                    bool SourceIpHasBeenSet() const;

                    /**
                     * 获取访问目的
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetIp 访问目的
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetIp() const;

                    /**
                     * 设置访问目的
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetIp 访问目的
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetIp(const std::string& _targetIp);

                    /**
                     * 判断参数 TargetIp 是否已赋值
                     * @return TargetIp 是否已赋值
                     * 
                     */
                    bool TargetIpHasBeenSet() const;

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
                     * 获取策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Strategy 策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStrategy() const;

                    /**
                     * 设置策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategy 策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategy(const uint64_t& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Detail 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detail 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

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
                     * 获取告警规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogId 告警规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogId() const;

                    /**
                     * 设置告警规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logId 告警规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogId(const std::string& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     * 
                     */
                    bool LogIdHasBeenSet() const;

                private:

                    /**
                     * 规则id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 访问源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * 访问目的
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetIp;
                    bool m_targetIpHasBeenSet;

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
                     * 策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

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
                     * 告警规则id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logId;
                    bool m_logIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ACLISTSDATA_H_
