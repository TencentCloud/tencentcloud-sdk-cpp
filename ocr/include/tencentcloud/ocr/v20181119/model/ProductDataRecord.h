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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_PRODUCTDATARECORD_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_PRODUCTDATARECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 商品码信息
                */
                class ProductDataRecord : public AbstractModel
                {
                public:
                    ProductDataRecord();
                    ~ProductDataRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品名称
                     * @return ProductName 产品名称
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
                     * @param ProductName 产品名称
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取产品名称(英文)
                     * @return EnName 产品名称(英文)
                     */
                    std::string GetEnName() const;

                    /**
                     * 设置产品名称(英文)
                     * @param EnName 产品名称(英文)
                     */
                    void SetEnName(const std::string& _enName);

                    /**
                     * 判断参数 EnName 是否已赋值
                     * @return EnName 是否已赋值
                     */
                    bool EnNameHasBeenSet() const;

                    /**
                     * 获取品牌名称
                     * @return BrandName 品牌名称
                     */
                    std::string GetBrandName() const;

                    /**
                     * 设置品牌名称
                     * @param BrandName 品牌名称
                     */
                    void SetBrandName(const std::string& _brandName);

                    /**
                     * 判断参数 BrandName 是否已赋值
                     * @return BrandName 是否已赋值
                     */
                    bool BrandNameHasBeenSet() const;

                    /**
                     * 获取规格型号
                     * @return Type 规格型号
                     */
                    std::string GetType() const;

                    /**
                     * 设置规格型号
                     * @param Type 规格型号
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取宽度，单位毫米
                     * @return Width 宽度，单位毫米
                     */
                    std::string GetWidth() const;

                    /**
                     * 设置宽度，单位毫米
                     * @param Width 宽度，单位毫米
                     */
                    void SetWidth(const std::string& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取高度，单位毫米
                     * @return Height 高度，单位毫米
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置高度，单位毫米
                     * @param Height 高度，单位毫米
                     */
                    void SetHeight(const std::string& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取深度，单位毫米
                     * @return Depth 深度，单位毫米
                     */
                    std::string GetDepth() const;

                    /**
                     * 设置深度，单位毫米
                     * @param Depth 深度，单位毫米
                     */
                    void SetDepth(const std::string& _depth);

                    /**
                     * 判断参数 Depth 是否已赋值
                     * @return Depth 是否已赋值
                     */
                    bool DepthHasBeenSet() const;

                    /**
                     * 获取关键字
                     * @return KeyWord 关键字
                     */
                    std::string GetKeyWord() const;

                    /**
                     * 设置关键字
                     * @param KeyWord 关键字
                     */
                    void SetKeyWord(const std::string& _keyWord);

                    /**
                     * 判断参数 KeyWord 是否已赋值
                     * @return KeyWord 是否已赋值
                     */
                    bool KeyWordHasBeenSet() const;

                    /**
                     * 获取简短描述
                     * @return Description 简短描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置简短描述
                     * @param Description 简短描述
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取图片链接
                     * @return ImageLink 图片链接
                     */
                    std::vector<std::string> GetImageLink() const;

                    /**
                     * 设置图片链接
                     * @param ImageLink 图片链接
                     */
                    void SetImageLink(const std::vector<std::string>& _imageLink);

                    /**
                     * 判断参数 ImageLink 是否已赋值
                     * @return ImageLink 是否已赋值
                     */
                    bool ImageLinkHasBeenSet() const;

                    /**
                     * 获取厂家名称
                     * @return ManufacturerName 厂家名称
                     */
                    std::string GetManufacturerName() const;

                    /**
                     * 设置厂家名称
                     * @param ManufacturerName 厂家名称
                     */
                    void SetManufacturerName(const std::string& _manufacturerName);

                    /**
                     * 判断参数 ManufacturerName 是否已赋值
                     * @return ManufacturerName 是否已赋值
                     */
                    bool ManufacturerNameHasBeenSet() const;

                    /**
                     * 获取厂家地址
                     * @return ManufacturerAddress 厂家地址
                     */
                    std::string GetManufacturerAddress() const;

                    /**
                     * 设置厂家地址
                     * @param ManufacturerAddress 厂家地址
                     */
                    void SetManufacturerAddress(const std::string& _manufacturerAddress);

                    /**
                     * 判断参数 ManufacturerAddress 是否已赋值
                     * @return ManufacturerAddress 是否已赋值
                     */
                    bool ManufacturerAddressHasBeenSet() const;

                    /**
                     * 获取企业社会信用代码
                     * @return FirmCode 企业社会信用代码
                     */
                    std::string GetFirmCode() const;

                    /**
                     * 设置企业社会信用代码
                     * @param FirmCode 企业社会信用代码
                     */
                    void SetFirmCode(const std::string& _firmCode);

                    /**
                     * 判断参数 FirmCode 是否已赋值
                     * @return FirmCode 是否已赋值
                     */
                    bool FirmCodeHasBeenSet() const;

                    /**
                     * 获取表示数据查询状态
checkResult	状态说明
1	 经查，该商品条码已在中国物品编码中心注册
2	经查，该厂商识别代码已在中国物品编码中心注册，但编码信息未按规定通报。
3	经查，该厂商识别代码已于xxxxx注销，请关注产品生产日期。
4	经查，该企业以及条码未经条码中心注册，属于违法使用
-1	经查，该商品条码被冒用
-2	经查，该厂商识别代码已在中国物品编码中心注册，但该产品已经下市
S001                未找到该厂商识别代码的注册信息。
S002		该厂商识别代码已经在GS1注册，但编码信息未通报
S003		该商品条码已在GS1通报
S004		该商品条码已注销
S005		数字不正确。GS1前缀（3位国家/地区代码）用于特殊用途。
E001		完整性失败：此GTIN的长度无效。
E002		完整性失败：校验位不正确。
E003		完整性失败：字符串包含字母数字字符。
E004		数字不正确。GS1前缀（3位国家/地区代码）不存在。
E005		数字不正确。GS1前缀（3位国家/地区代码）用于特殊用途。
E006		数字不正确。尚未分配该GS1公司前缀。
E008	        经查，该企业厂商识别代码以及条码尚未通报
                     * @return CheckResult 表示数据查询状态
checkResult	状态说明
1	 经查，该商品条码已在中国物品编码中心注册
2	经查，该厂商识别代码已在中国物品编码中心注册，但编码信息未按规定通报。
3	经查，该厂商识别代码已于xxxxx注销，请关注产品生产日期。
4	经查，该企业以及条码未经条码中心注册，属于违法使用
-1	经查，该商品条码被冒用
-2	经查，该厂商识别代码已在中国物品编码中心注册，但该产品已经下市
S001                未找到该厂商识别代码的注册信息。
S002		该厂商识别代码已经在GS1注册，但编码信息未通报
S003		该商品条码已在GS1通报
S004		该商品条码已注销
S005		数字不正确。GS1前缀（3位国家/地区代码）用于特殊用途。
E001		完整性失败：此GTIN的长度无效。
E002		完整性失败：校验位不正确。
E003		完整性失败：字符串包含字母数字字符。
E004		数字不正确。GS1前缀（3位国家/地区代码）不存在。
E005		数字不正确。GS1前缀（3位国家/地区代码）用于特殊用途。
E006		数字不正确。尚未分配该GS1公司前缀。
E008	        经查，该企业厂商识别代码以及条码尚未通报
                     */
                    std::string GetCheckResult() const;

                    /**
                     * 设置表示数据查询状态
checkResult	状态说明
1	 经查，该商品条码已在中国物品编码中心注册
2	经查，该厂商识别代码已在中国物品编码中心注册，但编码信息未按规定通报。
3	经查，该厂商识别代码已于xxxxx注销，请关注产品生产日期。
4	经查，该企业以及条码未经条码中心注册，属于违法使用
-1	经查，该商品条码被冒用
-2	经查，该厂商识别代码已在中国物品编码中心注册，但该产品已经下市
S001                未找到该厂商识别代码的注册信息。
S002		该厂商识别代码已经在GS1注册，但编码信息未通报
S003		该商品条码已在GS1通报
S004		该商品条码已注销
S005		数字不正确。GS1前缀（3位国家/地区代码）用于特殊用途。
E001		完整性失败：此GTIN的长度无效。
E002		完整性失败：校验位不正确。
E003		完整性失败：字符串包含字母数字字符。
E004		数字不正确。GS1前缀（3位国家/地区代码）不存在。
E005		数字不正确。GS1前缀（3位国家/地区代码）用于特殊用途。
E006		数字不正确。尚未分配该GS1公司前缀。
E008	        经查，该企业厂商识别代码以及条码尚未通报
                     * @param CheckResult 表示数据查询状态
checkResult	状态说明
1	 经查，该商品条码已在中国物品编码中心注册
2	经查，该厂商识别代码已在中国物品编码中心注册，但编码信息未按规定通报。
3	经查，该厂商识别代码已于xxxxx注销，请关注产品生产日期。
4	经查，该企业以及条码未经条码中心注册，属于违法使用
-1	经查，该商品条码被冒用
-2	经查，该厂商识别代码已在中国物品编码中心注册，但该产品已经下市
S001                未找到该厂商识别代码的注册信息。
S002		该厂商识别代码已经在GS1注册，但编码信息未通报
S003		该商品条码已在GS1通报
S004		该商品条码已注销
S005		数字不正确。GS1前缀（3位国家/地区代码）用于特殊用途。
E001		完整性失败：此GTIN的长度无效。
E002		完整性失败：校验位不正确。
E003		完整性失败：字符串包含字母数字字符。
E004		数字不正确。GS1前缀（3位国家/地区代码）不存在。
E005		数字不正确。GS1前缀（3位国家/地区代码）用于特殊用途。
E006		数字不正确。尚未分配该GS1公司前缀。
E008	        经查，该企业厂商识别代码以及条码尚未通报
                     */
                    void SetCheckResult(const std::string& _checkResult);

                    /**
                     * 判断参数 CheckResult 是否已赋值
                     * @return CheckResult 是否已赋值
                     */
                    bool CheckResultHasBeenSet() const;

                    /**
                     * 获取UNSPSC分类码
                     * @return CategoryCode UNSPSC分类码
                     */
                    std::string GetCategoryCode() const;

                    /**
                     * 设置UNSPSC分类码
                     * @param CategoryCode UNSPSC分类码
                     */
                    void SetCategoryCode(const std::string& _categoryCode);

                    /**
                     * 判断参数 CategoryCode 是否已赋值
                     * @return CategoryCode 是否已赋值
                     */
                    bool CategoryCodeHasBeenSet() const;

                private:

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 产品名称(英文)
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                    /**
                     * 品牌名称
                     */
                    std::string m_brandName;
                    bool m_brandNameHasBeenSet;

                    /**
                     * 规格型号
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 宽度，单位毫米
                     */
                    std::string m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 高度，单位毫米
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 深度，单位毫米
                     */
                    std::string m_depth;
                    bool m_depthHasBeenSet;

                    /**
                     * 关键字
                     */
                    std::string m_keyWord;
                    bool m_keyWordHasBeenSet;

                    /**
                     * 简短描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 图片链接
                     */
                    std::vector<std::string> m_imageLink;
                    bool m_imageLinkHasBeenSet;

                    /**
                     * 厂家名称
                     */
                    std::string m_manufacturerName;
                    bool m_manufacturerNameHasBeenSet;

                    /**
                     * 厂家地址
                     */
                    std::string m_manufacturerAddress;
                    bool m_manufacturerAddressHasBeenSet;

                    /**
                     * 企业社会信用代码
                     */
                    std::string m_firmCode;
                    bool m_firmCodeHasBeenSet;

                    /**
                     * 表示数据查询状态
checkResult	状态说明
1	 经查，该商品条码已在中国物品编码中心注册
2	经查，该厂商识别代码已在中国物品编码中心注册，但编码信息未按规定通报。
3	经查，该厂商识别代码已于xxxxx注销，请关注产品生产日期。
4	经查，该企业以及条码未经条码中心注册，属于违法使用
-1	经查，该商品条码被冒用
-2	经查，该厂商识别代码已在中国物品编码中心注册，但该产品已经下市
S001                未找到该厂商识别代码的注册信息。
S002		该厂商识别代码已经在GS1注册，但编码信息未通报
S003		该商品条码已在GS1通报
S004		该商品条码已注销
S005		数字不正确。GS1前缀（3位国家/地区代码）用于特殊用途。
E001		完整性失败：此GTIN的长度无效。
E002		完整性失败：校验位不正确。
E003		完整性失败：字符串包含字母数字字符。
E004		数字不正确。GS1前缀（3位国家/地区代码）不存在。
E005		数字不正确。GS1前缀（3位国家/地区代码）用于特殊用途。
E006		数字不正确。尚未分配该GS1公司前缀。
E008	        经查，该企业厂商识别代码以及条码尚未通报
                     */
                    std::string m_checkResult;
                    bool m_checkResultHasBeenSet;

                    /**
                     * UNSPSC分类码
                     */
                    std::string m_categoryCode;
                    bool m_categoryCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_PRODUCTDATARECORD_H_
