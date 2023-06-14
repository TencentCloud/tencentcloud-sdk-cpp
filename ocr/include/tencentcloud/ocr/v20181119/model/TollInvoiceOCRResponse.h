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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TOLLINVOICEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TOLLINVOICEOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/TollInvoiceInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * TollInvoiceOCR返回参数结构体
                */
                class TollInvoiceOCRResponse : public AbstractModel
                {
                public:
                    TollInvoiceOCRResponse();
                    ~TollInvoiceOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取过路过桥费发票识别结果，具体内容请点击左侧链接。
                     * @return TollInvoiceInfos 过路过桥费发票识别结果，具体内容请点击左侧链接。
                     * 
                     */
                    std::vector<TollInvoiceInfo> GetTollInvoiceInfos() const;

                    /**
                     * 判断参数 TollInvoiceInfos 是否已赋值
                     * @return TollInvoiceInfos 是否已赋值
                     * 
                     */
                    bool TollInvoiceInfosHasBeenSet() const;

                    /**
                     * 获取图片旋转角度（角度制），文本的水平方向为0°，顺时针为正，逆时针为负。
                     * @return Angle 图片旋转角度（角度制），文本的水平方向为0°，顺时针为正，逆时针为负。
                     * 
                     */
                    double GetAngle() const;

                    /**
                     * 判断参数 Angle 是否已赋值
                     * @return Angle 是否已赋值
                     * 
                     */
                    bool AngleHasBeenSet() const;

                private:

                    /**
                     * 过路过桥费发票识别结果，具体内容请点击左侧链接。
                     */
                    std::vector<TollInvoiceInfo> m_tollInvoiceInfos;
                    bool m_tollInvoiceInfosHasBeenSet;

                    /**
                     * 图片旋转角度（角度制），文本的水平方向为0°，顺时针为正，逆时针为负。
                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TOLLINVOICEOCRRESPONSE_H_
