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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_RWINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_RWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RWInstanceInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * proxy读写分离信息
                */
                class RWInfo : public AbstractModel
                {
                public:
                    RWInfo();
                    ~RWInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取代理实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstCount 代理实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInstCount() const;

                    /**
                     * 设置代理实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instCount 代理实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstCount(const uint64_t& _instCount);

                    /**
                     * 判断参数 InstCount 是否已赋值
                     * @return InstCount 是否已赋值
                     * 
                     */
                    bool InstCountHasBeenSet() const;

                    /**
                     * 获取权重分配模式；
系统自动分配："system"， 自定义："custom"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WeightMode 权重分配模式；
系统自动分配："system"， 自定义："custom"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置权重分配模式；
系统自动分配："system"， 自定义："custom"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weightMode 权重分配模式；
系统自动分配："system"， 自定义："custom"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeightMode(const std::string& _weightMode);

                    /**
                     * 判断参数 WeightMode 是否已赋值
                     * @return WeightMode 是否已赋值
                     * 
                     */
                    bool WeightModeHasBeenSet() const;

                    /**
                     * 获取是否开启延迟剔除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsKickOut 是否开启延迟剔除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsKickOut() const;

                    /**
                     * 设置是否开启延迟剔除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isKickOut 是否开启延迟剔除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsKickOut(const bool& _isKickOut);

                    /**
                     * 判断参数 IsKickOut 是否已赋值
                     * @return IsKickOut 是否已赋值
                     * 
                     */
                    bool IsKickOutHasBeenSet() const;

                    /**
                     * 获取最小保留数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinCount 最小保留数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMinCount() const;

                    /**
                     * 设置最小保留数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minCount 最小保留数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinCount(const uint64_t& _minCount);

                    /**
                     * 判断参数 MinCount 是否已赋值
                     * @return MinCount 是否已赋值
                     * 
                     */
                    bool MinCountHasBeenSet() const;

                    /**
                     * 获取延迟剔除阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxDelay 延迟剔除阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxDelay() const;

                    /**
                     * 设置延迟剔除阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxDelay 延迟剔除阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxDelay(const uint64_t& _maxDelay);

                    /**
                     * 判断参数 MaxDelay 是否已赋值
                     * @return MaxDelay 是否已赋值
                     * 
                     */
                    bool MaxDelayHasBeenSet() const;

                    /**
                     * 获取是否开启故障转移
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailOver 是否开启故障转移
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetFailOver() const;

                    /**
                     * 设置是否开启故障转移
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failOver 是否开启故障转移
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailOver(const bool& _failOver);

                    /**
                     * 判断参数 FailOver 是否已赋值
                     * @return FailOver 是否已赋值
                     * 
                     */
                    bool FailOverHasBeenSet() const;

                    /**
                     * 获取是否自动添加RO
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoAddRo 是否自动添加RO
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAutoAddRo() const;

                    /**
                     * 设置是否自动添加RO
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoAddRo 是否自动添加RO
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoAddRo(const bool& _autoAddRo);

                    /**
                     * 判断参数 AutoAddRo 是否已赋值
                     * @return AutoAddRo 是否已赋值
                     * 
                     */
                    bool AutoAddRoHasBeenSet() const;

                    /**
                     * 获取代理实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RWInstInfo 代理实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RWInstanceInfo GetRWInstInfo() const;

                    /**
                     * 设置代理实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rWInstInfo 代理实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRWInstInfo(const RWInstanceInfo& _rWInstInfo);

                    /**
                     * 判断参数 RWInstInfo 是否已赋值
                     * @return RWInstInfo 是否已赋值
                     * 
                     */
                    bool RWInstInfoHasBeenSet() const;

                private:

                    /**
                     * 代理实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_instCount;
                    bool m_instCountHasBeenSet;

                    /**
                     * 权重分配模式；
系统自动分配："system"， 自定义："custom"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * 是否开启延迟剔除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isKickOut;
                    bool m_isKickOutHasBeenSet;

                    /**
                     * 最小保留数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_minCount;
                    bool m_minCountHasBeenSet;

                    /**
                     * 延迟剔除阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxDelay;
                    bool m_maxDelayHasBeenSet;

                    /**
                     * 是否开启故障转移
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * 是否自动添加RO
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * 代理实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RWInstanceInfo m_rWInstInfo;
                    bool m_rWInstInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_RWINFO_H_
