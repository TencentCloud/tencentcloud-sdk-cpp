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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_ROLEITEM_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_ROLEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/DetailedRolePerm.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 角色信息
                */
                class RoleItem : public AbstractModel
                {
                public:
                    RoleItem();
                    ~RoleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色名称
                     * @return RoleName 角色名称
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名称
                     * @param _roleName 角色名称
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取是否开启消费
                     * @return PermRead 是否开启消费
                     * 
                     */
                    bool GetPermRead() const;

                    /**
                     * 设置是否开启消费
                     * @param _permRead 是否开启消费
                     * 
                     */
                    void SetPermRead(const bool& _permRead);

                    /**
                     * 判断参数 PermRead 是否已赋值
                     * @return PermRead 是否已赋值
                     * 
                     */
                    bool PermReadHasBeenSet() const;

                    /**
                     * 获取是否开启生产
                     * @return PermWrite 是否开启生产
                     * 
                     */
                    bool GetPermWrite() const;

                    /**
                     * 设置是否开启生产
                     * @param _permWrite 是否开启生产
                     * 
                     */
                    void SetPermWrite(const bool& _permWrite);

                    /**
                     * 判断参数 PermWrite 是否已赋值
                     * @return PermWrite 是否已赋值
                     * 
                     */
                    bool PermWriteHasBeenSet() const;

                    /**
                     * 获取Access Key
                     * @return AccessKey Access Key
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置Access Key
                     * @param _accessKey Access Key
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取Secret Key
                     * @return SecretKey Secret Key
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置Secret Key
                     * @param _secretKey Secret Key
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取备注信息
                     * @return Remark 备注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息
                     * @param _remark 备注信息
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
                     * 获取创建时间，秒为单位
                     * @return CreatedTime 创建时间，秒为单位
                     * 
                     */
                    int64_t GetCreatedTime() const;

                    /**
                     * 设置创建时间，秒为单位
                     * @param _createdTime 创建时间，秒为单位
                     * 
                     */
                    void SetCreatedTime(const int64_t& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取修改时间，秒为单位
                     * @return ModifiedTime 修改时间，秒为单位
                     * 
                     */
                    int64_t GetModifiedTime() const;

                    /**
                     * 设置修改时间，秒为单位
                     * @param _modifiedTime 修改时间，秒为单位
                     * 
                     */
                    void SetModifiedTime(const int64_t& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取权限类型，默认按集群授权（Cluster：集群级别；TopicAndGroup：主题&消费组级别）
                     * @return PermType 权限类型，默认按集群授权（Cluster：集群级别；TopicAndGroup：主题&消费组级别）
                     * 
                     */
                    std::string GetPermType() const;

                    /**
                     * 设置权限类型，默认按集群授权（Cluster：集群级别；TopicAndGroup：主题&消费组级别）
                     * @param _permType 权限类型，默认按集群授权（Cluster：集群级别；TopicAndGroup：主题&消费组级别）
                     * 
                     */
                    void SetPermType(const std::string& _permType);

                    /**
                     * 判断参数 PermType 是否已赋值
                     * @return PermType 是否已赋值
                     * 
                     */
                    bool PermTypeHasBeenSet() const;

                    /**
                     * 获取Topic和Group维度权限配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetailedRolePerms Topic和Group维度权限配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DetailedRolePerm> GetDetailedRolePerms() const;

                    /**
                     * 设置Topic和Group维度权限配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detailedRolePerms Topic和Group维度权限配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetailedRolePerms(const std::vector<DetailedRolePerm>& _detailedRolePerms);

                    /**
                     * 判断参数 DetailedRolePerms 是否已赋值
                     * @return DetailedRolePerms 是否已赋值
                     * 
                     */
                    bool DetailedRolePermsHasBeenSet() const;

                private:

                    /**
                     * 角色名称
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 是否开启消费
                     */
                    bool m_permRead;
                    bool m_permReadHasBeenSet;

                    /**
                     * 是否开启生产
                     */
                    bool m_permWrite;
                    bool m_permWriteHasBeenSet;

                    /**
                     * Access Key
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * Secret Key
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 创建时间，秒为单位
                     */
                    int64_t m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 修改时间，秒为单位
                     */
                    int64_t m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 权限类型，默认按集群授权（Cluster：集群级别；TopicAndGroup：主题&消费组级别）
                     */
                    std::string m_permType;
                    bool m_permTypeHasBeenSet;

                    /**
                     * Topic和Group维度权限配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DetailedRolePerm> m_detailedRolePerms;
                    bool m_detailedRolePermsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_ROLEITEM_H_
