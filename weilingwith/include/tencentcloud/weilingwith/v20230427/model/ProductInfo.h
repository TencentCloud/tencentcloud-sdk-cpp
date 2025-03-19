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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_PRODUCTINFO_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_PRODUCTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 产品信息
                */
                class ProductInfo : public AbstractModel
                {
                public:
                    ProductInfo();
                    ~ProductInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作空间id
                     * @return WorkspaceId 工作空间id
                     * 
                     */
                    int64_t GetWorkspaceId() const;

                    /**
                     * 设置工作空间id
                     * @param _workspaceId 工作空间id
                     * 
                     */
                    void SetWorkspaceId(const int64_t& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取产品PID
                     * @return ProductId 产品PID
                     * 
                     */
                    int64_t GetProductId() const;

                    /**
                     * 设置产品PID
                     * @param _productId 产品PID
                     * 
                     */
                    void SetProductId(const int64_t& _productId);

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
                     * 获取设备类型
                     * @return DeviceTypeName 设备类型
                     * 
                     */
                    std::string GetDeviceTypeName() const;

                    /**
                     * 设置设备类型
                     * @param _deviceTypeName 设备类型
                     * 
                     */
                    void SetDeviceTypeName(const std::string& _deviceTypeName);

                    /**
                     * 判断参数 DeviceTypeName 是否已赋值
                     * @return DeviceTypeName 是否已赋值
                     * 
                     */
                    bool DeviceTypeNameHasBeenSet() const;

                    /**
                     * 获取设备类型id
                     * @return DeviceTypeId 设备类型id
                     * 
                     */
                    std::string GetDeviceTypeId() const;

                    /**
                     * 设置设备类型id
                     * @param _deviceTypeId 设备类型id
                     * 
                     */
                    void SetDeviceTypeId(const std::string& _deviceTypeId);

                    /**
                     * 判断参数 DeviceTypeId 是否已赋值
                     * @return DeviceTypeId 是否已赋值
                     * 
                     */
                    bool DeviceTypeIdHasBeenSet() const;

                    /**
                     * 获取产品属性，如：网关（1）、直连设备（2）、子设备（3）
                     * @return Attribute 产品属性，如：网关（1）、直连设备（2）、子设备（3）
                     * 
                     */
                    int64_t GetAttribute() const;

                    /**
                     * 设置产品属性，如：网关（1）、直连设备（2）、子设备（3）
                     * @param _attribute 产品属性，如：网关（1）、直连设备（2）、子设备（3）
                     * 
                     */
                    void SetAttribute(const int64_t& _attribute);

                    /**
                     * 判断参数 Attribute 是否已赋值
                     * @return Attribute 是否已赋值
                     * 
                     */
                    bool AttributeHasBeenSet() const;

                    /**
                     * 获取产品型号
                     * @return ProductType 产品型号
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 设置产品型号
                     * @param _productType 产品型号
                     * 
                     */
                    void SetProductType(const std::string& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取产品能力:信令数据、音视频。二进制数值中第0位表示信令数据、第1位表示音视频 。1（信令数据），3（具有信令数据以及音视频能力）。
                     * @return ProductAbility 产品能力:信令数据、音视频。二进制数值中第0位表示信令数据、第1位表示音视频 。1（信令数据），3（具有信令数据以及音视频能力）。
                     * 
                     */
                    int64_t GetProductAbility() const;

                    /**
                     * 设置产品能力:信令数据、音视频。二进制数值中第0位表示信令数据、第1位表示音视频 。1（信令数据），3（具有信令数据以及音视频能力）。
                     * @param _productAbility 产品能力:信令数据、音视频。二进制数值中第0位表示信令数据、第1位表示音视频 。1（信令数据），3（具有信令数据以及音视频能力）。
                     * 
                     */
                    void SetProductAbility(const int64_t& _productAbility);

                    /**
                     * 判断参数 ProductAbility 是否已赋值
                     * @return ProductAbility 是否已赋值
                     * 
                     */
                    bool ProductAbilityHasBeenSet() const;

                    /**
                     * 获取生产厂商
                     * @return Manufacturer 生产厂商
                     * 
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 设置生产厂商
                     * @param _manufacturer 生产厂商
                     * 
                     */
                    void SetManufacturer(const std::string& _manufacturer);

                    /**
                     * 判断参数 Manufacturer 是否已赋值
                     * @return Manufacturer 是否已赋值
                     * 
                     */
                    bool ManufacturerHasBeenSet() const;

                    /**
                     * 获取维保厂商
                     * @return MaintenanceMfr 维保厂商
                     * 
                     */
                    std::string GetMaintenanceMfr() const;

                    /**
                     * 设置维保厂商
                     * @param _maintenanceMfr 维保厂商
                     * 
                     */
                    void SetMaintenanceMfr(const std::string& _maintenanceMfr);

                    /**
                     * 判断参数 MaintenanceMfr 是否已赋值
                     * @return MaintenanceMfr 是否已赋值
                     * 
                     */
                    bool MaintenanceMfrHasBeenSet() const;

                    /**
                     * 获取物模型名称
                     * @return ModelName 物模型名称
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置物模型名称
                     * @param _modelName 物模型名称
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取物模型id
                     * @return ModelId 物模型id
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置物模型id
                     * @param _modelId 物模型id
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取物模型类型，产品模型/标准模型
                     * @return ModelType 物模型类型，产品模型/标准模型
                     * 
                     */
                    int64_t GetModelType() const;

                    /**
                     * 设置物模型类型，产品模型/标准模型
                     * @param _modelType 物模型类型，产品模型/标准模型
                     * 
                     */
                    void SetModelType(const int64_t& _modelType);

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     * 
                     */
                    bool ModelTypeHasBeenSet() const;

                private:

                    /**
                     * 工作空间id
                     */
                    int64_t m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 产品PID
                     */
                    int64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 设备类型
                     */
                    std::string m_deviceTypeName;
                    bool m_deviceTypeNameHasBeenSet;

                    /**
                     * 设备类型id
                     */
                    std::string m_deviceTypeId;
                    bool m_deviceTypeIdHasBeenSet;

                    /**
                     * 产品属性，如：网关（1）、直连设备（2）、子设备（3）
                     */
                    int64_t m_attribute;
                    bool m_attributeHasBeenSet;

                    /**
                     * 产品型号
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * 产品能力:信令数据、音视频。二进制数值中第0位表示信令数据、第1位表示音视频 。1（信令数据），3（具有信令数据以及音视频能力）。
                     */
                    int64_t m_productAbility;
                    bool m_productAbilityHasBeenSet;

                    /**
                     * 生产厂商
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                    /**
                     * 维保厂商
                     */
                    std::string m_maintenanceMfr;
                    bool m_maintenanceMfrHasBeenSet;

                    /**
                     * 物模型名称
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 物模型id
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 物模型类型，产品模型/标准模型
                     */
                    int64_t m_modelType;
                    bool m_modelTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_PRODUCTINFO_H_
