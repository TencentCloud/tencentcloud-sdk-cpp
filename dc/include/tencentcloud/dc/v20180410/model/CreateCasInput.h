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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_CREATECASINPUT_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_CREATECASINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * 创建敏捷上云入参
                */
                class CreateCasInput : public AbstractModel
                {
                public:
                    CreateCasInput();
                    ~CreateCasInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>敏捷上云名称</p>
                     * @return Name <p>敏捷上云名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>敏捷上云名称</p>
                     * @param _name <p>敏捷上云名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>需要接入敏捷上云的IDC的地址</p>
                     * @return IdcAddress <p>需要接入敏捷上云的IDC的地址</p>
                     * 
                     */
                    std::string GetIdcAddress() const;

                    /**
                     * 设置<p>需要接入敏捷上云的IDC的地址</p>
                     * @param _idcAddress <p>需要接入敏捷上云的IDC的地址</p>
                     * 
                     */
                    void SetIdcAddress(const std::string& _idcAddress);

                    /**
                     * 判断参数 IdcAddress 是否已赋值
                     * @return IdcAddress 是否已赋值
                     * 
                     */
                    bool IdcAddressHasBeenSet() const;

                    /**
                     * 获取<p>需要接入敏捷上云的IDC的互联网服务提供商类型</p>
                     * @return IdcType <p>需要接入敏捷上云的IDC的互联网服务提供商类型</p>
                     * 
                     */
                    std::string GetIdcType() const;

                    /**
                     * 设置<p>需要接入敏捷上云的IDC的互联网服务提供商类型</p>
                     * @param _idcType <p>需要接入敏捷上云的IDC的互联网服务提供商类型</p>
                     * 
                     */
                    void SetIdcType(const std::string& _idcType);

                    /**
                     * 判断参数 IdcType 是否已赋值
                     * @return IdcType 是否已赋值
                     * 
                     */
                    bool IdcTypeHasBeenSet() const;

                    /**
                     * 获取<p>敏捷上云的带宽，单位为MB</p>
                     * @return Bandwidth <p>敏捷上云的带宽，单位为MB</p>
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置<p>敏捷上云的带宽，单位为MB</p>
                     * @param _bandwidth <p>敏捷上云的带宽，单位为MB</p>
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取<p>联系电话</p>
                     * @return Telephone <p>联系电话</p>
                     * 
                     */
                    std::string GetTelephone() const;

                    /**
                     * 设置<p>联系电话</p>
                     * @param _telephone <p>联系电话</p>
                     * 
                     */
                    void SetTelephone(const std::string& _telephone);

                    /**
                     * 判断参数 Telephone 是否已赋值
                     * @return Telephone 是否已赋值
                     * 
                     */
                    bool TelephoneHasBeenSet() const;

                    /**
                     * 获取<p>备注信息</p>
                     * @return Remarks <p>备注信息</p>
                     * 
                     */
                    std::string GetRemarks() const;

                    /**
                     * 设置<p>备注信息</p>
                     * @param _remarks <p>备注信息</p>
                     * 
                     */
                    void SetRemarks(const std::string& _remarks);

                    /**
                     * 判断参数 Remarks 是否已赋值
                     * @return Remarks 是否已赋值
                     * 
                     */
                    bool RemarksHasBeenSet() const;

                    /**
                     * 获取<p>接入地域</p>
                     * @return ArRegion <p>接入地域</p>
                     * 
                     */
                    std::string GetArRegion() const;

                    /**
                     * 设置<p>接入地域</p>
                     * @param _arRegion <p>接入地域</p>
                     * 
                     */
                    void SetArRegion(const std::string& _arRegion);

                    /**
                     * 判断参数 ArRegion 是否已赋值
                     * @return ArRegion 是否已赋值
                     * 
                     */
                    bool ArRegionHasBeenSet() const;

                    /**
                     * 获取<p>IDC侧类型，默认为OTHER。枚举值：CLOUD-云，ISP-运营商，OTHER-第三方</p>
                     * @return IdcPointType <p>IDC侧类型，默认为OTHER。枚举值：CLOUD-云，ISP-运营商，OTHER-第三方</p>
                     * 
                     */
                    std::string GetIdcPointType() const;

                    /**
                     * 设置<p>IDC侧类型，默认为OTHER。枚举值：CLOUD-云，ISP-运营商，OTHER-第三方</p>
                     * @param _idcPointType <p>IDC侧类型，默认为OTHER。枚举值：CLOUD-云，ISP-运营商，OTHER-第三方</p>
                     * 
                     */
                    void SetIdcPointType(const std::string& _idcPointType);

                    /**
                     * 判断参数 IdcPointType 是否已赋值
                     * @return IdcPointType 是否已赋值
                     * 
                     */
                    bool IdcPointTypeHasBeenSet() const;

                    /**
                     * 获取<p>运营商链路是否有保护</p>
                     * @return BIapLinkProtected <p>运营商链路是否有保护</p>
                     * 
                     */
                    bool GetBIapLinkProtected() const;

                    /**
                     * 设置<p>运营商链路是否有保护</p>
                     * @param _bIapLinkProtected <p>运营商链路是否有保护</p>
                     * 
                     */
                    void SetBIapLinkProtected(const bool& _bIapLinkProtected);

                    /**
                     * 判断参数 BIapLinkProtected 是否已赋值
                     * @return BIapLinkProtected 是否已赋值
                     * 
                     */
                    bool BIapLinkProtectedHasBeenSet() const;

                    /**
                     * 获取<p>服务类型，SHARE-共享型，EXCLUSIVE-独占型</p>
                     * @return ServiceType <p>服务类型，SHARE-共享型，EXCLUSIVE-独占型</p>
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置<p>服务类型，SHARE-共享型，EXCLUSIVE-独占型</p>
                     * @param _serviceType <p>服务类型，SHARE-共享型，EXCLUSIVE-独占型</p>
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                private:

                    /**
                     * <p>敏捷上云名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>需要接入敏捷上云的IDC的地址</p>
                     */
                    std::string m_idcAddress;
                    bool m_idcAddressHasBeenSet;

                    /**
                     * <p>需要接入敏捷上云的IDC的互联网服务提供商类型</p>
                     */
                    std::string m_idcType;
                    bool m_idcTypeHasBeenSet;

                    /**
                     * <p>敏捷上云的带宽，单位为MB</p>
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * <p>联系电话</p>
                     */
                    std::string m_telephone;
                    bool m_telephoneHasBeenSet;

                    /**
                     * <p>备注信息</p>
                     */
                    std::string m_remarks;
                    bool m_remarksHasBeenSet;

                    /**
                     * <p>接入地域</p>
                     */
                    std::string m_arRegion;
                    bool m_arRegionHasBeenSet;

                    /**
                     * <p>IDC侧类型，默认为OTHER。枚举值：CLOUD-云，ISP-运营商，OTHER-第三方</p>
                     */
                    std::string m_idcPointType;
                    bool m_idcPointTypeHasBeenSet;

                    /**
                     * <p>运营商链路是否有保护</p>
                     */
                    bool m_bIapLinkProtected;
                    bool m_bIapLinkProtectedHasBeenSet;

                    /**
                     * <p>服务类型，SHARE-共享型，EXCLUSIVE-独占型</p>
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_CREATECASINPUT_H_
