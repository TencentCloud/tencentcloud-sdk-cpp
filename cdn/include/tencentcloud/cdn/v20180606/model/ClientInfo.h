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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CLIENTINFO_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CLIENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 客户端信息
                */
                class ClientInfo : public AbstractModel
                {
                public:
                    ClientInfo();
                    ~ClientInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取省份。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProvName 省份。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProvName() const;

                    /**
                     * 设置省份。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _provName 省份。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProvName(const std::string& _provName);

                    /**
                     * 判断参数 ProvName 是否已赋值
                     * @return ProvName 是否已赋值
                     * 
                     */
                    bool ProvNameHasBeenSet() const;

                    /**
                     * 获取国家。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Country 国家。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置国家。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _country 国家。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取运营商。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IspName 运营商。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIspName() const;

                    /**
                     * 设置运营商。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ispName 运营商。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIspName(const std::string& _ispName);

                    /**
                     * 判断参数 IspName 是否已赋值
                     * @return IspName 是否已赋值
                     * 
                     */
                    bool IspNameHasBeenSet() const;

                    /**
                     * 获取客户端IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ip 客户端IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置客户端IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ip 客户端IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                private:

                    /**
                     * 省份。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_provName;
                    bool m_provNameHasBeenSet;

                    /**
                     * 国家。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 运营商。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ispName;
                    bool m_ispNameHasBeenSet;

                    /**
                     * 客户端IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CLIENTINFO_H_
