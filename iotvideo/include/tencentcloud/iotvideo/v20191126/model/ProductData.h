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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_PRODUCTDATA_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_PRODUCTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 产品信息
                */
                class ProductData : public AbstractModel
                {
                public:
                    ProductData();
                    ~ProductData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductId 产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productId 产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductName 产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productName 产品名称
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductDescription 产品描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductDescription() const;

                    /**
                     * 设置产品描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productDescription 产品描述信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建时间，UNIX 时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间，UNIX 时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，UNIX 时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间，UNIX 时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取物模型发布版本号,0代表物模型尚未发布
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IotModelRevision 物模型发布版本号,0代表物模型尚未发布
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIotModelRevision() const;

                    /**
                     * 设置物模型发布版本号,0代表物模型尚未发布
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iotModelRevision 物模型发布版本号,0代表物模型尚未发布
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIotModelRevision(const int64_t& _iotModelRevision);

                    /**
                     * 判断参数 IotModelRevision 是否已赋值
                     * @return IotModelRevision 是否已赋值
                     * 
                     */
                    bool IotModelRevisionHasBeenSet() const;

                    /**
                     * 获取产品密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretKey 产品密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置产品密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretKey 产品密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取设备功能码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Features 设备功能码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetFeatures() const;

                    /**
                     * 设置设备功能码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _features 设备功能码
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取产器型号(APP产品,为APP包名)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductModel 产器型号(APP产品,为APP包名)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductModel() const;

                    /**
                     * 设置产器型号(APP产品,为APP包名)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productModel 产器型号(APP产品,为APP包名)
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取主芯片厂商id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChipManufactureId 主芯片厂商id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChipManufactureId() const;

                    /**
                     * 设置主芯片厂商id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chipManufactureId 主芯片厂商id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取主芯片型号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChipId 主芯片型号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChipId() const;

                    /**
                     * 设置主芯片型号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chipId 主芯片型号
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取产品类别，0：普通视频设备；1：NVR设备
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductCate 产品类别，0：普通视频设备；1：NVR设备
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProductCate() const;

                    /**
                     * 设置产品类别，0：普通视频设备；1：NVR设备
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productCate 产品类别，0：普通视频设备；1：NVR设备
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductCate(const int64_t& _productCate);

                    /**
                     * 判断参数 ProductCate 是否已赋值
                     * @return ProductCate 是否已赋值
                     * 
                     */
                    bool ProductCateHasBeenSet() const;

                    /**
                     * 获取产品地区
China-Mainland（中国大陆）
China-Hong Kong, Macao and Taiwan（港澳台地区）
America（美国）
Europe（欧洲）
India（印度）
Other-Overseas（其他境外地区）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductRegion 产品地区
China-Mainland（中国大陆）
China-Hong Kong, Macao and Taiwan（港澳台地区）
America（美国）
Europe（欧洲）
India（印度）
Other-Overseas（其他境外地区）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductRegion() const;

                    /**
                     * 设置产品地区
China-Mainland（中国大陆）
China-Hong Kong, Macao and Taiwan（港澳台地区）
America（美国）
Europe（欧洲）
India（印度）
Other-Overseas（其他境外地区）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productRegion 产品地区
China-Mainland（中国大陆）
China-Hong Kong, Macao and Taiwan（港澳台地区）
America（美国）
Europe（欧洲）
India（印度）
Other-Overseas（其他境外地区）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取接入模型，bit0是0：公版小程序未接入，bit0是1：公版小程序已接入
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessMode 接入模型，bit0是0：公版小程序未接入，bit0是1：公版小程序已接入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAccessMode() const;

                    /**
                     * 设置接入模型，bit0是0：公版小程序未接入，bit0是1：公版小程序已接入
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessMode 接入模型，bit0是0：公版小程序未接入，bit0是1：公版小程序已接入
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取linux,android,liteos
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Os linux,android,liteos
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOs() const;

                    /**
                     * 设置linux,android,liteos
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _os linux,android,liteos
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOs(const std::string& _os);

                    /**
                     * 判断参数 Os 是否已赋值
                     * @return Os 是否已赋值
                     * 
                     */
                    bool OsHasBeenSet() const;

                private:

                    /**
                     * 产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 产品描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productDescription;
                    bool m_productDescriptionHasBeenSet;

                    /**
                     * 创建时间，UNIX 时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 物模型发布版本号,0代表物模型尚未发布
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_iotModelRevision;
                    bool m_iotModelRevisionHasBeenSet;

                    /**
                     * 产品密钥
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * 设备功能码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_features;
                    bool m_featuresHasBeenSet;

                    /**
                     * 产器型号(APP产品,为APP包名)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productModel;
                    bool m_productModelHasBeenSet;

                    /**
                     * 主芯片厂商id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chipManufactureId;
                    bool m_chipManufactureIdHasBeenSet;

                    /**
                     * 主芯片型号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chipId;
                    bool m_chipIdHasBeenSet;

                    /**
                     * 产品类别，0：普通视频设备；1：NVR设备
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_productCate;
                    bool m_productCateHasBeenSet;

                    /**
                     * 产品地区
China-Mainland（中国大陆）
China-Hong Kong, Macao and Taiwan（港澳台地区）
America（美国）
Europe（欧洲）
India（印度）
Other-Overseas（其他境外地区）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productRegion;
                    bool m_productRegionHasBeenSet;

                    /**
                     * 接入模型，bit0是0：公版小程序未接入，bit0是1：公版小程序已接入
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * linux,android,liteos
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_os;
                    bool m_osHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_PRODUCTDATA_H_
