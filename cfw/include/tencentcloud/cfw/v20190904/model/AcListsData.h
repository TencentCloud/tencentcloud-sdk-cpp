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
                     * @return SourceIp 访问源
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置访问源
                     * @param _sourceIp 访问源
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
                     * @return TargetIp 访问目的
                     * 
                     */
                    std::string GetTargetIp() const;

                    /**
                     * 设置访问目的
                     * @param _targetIp 访问目的
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
                     * @return Protocol 协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议
                     * @param _protocol 协议
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
                     * @return Port 端口
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置端口
                     * @param _port 端口
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
                     * @return Strategy 策略
                     * 
                     */
                    uint64_t GetStrategy() const;

                    /**
                     * 设置策略
                     * @param _strategy 策略
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
                     * @return Detail 描述
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置描述
                     * @param _detail 描述
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
                     * @return LogId 告警规则id
                     * 
                     */
                    std::string GetLogId() const;

                    /**
                     * 设置告警规则id
                     * @param _logId 告警规则id
                     * 
                     */
                    void SetLogId(const std::string& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     * 
                     */
                    bool LogIdHasBeenSet() const;

                    /**
                     * 获取规则开关状态 1打开 0关闭
                     * @return Status 规则开关状态 1打开 0关闭
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置规则开关状态 1打开 0关闭
                     * @param _status 规则开关状态 1打开 0关闭
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
                     * 获取规则源类型
                     * @return SrcType 规则源类型
                     * 
                     */
                    int64_t GetSrcType() const;

                    /**
                     * 设置规则源类型
                     * @param _srcType 规则源类型
                     * 
                     */
                    void SetSrcType(const int64_t& _srcType);

                    /**
                     * 判断参数 SrcType 是否已赋值
                     * @return SrcType 是否已赋值
                     * 
                     */
                    bool SrcTypeHasBeenSet() const;

                    /**
                     * 获取规则目的类型
                     * @return DstType 规则目的类型
                     * 
                     */
                    int64_t GetDstType() const;

                    /**
                     * 设置规则目的类型
                     * @param _dstType 规则目的类型
                     * 
                     */
                    void SetDstType(const int64_t& _dstType);

                    /**
                     * 判断参数 DstType 是否已赋值
                     * @return DstType 是否已赋值
                     * 
                     */
                    bool DstTypeHasBeenSet() const;

                    /**
                     * 获取规则唯一ID
                     * @return Uuid 规则唯一ID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置规则唯一ID
                     * @param _uuid 规则唯一ID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取规则有效性
1 有效
0 无效
                     * @return Invalid 规则有效性
1 有效
0 无效
                     * 
                     */
                    int64_t GetInvalid() const;

                    /**
                     * 设置规则有效性
1 有效
0 无效
                     * @param _invalid 规则有效性
1 有效
0 无效
                     * 
                     */
                    void SetInvalid(const int64_t& _invalid);

                    /**
                     * 判断参数 Invalid 是否已赋值
                     * @return Invalid 是否已赋值
                     * 
                     */
                    bool InvalidHasBeenSet() const;

                    /**
                     * 获取是否地域规则
                     * @return IsRegion 是否地域规则
                     * 
                     */
                    int64_t GetIsRegion() const;

                    /**
                     * 设置是否地域规则
                     * @param _isRegion 是否地域规则
                     * 
                     */
                    void SetIsRegion(const int64_t& _isRegion);

                    /**
                     * 判断参数 IsRegion 是否已赋值
                     * @return IsRegion 是否已赋值
                     * 
                     */
                    bool IsRegionHasBeenSet() const;

                    /**
                     * 获取云厂商代码
                     * @return CloudCode 云厂商代码
                     * 
                     */
                    std::string GetCloudCode() const;

                    /**
                     * 设置云厂商代码
                     * @param _cloudCode 云厂商代码
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
                     * 获取自动化助手信息
                     * @return AutoTask 自动化助手信息
                     * 
                     */
                    std::string GetAutoTask() const;

                    /**
                     * 设置自动化助手信息
                     * @param _autoTask 自动化助手信息
                     * 
                     */
                    void SetAutoTask(const std::string& _autoTask);

                    /**
                     * 判断参数 AutoTask 是否已赋值
                     * @return AutoTask 是否已赋值
                     * 
                     */
                    bool AutoTaskHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
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
                     * 获取地域码信息
                     * @return RegionCode 地域码信息
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置地域码信息
                     * @param _regionCode 地域码信息
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取国家代码
                     * @return Country 国家代码
                     * 
                     */
                    int64_t GetCountry() const;

                    /**
                     * 设置国家代码
                     * @param _country 国家代码
                     * 
                     */
                    void SetCountry(const int64_t& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取城市代码
                     * @return City 城市代码
                     * 
                     */
                    int64_t GetCity() const;

                    /**
                     * 设置城市代码
                     * @param _city 城市代码
                     * 
                     */
                    void SetCity(const int64_t& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取国家名称
                     * @return RegName1 国家名称
                     * 
                     */
                    std::string GetRegName1() const;

                    /**
                     * 设置国家名称
                     * @param _regName1 国家名称
                     * 
                     */
                    void SetRegName1(const std::string& _regName1);

                    /**
                     * 判断参数 RegName1 是否已赋值
                     * @return RegName1 是否已赋值
                     * 
                     */
                    bool RegName1HasBeenSet() const;

                    /**
                     * 获取城市名称
                     * @return RegName2 城市名称
                     * 
                     */
                    std::string GetRegName2() const;

                    /**
                     * 设置城市名称
                     * @param _regName2 城市名称
                     * 
                     */
                    void SetRegName2(const std::string& _regName2);

                    /**
                     * 判断参数 RegName2 是否已赋值
                     * @return RegName2 是否已赋值
                     * 
                     */
                    bool RegName2HasBeenSet() const;

                private:

                    /**
                     * 规则id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 访问源
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * 访问目的
                     */
                    std::string m_targetIp;
                    bool m_targetIpHasBeenSet;

                    /**
                     * 协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 端口
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 策略
                     */
                    uint64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * 描述
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
                     */
                    std::string m_logId;
                    bool m_logIdHasBeenSet;

                    /**
                     * 规则开关状态 1打开 0关闭
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规则源类型
                     */
                    int64_t m_srcType;
                    bool m_srcTypeHasBeenSet;

                    /**
                     * 规则目的类型
                     */
                    int64_t m_dstType;
                    bool m_dstTypeHasBeenSet;

                    /**
                     * 规则唯一ID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 规则有效性
1 有效
0 无效
                     */
                    int64_t m_invalid;
                    bool m_invalidHasBeenSet;

                    /**
                     * 是否地域规则
                     */
                    int64_t m_isRegion;
                    bool m_isRegionHasBeenSet;

                    /**
                     * 云厂商代码
                     */
                    std::string m_cloudCode;
                    bool m_cloudCodeHasBeenSet;

                    /**
                     * 自动化助手信息
                     */
                    std::string m_autoTask;
                    bool m_autoTaskHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 地域码信息
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * 国家代码
                     */
                    int64_t m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 城市代码
                     */
                    int64_t m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 国家名称
                     */
                    std::string m_regName1;
                    bool m_regName1HasBeenSet;

                    /**
                     * 城市名称
                     */
                    std::string m_regName2;
                    bool m_regName2HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ACLISTSDATA_H_
