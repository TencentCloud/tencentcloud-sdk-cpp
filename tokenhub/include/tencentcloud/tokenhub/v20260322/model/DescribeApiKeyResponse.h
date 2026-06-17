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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEAPIKEYRESPONSE_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEAPIKEYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/BindingItem.h>
#include <tencentcloud/tokenhub/v20260322/model/QuotaInfo.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeApiKey返回参数结构体
                */
                class DescribeApiKeyResponse : public AbstractModel
                {
                public:
                    DescribeApiKeyResponse();
                    ~DescribeApiKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取API 密钥 ID。
                     * @return ApiKeyId API 密钥 ID。
                     * 
                     */
                    std::string GetApiKeyId() const;

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
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取API 密钥值（明文）。
                     * @return ApiKey API 密钥值（明文）。
                     * 
                     */
                    std::string GetApiKey() const;

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
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取平台类型。枚举：maas
                     * @return Platform 平台类型。枚举：maas
                     * 
                     */
                    std::string GetPlatform() const;

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
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取绑定类型。取值：all（全部模型和接入点）、model_all_endpoint_custom（全部模型+自定义接入点）、model_custom_endpoint_all（自定义模型+全部接入点）、model_custom_endpoint_custom（自定义模型+自定义接入点）。
                     * @return BindType 绑定类型。取值：all（全部模型和接入点）、model_all_endpoint_custom（全部模型+自定义接入点）、model_custom_endpoint_all（自定义模型+全部接入点）、model_custom_endpoint_custom（自定义模型+自定义接入点）。
                     * 
                     */
                    std::string GetBindType() const;

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
                     * 判断参数 BindingItems 是否已赋值
                     * @return BindingItems 是否已赋值
                     * 
                     */
                    bool BindingItemsHasBeenSet() const;

                    /**
                     * 获取IP 白名单列表。支持 IPv4和 CIDR 格式。空数组表示不限制 IP。
                     * @return IpWhitelist IP 白名单列表。支持 IPv4和 CIDR 格式。空数组表示不限制 IP。
                     * 
                     */
                    std::vector<std::string> GetIpWhitelist() const;

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
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取Token 限额多维度信息。未配置限额时不返回该字段。
                     * @return QuotaSet Token 限额多维度信息。未配置限额时不返回该字段。
                     * 
                     */
                    std::vector<QuotaInfo> GetQuotaSet() const;

                    /**
                     * 判断参数 QuotaSet 是否已赋值
                     * @return QuotaSet 是否已赋值
                     * 
                     */
                    bool QuotaSetHasBeenSet() const;

                    /**
                     * 获取Token 限额状态。空字符串表示未配置任何限额包；active 表示已配置且当前可用；inactive 表示已配置但额度耗尽
                     * @return QuotaStatus Token 限额状态。空字符串表示未配置任何限额包；active 表示已配置且当前可用；inactive 表示已配置但额度耗尽
                     * 
                     */
                    std::string GetQuotaStatus() const;

                    /**
                     * 判断参数 QuotaStatus 是否已赋值
                     * @return QuotaStatus 是否已赋值
                     * 
                     */
                    bool QuotaStatusHasBeenSet() const;

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
                     * API 密钥值（明文）。
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                    /**
                     * 备注。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 平台类型。枚举：maas
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
                     * 绑定类型。取值：all（全部模型和接入点）、model_all_endpoint_custom（全部模型+自定义接入点）、model_custom_endpoint_all（自定义模型+全部接入点）、model_custom_endpoint_custom（自定义模型+自定义接入点）。
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
                     * IP 白名单列表。支持 IPv4和 CIDR 格式。空数组表示不限制 IP。
                     */
                    std::vector<std::string> m_ipWhitelist;
                    bool m_ipWhitelistHasBeenSet;

                    /**
                     * 当Platform为maas时该字段为空
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Token 限额多维度信息。未配置限额时不返回该字段。
                     */
                    std::vector<QuotaInfo> m_quotaSet;
                    bool m_quotaSetHasBeenSet;

                    /**
                     * Token 限额状态。空字符串表示未配置任何限额包；active 表示已配置且当前可用；inactive 表示已配置但额度耗尽
                     */
                    std::string m_quotaStatus;
                    bool m_quotaStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEAPIKEYRESPONSE_H_
