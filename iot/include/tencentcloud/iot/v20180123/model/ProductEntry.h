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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_PRODUCTENTRY_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_PRODUCTENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * 产品条目
                */
                class ProductEntry : public AbstractModel
                {
                public:
                    ProductEntry();
                    ~ProductEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品Id
                     * @return ProductId 产品Id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品Id
                     * @param _productId 产品Id
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
                     * 获取产品Key
                     * @return ProductKey 产品Key
                     * 
                     */
                    std::string GetProductKey() const;

                    /**
                     * 设置产品Key
                     * @param _productKey 产品Key
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
                     * 获取AppId
                     * @return AppId AppId
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置AppId
                     * @param _appId AppId
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取产品名称
                     * @return Name 产品名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置产品名称
                     * @param _name 产品名称
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
                     * 获取连接域名
                     * @return Domain 连接域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置连接域名
                     * @param _domain 连接域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取鉴权类型（0：直连，1：Token）
                     * @return AuthType 鉴权类型（0：直连，1：Token）
                     * 
                     */
                    uint64_t GetAuthType() const;

                    /**
                     * 设置鉴权类型（0：直连，1：Token）
                     * @param _authType 鉴权类型（0：直连，1：Token）
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
                     * 获取数据协议（native/template）
                     * @return DataProtocol 数据协议（native/template）
                     * 
                     */
                    std::string GetDataProtocol() const;

                    /**
                     * 设置数据协议（native/template）
                     * @param _dataProtocol 数据协议（native/template）
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
                     * 获取删除（0未删除）
                     * @return Deleted 删除（0未删除）
                     * 
                     */
                    uint64_t GetDeleted() const;

                    /**
                     * 设置删除（0未删除）
                     * @param _deleted 删除（0未删除）
                     * 
                     */
                    void SetDeleted(const uint64_t& _deleted);

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     * 
                     */
                    bool DeletedHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Message 备注
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置备注
                     * @param _message 备注
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取通信方式
                     * @return CommProtocol 通信方式
                     * 
                     */
                    std::string GetCommProtocol() const;

                    /**
                     * 设置通信方式
                     * @param _commProtocol 通信方式
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
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
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
                     * 获取设备类型
                     * @return DeviceType 设备类型
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型
                     * @param _deviceType 设备类型
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
                     * 产品Id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 产品Key
                     */
                    std::string m_productKey;
                    bool m_productKeyHasBeenSet;

                    /**
                     * AppId
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 产品描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 连接域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 鉴权类型（0：直连，1：Token）
                     */
                    uint64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 数据协议（native/template）
                     */
                    std::string m_dataProtocol;
                    bool m_dataProtocolHasBeenSet;

                    /**
                     * 删除（0未删除）
                     */
                    uint64_t m_deleted;
                    bool m_deletedHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 通信方式
                     */
                    std::string m_commProtocol;
                    bool m_commProtocolHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 设备类型
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_PRODUCTENTRY_H_
