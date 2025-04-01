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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INSTANCEDETAIL_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 实例信息
公共实例过期时间 0001-01-01T00:00:00Z，公共实例是永久有效
                */
                class InstanceDetail : public AbstractModel
                {
                public:
                    InstanceDetail();
                    ~InstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例类型（0 公共实例 1 标准企业实例 2新企业实例3新公共实例）
                     * @return InstanceType 实例类型（0 公共实例 1 标准企业实例 2新企业实例3新公共实例）
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置实例类型（0 公共实例 1 标准企业实例 2新企业实例3新公共实例）
                     * @param _instanceType 实例类型（0 公共实例 1 标准企业实例 2新企业实例3新公共实例）
                     * 
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取地域字母缩写
                     * @return Region 地域字母缩写
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域字母缩写
                     * @param _region 地域字母缩写
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取区域全拼
                     * @return ZoneId 区域全拼
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置区域全拼
                     * @param _zoneId 区域全拼
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取支持设备总数
                     * @return TotalDeviceNum 支持设备总数
                     * 
                     */
                    int64_t GetTotalDeviceNum() const;

                    /**
                     * 设置支持设备总数
                     * @param _totalDeviceNum 支持设备总数
                     * 
                     */
                    void SetTotalDeviceNum(const int64_t& _totalDeviceNum);

                    /**
                     * 判断参数 TotalDeviceNum 是否已赋值
                     * @return TotalDeviceNum 是否已赋值
                     * 
                     */
                    bool TotalDeviceNumHasBeenSet() const;

                    /**
                     * 获取已注册设备数
                     * @return UsedDeviceNum 已注册设备数
                     * 
                     */
                    int64_t GetUsedDeviceNum() const;

                    /**
                     * 设置已注册设备数
                     * @param _usedDeviceNum 已注册设备数
                     * 
                     */
                    void SetUsedDeviceNum(const int64_t& _usedDeviceNum);

                    /**
                     * 判断参数 UsedDeviceNum 是否已赋值
                     * @return UsedDeviceNum 是否已赋值
                     * 
                     */
                    bool UsedDeviceNumHasBeenSet() const;

                    /**
                     * 获取项目数
                     * @return ProjectNum 项目数
                     * 
                     */
                    int64_t GetProjectNum() const;

                    /**
                     * 设置项目数
                     * @param _projectNum 项目数
                     * 
                     */
                    void SetProjectNum(const int64_t& _projectNum);

                    /**
                     * 判断参数 ProjectNum 是否已赋值
                     * @return ProjectNum 是否已赋值
                     * 
                     */
                    bool ProjectNumHasBeenSet() const;

                    /**
                     * 获取产品数
                     * @return ProductNum 产品数
                     * 
                     */
                    int64_t GetProductNum() const;

                    /**
                     * 设置产品数
                     * @param _productNum 产品数
                     * 
                     */
                    void SetProductNum(const int64_t& _productNum);

                    /**
                     * 判断参数 ProductNum 是否已赋值
                     * @return ProductNum 是否已赋值
                     * 
                     */
                    bool ProductNumHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取过期时间，公共实例过期时间 0001-01-01T00:00:00Z，公共实例是永久有效
                     * @return ExpireTime 过期时间，公共实例过期时间 0001-01-01T00:00:00Z，公共实例是永久有效
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间，公共实例过期时间 0001-01-01T00:00:00Z，公共实例是永久有效
                     * @param _expireTime 过期时间，公共实例过期时间 0001-01-01T00:00:00Z，公共实例是永久有效
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取总设备数
                     * @return TotalDevice 总设备数
                     * 
                     */
                    int64_t GetTotalDevice() const;

                    /**
                     * 设置总设备数
                     * @param _totalDevice 总设备数
                     * 
                     */
                    void SetTotalDevice(const int64_t& _totalDevice);

                    /**
                     * 判断参数 TotalDevice 是否已赋值
                     * @return TotalDevice 是否已赋值
                     * 
                     */
                    bool TotalDeviceHasBeenSet() const;

                    /**
                     * 获取激活设备数
                     * @return ActivateDevice 激活设备数
                     * 
                     */
                    int64_t GetActivateDevice() const;

                    /**
                     * 设置激活设备数
                     * @param _activateDevice 激活设备数
                     * 
                     */
                    void SetActivateDevice(const int64_t& _activateDevice);

                    /**
                     * 判断参数 ActivateDevice 是否已赋值
                     * @return ActivateDevice 是否已赋值
                     * 
                     */
                    bool ActivateDeviceHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Description 备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
                     * @param _description 备注
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
                     * 获取实例状态
                     * @return Status 实例状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态
                     * @param _status 实例状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取消息上下行配置TPS
                     * @return UpDownTPS 消息上下行配置TPS
                     * 
                     */
                    int64_t GetUpDownTPS() const;

                    /**
                     * 设置消息上下行配置TPS
                     * @param _upDownTPS 消息上下行配置TPS
                     * 
                     */
                    void SetUpDownTPS(const int64_t& _upDownTPS);

                    /**
                     * 判断参数 UpDownTPS 是否已赋值
                     * @return UpDownTPS 是否已赋值
                     * 
                     */
                    bool UpDownTPSHasBeenSet() const;

                    /**
                     * 获取当前消息上下行TPS
                     * @return UpDownCurrentTPS 当前消息上下行TPS
                     * 
                     */
                    int64_t GetUpDownCurrentTPS() const;

                    /**
                     * 设置当前消息上下行TPS
                     * @param _upDownCurrentTPS 当前消息上下行TPS
                     * 
                     */
                    void SetUpDownCurrentTPS(const int64_t& _upDownCurrentTPS);

                    /**
                     * 判断参数 UpDownCurrentTPS 是否已赋值
                     * @return UpDownCurrentTPS 是否已赋值
                     * 
                     */
                    bool UpDownCurrentTPSHasBeenSet() const;

                    /**
                     * 获取消息转发配置TPS
                     * @return ForwardTPS 消息转发配置TPS
                     * 
                     */
                    int64_t GetForwardTPS() const;

                    /**
                     * 设置消息转发配置TPS
                     * @param _forwardTPS 消息转发配置TPS
                     * 
                     */
                    void SetForwardTPS(const int64_t& _forwardTPS);

                    /**
                     * 判断参数 ForwardTPS 是否已赋值
                     * @return ForwardTPS 是否已赋值
                     * 
                     */
                    bool ForwardTPSHasBeenSet() const;

                    /**
                     * 获取消息转发当前TPS
                     * @return ForwardCurrentTPS 消息转发当前TPS
                     * 
                     */
                    int64_t GetForwardCurrentTPS() const;

                    /**
                     * 设置消息转发当前TPS
                     * @param _forwardCurrentTPS 消息转发当前TPS
                     * 
                     */
                    void SetForwardCurrentTPS(const int64_t& _forwardCurrentTPS);

                    /**
                     * 判断参数 ForwardCurrentTPS 是否已赋值
                     * @return ForwardCurrentTPS 是否已赋值
                     * 
                     */
                    bool ForwardCurrentTPSHasBeenSet() const;

                    /**
                     * 获取实例单元数
                     * @return CellNum 实例单元数
                     * 
                     */
                    int64_t GetCellNum() const;

                    /**
                     * 设置实例单元数
                     * @param _cellNum 实例单元数
                     * 
                     */
                    void SetCellNum(const int64_t& _cellNum);

                    /**
                     * 判断参数 CellNum 是否已赋值
                     * @return CellNum 是否已赋值
                     * 
                     */
                    bool CellNumHasBeenSet() const;

                    /**
                     * 获取实例Tag，企业实例必传
                     * @return BillingTag 实例Tag，企业实例必传
                     * 
                     */
                    std::string GetBillingTag() const;

                    /**
                     * 设置实例Tag，企业实例必传
                     * @param _billingTag 实例Tag，企业实例必传
                     * 
                     */
                    void SetBillingTag(const std::string& _billingTag);

                    /**
                     * 判断参数 BillingTag 是否已赋值
                     * @return BillingTag 是否已赋值
                     * 
                     */
                    bool BillingTagHasBeenSet() const;

                    /**
                     * 获取每日消息数
                     * @return EverydayFreeMessageCount 每日消息数
                     * 
                     */
                    int64_t GetEverydayFreeMessageCount() const;

                    /**
                     * 设置每日消息数
                     * @param _everydayFreeMessageCount 每日消息数
                     * 
                     */
                    void SetEverydayFreeMessageCount(const int64_t& _everydayFreeMessageCount);

                    /**
                     * 判断参数 EverydayFreeMessageCount 是否已赋值
                     * @return EverydayFreeMessageCount 是否已赋值
                     * 
                     */
                    bool EverydayFreeMessageCountHasBeenSet() const;

                    /**
                     * 获取最大在线设备数
                     * @return MaxDeviceOnlineCount 最大在线设备数
                     * 
                     */
                    int64_t GetMaxDeviceOnlineCount() const;

                    /**
                     * 设置最大在线设备数
                     * @param _maxDeviceOnlineCount 最大在线设备数
                     * 
                     */
                    void SetMaxDeviceOnlineCount(const int64_t& _maxDeviceOnlineCount);

                    /**
                     * 判断参数 MaxDeviceOnlineCount 是否已赋值
                     * @return MaxDeviceOnlineCount 是否已赋值
                     * 
                     */
                    bool MaxDeviceOnlineCountHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例类型（0 公共实例 1 标准企业实例 2新企业实例3新公共实例）
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 地域字母缩写
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 区域全拼
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 支持设备总数
                     */
                    int64_t m_totalDeviceNum;
                    bool m_totalDeviceNumHasBeenSet;

                    /**
                     * 已注册设备数
                     */
                    int64_t m_usedDeviceNum;
                    bool m_usedDeviceNumHasBeenSet;

                    /**
                     * 项目数
                     */
                    int64_t m_projectNum;
                    bool m_projectNumHasBeenSet;

                    /**
                     * 产品数
                     */
                    int64_t m_productNum;
                    bool m_productNumHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 过期时间，公共实例过期时间 0001-01-01T00:00:00Z，公共实例是永久有效
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 总设备数
                     */
                    int64_t m_totalDevice;
                    bool m_totalDeviceHasBeenSet;

                    /**
                     * 激活设备数
                     */
                    int64_t m_activateDevice;
                    bool m_activateDeviceHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 实例状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 消息上下行配置TPS
                     */
                    int64_t m_upDownTPS;
                    bool m_upDownTPSHasBeenSet;

                    /**
                     * 当前消息上下行TPS
                     */
                    int64_t m_upDownCurrentTPS;
                    bool m_upDownCurrentTPSHasBeenSet;

                    /**
                     * 消息转发配置TPS
                     */
                    int64_t m_forwardTPS;
                    bool m_forwardTPSHasBeenSet;

                    /**
                     * 消息转发当前TPS
                     */
                    int64_t m_forwardCurrentTPS;
                    bool m_forwardCurrentTPSHasBeenSet;

                    /**
                     * 实例单元数
                     */
                    int64_t m_cellNum;
                    bool m_cellNumHasBeenSet;

                    /**
                     * 实例Tag，企业实例必传
                     */
                    std::string m_billingTag;
                    bool m_billingTagHasBeenSet;

                    /**
                     * 每日消息数
                     */
                    int64_t m_everydayFreeMessageCount;
                    bool m_everydayFreeMessageCountHasBeenSet;

                    /**
                     * 最大在线设备数
                     */
                    int64_t m_maxDeviceOnlineCount;
                    bool m_maxDeviceOnlineCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INSTANCEDETAIL_H_
