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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_REASSOCIATEBUSINESSLOGCONFIGREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_REASSOCIATEBUSINESSLOGCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * ReassociateBusinessLogConfig请求参数结构体
                */
                class ReassociateBusinessLogConfigRequest : public AbstractModel
                {
                public:
                    ReassociateBusinessLogConfigRequest();
                    ~ReassociateBusinessLogConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取原关联日志配置ID
                     * @return ConfigId 原关联日志配置ID
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置原关联日志配置ID
                     * @param _configId 原关联日志配置ID
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取新关联日志配置ID
                     * @return NewConfigId 新关联日志配置ID
                     * 
                     */
                    std::string GetNewConfigId() const;

                    /**
                     * 设置新关联日志配置ID
                     * @param _newConfigId 新关联日志配置ID
                     * 
                     */
                    void SetNewConfigId(const std::string& _newConfigId);

                    /**
                     * 判断参数 NewConfigId 是否已赋值
                     * @return NewConfigId 是否已赋值
                     * 
                     */
                    bool NewConfigIdHasBeenSet() const;

                    /**
                     * 获取TSF应用ID
                     * @return ApplicationId TSF应用ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置TSF应用ID
                     * @param _applicationId TSF应用ID
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取TSF部署组ID
                     * @return GroupId TSF部署组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置TSF部署组ID
                     * @param _groupId TSF部署组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 原关联日志配置ID
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 新关联日志配置ID
                     */
                    std::string m_newConfigId;
                    bool m_newConfigIdHasBeenSet;

                    /**
                     * TSF应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * TSF部署组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_REASSOCIATEBUSINESSLOGCONFIGREQUEST_H_
