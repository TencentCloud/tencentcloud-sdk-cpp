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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_PROPOWNERCERTOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_PROPOWNERCERTOCRRESPONSE_H_

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
                * PropOwnerCertOCR返回参数结构体
                */
                class PropOwnerCertOCRResponse : public AbstractModel
                {
                public:
                    PropOwnerCertOCRResponse();
                    ~PropOwnerCertOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取房地产权利人
                     * @return Owner 房地产权利人
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取共有情况
                     * @return Possession 共有情况
                     * 
                     */
                    std::string GetPossession() const;

                    /**
                     * 判断参数 Possession 是否已赋值
                     * @return Possession 是否已赋值
                     * 
                     */
                    bool PossessionHasBeenSet() const;

                    /**
                     * 获取登记时间
                     * @return RegisterTime 登记时间
                     * 
                     */
                    std::string GetRegisterTime() const;

                    /**
                     * 判断参数 RegisterTime 是否已赋值
                     * @return RegisterTime 是否已赋值
                     * 
                     */
                    bool RegisterTimeHasBeenSet() const;

                    /**
                     * 获取规划用途
                     * @return Purpose 规划用途
                     * 
                     */
                    std::string GetPurpose() const;

                    /**
                     * 判断参数 Purpose 是否已赋值
                     * @return Purpose 是否已赋值
                     * 
                     */
                    bool PurposeHasBeenSet() const;

                    /**
                     * 获取房屋性质
                     * @return Nature 房屋性质
                     * 
                     */
                    std::string GetNature() const;

                    /**
                     * 判断参数 Nature 是否已赋值
                     * @return Nature 是否已赋值
                     * 
                     */
                    bool NatureHasBeenSet() const;

                    /**
                     * 获取房地坐落
                     * @return Location 房地坐落
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                private:

                    /**
                     * 房地产权利人
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 共有情况
                     */
                    std::string m_possession;
                    bool m_possessionHasBeenSet;

                    /**
                     * 登记时间
                     */
                    std::string m_registerTime;
                    bool m_registerTimeHasBeenSet;

                    /**
                     * 规划用途
                     */
                    std::string m_purpose;
                    bool m_purposeHasBeenSet;

                    /**
                     * 房屋性质
                     */
                    std::string m_nature;
                    bool m_natureHasBeenSet;

                    /**
                     * 房地坐落
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_PROPOWNERCERTOCRRESPONSE_H_
