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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_DOMAINCONTROLDETAIL_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_DOMAINCONTROLDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * 域名控制策略详情
                */
                class DomainControlDetail : public AbstractModel
                {
                public:
                    DomainControlDetail();
                    ~DomainControlDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置域名
                     * @return Domain 配置域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置配置域名
                     * @param _domain 配置域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取此参数必填，新版本无异议，请求包和回包强制填写空字符串,做校验
                     * @return Address 此参数必填，新版本无异议，请求包和回包强制填写空字符串,做校验
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置此参数必填，新版本无异议，请求包和回包强制填写空字符串,做校验
                     * @param _address 此参数必填，新版本无异议，请求包和回包强制填写空字符串,做校验
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 配置域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 此参数必填，新版本无异议，请求包和回包强制填写空字符串,做校验
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_DOMAINCONTROLDETAIL_H_
