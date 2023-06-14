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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_ADDPRODUCTREQUEST_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_ADDPRODUCTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iot/v20180123/model/DataTemplate.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * AddProduct请求参数结构体
                */
                class AddProductRequest : public AbstractModel
                {
                public:
                    AddProductRequest();
                    ~AddProductRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品名称，同一区域产品名称需唯一，支持中文、英文字母、中划线和下划线，长度不超过31个字符，中文占两个字符
                     * @return Name 产品名称，同一区域产品名称需唯一，支持中文、英文字母、中划线和下划线，长度不超过31个字符，中文占两个字符
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置产品名称，同一区域产品名称需唯一，支持中文、英文字母、中划线和下划线，长度不超过31个字符，中文占两个字符
                     * @param _name 产品名称，同一区域产品名称需唯一，支持中文、英文字母、中划线和下划线，长度不超过31个字符，中文占两个字符
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取产品描述
                     * @return Description 产品描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置产品描述
                     * @param _description 产品描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取数据模版
                     * @return DataTemplate 数据模版
                     * 
                     */
                    std::vector<DataTemplate> GetDataTemplate() const;

                    /**
                     * 设置数据模版
                     * @param _dataTemplate 数据模版
                     * 
                     */
                    void SetDataTemplate(const std::vector<DataTemplate>& _dataTemplate);

                    /**
                     * 判断参数 DataTemplate 是否已赋值
                     * @return DataTemplate 是否已赋值
                     * 
                     */
                    bool DataTemplateHasBeenSet() const;

                    /**
                     * 获取产品版本（native表示基础版，template表示高级版，默认值为template）
                     * @return DataProtocol 产品版本（native表示基础版，template表示高级版，默认值为template）
                     * 
                     */
                    std::string GetDataProtocol() const;

                    /**
                     * 设置产品版本（native表示基础版，template表示高级版，默认值为template）
                     * @param _dataProtocol 产品版本（native表示基础版，template表示高级版，默认值为template）
                     * 
                     */
                    void SetDataProtocol(const std::string& _dataProtocol);

                    /**
                     * 判断参数 DataProtocol 是否已赋值
                     * @return DataProtocol 是否已赋值
                     * 
                     */
                    bool DataProtocolHasBeenSet() const;

                    /**
                     * 获取设备认证方式（1：动态令牌，2：签名直连鉴权）
                     * @return AuthType 设备认证方式（1：动态令牌，2：签名直连鉴权）
                     * 
                     */
                    uint64_t GetAuthType() const;

                    /**
                     * 设置设备认证方式（1：动态令牌，2：签名直连鉴权）
                     * @param _authType 设备认证方式（1：动态令牌，2：签名直连鉴权）
                     * 
                     */
                    void SetAuthType(const uint64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取通信方式（other/wifi/cellular/nb-iot）
                     * @return CommProtocol 通信方式（other/wifi/cellular/nb-iot）
                     * 
                     */
                    std::string GetCommProtocol() const;

                    /**
                     * 设置通信方式（other/wifi/cellular/nb-iot）
                     * @param _commProtocol 通信方式（other/wifi/cellular/nb-iot）
                     * 
                     */
                    void SetCommProtocol(const std::string& _commProtocol);

                    /**
                     * 判断参数 CommProtocol 是否已赋值
                     * @return CommProtocol 是否已赋值
                     * 
                     */
                    bool CommProtocolHasBeenSet() const;

                    /**
                     * 获取产品的设备类型（device: 直连设备；sub_device：子设备；gateway：网关设备）
                     * @return DeviceType 产品的设备类型（device: 直连设备；sub_device：子设备；gateway：网关设备）
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置产品的设备类型（device: 直连设备；sub_device：子设备；gateway：网关设备）
                     * @param _deviceType 产品的设备类型（device: 直连设备；sub_device：子设备；gateway：网关设备）
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                private:

                    /**
                     * 产品名称，同一区域产品名称需唯一，支持中文、英文字母、中划线和下划线，长度不超过31个字符，中文占两个字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 产品描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 数据模版
                     */
                    std::vector<DataTemplate> m_dataTemplate;
                    bool m_dataTemplateHasBeenSet;

                    /**
                     * 产品版本（native表示基础版，template表示高级版，默认值为template）
                     */
                    std::string m_dataProtocol;
                    bool m_dataProtocolHasBeenSet;

                    /**
                     * 设备认证方式（1：动态令牌，2：签名直连鉴权）
                     */
                    uint64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 通信方式（other/wifi/cellular/nb-iot）
                     */
                    std::string m_commProtocol;
                    bool m_commProtocolHasBeenSet;

                    /**
                     * 产品的设备类型（device: 直连设备；sub_device：子设备；gateway：网关设备）
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_ADDPRODUCTREQUEST_H_
