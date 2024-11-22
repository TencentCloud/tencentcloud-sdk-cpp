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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATEORUPDATECONFIGFILEANDRELEASEREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATEORUPDATECONFIGFILEANDRELEASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/ConfigFilePublishInfo.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * CreateOrUpdateConfigFileAndRelease请求参数结构体
                */
                class CreateOrUpdateConfigFileAndReleaseRequest : public AbstractModel
                {
                public:
                    CreateOrUpdateConfigFileAndReleaseRequest();
                    ~CreateOrUpdateConfigFileAndReleaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取配置文件列表详情	
                     * @return ConfigFilePublishInfo 配置文件列表详情	
                     * 
                     */
                    ConfigFilePublishInfo GetConfigFilePublishInfo() const;

                    /**
                     * 设置配置文件列表详情	
                     * @param _configFilePublishInfo 配置文件列表详情	
                     * 
                     */
                    void SetConfigFilePublishInfo(const ConfigFilePublishInfo& _configFilePublishInfo);

                    /**
                     * 判断参数 ConfigFilePublishInfo 是否已赋值
                     * @return ConfigFilePublishInfo 是否已赋值
                     * 
                     */
                    bool ConfigFilePublishInfoHasBeenSet() const;

                    /**
                     * 获取控制开启校验配置版本是否已经存在
                     * @return StrictEnable 控制开启校验配置版本是否已经存在
                     * 
                     */
                    bool GetStrictEnable() const;

                    /**
                     * 设置控制开启校验配置版本是否已经存在
                     * @param _strictEnable 控制开启校验配置版本是否已经存在
                     * 
                     */
                    void SetStrictEnable(const bool& _strictEnable);

                    /**
                     * 判断参数 StrictEnable 是否已赋值
                     * @return StrictEnable 是否已赋值
                     * 
                     */
                    bool StrictEnableHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 配置文件列表详情	
                     */
                    ConfigFilePublishInfo m_configFilePublishInfo;
                    bool m_configFilePublishInfoHasBeenSet;

                    /**
                     * 控制开启校验配置版本是否已经存在
                     */
                    bool m_strictEnable;
                    bool m_strictEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATEORUPDATECONFIGFILEANDRELEASEREQUEST_H_
