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
                     * 获取敏捷上云名称
                     * @return Name 敏捷上云名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置敏捷上云名称
                     * @param _name 敏捷上云名称
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
                     * 获取需要接入敏捷上云的IDC的地址
                     * @return IdcAddress 需要接入敏捷上云的IDC的地址
                     * 
                     */
                    std::string GetIdcAddress() const;

                    /**
                     * 设置需要接入敏捷上云的IDC的地址
                     * @param _idcAddress 需要接入敏捷上云的IDC的地址
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
                     * 获取需要接入敏捷上云的IDC的互联网服务提供商类型
                     * @return IdcType 需要接入敏捷上云的IDC的互联网服务提供商类型
                     * 
                     */
                    std::string GetIdcType() const;

                    /**
                     * 设置需要接入敏捷上云的IDC的互联网服务提供商类型
                     * @param _idcType 需要接入敏捷上云的IDC的互联网服务提供商类型
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
                     * 获取敏捷上云的带宽，单位为MB
                     * @return Bandwidth 敏捷上云的带宽，单位为MB
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置敏捷上云的带宽，单位为MB
                     * @param _bandwidth 敏捷上云的带宽，单位为MB
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
                     * 获取联系电话
                     * @return Telephone 联系电话
                     * 
                     */
                    std::string GetTelephone() const;

                    /**
                     * 设置联系电话
                     * @param _telephone 联系电话
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
                     * 获取备注信息
                     * @return Remarks 备注信息
                     * 
                     */
                    std::string GetRemarks() const;

                    /**
                     * 设置备注信息
                     * @param _remarks 备注信息
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
                     * 获取接入地域
                     * @return ArRegion 接入地域
                     * 
                     */
                    std::string GetArRegion() const;

                    /**
                     * 设置接入地域
                     * @param _arRegion 接入地域
                     * 
                     */
                    void SetArRegion(const std::string& _arRegion);

                    /**
                     * 判断参数 ArRegion 是否已赋值
                     * @return ArRegion 是否已赋值
                     * 
                     */
                    bool ArRegionHasBeenSet() const;

                private:

                    /**
                     * 敏捷上云名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 需要接入敏捷上云的IDC的地址
                     */
                    std::string m_idcAddress;
                    bool m_idcAddressHasBeenSet;

                    /**
                     * 需要接入敏捷上云的IDC的互联网服务提供商类型
                     */
                    std::string m_idcType;
                    bool m_idcTypeHasBeenSet;

                    /**
                     * 敏捷上云的带宽，单位为MB
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 联系电话
                     */
                    std::string m_telephone;
                    bool m_telephoneHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_remarks;
                    bool m_remarksHasBeenSet;

                    /**
                     * 接入地域
                     */
                    std::string m_arRegion;
                    bool m_arRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_CREATECASINPUT_H_
