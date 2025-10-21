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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ENGINENETWORKINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ENGINENETWORKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/GatewayInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 引擎网络信息
                */
                class EngineNetworkInfo : public AbstractModel
                {
                public:
                    EngineNetworkInfo();
                    ~EngineNetworkInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取引擎网络名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineNetworkName 引擎网络名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineNetworkName() const;

                    /**
                     * 设置引擎网络名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineNetworkName 引擎网络名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineNetworkName(const std::string& _engineNetworkName);

                    /**
                     * 判断参数 EngineNetworkName 是否已赋值
                     * @return EngineNetworkName 是否已赋值
                     * 
                     */
                    bool EngineNetworkNameHasBeenSet() const;

                    /**
                     * 获取引擎网络状态，0--初始化，2--可用，-1--已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineNetworkState 引擎网络状态，0--初始化，2--可用，-1--已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEngineNetworkState() const;

                    /**
                     * 设置引擎网络状态，0--初始化，2--可用，-1--已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineNetworkState 引擎网络状态，0--初始化，2--可用，-1--已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineNetworkState(const int64_t& _engineNetworkState);

                    /**
                     * 判断参数 EngineNetworkState 是否已赋值
                     * @return EngineNetworkState 是否已赋值
                     * 
                     */
                    bool EngineNetworkStateHasBeenSet() const;

                    /**
                     * 获取引擎网络cidr
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineNetworkCidr 引擎网络cidr
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineNetworkCidr() const;

                    /**
                     * 设置引擎网络cidr
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineNetworkCidr 引擎网络cidr
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineNetworkCidr(const std::string& _engineNetworkCidr);

                    /**
                     * 判断参数 EngineNetworkCidr 是否已赋值
                     * @return EngineNetworkCidr 是否已赋值
                     * 
                     */
                    bool EngineNetworkCidrHasBeenSet() const;

                    /**
                     * 获取引擎网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineNetworkId 引擎网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineNetworkId() const;

                    /**
                     * 设置引擎网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineNetworkId 引擎网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineNetworkId(const std::string& _engineNetworkId);

                    /**
                     * 判断参数 EngineNetworkId 是否已赋值
                     * @return EngineNetworkId 是否已赋值
                     * 
                     */
                    bool EngineNetworkIdHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取私有连接个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateLinkNumber 私有连接个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPrivateLinkNumber() const;

                    /**
                     * 设置私有连接个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateLinkNumber 私有连接个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivateLinkNumber(const int64_t& _privateLinkNumber);

                    /**
                     * 判断参数 PrivateLinkNumber 是否已赋值
                     * @return PrivateLinkNumber 是否已赋值
                     * 
                     */
                    bool PrivateLinkNumberHasBeenSet() const;

                    /**
                     * 获取计算引擎个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineNumber 计算引擎个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEngineNumber() const;

                    /**
                     * 设置计算引擎个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineNumber 计算引擎个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineNumber(const int64_t& _engineNumber);

                    /**
                     * 判断参数 EngineNumber 是否已赋值
                     * @return EngineNumber 是否已赋值
                     * 
                     */
                    bool EngineNumberHasBeenSet() const;

                    /**
                     * 获取网关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GateWayInfo 网关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GatewayInfo> GetGateWayInfo() const;

                    /**
                     * 设置网关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gateWayInfo 网关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGateWayInfo(const std::vector<GatewayInfo>& _gateWayInfo);

                    /**
                     * 判断参数 GateWayInfo 是否已赋值
                     * @return GateWayInfo 是否已赋值
                     * 
                     */
                    bool GateWayInfoHasBeenSet() const;

                private:

                    /**
                     * 引擎网络名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineNetworkName;
                    bool m_engineNetworkNameHasBeenSet;

                    /**
                     * 引擎网络状态，0--初始化，2--可用，-1--已删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_engineNetworkState;
                    bool m_engineNetworkStateHasBeenSet;

                    /**
                     * 引擎网络cidr
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineNetworkCidr;
                    bool m_engineNetworkCidrHasBeenSet;

                    /**
                     * 引擎网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineNetworkId;
                    bool m_engineNetworkIdHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 私有连接个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_privateLinkNumber;
                    bool m_privateLinkNumberHasBeenSet;

                    /**
                     * 计算引擎个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_engineNumber;
                    bool m_engineNumberHasBeenSet;

                    /**
                     * 网关信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GatewayInfo> m_gateWayInfo;
                    bool m_gateWayInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ENGINENETWORKINFO_H_
