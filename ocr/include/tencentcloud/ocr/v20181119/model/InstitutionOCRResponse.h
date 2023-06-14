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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_INSTITUTIONOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_INSTITUTIONOCRRESPONSE_H_

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
                * InstitutionOCR返回参数结构体
                */
                class InstitutionOCRResponse : public AbstractModel
                {
                public:
                    InstitutionOCRResponse();
                    ~InstitutionOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取注册号
                     * @return RegId 注册号
                     * 
                     */
                    std::string GetRegId() const;

                    /**
                     * 判断参数 RegId 是否已赋值
                     * @return RegId 是否已赋值
                     * 
                     */
                    bool RegIdHasBeenSet() const;

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

                    /**
                     * 获取住所
                     * @return Location 住所
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
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
                     * 获取法定代表人
                     * @return LegalPerson 法定代表人
                     * 
                     */
                    std::string GetLegalPerson() const;

                    /**
                     * 判断参数 LegalPerson 是否已赋值
                     * @return LegalPerson 是否已赋值
                     * 
                     */
                    bool LegalPersonHasBeenSet() const;

                private:

                    /**
                     * 注册号
                     */
                    std::string m_regId;
                    bool m_regIdHasBeenSet;

                    /**
                     * 有效期
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

                    /**
                     * 住所
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 法定代表人
                     */
                    std::string m_legalPerson;
                    bool m_legalPersonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_INSTITUTIONOCRRESPONSE_H_
