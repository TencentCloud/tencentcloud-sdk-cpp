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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DATAASSETMAPPING_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DATAASSETMAPPING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/Tag.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 资产测绘对象
                */
                class DataAssetMapping : public AbstractModel
                {
                public:
                    DataAssetMapping();
                    ~DataAssetMapping() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产主IP地址(公网IP)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetIp 资产主IP地址(公网IP)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetIp() const;

                    /**
                     * 设置资产主IP地址(公网IP)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetIp 资产主IP地址(公网IP)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetIp(const std::string& _assetIp);

                    /**
                     * 判断参数 AssetIp 是否已赋值
                     * @return AssetIp 是否已赋值
                     * 
                     */
                    bool AssetIpHasBeenSet() const;

                    /**
                     * 获取资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetName 资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetName 资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取资产ID(各模块间通用)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Instid 资产ID(各模块间通用)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstid() const;

                    /**
                     * 设置资产ID(各模块间通用)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instid 资产ID(各模块间通用)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstid(const std::string& _instid);

                    /**
                     * 判断参数 Instid 是否已赋值
                     * @return Instid 是否已赋值
                     * 
                     */
                    bool InstidHasBeenSet() const;

                    /**
                     * 获取资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetType 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetType 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取资产可用区(英文)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetRegionEn 资产可用区(英文)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetRegionEn() const;

                    /**
                     * 设置资产可用区(英文)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetRegionEn 资产可用区(英文)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetRegionEn(const std::string& _assetRegionEn);

                    /**
                     * 判断参数 AssetRegionEn 是否已赋值
                     * @return AssetRegionEn 是否已赋值
                     * 
                     */
                    bool AssetRegionEnHasBeenSet() const;

                    /**
                     * 获取资产可用区(中文)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetRegionCn 资产可用区(中文)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetRegionCn() const;

                    /**
                     * 设置资产可用区(中文)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetRegionCn 资产可用区(中文)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetRegionCn(const std::string& _assetRegionCn);

                    /**
                     * 判断参数 AssetRegionCn 是否已赋值
                     * @return AssetRegionCn 是否已赋值
                     * 
                     */
                    bool AssetRegionCnHasBeenSet() const;

                    /**
                     * 获取资产所属网络
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetNetwork 资产所属网络
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetNetwork() const;

                    /**
                     * 设置资产所属网络
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetNetwork 资产所属网络
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetNetwork(const std::string& _assetNetwork);

                    /**
                     * 判断参数 AssetNetwork 是否已赋值
                     * @return AssetNetwork 是否已赋值
                     * 
                     */
                    bool AssetNetworkHasBeenSet() const;

                    /**
                     * 获取资产运行状态(英文)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetStatusEn 资产运行状态(英文)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetStatusEn() const;

                    /**
                     * 设置资产运行状态(英文)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetStatusEn 资产运行状态(英文)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetStatusEn(const std::string& _assetStatusEn);

                    /**
                     * 判断参数 AssetStatusEn 是否已赋值
                     * @return AssetStatusEn 是否已赋值
                     * 
                     */
                    bool AssetStatusEnHasBeenSet() const;

                    /**
                     * 获取资产运行状态(中文)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetStatusCn 资产运行状态(中文)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetStatusCn() const;

                    /**
                     * 设置资产运行状态(中文)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetStatusCn 资产运行状态(中文)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetStatusCn(const std::string& _assetStatusCn);

                    /**
                     * 判断参数 AssetStatusCn 是否已赋值
                     * @return AssetStatusCn 是否已赋值
                     * 
                     */
                    bool AssetStatusCnHasBeenSet() const;

                    /**
                     * 获取是否白名单：“True”为白名单不测绘，默认“False”正常测绘
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsWhite 是否白名单：“True”为白名单不测绘，默认“False”正常测绘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsWhite() const;

                    /**
                     * 设置是否白名单：“True”为白名单不测绘，默认“False”正常测绘
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isWhite 是否白名单：“True”为白名单不测绘，默认“False”正常测绘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsWhite(const std::string& _isWhite);

                    /**
                     * 判断参数 IsWhite 是否已赋值
                     * @return IsWhite 是否已赋值
                     * 
                     */
                    bool IsWhiteHasBeenSet() const;

                    /**
                     * 获取资产测绘状态(“unstart”未开始/“running”测绘中/“finish”已完成/“abandoned”任务中止)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 资产测绘状态(“unstart”未开始/“running”测绘中/“finish”已完成/“abandoned”任务中止)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置资产测绘状态(“unstart”未开始/“running”测绘中/“finish”已完成/“abandoned”任务中止)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 资产测绘状态(“unstart”未开始/“running”测绘中/“finish”已完成/“abandoned”任务中止)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取最近更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Time 最近更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置最近更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _time 最近更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取资产标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tag 资产标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置资产标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tag 资产标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTag(const std::vector<Tag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取资产组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Group 资产组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetGroup() const;

                    /**
                     * 设置资产组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _group 资产组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroup(const std::vector<std::string>& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取端口和服务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 端口和服务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置端口和服务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port 端口和服务信息
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
                     * 获取组件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Component 组件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置组件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _component 组件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComponent(const std::string& _component);

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     * 
                     */
                    bool ComponentHasBeenSet() const;

                    /**
                     * 获取资产实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetInstanceType 资产实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetInstanceType() const;

                    /**
                     * 设置资产实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetInstanceType 资产实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetInstanceType(const std::string& _assetInstanceType);

                    /**
                     * 判断参数 AssetInstanceType 是否已赋值
                     * @return AssetInstanceType 是否已赋值
                     * 
                     */
                    bool AssetInstanceTypeHasBeenSet() const;

                    /**
                     * 获取资产是否是内网类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsIntranet 资产是否是内网类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsIntranet() const;

                    /**
                     * 设置资产是否是内网类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isIntranet 资产是否是内网类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsIntranet(const uint64_t& _isIntranet);

                    /**
                     * 判断参数 IsIntranet 是否已赋值
                     * @return IsIntranet 是否已赋值
                     * 
                     */
                    bool IsIntranetHasBeenSet() const;

                private:

                    /**
                     * 资产主IP地址(公网IP)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetIp;
                    bool m_assetIpHasBeenSet;

                    /**
                     * 资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 资产ID(各模块间通用)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instid;
                    bool m_instidHasBeenSet;

                    /**
                     * 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 资产可用区(英文)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetRegionEn;
                    bool m_assetRegionEnHasBeenSet;

                    /**
                     * 资产可用区(中文)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetRegionCn;
                    bool m_assetRegionCnHasBeenSet;

                    /**
                     * 资产所属网络
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetNetwork;
                    bool m_assetNetworkHasBeenSet;

                    /**
                     * 资产运行状态(英文)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetStatusEn;
                    bool m_assetStatusEnHasBeenSet;

                    /**
                     * 资产运行状态(中文)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetStatusCn;
                    bool m_assetStatusCnHasBeenSet;

                    /**
                     * 是否白名单：“True”为白名单不测绘，默认“False”正常测绘
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isWhite;
                    bool m_isWhiteHasBeenSet;

                    /**
                     * 资产测绘状态(“unstart”未开始/“running”测绘中/“finish”已完成/“abandoned”任务中止)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 最近更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 资产标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 资产组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * 端口和服务信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 组件信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * 资产实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetInstanceType;
                    bool m_assetInstanceTypeHasBeenSet;

                    /**
                     * 资产是否是内网类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isIntranet;
                    bool m_isIntranetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DATAASSETMAPPING_H_
