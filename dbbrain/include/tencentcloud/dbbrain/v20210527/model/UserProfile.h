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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_USERPROFILE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_USERPROFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/ProfileInfo.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 用户配置的相关信息，包括邮件配置。
                */
                class UserProfile : public AbstractModel
                {
                public:
                    UserProfile();
                    ~UserProfile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置的id。
                     * @return ProfileId 配置的id。
                     * 
                     */
                    std::string GetProfileId() const;

                    /**
                     * 设置配置的id。
                     * @param _profileId 配置的id。
                     * 
                     */
                    void SetProfileId(const std::string& _profileId);

                    /**
                     * 判断参数 ProfileId 是否已赋值
                     * @return ProfileId 是否已赋值
                     * 
                     */
                    bool ProfileIdHasBeenSet() const;

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
                     * 获取配置名称。
                     * @return ProfileName 配置名称。
                     * 
                     */
                    std::string GetProfileName() const;

                    /**
                     * 设置配置名称。
                     * @param _profileName 配置名称。
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
                     * 获取配置详情。
                     * @return ProfileInfo 配置详情。
                     * 
                     */
                    ProfileInfo GetProfileInfo() const;

                    /**
                     * 设置配置详情。
                     * @param _profileInfo 配置详情。
                     * 
                     */
                    void SetProfileInfo(const ProfileInfo& _profileInfo);

                    /**
                     * 判断参数 ProfileInfo 是否已赋值
                     * @return ProfileInfo 是否已赋值
                     * 
                     */
                    bool ProfileInfoHasBeenSet() const;

                private:

                    /**
                     * 配置的id。
                     */
                    std::string m_profileId;
                    bool m_profileIdHasBeenSet;

                    /**
                     * 配置类型，支持值包括："dbScan_mail_configuration" - 数据库巡检邮件配置，"scheduler_mail_configuration" - 定期生成邮件配置。
                     */
                    std::string m_profileType;
                    bool m_profileTypeHasBeenSet;

                    /**
                     * 配置级别，支持值包括："User" - 用户级别，"Instance" - 实例级别，其中数据库巡检邮件配置为用户级别，定期生成邮件配置为实例级别。
                     */
                    std::string m_profileLevel;
                    bool m_profileLevelHasBeenSet;

                    /**
                     * 配置名称。
                     */
                    std::string m_profileName;
                    bool m_profileNameHasBeenSet;

                    /**
                     * 配置详情。
                     */
                    ProfileInfo m_profileInfo;
                    bool m_profileInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_USERPROFILE_H_
