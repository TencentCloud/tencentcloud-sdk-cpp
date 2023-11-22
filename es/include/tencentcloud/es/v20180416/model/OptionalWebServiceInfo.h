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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_OPTIONALWEBSERVICEINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_OPTIONALWEBSERVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 可选web组件信息
                */
                class OptionalWebServiceInfo : public AbstractModel
                {
                public:
                    OptionalWebServiceInfo();
                    ~OptionalWebServiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取公网url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicUrl 公网url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicUrl() const;

                    /**
                     * 设置公网url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicUrl 公网url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicUrl(const std::string& _publicUrl);

                    /**
                     * 判断参数 PublicUrl 是否已赋值
                     * @return PublicUrl 是否已赋值
                     * 
                     */
                    bool PublicUrlHasBeenSet() const;

                    /**
                     * 获取内网url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateUrl 内网url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivateUrl() const;

                    /**
                     * 设置内网url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateUrl 内网url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivateUrl(const std::string& _privateUrl);

                    /**
                     * 判断参数 PrivateUrl 是否已赋值
                     * @return PrivateUrl 是否已赋值
                     * 
                     */
                    bool PrivateUrlHasBeenSet() const;

                    /**
                     * 获取公网访问权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicAccess 公网访问权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicAccess() const;

                    /**
                     * 设置公网访问权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicAccess 公网访问权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicAccess(const std::string& _publicAccess);

                    /**
                     * 判断参数 PublicAccess 是否已赋值
                     * @return PublicAccess 是否已赋值
                     * 
                     */
                    bool PublicAccessHasBeenSet() const;

                    /**
                     * 获取内网访问权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateAccess 内网访问权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivateAccess() const;

                    /**
                     * 设置内网访问权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateAccess 内网访问权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivateAccess(const std::string& _privateAccess);

                    /**
                     * 判断参数 PrivateAccess 是否已赋值
                     * @return PrivateAccess 是否已赋值
                     * 
                     */
                    bool PrivateAccessHasBeenSet() const;

                    /**
                     * 获取版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取web服务内网vip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateVip web服务内网vip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivateVip() const;

                    /**
                     * 设置web服务内网vip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateVip web服务内网vip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivateVip(const std::string& _privateVip);

                    /**
                     * 判断参数 PrivateVip 是否已赋值
                     * @return PrivateVip 是否已赋值
                     * 
                     */
                    bool PrivateVipHasBeenSet() const;

                    /**
                     * 获取自定义cerebro内网url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomPrivateUrl 自定义cerebro内网url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomPrivateUrl() const;

                    /**
                     * 设置自定义cerebro内网url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customPrivateUrl 自定义cerebro内网url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomPrivateUrl(const std::string& _customPrivateUrl);

                    /**
                     * 判断参数 CustomPrivateUrl 是否已赋值
                     * @return CustomPrivateUrl 是否已赋值
                     * 
                     */
                    bool CustomPrivateUrlHasBeenSet() const;

                private:

                    /**
                     * 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 公网url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicUrl;
                    bool m_publicUrlHasBeenSet;

                    /**
                     * 内网url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privateUrl;
                    bool m_privateUrlHasBeenSet;

                    /**
                     * 公网访问权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicAccess;
                    bool m_publicAccessHasBeenSet;

                    /**
                     * 内网访问权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privateAccess;
                    bool m_privateAccessHasBeenSet;

                    /**
                     * 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * web服务内网vip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privateVip;
                    bool m_privateVipHasBeenSet;

                    /**
                     * 自定义cerebro内网url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customPrivateUrl;
                    bool m_customPrivateUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_OPTIONALWEBSERVICEINFO_H_
