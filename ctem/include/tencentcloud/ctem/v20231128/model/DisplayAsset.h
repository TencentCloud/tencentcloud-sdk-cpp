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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYASSET_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctem/v20231128/model/DisplayToolCommon.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * 主机资产详情
                */
                class DisplayAsset : public AbstractModel
                {
                public:
                    DisplayAsset();
                    ~DisplayAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机资产Id
                     * @return Id 主机资产Id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置主机资产Id
                     * @param _id 主机资产Id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取操作系统类型
                     * @return Os 操作系统类型
                     * 
                     */
                    std::string GetOs() const;

                    /**
                     * 设置操作系统类型
                     * @param _os 操作系统类型
                     * 
                     */
                    void SetOs(const std::string& _os);

                    /**
                     * 判断参数 Os 是否已赋值
                     * @return Os 是否已赋值
                     * 
                     */
                    bool OsHasBeenSet() const;

                    /**
                     * 获取主机地址
                     * @return Ip 主机地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置主机地址
                     * @param _ip 主机地址
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取国家
                     * @return Country 国家
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置国家
                     * @param _country 国家
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取省份
                     * @return Province 省份
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置省份
                     * @param _province 省份
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return City 地域
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置地域
                     * @param _city 地域
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取运营商
                     * @return Isp 运营商
                     * 
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置运营商
                     * @param _isp 运营商
                     * 
                     */
                    void SetIsp(const std::string& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取公共字段
                     * @return DisplayToolCommon 公共字段
                     * 
                     */
                    DisplayToolCommon GetDisplayToolCommon() const;

                    /**
                     * 设置公共字段
                     * @param _displayToolCommon 公共字段
                     * 
                     */
                    void SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon);

                    /**
                     * 判断参数 DisplayToolCommon 是否已赋值
                     * @return DisplayToolCommon 是否已赋值
                     * 
                     */
                    bool DisplayToolCommonHasBeenSet() const;

                    /**
                     * 获取端口数据
                     * @return Ports 端口数据
                     * 
                     */
                    std::string GetPorts() const;

                    /**
                     * 设置端口数据
                     * @param _ports 端口数据
                     * 
                     */
                    void SetPorts(const std::string& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取服务数据
                     * @return Services 服务数据
                     * 
                     */
                    std::string GetServices() const;

                    /**
                     * 设置服务数据
                     * @param _services 服务数据
                     * 
                     */
                    void SetServices(const std::string& _services);

                    /**
                     * 判断参数 Services 是否已赋值
                     * @return Services 是否已赋值
                     * 
                     */
                    bool ServicesHasBeenSet() const;

                    /**
                     * 获取域名数据
                     * @return Domains 域名数据
                     * 
                     */
                    std::string GetDomains() const;

                    /**
                     * 设置域名数据
                     * @param _domains 域名数据
                     * 
                     */
                    void SetDomains(const std::string& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取端口和服务最近更新时间
                     * @return LastModify 端口和服务最近更新时间
                     * 
                     */
                    std::string GetLastModify() const;

                    /**
                     * 设置端口和服务最近更新时间
                     * @param _lastModify 端口和服务最近更新时间
                     * 
                     */
                    void SetLastModify(const std::string& _lastModify);

                    /**
                     * 判断参数 LastModify 是否已赋值
                     * @return LastModify 是否已赋值
                     * 
                     */
                    bool LastModifyHasBeenSet() const;

                    /**
                     * 获取是否为云资产
                     * @return IsCloudAsset 是否为云资产
                     * 
                     */
                    int64_t GetIsCloudAsset() const;

                    /**
                     * 设置是否为云资产
                     * @param _isCloudAsset 是否为云资产
                     * 
                     */
                    void SetIsCloudAsset(const int64_t& _isCloudAsset);

                    /**
                     * 判断参数 IsCloudAsset 是否已赋值
                     * @return IsCloudAsset 是否已赋值
                     * 
                     */
                    bool IsCloudAssetHasBeenSet() const;

                    /**
                     * 获取云资产状态，-1为下线
                     * @return CloudAssetStatus 云资产状态，-1为下线
                     * 
                     */
                    int64_t GetCloudAssetStatus() const;

                    /**
                     * 设置云资产状态，-1为下线
                     * @param _cloudAssetStatus 云资产状态，-1为下线
                     * 
                     */
                    void SetCloudAssetStatus(const int64_t& _cloudAssetStatus);

                    /**
                     * 判断参数 CloudAssetStatus 是否已赋值
                     * @return CloudAssetStatus 是否已赋值
                     * 
                     */
                    bool CloudAssetStatusHasBeenSet() const;

                private:

                    /**
                     * 主机资产Id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 操作系统类型
                     */
                    std::string m_os;
                    bool m_osHasBeenSet;

                    /**
                     * 主机地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 国家
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 省份
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 运营商
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * 公共字段
                     */
                    DisplayToolCommon m_displayToolCommon;
                    bool m_displayToolCommonHasBeenSet;

                    /**
                     * 端口数据
                     */
                    std::string m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * 服务数据
                     */
                    std::string m_services;
                    bool m_servicesHasBeenSet;

                    /**
                     * 域名数据
                     */
                    std::string m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 端口和服务最近更新时间
                     */
                    std::string m_lastModify;
                    bool m_lastModifyHasBeenSet;

                    /**
                     * 是否为云资产
                     */
                    int64_t m_isCloudAsset;
                    bool m_isCloudAssetHasBeenSet;

                    /**
                     * 云资产状态，-1为下线
                     */
                    int64_t m_cloudAssetStatus;
                    bool m_cloudAssetStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYASSET_H_
