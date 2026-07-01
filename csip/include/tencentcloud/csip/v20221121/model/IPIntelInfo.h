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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IPINTELINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IPINTELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DomainInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * IP威胁情报信息（通过TIX IPAnalysis接口获取）
                */
                class IPIntelInfo : public AbstractModel
                {
                public:
                    IPIntelInfo();
                    ~IPIntelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>情报标签（如常规木马、漏洞软件、窃密木马）</p>
                     * @return Tags <p>情报标签（如常规木马、漏洞软件、窃密木马）</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>情报标签（如常规木马、漏洞软件、窃密木马）</p>
                     * @param _tags <p>情报标签（如常规木马、漏洞软件、窃密木马）</p>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>研判依据</p>
                     * @return Basis <p>研判依据</p>
                     * 
                     */
                    std::string GetBasis() const;

                    /**
                     * 设置<p>研判依据</p>
                     * @param _basis <p>研判依据</p>
                     * 
                     */
                    void SetBasis(const std::string& _basis);

                    /**
                     * 判断参数 Basis 是否已赋值
                     * @return Basis 是否已赋值
                     * 
                     */
                    bool BasisHasBeenSet() const;

                    /**
                     * 获取<p>所属运营商</p>
                     * @return ISP <p>所属运营商</p>
                     * 
                     */
                    std::string GetISP() const;

                    /**
                     * 设置<p>所属运营商</p>
                     * @param _iSP <p>所属运营商</p>
                     * 
                     */
                    void SetISP(const std::string& _iSP);

                    /**
                     * 判断参数 ISP 是否已赋值
                     * @return ISP 是否已赋值
                     * 
                     */
                    bool ISPHasBeenSet() const;

                    /**
                     * 获取<p>地理位置</p>
                     * @return Location <p>地理位置</p>
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置<p>地理位置</p>
                     * @param _location <p>地理位置</p>
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取<p>家族团伙</p>
                     * @return Characteristic <p>家族团伙</p>
                     * 
                     */
                    std::string GetCharacteristic() const;

                    /**
                     * 设置<p>家族团伙</p>
                     * @param _characteristic <p>家族团伙</p>
                     * 
                     */
                    void SetCharacteristic(const std::string& _characteristic);

                    /**
                     * 判断参数 Characteristic 是否已赋值
                     * @return Characteristic 是否已赋值
                     * 
                     */
                    bool CharacteristicHasBeenSet() const;

                    /**
                     * 获取<p>IP画像</p>
                     * @return Purpose <p>IP画像</p>
                     * 
                     */
                    std::string GetPurpose() const;

                    /**
                     * 设置<p>IP画像</p>
                     * @param _purpose <p>IP画像</p>
                     * 
                     */
                    void SetPurpose(const std::string& _purpose);

                    /**
                     * 判断参数 Purpose 是否已赋值
                     * @return Purpose 是否已赋值
                     * 
                     */
                    bool PurposeHasBeenSet() const;

                    /**
                     * 获取<p>反查域名列表</p>
                     * @return Referer <p>反查域名列表</p>
                     * 
                     */
                    std::vector<DomainInfo> GetReferer() const;

                    /**
                     * 设置<p>反查域名列表</p>
                     * @param _referer <p>反查域名列表</p>
                     * 
                     */
                    void SetReferer(const std::vector<DomainInfo>& _referer);

                    /**
                     * 判断参数 Referer 是否已赋值
                     * @return Referer 是否已赋值
                     * 
                     */
                    bool RefererHasBeenSet() const;

                private:

                    /**
                     * <p>情报标签（如常规木马、漏洞软件、窃密木马）</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>研判依据</p>
                     */
                    std::string m_basis;
                    bool m_basisHasBeenSet;

                    /**
                     * <p>所属运营商</p>
                     */
                    std::string m_iSP;
                    bool m_iSPHasBeenSet;

                    /**
                     * <p>地理位置</p>
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * <p>家族团伙</p>
                     */
                    std::string m_characteristic;
                    bool m_characteristicHasBeenSet;

                    /**
                     * <p>IP画像</p>
                     */
                    std::string m_purpose;
                    bool m_purposeHasBeenSet;

                    /**
                     * <p>反查域名列表</p>
                     */
                    std::vector<DomainInfo> m_referer;
                    bool m_refererHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IPINTELINFO_H_
