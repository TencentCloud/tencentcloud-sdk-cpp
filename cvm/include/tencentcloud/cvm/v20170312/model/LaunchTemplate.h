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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_LAUNCHTEMPLATE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_LAUNCHTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 实例启动模板，通过该参数可使用实例模板中的预设参数创建实例。
                */
                class LaunchTemplate : public AbstractModel
                {
                public:
                    LaunchTemplate();
                    ~LaunchTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例启动模板ID，通过该参数可使用实例模板中的预设参数创建实例。
                     * @return LaunchTemplateId 实例启动模板ID，通过该参数可使用实例模板中的预设参数创建实例。
                     * 
                     */
                    std::string GetLaunchTemplateId() const;

                    /**
                     * 设置实例启动模板ID，通过该参数可使用实例模板中的预设参数创建实例。
                     * @param _launchTemplateId 实例启动模板ID，通过该参数可使用实例模板中的预设参数创建实例。
                     * 
                     */
                    void SetLaunchTemplateId(const std::string& _launchTemplateId);

                    /**
                     * 判断参数 LaunchTemplateId 是否已赋值
                     * @return LaunchTemplateId 是否已赋值
                     * 
                     */
                    bool LaunchTemplateIdHasBeenSet() const;

                    /**
                     * 获取实例启动模板版本号，若给定，新实例启动模板将基于给定的版本号创建
                     * @return LaunchTemplateVersion 实例启动模板版本号，若给定，新实例启动模板将基于给定的版本号创建
                     * 
                     */
                    uint64_t GetLaunchTemplateVersion() const;

                    /**
                     * 设置实例启动模板版本号，若给定，新实例启动模板将基于给定的版本号创建
                     * @param _launchTemplateVersion 实例启动模板版本号，若给定，新实例启动模板将基于给定的版本号创建
                     * 
                     */
                    void SetLaunchTemplateVersion(const uint64_t& _launchTemplateVersion);

                    /**
                     * 判断参数 LaunchTemplateVersion 是否已赋值
                     * @return LaunchTemplateVersion 是否已赋值
                     * 
                     */
                    bool LaunchTemplateVersionHasBeenSet() const;

                private:

                    /**
                     * 实例启动模板ID，通过该参数可使用实例模板中的预设参数创建实例。
                     */
                    std::string m_launchTemplateId;
                    bool m_launchTemplateIdHasBeenSet;

                    /**
                     * 实例启动模板版本号，若给定，新实例启动模板将基于给定的版本号创建
                     */
                    uint64_t m_launchTemplateVersion;
                    bool m_launchTemplateVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_LAUNCHTEMPLATE_H_
