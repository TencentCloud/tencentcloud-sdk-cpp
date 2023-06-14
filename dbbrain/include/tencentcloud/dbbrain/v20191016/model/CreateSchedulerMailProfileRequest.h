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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_CREATESCHEDULERMAILPROFILEREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_CREATESCHEDULERMAILPROFILEREQUEST_H_

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
                * CreateSchedulerMailProfile请求参数结构体
                */
                class CreateSchedulerMailProfileRequest : public AbstractModel
                {
                public:
                    CreateSchedulerMailProfileRequest();
                    ~CreateSchedulerMailProfileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取取值范围1-7，分别代表周一至周日。
                     * @return WeekConfiguration 取值范围1-7，分别代表周一至周日。
                     * 
                     */
                    std::vector<int64_t> GetWeekConfiguration() const;

                    /**
                     * 设置取值范围1-7，分别代表周一至周日。
                     * @param _weekConfiguration 取值范围1-7，分别代表周一至周日。
                     * 
                     */
                    void SetWeekConfiguration(const std::vector<int64_t>& _weekConfiguration);

                    /**
                     * 判断参数 WeekConfiguration 是否已赋值
                     * @return WeekConfiguration 是否已赋值
                     * 
                     */
                    bool WeekConfigurationHasBeenSet() const;

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
                     * 获取配置名称，需要保持唯一性，定期生成邮件配置命名格式："scheduler_" + {instanceId}，如"schduler_cdb-test"。
                     * @return ProfileName 配置名称，需要保持唯一性，定期生成邮件配置命名格式："scheduler_" + {instanceId}，如"schduler_cdb-test"。
                     * 
                     */
                    std::string GetProfileName() const;

                    /**
                     * 设置配置名称，需要保持唯一性，定期生成邮件配置命名格式："scheduler_" + {instanceId}，如"schduler_cdb-test"。
                     * @param _profileName 配置名称，需要保持唯一性，定期生成邮件配置命名格式："scheduler_" + {instanceId}，如"schduler_cdb-test"。
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
                     * 获取配置订阅的实例ID。
                     * @return BindInstanceId 配置订阅的实例ID。
                     * 
                     */
                    std::string GetBindInstanceId() const;

                    /**
                     * 设置配置订阅的实例ID。
                     * @param _bindInstanceId 配置订阅的实例ID。
                     * 
                     */
                    void SetBindInstanceId(const std::string& _bindInstanceId);

                    /**
                     * 判断参数 BindInstanceId 是否已赋值
                     * @return BindInstanceId 是否已赋值
                     * 
                     */
                    bool BindInstanceIdHasBeenSet() const;

                    /**
                     * 获取服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     * @return Product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     * @param _product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * 取值范围1-7，分别代表周一至周日。
                     */
                    std::vector<int64_t> m_weekConfiguration;
                    bool m_weekConfigurationHasBeenSet;

                    /**
                     * 邮件配置内容。
                     */
                    ProfileInfo m_profileInfo;
                    bool m_profileInfoHasBeenSet;

                    /**
                     * 配置名称，需要保持唯一性，定期生成邮件配置命名格式："scheduler_" + {instanceId}，如"schduler_cdb-test"。
                     */
                    std::string m_profileName;
                    bool m_profileNameHasBeenSet;

                    /**
                     * 配置订阅的实例ID。
                     */
                    std::string m_bindInstanceId;
                    bool m_bindInstanceIdHasBeenSet;

                    /**
                     * 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_CREATESCHEDULERMAILPROFILEREQUEST_H_
