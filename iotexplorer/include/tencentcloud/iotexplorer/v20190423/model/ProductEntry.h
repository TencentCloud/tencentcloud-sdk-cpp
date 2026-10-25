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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PRODUCTENTRY_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PRODUCTENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 产品详情
                */
                class ProductEntry : public AbstractModel
                {
                public:
                    ProductEntry();
                    ~ProductEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>产品ID</p>
                     * @return ProductId <p>产品ID</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>产品ID</p>
                     * @param _productId <p>产品ID</p>
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
                     * 获取<p>产品名称</p>
                     * @return ProductName <p>产品名称</p>
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置<p>产品名称</p>
                     * @param _productName <p>产品名称</p>
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
                     * 获取<p>产品分组模板ID</p>
                     * @return CategoryId <p>产品分组模板ID</p>
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置<p>产品分组模板ID</p>
                     * @param _categoryId <p>产品分组模板ID</p>
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
                     * 获取<p>加密类型。1表示证书认证，2表示密钥认证，21表示TID认证-SE方式，22表示TID认证-软加固方式</p>
                     * @return EncryptionType <p>加密类型。1表示证书认证，2表示密钥认证，21表示TID认证-SE方式，22表示TID认证-软加固方式</p>
                     * 
                     */
                    std::string GetEncryptionType() const;

                    /**
                     * 设置<p>加密类型。1表示证书认证，2表示密钥认证，21表示TID认证-SE方式，22表示TID认证-软加固方式</p>
                     * @param _encryptionType <p>加密类型。1表示证书认证，2表示密钥认证，21表示TID认证-SE方式，22表示TID认证-软加固方式</p>
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
                     * 获取<p>连接类型。如：<br>wifi、wifi-ble、cellular、5g、lorawan、ble、ethernet、wifi-ethernet、else、sub_zigbee、sub_ble、sub_433mhz、sub_else、sub_blemesh</p>
                     * @return NetType <p>连接类型。如：<br>wifi、wifi-ble、cellular、5g、lorawan、ble、ethernet、wifi-ethernet、else、sub_zigbee、sub_ble、sub_433mhz、sub_else、sub_blemesh</p>
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置<p>连接类型。如：<br>wifi、wifi-ble、cellular、5g、lorawan、ble、ethernet、wifi-ethernet、else、sub_zigbee、sub_ble、sub_433mhz、sub_else、sub_blemesh</p>
                     * @param _netType <p>连接类型。如：<br>wifi、wifi-ble、cellular、5g、lorawan、ble、ethernet、wifi-ethernet、else、sub_zigbee、sub_ble、sub_433mhz、sub_else、sub_blemesh</p>
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
                     * 获取<p>数据协议 (1 使用物模型 2 为自定义类型)</p>
                     * @return DataProtocol <p>数据协议 (1 使用物模型 2 为自定义类型)</p>
                     * 
                     */
                    int64_t GetDataProtocol() const;

                    /**
                     * 设置<p>数据协议 (1 使用物模型 2 为自定义类型)</p>
                     * @param _dataProtocol <p>数据协议 (1 使用物模型 2 为自定义类型)</p>
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
                     * 获取<p>状态 如：all 全部, dev 开发中, audit 审核中 released 已发布</p>
                     * @return DevStatus <p>状态 如：all 全部, dev 开发中, audit 审核中 released 已发布</p>
                     * 
                     */
                    std::string GetDevStatus() const;

                    /**
                     * 设置<p>状态 如：all 全部, dev 开发中, audit 审核中 released 已发布</p>
                     * @param _devStatus <p>状态 如：all 全部, dev 开发中, audit 审核中 released 已发布</p>
                     * 
                     */
                    void SetDevStatus(const std::string& _devStatus);

                    /**
                     * 判断参数 DevStatus 是否已赋值
                     * @return DevStatus 是否已赋值
                     * 
                     */
                    bool DevStatusHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
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
                     * 获取<p>区域</p>
                     * @return Region <p>区域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>区域</p>
                     * @param _region <p>区域</p>
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
                     * 获取<p>产品类型。如： 0 普通产品 ， 5 网关产品</p>
                     * @return ProductType <p>产品类型。如： 0 普通产品 ， 5 网关产品</p>
                     * 
                     */
                    int64_t GetProductType() const;

                    /**
                     * 设置<p>产品类型。如： 0 普通产品 ， 5 网关产品</p>
                     * @param _productType <p>产品类型。如： 0 普通产品 ， 5 网关产品</p>
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
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
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
                     * 获取<p>产品ModuleId</p>
                     * @return ModuleId <p>产品ModuleId</p>
                     * 
                     */
                    int64_t GetModuleId() const;

                    /**
                     * 设置<p>产品ModuleId</p>
                     * @param _moduleId <p>产品ModuleId</p>
                     * 
                     */
                    void SetModuleId(const int64_t& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

                    /**
                     * 获取<p>是否使用脚本进行二进制转json功能 可以取值 true / false</p>
                     * @return EnableProductScript <p>是否使用脚本进行二进制转json功能 可以取值 true / false</p>
                     * 
                     */
                    std::string GetEnableProductScript() const;

                    /**
                     * 设置<p>是否使用脚本进行二进制转json功能 可以取值 true / false</p>
                     * @param _enableProductScript <p>是否使用脚本进行二进制转json功能 可以取值 true / false</p>
                     * 
                     */
                    void SetEnableProductScript(const std::string& _enableProductScript);

                    /**
                     * 判断参数 EnableProductScript 是否已赋值
                     * @return EnableProductScript 是否已赋值
                     * 
                     */
                    bool EnableProductScriptHasBeenSet() const;

                    /**
                     * 获取<p>创建人 UinId</p>
                     * @return CreateUserId <p>创建人 UinId</p>
                     * 
                     */
                    int64_t GetCreateUserId() const;

                    /**
                     * 设置<p>创建人 UinId</p>
                     * @param _createUserId <p>创建人 UinId</p>
                     * 
                     */
                    void SetCreateUserId(const int64_t& _createUserId);

                    /**
                     * 判断参数 CreateUserId 是否已赋值
                     * @return CreateUserId 是否已赋值
                     * 
                     */
                    bool CreateUserIdHasBeenSet() const;

                    /**
                     * 获取<p>创建者昵称</p>
                     * @return CreatorNickName <p>创建者昵称</p>
                     * 
                     */
                    std::string GetCreatorNickName() const;

                    /**
                     * 设置<p>创建者昵称</p>
                     * @param _creatorNickName <p>创建者昵称</p>
                     * 
                     */
                    void SetCreatorNickName(const std::string& _creatorNickName);

                    /**
                     * 判断参数 CreatorNickName 是否已赋值
                     * @return CreatorNickName 是否已赋值
                     * 
                     */
                    bool CreatorNickNameHasBeenSet() const;

                    /**
                     * 获取<p>绑定策略（1：强踢；2：非强踢；0：表示无意义）</p>
                     * @return BindStrategy <p>绑定策略（1：强踢；2：非强踢；0：表示无意义）</p>
                     * 
                     */
                    uint64_t GetBindStrategy() const;

                    /**
                     * 设置<p>绑定策略（1：强踢；2：非强踢；0：表示无意义）</p>
                     * @param _bindStrategy <p>绑定策略（1：强踢；2：非强踢；0：表示无意义）</p>
                     * 
                     */
                    void SetBindStrategy(const uint64_t& _bindStrategy);

                    /**
                     * 判断参数 BindStrategy 是否已赋值
                     * @return BindStrategy 是否已赋值
                     * 
                     */
                    bool BindStrategyHasBeenSet() const;

                    /**
                     * 获取<p>设备数量</p>
                     * @return DeviceCount <p>设备数量</p>
                     * 
                     */
                    int64_t GetDeviceCount() const;

                    /**
                     * 设置<p>设备数量</p>
                     * @param _deviceCount <p>设备数量</p>
                     * 
                     */
                    void SetDeviceCount(const int64_t& _deviceCount);

                    /**
                     * 判断参数 DeviceCount 是否已赋值
                     * @return DeviceCount 是否已赋值
                     * 
                     */
                    bool DeviceCountHasBeenSet() const;

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
                     * 获取<p>有效期</p>
                     * @return Period <p>有效期</p>
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置<p>有效期</p>
                     * @param _period <p>有效期</p>
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
                     * 获取<p>互联互通标识</p>
                     * @return IsInterconnection <p>互联互通标识</p>
                     * 
                     */
                    int64_t GetIsInterconnection() const;

                    /**
                     * 设置<p>互联互通标识</p>
                     * @param _isInterconnection <p>互联互通标识</p>
                     * 
                     */
                    void SetIsInterconnection(const int64_t& _isInterconnection);

                    /**
                     * 判断参数 IsInterconnection 是否已赋值
                     * @return IsInterconnection 是否已赋值
                     * 
                     */
                    bool IsInterconnectionHasBeenSet() const;

                    /**
                     * 获取<p>UIN</p>
                     * @return Uin <p>UIN</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>UIN</p>
                     * @param _uin <p>UIN</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>AppID</p>
                     * @return AppId <p>AppID</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>AppID</p>
                     * @param _appId <p>AppID</p>
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>绑定的第三方CA名称；空 = 腾讯云CA证书</p>
                     * @return PrivateCAName <p>绑定的第三方CA名称；空 = 腾讯云CA证书</p>
                     * 
                     */
                    std::string GetPrivateCAName() const;

                    /**
                     * 设置<p>绑定的第三方CA名称；空 = 腾讯云CA证书</p>
                     * @param _privateCAName <p>绑定的第三方CA名称；空 = 腾讯云CA证书</p>
                     * 
                     */
                    void SetPrivateCAName(const std::string& _privateCAName);

                    /**
                     * 判断参数 PrivateCAName 是否已赋值
                     * @return PrivateCAName 是否已赋值
                     * 
                     */
                    bool PrivateCANameHasBeenSet() const;

                    /**
                     * 获取<p>true = 第三方CA</p>
                     * @return IsPrivateCA <p>true = 第三方CA</p>
                     * 
                     */
                    bool GetIsPrivateCA() const;

                    /**
                     * 设置<p>true = 第三方CA</p>
                     * @param _isPrivateCA <p>true = 第三方CA</p>
                     * 
                     */
                    void SetIsPrivateCA(const bool& _isPrivateCA);

                    /**
                     * 判断参数 IsPrivateCA 是否已赋值
                     * @return IsPrivateCA 是否已赋值
                     * 
                     */
                    bool IsPrivateCAHasBeenSet() const;

                    /**
                     * 获取<p>CA 证书名称</p>
                     * @return CertName <p>CA 证书名称</p>
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置<p>CA 证书名称</p>
                     * @param _certName <p>CA 证书名称</p>
                     * 
                     */
                    void SetCertName(const std::string& _certName);

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     * 
                     */
                    bool CertNameHasBeenSet() const;

                    /**
                     * 获取<p>证书序列号</p>
                     * @return CertSN <p>证书序列号</p>
                     * 
                     */
                    std::string GetCertSN() const;

                    /**
                     * 设置<p>证书序列号</p>
                     * @param _certSN <p>证书序列号</p>
                     * 
                     */
                    void SetCertSN(const std::string& _certSN);

                    /**
                     * 判断参数 CertSN 是否已赋值
                     * @return CertSN 是否已赋值
                     * 
                     */
                    bool CertSNHasBeenSet() const;

                    /**
                     * 获取<p>颁发者</p>
                     * @return IssuerName <p>颁发者</p>
                     * 
                     */
                    std::string GetIssuerName() const;

                    /**
                     * 设置<p>颁发者</p>
                     * @param _issuerName <p>颁发者</p>
                     * 
                     */
                    void SetIssuerName(const std::string& _issuerName);

                    /**
                     * 判断参数 IssuerName 是否已赋值
                     * @return IssuerName 是否已赋值
                     * 
                     */
                    bool IssuerNameHasBeenSet() const;

                    /**
                     * 获取<p>证书主题</p>
                     * @return Subject <p>证书主题</p>
                     * 
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置<p>证书主题</p>
                     * @param _subject <p>证书主题</p>
                     * 
                     */
                    void SetSubject(const std::string& _subject);

                    /**
                     * 判断参数 Subject 是否已赋值
                     * @return Subject 是否已赋值
                     * 
                     */
                    bool SubjectHasBeenSet() const;

                    /**
                     * 获取<p>生效时间（Unix 秒）</p><p>单位：秒</p>
                     * @return EffectiveTime <p>生效时间（Unix 秒）</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetEffectiveTime() const;

                    /**
                     * 设置<p>生效时间（Unix 秒）</p><p>单位：秒</p>
                     * @param _effectiveTime <p>生效时间（Unix 秒）</p><p>单位：秒</p>
                     * 
                     */
                    void SetEffectiveTime(const int64_t& _effectiveTime);

                    /**
                     * 判断参数 EffectiveTime 是否已赋值
                     * @return EffectiveTime 是否已赋值
                     * 
                     */
                    bool EffectiveTimeHasBeenSet() const;

                    /**
                     * 获取<p>过期时间（Unix 秒）</p><p>单位：秒</p>
                     * @return ExpireTime <p>过期时间（Unix 秒）</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置<p>过期时间（Unix 秒）</p><p>单位：秒</p>
                     * @param _expireTime <p>过期时间（Unix 秒）</p><p>单位：秒</p>
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>CA 证书 PEM 全文</p>
                     * @return CertText <p>CA 证书 PEM 全文</p>
                     * 
                     */
                    std::string GetCertText() const;

                    /**
                     * 设置<p>CA 证书 PEM 全文</p>
                     * @param _certText <p>CA 证书 PEM 全文</p>
                     * 
                     */
                    void SetCertText(const std::string& _certText);

                    /**
                     * 判断参数 CertText 是否已赋值
                     * @return CertText 是否已赋值
                     * 
                     */
                    bool CertTextHasBeenSet() const;

                private:

                    /**
                     * <p>产品ID</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>产品名称</p>
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * <p>产品分组模板ID</p>
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * <p>加密类型。1表示证书认证，2表示密钥认证，21表示TID认证-SE方式，22表示TID认证-软加固方式</p>
                     */
                    std::string m_encryptionType;
                    bool m_encryptionTypeHasBeenSet;

                    /**
                     * <p>连接类型。如：<br>wifi、wifi-ble、cellular、5g、lorawan、ble、ethernet、wifi-ethernet、else、sub_zigbee、sub_ble、sub_433mhz、sub_else、sub_blemesh</p>
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * <p>数据协议 (1 使用物模型 2 为自定义类型)</p>
                     */
                    int64_t m_dataProtocol;
                    bool m_dataProtocolHasBeenSet;

                    /**
                     * <p>产品描述</p>
                     */
                    std::string m_productDesc;
                    bool m_productDescHasBeenSet;

                    /**
                     * <p>状态 如：all 全部, dev 开发中, audit 审核中 released 已发布</p>
                     */
                    std::string m_devStatus;
                    bool m_devStatusHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>区域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>产品类型。如： 0 普通产品 ， 5 网关产品</p>
                     */
                    int64_t m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * <p>项目ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>产品ModuleId</p>
                     */
                    int64_t m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * <p>是否使用脚本进行二进制转json功能 可以取值 true / false</p>
                     */
                    std::string m_enableProductScript;
                    bool m_enableProductScriptHasBeenSet;

                    /**
                     * <p>创建人 UinId</p>
                     */
                    int64_t m_createUserId;
                    bool m_createUserIdHasBeenSet;

                    /**
                     * <p>创建者昵称</p>
                     */
                    std::string m_creatorNickName;
                    bool m_creatorNickNameHasBeenSet;

                    /**
                     * <p>绑定策略（1：强踢；2：非强踢；0：表示无意义）</p>
                     */
                    uint64_t m_bindStrategy;
                    bool m_bindStrategyHasBeenSet;

                    /**
                     * <p>设备数量</p>
                     */
                    int64_t m_deviceCount;
                    bool m_deviceCountHasBeenSet;

                    /**
                     * <p>平均传输速率</p>
                     */
                    std::string m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * <p>有效期</p>
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>互联互通标识</p>
                     */
                    int64_t m_isInterconnection;
                    bool m_isInterconnectionHasBeenSet;

                    /**
                     * <p>UIN</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>AppID</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>绑定的第三方CA名称；空 = 腾讯云CA证书</p>
                     */
                    std::string m_privateCAName;
                    bool m_privateCANameHasBeenSet;

                    /**
                     * <p>true = 第三方CA</p>
                     */
                    bool m_isPrivateCA;
                    bool m_isPrivateCAHasBeenSet;

                    /**
                     * <p>CA 证书名称</p>
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * <p>证书序列号</p>
                     */
                    std::string m_certSN;
                    bool m_certSNHasBeenSet;

                    /**
                     * <p>颁发者</p>
                     */
                    std::string m_issuerName;
                    bool m_issuerNameHasBeenSet;

                    /**
                     * <p>证书主题</p>
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * <p>生效时间（Unix 秒）</p><p>单位：秒</p>
                     */
                    int64_t m_effectiveTime;
                    bool m_effectiveTimeHasBeenSet;

                    /**
                     * <p>过期时间（Unix 秒）</p><p>单位：秒</p>
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>CA 证书 PEM 全文</p>
                     */
                    std::string m_certText;
                    bool m_certTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PRODUCTENTRY_H_
