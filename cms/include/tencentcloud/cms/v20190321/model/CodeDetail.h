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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_CODEDETAIL_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_CODEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cms/v20190321/model/CodePosition.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 从图片中检测到的二维码，可能为多个
                */
                class CodeDetail : public AbstractModel
                {
                public:
                    CodeDetail();
                    ~CodeDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取二维码文本的编码格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrCharset 二维码文本的编码格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStrCharset() const;

                    /**
                     * 设置二维码文本的编码格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strCharset 二维码文本的编码格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrCharset(const std::string& _strCharset);

                    /**
                     * 判断参数 StrCharset 是否已赋值
                     * @return StrCharset 是否已赋值
                     * 
                     */
                    bool StrCharsetHasBeenSet() const;

                    /**
                     * 获取二维码在图片中的位置，由边界点的坐标表示
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QrCodePosition 二维码在图片中的位置，由边界点的坐标表示
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CodePosition> GetQrCodePosition() const;

                    /**
                     * 设置二维码在图片中的位置，由边界点的坐标表示
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qrCodePosition 二维码在图片中的位置，由边界点的坐标表示
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQrCodePosition(const std::vector<CodePosition>& _qrCodePosition);

                    /**
                     * 判断参数 QrCodePosition 是否已赋值
                     * @return QrCodePosition 是否已赋值
                     * 
                     */
                    bool QrCodePositionHasBeenSet() const;

                    /**
                     * 获取二维码的文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrQrCodeText 二维码的文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStrQrCodeText() const;

                    /**
                     * 设置二维码的文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strQrCodeText 二维码的文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrQrCodeText(const std::string& _strQrCodeText);

                    /**
                     * 判断参数 StrQrCodeText 是否已赋值
                     * @return StrQrCodeText 是否已赋值
                     * 
                     */
                    bool StrQrCodeTextHasBeenSet() const;

                    /**
                     * 获取二维码的类型：1:ONED_BARCODE，2:QRCOD，3:WXCODE，4:PDF417，5:DATAMATRIX
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uint32QrCodeType 二维码的类型：1:ONED_BARCODE，2:QRCOD，3:WXCODE，4:PDF417，5:DATAMATRIX
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUint32QrCodeType() const;

                    /**
                     * 设置二维码的类型：1:ONED_BARCODE，2:QRCOD，3:WXCODE，4:PDF417，5:DATAMATRIX
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uint32QrCodeType 二维码的类型：1:ONED_BARCODE，2:QRCOD，3:WXCODE，4:PDF417，5:DATAMATRIX
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUint32QrCodeType(const int64_t& _uint32QrCodeType);

                    /**
                     * 判断参数 Uint32QrCodeType 是否已赋值
                     * @return Uint32QrCodeType 是否已赋值
                     * 
                     */
                    bool Uint32QrCodeTypeHasBeenSet() const;

                    /**
                     * 获取二维码文本的编码格式（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeCharset 二维码文本的编码格式（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCodeCharset() const;

                    /**
                     * 设置二维码文本的编码格式（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codeCharset 二维码文本的编码格式（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCodeCharset(const std::string& _codeCharset);

                    /**
                     * 判断参数 CodeCharset 是否已赋值
                     * @return CodeCharset 是否已赋值
                     * 
                     */
                    bool CodeCharsetHasBeenSet() const;

                    /**
                     * 获取二维码在图片中的位置，由边界点的坐标表示（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodePosition 二维码在图片中的位置，由边界点的坐标表示（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CodePosition> GetCodePosition() const;

                    /**
                     * 设置二维码在图片中的位置，由边界点的坐标表示（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codePosition 二维码在图片中的位置，由边界点的坐标表示（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCodePosition(const std::vector<CodePosition>& _codePosition);

                    /**
                     * 判断参数 CodePosition 是否已赋值
                     * @return CodePosition 是否已赋值
                     * 
                     */
                    bool CodePositionHasBeenSet() const;

                    /**
                     * 获取二维码的文本内容（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeText 二维码的文本内容（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCodeText() const;

                    /**
                     * 设置二维码的文本内容（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codeText 二维码的文本内容（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCodeText(const std::string& _codeText);

                    /**
                     * 判断参数 CodeText 是否已赋值
                     * @return CodeText 是否已赋值
                     * 
                     */
                    bool CodeTextHasBeenSet() const;

                    /**
                     * 获取二维码的类型：1:ONED_BARCODE，2:QRCOD，3:WXCODE，4:PDF417，5:DATAMATRIX（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeType 二维码的类型：1:ONED_BARCODE，2:QRCOD，3:WXCODE，4:PDF417，5:DATAMATRIX（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCodeType() const;

                    /**
                     * 设置二维码的类型：1:ONED_BARCODE，2:QRCOD，3:WXCODE，4:PDF417，5:DATAMATRIX（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codeType 二维码的类型：1:ONED_BARCODE，2:QRCOD，3:WXCODE，4:PDF417，5:DATAMATRIX（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCodeType(const int64_t& _codeType);

                    /**
                     * 判断参数 CodeType 是否已赋值
                     * @return CodeType 是否已赋值
                     * 
                     */
                    bool CodeTypeHasBeenSet() const;

                private:

                    /**
                     * 二维码文本的编码格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strCharset;
                    bool m_strCharsetHasBeenSet;

                    /**
                     * 二维码在图片中的位置，由边界点的坐标表示
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CodePosition> m_qrCodePosition;
                    bool m_qrCodePositionHasBeenSet;

                    /**
                     * 二维码的文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strQrCodeText;
                    bool m_strQrCodeTextHasBeenSet;

                    /**
                     * 二维码的类型：1:ONED_BARCODE，2:QRCOD，3:WXCODE，4:PDF417，5:DATAMATRIX
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_uint32QrCodeType;
                    bool m_uint32QrCodeTypeHasBeenSet;

                    /**
                     * 二维码文本的编码格式（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codeCharset;
                    bool m_codeCharsetHasBeenSet;

                    /**
                     * 二维码在图片中的位置，由边界点的坐标表示（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CodePosition> m_codePosition;
                    bool m_codePositionHasBeenSet;

                    /**
                     * 二维码的文本内容（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codeText;
                    bool m_codeTextHasBeenSet;

                    /**
                     * 二维码的类型：1:ONED_BARCODE，2:QRCOD，3:WXCODE，4:PDF417，5:DATAMATRIX（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_codeType;
                    bool m_codeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_CODEDETAIL_H_
