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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEPRODUCTREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEPRODUCTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * CreateProduct请求参数结构体
                */
                class CreateProductRequest : public AbstractModel
                {
                public:
                    CreateProductRequest();
                    ~CreateProductRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产器型号(APP产品,为APP包名)
                     * @return ProductModel 产器型号(APP产品,为APP包名)
                     * 
                     */
                    std::string GetProductModel() const;

                    /**
                     * 设置产器型号(APP产品,为APP包名)
                     * @param _productModel 产器型号(APP产品,为APP包名)
                     * 
                     */
                    void SetProductModel(const std::string& _productModel);

                    /**
                     * 判断参数 ProductModel 是否已赋值
                     * @return ProductModel 是否已赋值
                     * 
                     */
                    bool ProductModelHasBeenSet() const;

                    /**
                     * 获取产品名称
仅支持中文、英文、数字、下划线，不超过32个字符
                     * @return ProductName 产品名称
仅支持中文、英文、数字、下划线，不超过32个字符
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
仅支持中文、英文、数字、下划线，不超过32个字符
                     * @param _productName 产品名称
仅支持中文、英文、数字、下划线，不超过32个字符
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取产品描述信息
不支持单引号、双引号、退格符、回车符、换行符、制表符、反斜杠、下划线、“%”、“#”、“$”，不超过128字符
                     * @return ProductDescription 产品描述信息
不支持单引号、双引号、退格符、回车符、换行符、制表符、反斜杠、下划线、“%”、“#”、“$”，不超过128字符
                     * 
                     */
                    std::string GetProductDescription() const;

                    /**
                     * 设置产品描述信息
不支持单引号、双引号、退格符、回车符、换行符、制表符、反斜杠、下划线、“%”、“#”、“$”，不超过128字符
                     * @param _productDescription 产品描述信息
不支持单引号、双引号、退格符、回车符、换行符、制表符、反斜杠、下划线、“%”、“#”、“$”，不超过128字符
                     * 
                     */
                    void SetProductDescription(const std::string& _productDescription);

                    /**
                     * 判断参数 ProductDescription 是否已赋值
                     * @return ProductDescription 是否已赋值
                     * 
                     */
                    bool ProductDescriptionHasBeenSet() const;

                    /**
                     * 获取设备功能码（ypsxth:音频双向通话 ，spdxth:视频单向通话）
                     * @return Features 设备功能码（ypsxth:音频双向通话 ，spdxth:视频单向通话）
                     * 
                     */
                    std::vector<std::string> GetFeatures() const;

                    /**
                     * 设置设备功能码（ypsxth:音频双向通话 ，spdxth:视频单向通话）
                     * @param _features 设备功能码（ypsxth:音频双向通话 ，spdxth:视频单向通话）
                     * 
                     */
                    void SetFeatures(const std::vector<std::string>& _features);

                    /**
                     * 判断参数 Features 是否已赋值
                     * @return Features 是否已赋值
                     * 
                     */
                    bool FeaturesHasBeenSet() const;

                    /**
                     * 获取主芯片产商ID
                     * @return ChipManufactureId 主芯片产商ID
                     * 
                     */
                    std::string GetChipManufactureId() const;

                    /**
                     * 设置主芯片产商ID
                     * @param _chipManufactureId 主芯片产商ID
                     * 
                     */
                    void SetChipManufactureId(const std::string& _chipManufactureId);

                    /**
                     * 判断参数 ChipManufactureId 是否已赋值
                     * @return ChipManufactureId 是否已赋值
                     * 
                     */
                    bool ChipManufactureIdHasBeenSet() const;

                    /**
                     * 获取主芯片ID
                     * @return ChipId 主芯片ID
                     * 
                     */
                    std::string GetChipId() const;

                    /**
                     * 设置主芯片ID
                     * @param _chipId 主芯片ID
                     * 
                     */
                    void SetChipId(const std::string& _chipId);

                    /**
                     * 判断参数 ChipId 是否已赋值
                     * @return ChipId 是否已赋值
                     * 
                     */
                    bool ChipIdHasBeenSet() const;

                    /**
                     * 获取地域：
China-Mainland（中国大陆）
China-Hong Kong, Macao and Taiwan（港澳台地区）
America（美国）
Europe（欧洲）
Other-Overseas（其他境外地区）
                     * @return ProductRegion 地域：
China-Mainland（中国大陆）
China-Hong Kong, Macao and Taiwan（港澳台地区）
America（美国）
Europe（欧洲）
Other-Overseas（其他境外地区）
                     * 
                     */
                    std::string GetProductRegion() const;

                    /**
                     * 设置地域：
China-Mainland（中国大陆）
China-Hong Kong, Macao and Taiwan（港澳台地区）
America（美国）
Europe（欧洲）
Other-Overseas（其他境外地区）
                     * @param _productRegion 地域：
China-Mainland（中国大陆）
China-Hong Kong, Macao and Taiwan（港澳台地区）
America（美国）
Europe（欧洲）
Other-Overseas（其他境外地区）
                     * 
                     */
                    void SetProductRegion(const std::string& _productRegion);

                    /**
                     * 判断参数 ProductRegion 是否已赋值
                     * @return ProductRegion 是否已赋值
                     * 
                     */
                    bool ProductRegionHasBeenSet() const;

                    /**
                     * 获取设备类型, 0-普通视频设备，1-NVR设备
                     * @return ProductCate 设备类型, 0-普通视频设备，1-NVR设备
                     * 
                     */
                    uint64_t GetProductCate() const;

                    /**
                     * 设置设备类型, 0-普通视频设备，1-NVR设备
                     * @param _productCate 设备类型, 0-普通视频设备，1-NVR设备
                     * 
                     */
                    void SetProductCate(const uint64_t& _productCate);

                    /**
                     * 判断参数 ProductCate 是否已赋值
                     * @return ProductCate 是否已赋值
                     * 
                     */
                    bool ProductCateHasBeenSet() const;

                    /**
                     * 获取接入模型，bit0是0：公版小程序未接入，bit0是1：公版小程序已接入
                     * @return AccessMode 接入模型，bit0是0：公版小程序未接入，bit0是1：公版小程序已接入
                     * 
                     */
                    int64_t GetAccessMode() const;

                    /**
                     * 设置接入模型，bit0是0：公版小程序未接入，bit0是1：公版小程序已接入
                     * @param _accessMode 接入模型，bit0是0：公版小程序未接入，bit0是1：公版小程序已接入
                     * 
                     */
                    void SetAccessMode(const int64_t& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     * 
                     */
                    bool AccessModeHasBeenSet() const;

                    /**
                     * 获取Linux,Android,Liteos等系统
                     * @return Os Linux,Android,Liteos等系统
                     * 
                     */
                    std::string GetOs() const;

                    /**
                     * 设置Linux,Android,Liteos等系统
                     * @param _os Linux,Android,Liteos等系统
                     * 
                     */
                    void SetOs(const std::string& _os);

                    /**
                     * 判断参数 Os 是否已赋值
                     * @return Os 是否已赋值
                     * 
                     */
                    bool OsHasBeenSet() const;

                    /**
                     * 获取芯片架构，只是针对操作系统为android的
                     * @return ChipArch 芯片架构，只是针对操作系统为android的
                     * 
                     */
                    std::string GetChipArch() const;

                    /**
                     * 设置芯片架构，只是针对操作系统为android的
                     * @param _chipArch 芯片架构，只是针对操作系统为android的
                     * 
                     */
                    void SetChipArch(const std::string& _chipArch);

                    /**
                     * 判断参数 ChipArch 是否已赋值
                     * @return ChipArch 是否已赋值
                     * 
                     */
                    bool ChipArchHasBeenSet() const;

                private:

                    /**
                     * 产器型号(APP产品,为APP包名)
                     */
                    std::string m_productModel;
                    bool m_productModelHasBeenSet;

                    /**
                     * 产品名称
仅支持中文、英文、数字、下划线，不超过32个字符
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 产品描述信息
不支持单引号、双引号、退格符、回车符、换行符、制表符、反斜杠、下划线、“%”、“#”、“$”，不超过128字符
                     */
                    std::string m_productDescription;
                    bool m_productDescriptionHasBeenSet;

                    /**
                     * 设备功能码（ypsxth:音频双向通话 ，spdxth:视频单向通话）
                     */
                    std::vector<std::string> m_features;
                    bool m_featuresHasBeenSet;

                    /**
                     * 主芯片产商ID
                     */
                    std::string m_chipManufactureId;
                    bool m_chipManufactureIdHasBeenSet;

                    /**
                     * 主芯片ID
                     */
                    std::string m_chipId;
                    bool m_chipIdHasBeenSet;

                    /**
                     * 地域：
China-Mainland（中国大陆）
China-Hong Kong, Macao and Taiwan（港澳台地区）
America（美国）
Europe（欧洲）
Other-Overseas（其他境外地区）
                     */
                    std::string m_productRegion;
                    bool m_productRegionHasBeenSet;

                    /**
                     * 设备类型, 0-普通视频设备，1-NVR设备
                     */
                    uint64_t m_productCate;
                    bool m_productCateHasBeenSet;

                    /**
                     * 接入模型，bit0是0：公版小程序未接入，bit0是1：公版小程序已接入
                     */
                    int64_t m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * Linux,Android,Liteos等系统
                     */
                    std::string m_os;
                    bool m_osHasBeenSet;

                    /**
                     * 芯片架构，只是针对操作系统为android的
                     */
                    std::string m_chipArch;
                    bool m_chipArchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEPRODUCTREQUEST_H_
