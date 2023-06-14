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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_BUSINESSCARDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_BUSINESSCARDOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/BusinessCardInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * BusinessCardOCR返回参数结构体
                */
                class BusinessCardOCRResponse : public AbstractModel
                {
                public:
                    BusinessCardOCRResponse();
                    ~BusinessCardOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取名片识别结果，具体内容请点击左侧链接。
                     * @return BusinessCardInfos 名片识别结果，具体内容请点击左侧链接。
                     * 
                     */
                    std::vector<BusinessCardInfo> GetBusinessCardInfos() const;

                    /**
                     * 判断参数 BusinessCardInfos 是否已赋值
                     * @return BusinessCardInfos 是否已赋值
                     * 
                     */
                    bool BusinessCardInfosHasBeenSet() const;

                    /**
                     * 获取返回图像预处理后的图片，图像预处理未开启时返回内容为空。
                     * @return RetImageBase64 返回图像预处理后的图片，图像预处理未开启时返回内容为空。
                     * 
                     */
                    std::string GetRetImageBase64() const;

                    /**
                     * 判断参数 RetImageBase64 是否已赋值
                     * @return RetImageBase64 是否已赋值
                     * 
                     */
                    bool RetImageBase64HasBeenSet() const;

                    /**
                     * 获取图片旋转角度（角度制），文本的水平方向为0°；顺时针为正，逆时针为负。点击查看<a href="https://cloud.tencent.com/document/product/866/45139">如何纠正倾斜文本</a>
                     * @return Angle 图片旋转角度（角度制），文本的水平方向为0°；顺时针为正，逆时针为负。点击查看<a href="https://cloud.tencent.com/document/product/866/45139">如何纠正倾斜文本</a>
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
                     * 名片识别结果，具体内容请点击左侧链接。
                     */
                    std::vector<BusinessCardInfo> m_businessCardInfos;
                    bool m_businessCardInfosHasBeenSet;

                    /**
                     * 返回图像预处理后的图片，图像预处理未开启时返回内容为空。
                     */
                    std::string m_retImageBase64;
                    bool m_retImageBase64HasBeenSet;

                    /**
                     * 图片旋转角度（角度制），文本的水平方向为0°；顺时针为正，逆时针为负。点击查看<a href="https://cloud.tencent.com/document/product/866/45139">如何纠正倾斜文本</a>
                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_BUSINESSCARDOCRRESPONSE_H_
