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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_APIKEYDETAIL_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_APIKEYDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/BindingItem.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * API 密钥详情
                */
                class ApiKeyDetail : public AbstractModel
                {
                public:
                    ApiKeyDetail();
                    ~ApiKeyDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API 密钥 ID。
                     * @return ApiKeyId API 密钥 ID。
                     * 
                     */
                    std::string GetApiKeyId() const;

                    /**
                     * 设置API 密钥 ID。
                     * @param _apiKeyId API 密钥 ID。
                     * 
                     */
                    void SetApiKeyId(const std::string& _apiKeyId);

                    /**
                     * 判断参数 ApiKeyId 是否已赋值
                     * @return ApiKeyId 是否已赋值
                     * 
                     */
                    bool ApiKeyIdHasBeenSet() const;

                    /**
                     * 获取名称。
                     * @return Name 名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称。
                     * @param _name 名称。
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
                     * 获取API 密钥值。接口返回脱敏值
                     * @return ApiKey API 密钥值。接口返回脱敏值
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 设置API 密钥值。接口返回脱敏值
                     * @param _apiKey API 密钥值。接口返回脱敏值
                     * 
                     */
                    void SetApiKey(const std::string& _apiKey);

                    /**
                     * 判断参数 ApiKey 是否已赋值
                     * @return ApiKey 是否已赋值
                     * 
                     */
                    bool ApiKeyHasBeenSet() const;

                    /**
                     * 获取备注。
                     * @return Remark 备注。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注。
                     * @param _remark 备注。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取平台类型。当前支持填值：maas
                     * @return Platform 平台类型。当前支持填值：maas
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台类型。当前支持填值：maas
                     * @param _platform 平台类型。当前支持填值：maas
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
                     * 获取主账号。
                     * @return Uin 主账号。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置主账号。
                     * @param _uin 主账号。
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
                     * 获取子账号。
                     * @return SubUin 子账号。
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置子账号。
                     * @param _subUin 子账号。
                     * 
                     */
                    void SetSubUin(const std::string& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取状态。取值：enable（启用）、disable（禁用）。
                     * @return Status 状态。取值：enable（启用）、disable（禁用）。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态。取值：enable（启用）、disable（禁用）。
                     * @param _status 状态。取值：enable（启用）、disable（禁用）。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取绑定类型。取值：all（全部模型和服务）、model_all_endpoint_custom（全部模型+自定义服务）、model_custom_endpoint_all（自定义模型+全部服务）、model_custom_endpoint_custom（自定义模型+自定义服务）。
                     * @return BindType 绑定类型。取值：all（全部模型和服务）、model_all_endpoint_custom（全部模型+自定义服务）、model_custom_endpoint_all（自定义模型+全部服务）、model_custom_endpoint_custom（自定义模型+自定义服务）。
                     * 
                     */
                    std::string GetBindType() const;

                    /**
                     * 设置绑定类型。取值：all（全部模型和服务）、model_all_endpoint_custom（全部模型+自定义服务）、model_custom_endpoint_all（自定义模型+全部服务）、model_custom_endpoint_custom（自定义模型+自定义服务）。
                     * @param _bindType 绑定类型。取值：all（全部模型和服务）、model_all_endpoint_custom（全部模型+自定义服务）、model_custom_endpoint_all（自定义模型+全部服务）、model_custom_endpoint_custom（自定义模型+自定义服务）。
                     * 
                     */
                    void SetBindType(const std::string& _bindType);

                    /**
                     * 判断参数 BindType 是否已赋值
                     * @return BindType 是否已赋值
                     * 
                     */
                    bool BindTypeHasBeenSet() const;

                    /**
                     * 获取创建时间。格式：YYYY-MM-DD HH:mm:ss。
                     * @return CreateTime 创建时间。格式：YYYY-MM-DD HH:mm:ss。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。格式：YYYY-MM-DD HH:mm:ss。
                     * @param _createTime 创建时间。格式：YYYY-MM-DD HH:mm:ss。
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
                     * 获取更新时间。格式：YYYY-MM-DD HH:mm:ss。
                     * @return UpdateTime 更新时间。格式：YYYY-MM-DD HH:mm:ss。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间。格式：YYYY-MM-DD HH:mm:ss。
                     * @param _updateTime 更新时间。格式：YYYY-MM-DD HH:mm:ss。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取应用 ID。
                     * @return AppId 应用 ID。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置应用 ID。
                     * @param _appId 应用 ID。
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取是否可编辑。true 表示可编辑，false 表示不可编辑。
                     * @return Editable 是否可编辑。true 表示可编辑，false 表示不可编辑。
                     * 
                     */
                    bool GetEditable() const;

                    /**
                     * 设置是否可编辑。true 表示可编辑，false 表示不可编辑。
                     * @param _editable 是否可编辑。true 表示可编辑，false 表示不可编辑。
                     * 
                     */
                    void SetEditable(const bool& _editable);

                    /**
                     * 判断参数 Editable 是否已赋值
                     * @return Editable 是否已赋值
                     * 
                     */
                    bool EditableHasBeenSet() const;

                    /**
                     * 获取绑定资源列表，区分 endpoint 和 model 类型。
                     * @return BindingItems 绑定资源列表，区分 endpoint 和 model 类型。
                     * 
                     */
                    std::vector<BindingItem> GetBindingItems() const;

                    /**
                     * 设置绑定资源列表，区分 endpoint 和 model 类型。
                     * @param _bindingItems 绑定资源列表，区分 endpoint 和 model 类型。
                     * 
                     */
                    void SetBindingItems(const std::vector<BindingItem>& _bindingItems);

                    /**
                     * 判断参数 BindingItems 是否已赋值
                     * @return BindingItems 是否已赋值
                     * 
                     */
                    bool BindingItemsHasBeenSet() const;

                    /**
                     * 获取IP 白名单列表。支持 IPv4 和 CIDR 格式。空数组表示不限制 IP。
                     * @return IpWhitelist IP 白名单列表。支持 IPv4 和 CIDR 格式。空数组表示不限制 IP。
                     * 
                     */
                    std::vector<std::string> GetIpWhitelist() const;

                    /**
                     * 设置IP 白名单列表。支持 IPv4 和 CIDR 格式。空数组表示不限制 IP。
                     * @param _ipWhitelist IP 白名单列表。支持 IPv4 和 CIDR 格式。空数组表示不限制 IP。
                     * 
                     */
                    void SetIpWhitelist(const std::vector<std::string>& _ipWhitelist);

                    /**
                     * 判断参数 IpWhitelist 是否已赋值
                     * @return IpWhitelist 是否已赋值
                     * 
                     */
                    bool IpWhitelistHasBeenSet() const;

                    /**
                     * 获取当Platform为maas时该字段为空
                     * @return Creator 当Platform为maas时该字段为空
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置当Platform为maas时该字段为空
                     * @param _creator 当Platform为maas时该字段为空
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                private:

                    /**
                     * API 密钥 ID。
                     */
                    std::string m_apiKeyId;
                    bool m_apiKeyIdHasBeenSet;

                    /**
                     * 名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * API 密钥值。接口返回脱敏值
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                    /**
                     * 备注。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 平台类型。当前支持填值：maas
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 主账号。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 子账号。
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * 状态。取值：enable（启用）、disable（禁用）。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 绑定类型。取值：all（全部模型和服务）、model_all_endpoint_custom（全部模型+自定义服务）、model_custom_endpoint_all（自定义模型+全部服务）、model_custom_endpoint_custom（自定义模型+自定义服务）。
                     */
                    std::string m_bindType;
                    bool m_bindTypeHasBeenSet;

                    /**
                     * 创建时间。格式：YYYY-MM-DD HH:mm:ss。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间。格式：YYYY-MM-DD HH:mm:ss。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 应用 ID。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 是否可编辑。true 表示可编辑，false 表示不可编辑。
                     */
                    bool m_editable;
                    bool m_editableHasBeenSet;

                    /**
                     * 绑定资源列表，区分 endpoint 和 model 类型。
                     */
                    std::vector<BindingItem> m_bindingItems;
                    bool m_bindingItemsHasBeenSet;

                    /**
                     * IP 白名单列表。支持 IPv4 和 CIDR 格式。空数组表示不限制 IP。
                     */
                    std::vector<std::string> m_ipWhitelist;
                    bool m_ipWhitelistHasBeenSet;

                    /**
                     * 当Platform为maas时该字段为空
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_APIKEYDETAIL_H_
