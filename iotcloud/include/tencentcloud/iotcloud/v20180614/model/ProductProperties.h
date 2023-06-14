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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_PRODUCTPROPERTIES_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_PRODUCTPROPERTIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * 产品属性
                */
                class ProductProperties : public AbstractModel
                {
                public:
                    ProductProperties();
                    ~ProductProperties() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品描述
                     * @return ProductDescription 产品描述
                     * 
                     */
                    std::string GetProductDescription() const;

                    /**
                     * 设置产品描述
                     * @param _productDescription 产品描述
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
                     * 获取加密类型，1表示证书认证，2表示签名认证。如不填写，默认值是1
                     * @return EncryptionType 加密类型，1表示证书认证，2表示签名认证。如不填写，默认值是1
                     * 
                     */
                    std::string GetEncryptionType() const;

                    /**
                     * 设置加密类型，1表示证书认证，2表示签名认证。如不填写，默认值是1
                     * @param _encryptionType 加密类型，1表示证书认证，2表示签名认证。如不填写，默认值是1
                     * 
                     */
                    void SetEncryptionType(const std::string& _encryptionType);

                    /**
                     * 判断参数 EncryptionType 是否已赋值
                     * @return EncryptionType 是否已赋值
                     * 
                     */
                    bool EncryptionTypeHasBeenSet() const;

                    /**
                     * 获取产品所属区域，目前只支持广州（gz）
                     * @return Region 产品所属区域，目前只支持广州（gz）
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置产品所属区域，目前只支持广州（gz）
                     * @param _region 产品所属区域，目前只支持广州（gz）
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取产品类型，各个类型值代表的节点-类型如下：
0 普通产品，2 NB-IoT产品，4 LoRa产品，3 LoRa网关产品，5 普通网关产品   默认值是0
                     * @return ProductType 产品类型，各个类型值代表的节点-类型如下：
0 普通产品，2 NB-IoT产品，4 LoRa产品，3 LoRa网关产品，5 普通网关产品   默认值是0
                     * 
                     */
                    uint64_t GetProductType() const;

                    /**
                     * 设置产品类型，各个类型值代表的节点-类型如下：
0 普通产品，2 NB-IoT产品，4 LoRa产品，3 LoRa网关产品，5 普通网关产品   默认值是0
                     * @param _productType 产品类型，各个类型值代表的节点-类型如下：
0 普通产品，2 NB-IoT产品，4 LoRa产品，3 LoRa网关产品，5 普通网关产品   默认值是0
                     * 
                     */
                    void SetProductType(const uint64_t& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取数据格式，取值为json或者custom，默认值是json
                     * @return Format 数据格式，取值为json或者custom，默认值是json
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置数据格式，取值为json或者custom，默认值是json
                     * @param _format 数据格式，取值为json或者custom，默认值是json
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取产品所属平台，默认值是0
                     * @return Platform 产品所属平台，默认值是0
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置产品所属平台，默认值是0
                     * @param _platform 产品所属平台，默认值是0
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取LoRa产品运营侧APPEUI，只有LoRa产品需要填写
                     * @return Appeui LoRa产品运营侧APPEUI，只有LoRa产品需要填写
                     * 
                     */
                    std::string GetAppeui() const;

                    /**
                     * 设置LoRa产品运营侧APPEUI，只有LoRa产品需要填写
                     * @param _appeui LoRa产品运营侧APPEUI，只有LoRa产品需要填写
                     * 
                     */
                    void SetAppeui(const std::string& _appeui);

                    /**
                     * 判断参数 Appeui 是否已赋值
                     * @return Appeui 是否已赋值
                     * 
                     */
                    bool AppeuiHasBeenSet() const;

                    /**
                     * 获取产品绑定的物模型ID，-1表示不绑定
                     * @return ModelId 产品绑定的物模型ID，-1表示不绑定
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置产品绑定的物模型ID，-1表示不绑定
                     * @param _modelId 产品绑定的物模型ID，-1表示不绑定
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
                     * 获取产品绑定的物模型名称
                     * @return ModelName 产品绑定的物模型名称
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置产品绑定的物模型名称
                     * @param _modelName 产品绑定的物模型名称
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
                     * 获取产品密钥，suite产品才会有
                     * @return ProductKey 产品密钥，suite产品才会有
                     * 
                     */
                    std::string GetProductKey() const;

                    /**
                     * 设置产品密钥，suite产品才会有
                     * @param _productKey 产品密钥，suite产品才会有
                     * 
                     */
                    void SetProductKey(const std::string& _productKey);

                    /**
                     * 判断参数 ProductKey 是否已赋值
                     * @return ProductKey 是否已赋值
                     * 
                     */
                    bool ProductKeyHasBeenSet() const;

                    /**
                     * 获取动态注册类型 0-关闭, 1-预定义设备名 2-动态定义设备名
                     * @return RegisterType 动态注册类型 0-关闭, 1-预定义设备名 2-动态定义设备名
                     * 
                     */
                    uint64_t GetRegisterType() const;

                    /**
                     * 设置动态注册类型 0-关闭, 1-预定义设备名 2-动态定义设备名
                     * @param _registerType 动态注册类型 0-关闭, 1-预定义设备名 2-动态定义设备名
                     * 
                     */
                    void SetRegisterType(const uint64_t& _registerType);

                    /**
                     * 判断参数 RegisterType 是否已赋值
                     * @return RegisterType 是否已赋值
                     * 
                     */
                    bool RegisterTypeHasBeenSet() const;

                    /**
                     * 获取动态注册产品秘钥
                     * @return ProductSecret 动态注册产品秘钥
                     * 
                     */
                    std::string GetProductSecret() const;

                    /**
                     * 设置动态注册产品秘钥
                     * @param _productSecret 动态注册产品秘钥
                     * 
                     */
                    void SetProductSecret(const std::string& _productSecret);

                    /**
                     * 判断参数 ProductSecret 是否已赋值
                     * @return ProductSecret 是否已赋值
                     * 
                     */
                    bool ProductSecretHasBeenSet() const;

                    /**
                     * 获取RegisterType为2时，设备动态创建的限制数量
                     * @return RegisterLimit RegisterType为2时，设备动态创建的限制数量
                     * 
                     */
                    uint64_t GetRegisterLimit() const;

                    /**
                     * 设置RegisterType为2时，设备动态创建的限制数量
                     * @param _registerLimit RegisterType为2时，设备动态创建的限制数量
                     * 
                     */
                    void SetRegisterLimit(const uint64_t& _registerLimit);

                    /**
                     * 判断参数 RegisterLimit 是否已赋值
                     * @return RegisterLimit 是否已赋值
                     * 
                     */
                    bool RegisterLimitHasBeenSet() const;

                private:

                    /**
                     * 产品描述
                     */
                    std::string m_productDescription;
                    bool m_productDescriptionHasBeenSet;

                    /**
                     * 加密类型，1表示证书认证，2表示签名认证。如不填写，默认值是1
                     */
                    std::string m_encryptionType;
                    bool m_encryptionTypeHasBeenSet;

                    /**
                     * 产品所属区域，目前只支持广州（gz）
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 产品类型，各个类型值代表的节点-类型如下：
0 普通产品，2 NB-IoT产品，4 LoRa产品，3 LoRa网关产品，5 普通网关产品   默认值是0
                     */
                    uint64_t m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * 数据格式，取值为json或者custom，默认值是json
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 产品所属平台，默认值是0
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * LoRa产品运营侧APPEUI，只有LoRa产品需要填写
                     */
                    std::string m_appeui;
                    bool m_appeuiHasBeenSet;

                    /**
                     * 产品绑定的物模型ID，-1表示不绑定
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 产品绑定的物模型名称
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 产品密钥，suite产品才会有
                     */
                    std::string m_productKey;
                    bool m_productKeyHasBeenSet;

                    /**
                     * 动态注册类型 0-关闭, 1-预定义设备名 2-动态定义设备名
                     */
                    uint64_t m_registerType;
                    bool m_registerTypeHasBeenSet;

                    /**
                     * 动态注册产品秘钥
                     */
                    std::string m_productSecret;
                    bool m_productSecretHasBeenSet;

                    /**
                     * RegisterType为2时，设备动态创建的限制数量
                     */
                    uint64_t m_registerLimit;
                    bool m_registerLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_PRODUCTPROPERTIES_H_
