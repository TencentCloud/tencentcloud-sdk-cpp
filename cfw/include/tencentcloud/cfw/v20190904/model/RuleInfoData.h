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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_RULEINFODATA_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_RULEINFODATA_H_

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
                * 规则输入对象
                */
                class RuleInfoData : public AbstractModel
                {
                public:
                    RuleInfoData();
                    ~RuleInfoData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取策略, 0：观察，1：阻断，2：放行
                     * @return Strategy 策略, 0：观察，1：阻断，2：放行
                     * 
                     */
                    std::string GetStrategy() const;

                    /**
                     * 设置策略, 0：观察，1：阻断，2：放行
                     * @param _strategy 策略, 0：观察，1：阻断，2：放行
                     * 
                     */
                    void SetStrategy(const std::string& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取访问源类型，1是IP，3是域名，4是IP地址模板，5是域名地址模板
                     * @return SourceType 访问源类型，1是IP，3是域名，4是IP地址模板，5是域名地址模板
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置访问源类型，1是IP，3是域名，4是IP地址模板，5是域名地址模板
                     * @param _sourceType 访问源类型，1是IP，3是域名，4是IP地址模板，5是域名地址模板
                     * 
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取方向，0：出站，1：入站
                     * @return Direction 方向，0：出站，1：入站
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置方向，0：出站，1：入站
                     * @param _direction 方向，0：出站，1：入站
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
                     * 获取访问目的类型，1是IP，3是域名，4是IP地址模板，5是域名地址模板
                     * @return TargetType 访问目的类型，1是IP，3是域名，4是IP地址模板，5是域名地址模板
                     * 
                     */
                    uint64_t GetTargetType() const;

                    /**
                     * 设置访问目的类型，1是IP，3是域名，4是IP地址模板，5是域名地址模板
                     * @param _targetType 访问目的类型，1是IP，3是域名，4是IP地址模板，5是域名地址模板
                     * 
                     */
                    void SetTargetType(const uint64_t& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

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
                     * 获取id值
                     * @return Id id值
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置id值
                     * @param _id id值
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
                     * 获取日志id，从告警处创建必传，其它为空
                     * @return LogId 日志id，从告警处创建必传，其它为空
                     * 
                     */
                    std::string GetLogId() const;

                    /**
                     * 设置日志id，从告警处创建必传，其它为空
                     * @param _logId 日志id，从告警处创建必传，其它为空
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
                     * 获取城市Code
                     * @return City 城市Code
                     * 
                     */
                    uint64_t GetCity() const;

                    /**
                     * 设置城市Code
                     * @param _city 城市Code
                     * 
                     */
                    void SetCity(const uint64_t& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取国家Code
                     * @return Country 国家Code
                     * 
                     */
                    uint64_t GetCountry() const;

                    /**
                     * 设置国家Code
                     * @param _country 国家Code
                     * 
                     */
                    void SetCountry(const uint64_t& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取云厂商，支持多个，以逗号分隔， 1:腾讯云（仅中国香港及海外）,2:阿里云,3:亚马逊云,4:华为云,5:微软云
                     * @return CloudCode 云厂商，支持多个，以逗号分隔， 1:腾讯云（仅中国香港及海外）,2:阿里云,3:亚马逊云,4:华为云,5:微软云
                     * 
                     */
                    std::string GetCloudCode() const;

                    /**
                     * 设置云厂商，支持多个，以逗号分隔， 1:腾讯云（仅中国香港及海外）,2:阿里云,3:亚马逊云,4:华为云,5:微软云
                     * @param _cloudCode 云厂商，支持多个，以逗号分隔， 1:腾讯云（仅中国香港及海外）,2:阿里云,3:亚马逊云,4:华为云,5:微软云
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
                     * 获取是否为地域
                     * @return IsRegion 是否为地域
                     * 
                     */
                    uint64_t GetIsRegion() const;

                    /**
                     * 设置是否为地域
                     * @param _isRegion 是否为地域
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
                     * 获取城市名
                     * @return CityName 城市名
                     * 
                     */
                    std::string GetCityName() const;

                    /**
                     * 设置城市名
                     * @param _cityName 城市名
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
                     * 获取国家名
                     * @return CountryName 国家名
                     * 
                     */
                    std::string GetCountryName() const;

                    /**
                     * 设置国家名
                     * @param _countryName 国家名
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
                     * 获取国家二位iso代码或者省份缩写代码
                     * @return RegionIso 国家二位iso代码或者省份缩写代码
                     * 
                     */
                    std::string GetRegionIso() const;

                    /**
                     * 设置国家二位iso代码或者省份缩写代码
                     * @param _regionIso 国家二位iso代码或者省份缩写代码
                     * 
                     */
                    void SetRegionIso(const std::string& _regionIso);

                    /**
                     * 判断参数 RegionIso 是否已赋值
                     * @return RegionIso 是否已赋值
                     * 
                     */
                    bool RegionIsoHasBeenSet() const;

                private:

                    /**
                     * 执行顺序
                     */
                    uint64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

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
                     * 策略, 0：观察，1：阻断，2：放行
                     */
                    std::string m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * 访问源类型，1是IP，3是域名，4是IP地址模板，5是域名地址模板
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 方向，0：出站，1：入站
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 访问目的类型，1是IP，3是域名，4是IP地址模板，5是域名地址模板
                     */
                    uint64_t m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 端口
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * id值
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 日志id，从告警处创建必传，其它为空
                     */
                    std::string m_logId;
                    bool m_logIdHasBeenSet;

                    /**
                     * 城市Code
                     */
                    uint64_t m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 国家Code
                     */
                    uint64_t m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 云厂商，支持多个，以逗号分隔， 1:腾讯云（仅中国香港及海外）,2:阿里云,3:亚马逊云,4:华为云,5:微软云
                     */
                    std::string m_cloudCode;
                    bool m_cloudCodeHasBeenSet;

                    /**
                     * 是否为地域
                     */
                    uint64_t m_isRegion;
                    bool m_isRegionHasBeenSet;

                    /**
                     * 城市名
                     */
                    std::string m_cityName;
                    bool m_cityNameHasBeenSet;

                    /**
                     * 国家名
                     */
                    std::string m_countryName;
                    bool m_countryNameHasBeenSet;

                    /**
                     * 国家二位iso代码或者省份缩写代码
                     */
                    std::string m_regionIso;
                    bool m_regionIsoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_RULEINFODATA_H_
