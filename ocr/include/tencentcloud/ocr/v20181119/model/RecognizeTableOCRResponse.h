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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETABLEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETABLEOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/TableDetectInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizeTableOCR返回参数结构体
                */
                class RecognizeTableOCRResponse : public AbstractModel
                {
                public:
                    RecognizeTableOCRResponse();
                    ~RecognizeTableOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取检测到的文本信息，具体内容请点击左侧链接。
                     * @return TableDetections 检测到的文本信息，具体内容请点击左侧链接。
                     * 
                     */
                    std::vector<TableDetectInfo> GetTableDetections() const;

                    /**
                     * 判断参数 TableDetections 是否已赋值
                     * @return TableDetections 是否已赋值
                     * 
                     */
                    bool TableDetectionsHasBeenSet() const;

                    /**
                     * 获取Base64 编码后的 Excel 数据。
                     * @return Data Base64 编码后的 Excel 数据。
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取图片为PDF时，返回PDF的总页数，默认为0
                     * @return PdfPageSize 图片为PDF时，返回PDF的总页数，默认为0
                     * 
                     */
                    int64_t GetPdfPageSize() const;

                    /**
                     * 判断参数 PdfPageSize 是否已赋值
                     * @return PdfPageSize 是否已赋值
                     * 
                     */
                    bool PdfPageSizeHasBeenSet() const;

                    /**
                     * 获取图片旋转角度（角度制），文本的水平方向为0°，统一以逆时针方向旋转，逆时针为负，角度范围为-360°至0°。
                     * @return Angle 图片旋转角度（角度制），文本的水平方向为0°，统一以逆时针方向旋转，逆时针为负，角度范围为-360°至0°。
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
                     * 检测到的文本信息，具体内容请点击左侧链接。
                     */
                    std::vector<TableDetectInfo> m_tableDetections;
                    bool m_tableDetectionsHasBeenSet;

                    /**
                     * Base64 编码后的 Excel 数据。
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 图片为PDF时，返回PDF的总页数，默认为0
                     */
                    int64_t m_pdfPageSize;
                    bool m_pdfPageSizeHasBeenSet;

                    /**
                     * 图片旋转角度（角度制），文本的水平方向为0°，统一以逆时针方向旋转，逆时针为负，角度范围为-360°至0°。
                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETABLEOCRRESPONSE_H_
