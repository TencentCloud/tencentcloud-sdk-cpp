/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATESTUDIOPRODUCTREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATESTUDIOPRODUCTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * CreateStudioProduct请求参数结构体
                */
                class CreateStudioProductRequest : public AbstractModel
                {
                public:
                    CreateStudioProductRequest();
                    ~CreateStudioProductRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>产品名称，名称不能和已经存在的产品名称重复。命名规则：[a-zA-Z0-9:_-]{1,32}</p>
                     * @return ProductName <p>产品名称，名称不能和已经存在的产品名称重复。命名规则：[a-zA-Z0-9:_-]{1,32}</p>
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置<p>产品名称，名称不能和已经存在的产品名称重复。命名规则：[a-zA-Z0-9:_-]{1,32}</p>
                     * @param _productName <p>产品名称，名称不能和已经存在的产品名称重复。命名规则：[a-zA-Z0-9:_-]{1,32}</p>
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
                     * 获取<p>产品分组模板ID , ( 自定义模板填写1 , 控制台调用会使用预置的其他ID)</p>
                     * @return CategoryId <p>产品分组模板ID , ( 自定义模板填写1 , 控制台调用会使用预置的其他ID)</p>
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置<p>产品分组模板ID , ( 自定义模板填写1 , 控制台调用会使用预置的其他ID)</p>
                     * @param _categoryId <p>产品分组模板ID , ( 自定义模板填写1 , 控制台调用会使用预置的其他ID)</p>
                     * 
                     */
                    void SetCategoryId(const int64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取<p>产品类型 填写 ( 0 普通产品 ， 5 网关产品)</p>
                     * @return ProductType <p>产品类型 填写 ( 0 普通产品 ， 5 网关产品)</p>
                     * 
                     */
                    int64_t GetProductType() const;

                    /**
                     * 设置<p>产品类型 填写 ( 0 普通产品 ， 5 网关产品)</p>
                     * @param _productType <p>产品类型 填写 ( 0 普通产品 ， 5 网关产品)</p>
                     * 
                     */
                    void SetProductType(const int64_t& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取<p>设备认证方式 ，1表示证书认证，2表示密钥认证</p><p>枚举值：</p><ul><li>1： 证书认证(X.509证书认证)</li><li>2： 密钥认证</li></ul>
                     * @return EncryptionType <p>设备认证方式 ，1表示证书认证，2表示密钥认证</p><p>枚举值：</p><ul><li>1： 证书认证(X.509证书认证)</li><li>2： 密钥认证</li></ul>
                     * 
                     */
                    std::string GetEncryptionType() const;

                    /**
                     * 设置<p>设备认证方式 ，1表示证书认证，2表示密钥认证</p><p>枚举值：</p><ul><li>1： 证书认证(X.509证书认证)</li><li>2： 密钥认证</li></ul>
                     * @param _encryptionType <p>设备认证方式 ，1表示证书认证，2表示密钥认证</p><p>枚举值：</p><ul><li>1： 证书认证(X.509证书认证)</li><li>2： 密钥认证</li></ul>
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
                     * 获取<p>连接类型 可以填写 wifi、wifi-ble、cellular、5g、lorawan、ble、ethernet、wifi-ethernet、else、sub_zigbee、sub_ble、sub_433mhz、sub_else、sub_blemesh</p>
                     * @return NetType <p>连接类型 可以填写 wifi、wifi-ble、cellular、5g、lorawan、ble、ethernet、wifi-ethernet、else、sub_zigbee、sub_ble、sub_433mhz、sub_else、sub_blemesh</p>
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置<p>连接类型 可以填写 wifi、wifi-ble、cellular、5g、lorawan、ble、ethernet、wifi-ethernet、else、sub_zigbee、sub_ble、sub_433mhz、sub_else、sub_blemesh</p>
                     * @param _netType <p>连接类型 可以填写 wifi、wifi-ble、cellular、5g、lorawan、ble、ethernet、wifi-ethernet、else、sub_zigbee、sub_ble、sub_433mhz、sub_else、sub_blemesh</p>
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
                     * 获取<p>数据协议 (1 使用物模型，即使用腾讯云物联网开发平台制定的物模型协议 2 自定义透传，即用户自由定义MQTT协议Payload部分)</p>
                     * @return DataProtocol <p>数据协议 (1 使用物模型，即使用腾讯云物联网开发平台制定的物模型协议 2 自定义透传，即用户自由定义MQTT协议Payload部分)</p>
                     * 
                     */
                    int64_t GetDataProtocol() const;

                    /**
                     * 设置<p>数据协议 (1 使用物模型，即使用腾讯云物联网开发平台制定的物模型协议 2 自定义透传，即用户自由定义MQTT协议Payload部分)</p>
                     * @param _dataProtocol <p>数据协议 (1 使用物模型，即使用腾讯云物联网开发平台制定的物模型协议 2 自定义透传，即用户自由定义MQTT协议Payload部分)</p>
                     * 
                     */
                    void SetDataProtocol(const int64_t& _dataProtocol);

                    /**
                     * 判断参数 DataProtocol 是否已赋值
                     * @return DataProtocol 是否已赋值
                     * 
                     */
                    bool DataProtocolHasBeenSet() const;

                    /**
                     * 获取<p>产品描述</p>
                     * @return ProductDesc <p>产品描述</p>
                     * 
                     */
                    std::string GetProductDesc() const;

                    /**
                     * 设置<p>产品描述</p>
                     * @param _productDesc <p>产品描述</p>
                     * 
                     */
                    void SetProductDesc(const std::string& _productDesc);

                    /**
                     * 判断参数 ProductDesc 是否已赋值
                     * @return ProductDesc 是否已赋值
                     * 
                     */
                    bool ProductDescHasBeenSet() const;

                    /**
                     * 获取<p>产品所在的项目ID，可从产品管理页的当前URL中获取project_id的值</p>
                     * @return ProjectId <p>产品所在的项目ID，可从产品管理页的当前URL中获取project_id的值</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>产品所在的项目ID，可从产品管理页的当前URL中获取project_id的值</p>
                     * @param _projectId <p>产品所在的项目ID，可从产品管理页的当前URL中获取project_id的值</p>
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>平均传输速率</p>
                     * @return Rate <p>平均传输速率</p>
                     * 
                     */
                    std::string GetRate() const;

                    /**
                     * 设置<p>平均传输速率</p>
                     * @param _rate <p>平均传输速率</p>
                     * 
                     */
                    void SetRate(const std::string& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取<p>期限</p>
                     * @return Period <p>期限</p>
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置<p>期限</p>
                     * @param _period <p>期限</p>
                     * 
                     */
                    void SetPeriod(const std::string& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>第三方CA证书名称。空/不传 = 腾讯云默认CA证书；非空 = 使用该证书（须为当前账号已上传的 CA，不存在会报错）</p>
                     * @return PrivateCAName <p>第三方CA证书名称。空/不传 = 腾讯云默认CA证书；非空 = 使用该证书（须为当前账号已上传的 CA，不存在会报错）</p>
                     * 
                     */
                    std::string GetPrivateCAName() const;

                    /**
                     * 设置<p>第三方CA证书名称。空/不传 = 腾讯云默认CA证书；非空 = 使用该证书（须为当前账号已上传的 CA，不存在会报错）</p>
                     * @param _privateCAName <p>第三方CA证书名称。空/不传 = 腾讯云默认CA证书；非空 = 使用该证书（须为当前账号已上传的 CA，不存在会报错）</p>
                     * 
                     */
                    void SetPrivateCAName(const std::string& _privateCAName);

                    /**
                     * 判断参数 PrivateCAName 是否已赋值
                     * @return PrivateCAName 是否已赋值
                     * 
                     */
                    bool PrivateCANameHasBeenSet() const;

                private:

                    /**
                     * <p>产品名称，名称不能和已经存在的产品名称重复。命名规则：[a-zA-Z0-9:_-]{1,32}</p>
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * <p>产品分组模板ID , ( 自定义模板填写1 , 控制台调用会使用预置的其他ID)</p>
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * <p>产品类型 填写 ( 0 普通产品 ， 5 网关产品)</p>
                     */
                    int64_t m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * <p>设备认证方式 ，1表示证书认证，2表示密钥认证</p><p>枚举值：</p><ul><li>1： 证书认证(X.509证书认证)</li><li>2： 密钥认证</li></ul>
                     */
                    std::string m_encryptionType;
                    bool m_encryptionTypeHasBeenSet;

                    /**
                     * <p>连接类型 可以填写 wifi、wifi-ble、cellular、5g、lorawan、ble、ethernet、wifi-ethernet、else、sub_zigbee、sub_ble、sub_433mhz、sub_else、sub_blemesh</p>
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * <p>数据协议 (1 使用物模型，即使用腾讯云物联网开发平台制定的物模型协议 2 自定义透传，即用户自由定义MQTT协议Payload部分)</p>
                     */
                    int64_t m_dataProtocol;
                    bool m_dataProtocolHasBeenSet;

                    /**
                     * <p>产品描述</p>
                     */
                    std::string m_productDesc;
                    bool m_productDescHasBeenSet;

                    /**
                     * <p>产品所在的项目ID，可从产品管理页的当前URL中获取project_id的值</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>平均传输速率</p>
                     */
                    std::string m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * <p>期限</p>
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>第三方CA证书名称。空/不传 = 腾讯云默认CA证书；非空 = 使用该证书（须为当前账号已上传的 CA，不存在会报错）</p>
                     */
                    std::string m_privateCAName;
                    bool m_privateCANameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATESTUDIOPRODUCTREQUEST_H_
