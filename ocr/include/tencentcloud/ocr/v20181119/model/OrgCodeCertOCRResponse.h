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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ORGCODECERTOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ORGCODECERTOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * OrgCodeCertOCR返回参数结构体
                */
                class OrgCodeCertOCRResponse : public AbstractModel
                {
                public:
                    OrgCodeCertOCRResponse();
                    ~OrgCodeCertOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取代码
                     * @return OrgCode 代码
                     * 
                     */
                    std::string GetOrgCode() const;

                    /**
                     * 判断参数 OrgCode 是否已赋值
                     * @return OrgCode 是否已赋值
                     * 
                     */
                    bool OrgCodeHasBeenSet() const;

                    /**
                     * 获取机构名称
                     * @return Name 机构名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取地址
                     * @return Address 地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取有效期
                     * @return ValidDate 有效期
                     * 
                     */
                    std::string GetValidDate() const;

                    /**
                     * 判断参数 ValidDate 是否已赋值
                     * @return ValidDate 是否已赋值
                     * 
                     */
                    bool ValidDateHasBeenSet() const;

                private:

                    /**
                     * 代码
                     */
                    std::string m_orgCode;
                    bool m_orgCodeHasBeenSet;

                    /**
                     * 机构名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 有效期
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ORGCODECERTOCRRESPONSE_H_
