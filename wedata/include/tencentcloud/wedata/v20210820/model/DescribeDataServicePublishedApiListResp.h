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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASERVICEPUBLISHEDAPILISTRESP_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASERVICEPUBLISHEDAPILISTRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 获取数据服务API的发布态信息列表响应内容
                */
                class DescribeDataServicePublishedApiListResp : public AbstractModel
                {
                public:
                    DescribeDataServicePublishedApiListResp();
                    ~DescribeDataServicePublishedApiListResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务id
                     * @return Id 服务id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置服务id
                     * @param _id 服务id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取服务Api名称
                     * @return ApiName 服务Api名称
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置服务Api名称
                     * @param _apiName 服务Api名称
                     * 
                     */
                    void SetApiName(const std::string& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     * 
                     */
                    bool ApiNameHasBeenSet() const;

                    /**
                     * 获取所属目录名称
                     * @return ApiFolderName 所属目录名称
                     * 
                     */
                    std::string GetApiFolderName() const;

                    /**
                     * 设置所属目录名称
                     * @param _apiFolderName 所属目录名称
                     * 
                     */
                    void SetApiFolderName(const std::string& _apiFolderName);

                    /**
                     * 判断参数 ApiFolderName 是否已赋值
                     * @return ApiFolderName 是否已赋值
                     * 
                     */
                    bool ApiFolderNameHasBeenSet() const;

                    /**
                     * 获取服务Api标签名称集合
                     * @return ApiTagNames 服务Api标签名称集合
                     * 
                     */
                    std::string GetApiTagNames() const;

                    /**
                     * 设置服务Api标签名称集合
                     * @param _apiTagNames 服务Api标签名称集合
                     * 
                     */
                    void SetApiTagNames(const std::string& _apiTagNames);

                    /**
                     * 判断参数 ApiTagNames 是否已赋值
                     * @return ApiTagNames 是否已赋值
                     * 
                     */
                    bool ApiTagNamesHasBeenSet() const;

                    /**
                     * 获取服务负责人
                     * @return OwnerName 服务负责人
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置服务负责人
                     * @param _ownerName 服务负责人
                     * 
                     */
                    void SetOwnerName(const std::string& _ownerName);

                    /**
                     * 判断参数 OwnerName 是否已赋值
                     * @return OwnerName 是否已赋值
                     * 
                     */
                    bool OwnerNameHasBeenSet() const;

                    /**
                     * 获取服务创建时间
                     * @return CreateTime 服务创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置服务创建时间
                     * @param _createTime 服务创建时间
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
                     * 获取Api的id
                     * @return ApiId Api的id
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置Api的id
                     * @param _apiId Api的id
                     * 
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     * 
                     */
                    bool ApiIdHasBeenSet() const;

                    /**
                     * 获取服务Api认证方式 0:免认证 1:应用认证
                     * @return AuthType 服务Api认证方式 0:免认证 1:应用认证
                     * 
                     */
                    int64_t GetAuthType() const;

                    /**
                     * 设置服务Api认证方式 0:免认证 1:应用认证
                     * @param _authType 服务Api认证方式 0:免认证 1:应用认证
                     * 
                     */
                    void SetAuthType(const int64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取服务Api状态 0:创建 1:已上线 2:已删除 3:已下线
                     * @return ApiStatus 服务Api状态 0:创建 1:已上线 2:已删除 3:已下线
                     * 
                     */
                    int64_t GetApiStatus() const;

                    /**
                     * 设置服务Api状态 0:创建 1:已上线 2:已删除 3:已下线
                     * @param _apiStatus 服务Api状态 0:创建 1:已上线 2:已删除 3:已下线
                     * 
                     */
                    void SetApiStatus(const int64_t& _apiStatus);

                    /**
                     * 判断参数 ApiStatus 是否已赋值
                     * @return ApiStatus 是否已赋值
                     * 
                     */
                    bool ApiStatusHasBeenSet() const;

                    /**
                     * 获取配置方式 0:向导、1、脚本、2、注册Api
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigType 配置方式 0:向导、1、脚本、2、注册Api
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetConfigType() const;

                    /**
                     * 设置配置方式 0:向导、1、脚本、2、注册Api
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configType 配置方式 0:向导、1、脚本、2、注册Api
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigType(const uint64_t& _configType);

                    /**
                     * 判断参数 ConfigType 是否已赋值
                     * @return ConfigType 是否已赋值
                     * 
                     */
                    bool ConfigTypeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 服务id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 服务Api名称
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * 所属目录名称
                     */
                    std::string m_apiFolderName;
                    bool m_apiFolderNameHasBeenSet;

                    /**
                     * 服务Api标签名称集合
                     */
                    std::string m_apiTagNames;
                    bool m_apiTagNamesHasBeenSet;

                    /**
                     * 服务负责人
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                    /**
                     * 服务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Api的id
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * 服务Api认证方式 0:免认证 1:应用认证
                     */
                    int64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 服务Api状态 0:创建 1:已上线 2:已删除 3:已下线
                     */
                    int64_t m_apiStatus;
                    bool m_apiStatusHasBeenSet;

                    /**
                     * 配置方式 0:向导、1、脚本、2、注册Api
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_configType;
                    bool m_configTypeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASERVICEPUBLISHEDAPILISTRESP_H_
