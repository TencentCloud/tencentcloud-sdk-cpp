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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ENTERPRISELICENSEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ENTERPRISELICENSEOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/EnterpriseLicenseInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * EnterpriseLicenseOCR返回参数结构体
                */
                class EnterpriseLicenseOCRResponse : public AbstractModel
                {
                public:
                    EnterpriseLicenseOCRResponse();
                    ~EnterpriseLicenseOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取企业证照识别结果，具体内容请点击左侧链接。
                     * @return EnterpriseLicenseInfos 企业证照识别结果，具体内容请点击左侧链接。
                     * 
                     */
                    std::vector<EnterpriseLicenseInfo> GetEnterpriseLicenseInfos() const;

                    /**
                     * 判断参数 EnterpriseLicenseInfos 是否已赋值
                     * @return EnterpriseLicenseInfos 是否已赋值
                     * 
                     */
                    bool EnterpriseLicenseInfosHasBeenSet() const;

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
                     * 企业证照识别结果，具体内容请点击左侧链接。
                     */
                    std::vector<EnterpriseLicenseInfo> m_enterpriseLicenseInfos;
                    bool m_enterpriseLicenseInfosHasBeenSet;

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

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ENTERPRISELICENSEOCRRESPONSE_H_
