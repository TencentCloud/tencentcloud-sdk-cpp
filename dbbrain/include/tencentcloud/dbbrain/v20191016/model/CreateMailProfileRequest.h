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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_CREATEMAILPROFILEREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_CREATEMAILPROFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20191016/model/ProfileInfo.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * CreateMailProfile请求参数结构体
                */
                class CreateMailProfileRequest : public AbstractModel
                {
                public:
                    CreateMailProfileRequest();
                    ~CreateMailProfileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取邮件配置内容。
                     * @return ProfileInfo 邮件配置内容。
                     * 
                     */
                    ProfileInfo GetProfileInfo() const;

                    /**
                     * 设置邮件配置内容。
                     * @param _profileInfo 邮件配置内容。
                     * 
                     */
                    void SetProfileInfo(const ProfileInfo& _profileInfo);

                    /**
                     * 判断参数 ProfileInfo 是否已赋值
                     * @return ProfileInfo 是否已赋值
                     * 
                     */
                    bool ProfileInfoHasBeenSet() const;

                    /**
                     * 获取配置级别，支持值包括："User" - 用户级别，"Instance" - 实例级别，其中数据库巡检邮件配置为用户级别，定期生成邮件配置为实例级别。
                     * @return ProfileLevel 配置级别，支持值包括："User" - 用户级别，"Instance" - 实例级别，其中数据库巡检邮件配置为用户级别，定期生成邮件配置为实例级别。
                     * 
                     */
                    std::string GetProfileLevel() const;

                    /**
                     * 设置配置级别，支持值包括："User" - 用户级别，"Instance" - 实例级别，其中数据库巡检邮件配置为用户级别，定期生成邮件配置为实例级别。
                     * @param _profileLevel 配置级别，支持值包括："User" - 用户级别，"Instance" - 实例级别，其中数据库巡检邮件配置为用户级别，定期生成邮件配置为实例级别。
                     * 
                     */
                    void SetProfileLevel(const std::string& _profileLevel);

                    /**
                     * 判断参数 ProfileLevel 是否已赋值
                     * @return ProfileLevel 是否已赋值
                     * 
                     */
                    bool ProfileLevelHasBeenSet() const;

                    /**
                     * 获取配置名称，需要保持唯一性，数据库巡检邮件配置名称自拟；定期生成邮件配置命名格式："scheduler_" + {instanceId}，如"schduler_cdb-test"。
                     * @return ProfileName 配置名称，需要保持唯一性，数据库巡检邮件配置名称自拟；定期生成邮件配置命名格式："scheduler_" + {instanceId}，如"schduler_cdb-test"。
                     * 
                     */
                    std::string GetProfileName() const;

                    /**
                     * 设置配置名称，需要保持唯一性，数据库巡检邮件配置名称自拟；定期生成邮件配置命名格式："scheduler_" + {instanceId}，如"schduler_cdb-test"。
                     * @param _profileName 配置名称，需要保持唯一性，数据库巡检邮件配置名称自拟；定期生成邮件配置命名格式："scheduler_" + {instanceId}，如"schduler_cdb-test"。
                     * 
                     */
                    void SetProfileName(const std::string& _profileName);

                    /**
                     * 判断参数 ProfileName 是否已赋值
                     * @return ProfileName 是否已赋值
                     * 
                     */
                    bool ProfileNameHasBeenSet() const;

                    /**
                     * 获取配置类型，支持值包括："dbScan_mail_configuration" - 数据库巡检邮件配置，"scheduler_mail_configuration" - 定期生成邮件配置。
                     * @return ProfileType 配置类型，支持值包括："dbScan_mail_configuration" - 数据库巡检邮件配置，"scheduler_mail_configuration" - 定期生成邮件配置。
                     * 
                     */
                    std::string GetProfileType() const;

                    /**
                     * 设置配置类型，支持值包括："dbScan_mail_configuration" - 数据库巡检邮件配置，"scheduler_mail_configuration" - 定期生成邮件配置。
                     * @param _profileType 配置类型，支持值包括："dbScan_mail_configuration" - 数据库巡检邮件配置，"scheduler_mail_configuration" - 定期生成邮件配置。
                     * 
                     */
                    void SetProfileType(const std::string& _profileType);

                    /**
                     * 判断参数 ProfileType 是否已赋值
                     * @return ProfileType 是否已赋值
                     * 
                     */
                    bool ProfileTypeHasBeenSet() const;

                    /**
                     * 获取服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL。
                     * @return Product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL。
                     * @param _product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取配置绑定的实例ID，当配置级别为"Instance"时需要传入且只能为一个实例；当配置级别为“User”时，此参数不填。
                     * @return BindInstanceIds 配置绑定的实例ID，当配置级别为"Instance"时需要传入且只能为一个实例；当配置级别为“User”时，此参数不填。
                     * 
                     */
                    std::vector<std::string> GetBindInstanceIds() const;

                    /**
                     * 设置配置绑定的实例ID，当配置级别为"Instance"时需要传入且只能为一个实例；当配置级别为“User”时，此参数不填。
                     * @param _bindInstanceIds 配置绑定的实例ID，当配置级别为"Instance"时需要传入且只能为一个实例；当配置级别为“User”时，此参数不填。
                     * 
                     */
                    void SetBindInstanceIds(const std::vector<std::string>& _bindInstanceIds);

                    /**
                     * 判断参数 BindInstanceIds 是否已赋值
                     * @return BindInstanceIds 是否已赋值
                     * 
                     */
                    bool BindInstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 邮件配置内容。
                     */
                    ProfileInfo m_profileInfo;
                    bool m_profileInfoHasBeenSet;

                    /**
                     * 配置级别，支持值包括："User" - 用户级别，"Instance" - 实例级别，其中数据库巡检邮件配置为用户级别，定期生成邮件配置为实例级别。
                     */
                    std::string m_profileLevel;
                    bool m_profileLevelHasBeenSet;

                    /**
                     * 配置名称，需要保持唯一性，数据库巡检邮件配置名称自拟；定期生成邮件配置命名格式："scheduler_" + {instanceId}，如"schduler_cdb-test"。
                     */
                    std::string m_profileName;
                    bool m_profileNameHasBeenSet;

                    /**
                     * 配置类型，支持值包括："dbScan_mail_configuration" - 数据库巡检邮件配置，"scheduler_mail_configuration" - 定期生成邮件配置。
                     */
                    std::string m_profileType;
                    bool m_profileTypeHasBeenSet;

                    /**
                     * 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 配置绑定的实例ID，当配置级别为"Instance"时需要传入且只能为一个实例；当配置级别为“User”时，此参数不填。
                     */
                    std::vector<std::string> m_bindInstanceIds;
                    bool m_bindInstanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_CREATEMAILPROFILEREQUEST_H_
