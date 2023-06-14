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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_VIDEOPRODUCT_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_VIDEOPRODUCT_H_

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
        namespace V20211125
        {
            namespace Model
            {
                /**
                * video产品元数据
                */
                class VideoProduct : public AbstractModel
                {
                public:
                    VideoProduct();
                    ~VideoProduct() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
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
                     * @return ProductName 产品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
                     * @param _productName 产品名称
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
                     * 获取产品设备类型（普通设备)	1.普通设备
                     * @return DeviceType 产品设备类型（普通设备)	1.普通设备
                     * 
                     */
                    uint64_t GetDeviceType() const;

                    /**
                     * 设置产品设备类型（普通设备)	1.普通设备
                     * @param _deviceType 产品设备类型（普通设备)	1.普通设备
                     * 
                     */
                    void SetDeviceType(const uint64_t& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取认证方式：2：PSK
                     * @return EncryptionType 认证方式：2：PSK
                     * 
                     */
                    uint64_t GetEncryptionType() const;

                    /**
                     * 设置认证方式：2：PSK
                     * @param _encryptionType 认证方式：2：PSK
                     * 
                     */
                    void SetEncryptionType(const uint64_t& _encryptionType);

                    /**
                     * 判断参数 EncryptionType 是否已赋值
                     * @return EncryptionType 是否已赋值
                     * 
                     */
                    bool EncryptionTypeHasBeenSet() const;

                    /**
                     * 获取设备功能码
                     * @return Features 设备功能码
                     * 
                     */
                    std::vector<std::string> GetFeatures() const;

                    /**
                     * 设置设备功能码
                     * @param _features 设备功能码
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
                     * 获取操作系统
                     * @return ChipOs 操作系统
                     * 
                     */
                    std::string GetChipOs() const;

                    /**
                     * 设置操作系统
                     * @param _chipOs 操作系统
                     * 
                     */
                    void SetChipOs(const std::string& _chipOs);

                    /**
                     * 判断参数 ChipOs 是否已赋值
                     * @return ChipOs 是否已赋值
                     * 
                     */
                    bool ChipOsHasBeenSet() const;

                    /**
                     * 获取芯片厂商id
                     * @return ChipManufactureId 芯片厂商id
                     * 
                     */
                    std::string GetChipManufactureId() const;

                    /**
                     * 设置芯片厂商id
                     * @param _chipManufactureId 芯片厂商id
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
                     * 获取芯片id
                     * @return ChipId 芯片id
                     * 
                     */
                    std::string GetChipId() const;

                    /**
                     * 设置芯片id
                     * @param _chipId 芯片id
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
                     * 获取产品描述信息
                     * @return ProductDescription 产品描述信息
                     * 
                     */
                    std::string GetProductDescription() const;

                    /**
                     * 设置产品描述信息
                     * @param _productDescription 产品描述信息
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
                     * 获取创建时间unix时间戳
                     * @return CreateTime 创建时间unix时间戳
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间unix时间戳
                     * @param _createTime 创建时间unix时间戳
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间unix时间戳
                     * @return UpdateTime 修改时间unix时间戳
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置修改时间unix时间戳
                     * @param _updateTime 修改时间unix时间戳
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取连接类型，wifi表示WIFI连接，cellular表示4G连接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetType 连接类型，wifi表示WIFI连接，cellular表示4G连接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置连接类型，wifi表示WIFI连接，cellular表示4G连接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _netType 连接类型，wifi表示WIFI连接，cellular表示4G连接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取产品品类,113:摄像头,567:儿童手表,595:可视对讲门锁
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CategoryId 产品品类,113:摄像头,567:儿童手表,595:可视对讲门锁
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCategoryId() const;

                    /**
                     * 设置产品品类,113:摄像头,567:儿童手表,595:可视对讲门锁
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _categoryId 产品品类,113:摄像头,567:儿童手表,595:可视对讲门锁
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCategoryId(const uint64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取产品有效年限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductVaildYears 产品有效年限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetProductVaildYears() const;

                    /**
                     * 设置产品有效年限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productVaildYears 产品有效年限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductVaildYears(const uint64_t& _productVaildYears);

                    /**
                     * 判断参数 ProductVaildYears 是否已赋值
                     * @return ProductVaildYears 是否已赋值
                     * 
                     */
                    bool ProductVaildYearsHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 产品设备类型（普通设备)	1.普通设备
                     */
                    uint64_t m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 认证方式：2：PSK
                     */
                    uint64_t m_encryptionType;
                    bool m_encryptionTypeHasBeenSet;

                    /**
                     * 设备功能码
                     */
                    std::vector<std::string> m_features;
                    bool m_featuresHasBeenSet;

                    /**
                     * 操作系统
                     */
                    std::string m_chipOs;
                    bool m_chipOsHasBeenSet;

                    /**
                     * 芯片厂商id
                     */
                    std::string m_chipManufactureId;
                    bool m_chipManufactureIdHasBeenSet;

                    /**
                     * 芯片id
                     */
                    std::string m_chipId;
                    bool m_chipIdHasBeenSet;

                    /**
                     * 产品描述信息
                     */
                    std::string m_productDescription;
                    bool m_productDescriptionHasBeenSet;

                    /**
                     * 创建时间unix时间戳
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间unix时间戳
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 连接类型，wifi表示WIFI连接，cellular表示4G连接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * 产品品类,113:摄像头,567:儿童手表,595:可视对讲门锁
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 产品有效年限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_productVaildYears;
                    bool m_productVaildYearsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_VIDEOPRODUCT_H_
