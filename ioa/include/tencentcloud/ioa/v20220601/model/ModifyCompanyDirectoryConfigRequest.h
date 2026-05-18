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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYCOMPANYDIRECTORYCONFIGREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYCOMPANYDIRECTORYCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * ModifyCompanyDirectoryConfig请求参数结构体
                */
                class ModifyCompanyDirectoryConfigRequest : public AbstractModel
                {
                public:
                    ModifyCompanyDirectoryConfigRequest();
                    ~ModifyCompanyDirectoryConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>企业目录类型</p>
                     * @return Type <p>企业目录类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>企业目录类型</p>
                     * @param _type <p>企业目录类型</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>企业目录名</p>
                     * @return Name <p>企业目录名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>企业目录名</p>
                     * @param _name <p>企业目录名</p>
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
                     * 获取<p>使用 JSON 字符串表示的配置信息</p><p>调用此接口前，需要先调用DescribeCompanyDirectoryConfig获取完整的配置，然后对里面需要更新的配置进行修改，请求的时候必须传完整配置，否则可能导致配置缺失出现错误。如果是脱敏的信息，保持原样的脱敏格式提交，如果和脱敏格式不一致，会认为是新的配置值更新原有配置</p>
                     * @return Config <p>使用 JSON 字符串表示的配置信息</p><p>调用此接口前，需要先调用DescribeCompanyDirectoryConfig获取完整的配置，然后对里面需要更新的配置进行修改，请求的时候必须传完整配置，否则可能导致配置缺失出现错误。如果是脱敏的信息，保持原样的脱敏格式提交，如果和脱敏格式不一致，会认为是新的配置值更新原有配置</p>
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置<p>使用 JSON 字符串表示的配置信息</p><p>调用此接口前，需要先调用DescribeCompanyDirectoryConfig获取完整的配置，然后对里面需要更新的配置进行修改，请求的时候必须传完整配置，否则可能导致配置缺失出现错误。如果是脱敏的信息，保持原样的脱敏格式提交，如果和脱敏格式不一致，会认为是新的配置值更新原有配置</p>
                     * @param _config <p>使用 JSON 字符串表示的配置信息</p><p>调用此接口前，需要先调用DescribeCompanyDirectoryConfig获取完整的配置，然后对里面需要更新的配置进行修改，请求的时候必须传完整配置，否则可能导致配置缺失出现错误。如果是脱敏的信息，保持原样的脱敏格式提交，如果和脱敏格式不一致，会认为是新的配置值更新原有配置</p>
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否开启定时同步</p>
                     * @return SyncEnable <p>是否开启定时同步</p>
                     * 
                     */
                    bool GetSyncEnable() const;

                    /**
                     * 设置<p>是否开启定时同步</p>
                     * @param _syncEnable <p>是否开启定时同步</p>
                     * 
                     */
                    void SetSyncEnable(const bool& _syncEnable);

                    /**
                     * 判断参数 SyncEnable 是否已赋值
                     * @return SyncEnable 是否已赋值
                     * 
                     */
                    bool SyncEnableHasBeenSet() const;

                    /**
                     * 获取<p>定时同步的策略，枚举值：支持每4小时（4hours）/每日定时（daily）/每周定时（weekly）</p>
                     * @return SyncPolicy <p>定时同步的策略，枚举值：支持每4小时（4hours）/每日定时（daily）/每周定时（weekly）</p>
                     * 
                     */
                    std::string GetSyncPolicy() const;

                    /**
                     * 设置<p>定时同步的策略，枚举值：支持每4小时（4hours）/每日定时（daily）/每周定时（weekly）</p>
                     * @param _syncPolicy <p>定时同步的策略，枚举值：支持每4小时（4hours）/每日定时（daily）/每周定时（weekly）</p>
                     * 
                     */
                    void SetSyncPolicy(const std::string& _syncPolicy);

                    /**
                     * 判断参数 SyncPolicy 是否已赋值
                     * @return SyncPolicy 是否已赋值
                     * 
                     */
                    bool SyncPolicyHasBeenSet() const;

                    /**
                     * 获取<p>JSON 字符串，针对不同类型的同步策略，提取对应不同的值</p>
                     * @return SyncPolicyParams <p>JSON 字符串，针对不同类型的同步策略，提取对应不同的值</p>
                     * 
                     */
                    std::string GetSyncPolicyParams() const;

                    /**
                     * 设置<p>JSON 字符串，针对不同类型的同步策略，提取对应不同的值</p>
                     * @param _syncPolicyParams <p>JSON 字符串，针对不同类型的同步策略，提取对应不同的值</p>
                     * 
                     */
                    void SetSyncPolicyParams(const std::string& _syncPolicyParams);

                    /**
                     * 判断参数 SyncPolicyParams 是否已赋值
                     * @return SyncPolicyParams 是否已赋值
                     * 
                     */
                    bool SyncPolicyParamsHasBeenSet() const;

                    /**
                     * 获取<p>是否同步创建认证源</p>
                     * @return CreateAuthConfig <p>是否同步创建认证源</p>
                     * 
                     */
                    bool GetCreateAuthConfig() const;

                    /**
                     * 设置<p>是否同步创建认证源</p>
                     * @param _createAuthConfig <p>是否同步创建认证源</p>
                     * 
                     */
                    void SetCreateAuthConfig(const bool& _createAuthConfig);

                    /**
                     * 判断参数 CreateAuthConfig 是否已赋值
                     * @return CreateAuthConfig 是否已赋值
                     * 
                     */
                    bool CreateAuthConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否在登录页展示</p>
                     * @return DisplayOnLoginPage <p>是否在登录页展示</p>
                     * 
                     */
                    bool GetDisplayOnLoginPage() const;

                    /**
                     * 设置<p>是否在登录页展示</p>
                     * @param _displayOnLoginPage <p>是否在登录页展示</p>
                     * 
                     */
                    void SetDisplayOnLoginPage(const bool& _displayOnLoginPage);

                    /**
                     * 判断参数 DisplayOnLoginPage 是否已赋值
                     * @return DisplayOnLoginPage 是否已赋值
                     * 
                     */
                    bool DisplayOnLoginPageHasBeenSet() const;

                    /**
                     * 获取<p>企业目录 ID</p>
                     * @return Id <p>企业目录 ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>企业目录 ID</p>
                     * @param _id <p>企业目录 ID</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>企业目录类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>企业目录名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>使用 JSON 字符串表示的配置信息</p><p>调用此接口前，需要先调用DescribeCompanyDirectoryConfig获取完整的配置，然后对里面需要更新的配置进行修改，请求的时候必须传完整配置，否则可能导致配置缺失出现错误。如果是脱敏的信息，保持原样的脱敏格式提交，如果和脱敏格式不一致，会认为是新的配置值更新原有配置</p>
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>是否开启定时同步</p>
                     */
                    bool m_syncEnable;
                    bool m_syncEnableHasBeenSet;

                    /**
                     * <p>定时同步的策略，枚举值：支持每4小时（4hours）/每日定时（daily）/每周定时（weekly）</p>
                     */
                    std::string m_syncPolicy;
                    bool m_syncPolicyHasBeenSet;

                    /**
                     * <p>JSON 字符串，针对不同类型的同步策略，提取对应不同的值</p>
                     */
                    std::string m_syncPolicyParams;
                    bool m_syncPolicyParamsHasBeenSet;

                    /**
                     * <p>是否同步创建认证源</p>
                     */
                    bool m_createAuthConfig;
                    bool m_createAuthConfigHasBeenSet;

                    /**
                     * <p>是否在登录页展示</p>
                     */
                    bool m_displayOnLoginPage;
                    bool m_displayOnLoginPageHasBeenSet;

                    /**
                     * <p>企业目录 ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYCOMPANYDIRECTORYCONFIGREQUEST_H_
