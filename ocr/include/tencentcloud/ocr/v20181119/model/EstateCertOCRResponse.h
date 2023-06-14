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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ESTATECERTOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ESTATECERTOCRRESPONSE_H_

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
                * EstateCertOCR返回参数结构体
                */
                class EstateCertOCRResponse : public AbstractModel
                {
                public:
                    EstateCertOCRResponse();
                    ~EstateCertOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取权利人
                     * @return Obligee 权利人
                     * 
                     */
                    std::string GetObligee() const;

                    /**
                     * 判断参数 Obligee 是否已赋值
                     * @return Obligee 是否已赋值
                     * 
                     */
                    bool ObligeeHasBeenSet() const;

                    /**
                     * 获取共有情况
                     * @return Ownership 共有情况
                     * 
                     */
                    std::string GetOwnership() const;

                    /**
                     * 判断参数 Ownership 是否已赋值
                     * @return Ownership 是否已赋值
                     * 
                     */
                    bool OwnershipHasBeenSet() const;

                    /**
                     * 获取坐落
                     * @return Location 坐落
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
                     * 获取不动产单元号
                     * @return Unit 不动产单元号
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取权利类型
                     * @return Type 权利类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取权利性质
                     * @return Property 权利性质
                     * 
                     */
                    std::string GetProperty() const;

                    /**
                     * 判断参数 Property 是否已赋值
                     * @return Property 是否已赋值
                     * 
                     */
                    bool PropertyHasBeenSet() const;

                    /**
                     * 获取用途
                     * @return Usage 用途
                     * 
                     */
                    std::string GetUsage() const;

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取面积
                     * @return Area 面积
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取使用期限
                     * @return Term 使用期限
                     * 
                     */
                    std::string GetTerm() const;

                    /**
                     * 判断参数 Term 是否已赋值
                     * @return Term 是否已赋值
                     * 
                     */
                    bool TermHasBeenSet() const;

                    /**
                     * 获取权利其他状况，多行会用换行符\n连接。
                     * @return Other 权利其他状况，多行会用换行符\n连接。
                     * 
                     */
                    std::string GetOther() const;

                    /**
                     * 判断参数 Other 是否已赋值
                     * @return Other 是否已赋值
                     * 
                     */
                    bool OtherHasBeenSet() const;

                    /**
                     * 获取图片旋转角度
                     * @return Angle 图片旋转角度
                     * 
                     */
                    double GetAngle() const;

                    /**
                     * 判断参数 Angle 是否已赋值
                     * @return Angle 是否已赋值
                     * 
                     */
                    bool AngleHasBeenSet() const;

                    /**
                     * 获取不动产权号
                     * @return Number 不动产权号
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                private:

                    /**
                     * 权利人
                     */
                    std::string m_obligee;
                    bool m_obligeeHasBeenSet;

                    /**
                     * 共有情况
                     */
                    std::string m_ownership;
                    bool m_ownershipHasBeenSet;

                    /**
                     * 坐落
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 不动产单元号
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 权利类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 权利性质
                     */
                    std::string m_property;
                    bool m_propertyHasBeenSet;

                    /**
                     * 用途
                     */
                    std::string m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * 面积
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 使用期限
                     */
                    std::string m_term;
                    bool m_termHasBeenSet;

                    /**
                     * 权利其他状况，多行会用换行符\n连接。
                     */
                    std::string m_other;
                    bool m_otherHasBeenSet;

                    /**
                     * 图片旋转角度
                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                    /**
                     * 不动产权号
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ESTATECERTOCRRESPONSE_H_
