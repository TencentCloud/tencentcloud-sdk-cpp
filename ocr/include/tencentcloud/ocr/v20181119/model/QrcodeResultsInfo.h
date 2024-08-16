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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_QRCODERESULTSINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_QRCODERESULTSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/QrcodePositionObj.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 二维码/条形码识别结果信息
                */
                class QrcodeResultsInfo : public AbstractModel
                {
                public:
                    QrcodeResultsInfo();
                    ~QrcodeResultsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型包括
二维码：QR_CODE
一维码：EAN-13、EAN-8、EAN-2、UPC-A、UPC-E、CODE-39、CODE-93、CODE-128 
PDF：PDF_417
DataMatrix：DATA_MATRIX
小程序码：WX_CODE
                     * @return TypeName 类型包括
二维码：QR_CODE
一维码：EAN-13、EAN-8、EAN-2、UPC-A、UPC-E、CODE-39、CODE-93、CODE-128 
PDF：PDF_417
DataMatrix：DATA_MATRIX
小程序码：WX_CODE
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置类型包括
二维码：QR_CODE
一维码：EAN-13、EAN-8、EAN-2、UPC-A、UPC-E、CODE-39、CODE-93、CODE-128 
PDF：PDF_417
DataMatrix：DATA_MATRIX
小程序码：WX_CODE
                     * @param _typeName 类型包括
二维码：QR_CODE
一维码：EAN-13、EAN-8、EAN-2、UPC-A、UPC-E、CODE-39、CODE-93、CODE-128 
PDF：PDF_417
DataMatrix：DATA_MATRIX
小程序码：WX_CODE
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取二维码/条形码包含的地址
                     * @return Url 二维码/条形码包含的地址
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置二维码/条形码包含的地址
                     * @param _url 二维码/条形码包含的地址
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取二维码/条形码坐标
                     * @return Position 二维码/条形码坐标
                     * 
                     */
                    QrcodePositionObj GetPosition() const;

                    /**
                     * 设置二维码/条形码坐标
                     * @param _position 二维码/条形码坐标
                     * 
                     */
                    void SetPosition(const QrcodePositionObj& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                private:

                    /**
                     * 类型包括
二维码：QR_CODE
一维码：EAN-13、EAN-8、EAN-2、UPC-A、UPC-E、CODE-39、CODE-93、CODE-128 
PDF：PDF_417
DataMatrix：DATA_MATRIX
小程序码：WX_CODE
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * 二维码/条形码包含的地址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 二维码/条形码坐标
                     */
                    QrcodePositionObj m_position;
                    bool m_positionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_QRCODERESULTSINFO_H_
