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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_LAUNCHTEMPLATEINFO_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_LAUNCHTEMPLATEINFO_H_

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
                * 实例启动模板简要信息。
                */
                class LaunchTemplateInfo : public AbstractModel
                {
                public:
                    LaunchTemplateInfo();
                    ~LaunchTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例启动模版本号。
                     * @return LatestVersionNumber 实例启动模版本号。
                     * 
                     */
                    uint64_t GetLatestVersionNumber() const;

                    /**
                     * 设置实例启动模版本号。
                     * @param _latestVersionNumber 实例启动模版本号。
                     * 
                     */
                    void SetLatestVersionNumber(const uint64_t& _latestVersionNumber);

                    /**
                     * 判断参数 LatestVersionNumber 是否已赋值
                     * @return LatestVersionNumber 是否已赋值
                     * 
                     */
                    bool LatestVersionNumberHasBeenSet() const;

                    /**
                     * 获取实例启动模板ID。
                     * @return LaunchTemplateId 实例启动模板ID。
                     * 
                     */
                    std::string GetLaunchTemplateId() const;

                    /**
                     * 设置实例启动模板ID。
                     * @param _launchTemplateId 实例启动模板ID。
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
                     * 获取实例启动模板名。
                     * @return LaunchTemplateName 实例启动模板名。
                     * 
                     */
                    std::string GetLaunchTemplateName() const;

                    /**
                     * 设置实例启动模板名。
                     * @param _launchTemplateName 实例启动模板名。
                     * 
                     */
                    void SetLaunchTemplateName(const std::string& _launchTemplateName);

                    /**
                     * 判断参数 LaunchTemplateName 是否已赋值
                     * @return LaunchTemplateName 是否已赋值
                     * 
                     */
                    bool LaunchTemplateNameHasBeenSet() const;

                    /**
                     * 获取实例启动模板默认版本号。
                     * @return DefaultVersionNumber 实例启动模板默认版本号。
                     * 
                     */
                    uint64_t GetDefaultVersionNumber() const;

                    /**
                     * 设置实例启动模板默认版本号。
                     * @param _defaultVersionNumber 实例启动模板默认版本号。
                     * 
                     */
                    void SetDefaultVersionNumber(const uint64_t& _defaultVersionNumber);

                    /**
                     * 判断参数 DefaultVersionNumber 是否已赋值
                     * @return DefaultVersionNumber 是否已赋值
                     * 
                     */
                    bool DefaultVersionNumberHasBeenSet() const;

                    /**
                     * 获取实例启动模板包含的版本总数量。
                     * @return LaunchTemplateVersionCount 实例启动模板包含的版本总数量。
                     * 
                     */
                    uint64_t GetLaunchTemplateVersionCount() const;

                    /**
                     * 设置实例启动模板包含的版本总数量。
                     * @param _launchTemplateVersionCount 实例启动模板包含的版本总数量。
                     * 
                     */
                    void SetLaunchTemplateVersionCount(const uint64_t& _launchTemplateVersionCount);

                    /**
                     * 判断参数 LaunchTemplateVersionCount 是否已赋值
                     * @return LaunchTemplateVersionCount 是否已赋值
                     * 
                     */
                    bool LaunchTemplateVersionCountHasBeenSet() const;

                    /**
                     * 获取创建该模板的用户UIN。
                     * @return CreatedBy 创建该模板的用户UIN。
                     * 
                     */
                    std::string GetCreatedBy() const;

                    /**
                     * 设置创建该模板的用户UIN。
                     * @param _createdBy 创建该模板的用户UIN。
                     * 
                     */
                    void SetCreatedBy(const std::string& _createdBy);

                    /**
                     * 判断参数 CreatedBy 是否已赋值
                     * @return CreatedBy 是否已赋值
                     * 
                     */
                    bool CreatedByHasBeenSet() const;

                    /**
                     * 获取创建该模板的时间。
                     * @return CreationTime 创建该模板的时间。
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置创建该模板的时间。
                     * @param _creationTime 创建该模板的时间。
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                private:

                    /**
                     * 实例启动模版本号。
                     */
                    uint64_t m_latestVersionNumber;
                    bool m_latestVersionNumberHasBeenSet;

                    /**
                     * 实例启动模板ID。
                     */
                    std::string m_launchTemplateId;
                    bool m_launchTemplateIdHasBeenSet;

                    /**
                     * 实例启动模板名。
                     */
                    std::string m_launchTemplateName;
                    bool m_launchTemplateNameHasBeenSet;

                    /**
                     * 实例启动模板默认版本号。
                     */
                    uint64_t m_defaultVersionNumber;
                    bool m_defaultVersionNumberHasBeenSet;

                    /**
                     * 实例启动模板包含的版本总数量。
                     */
                    uint64_t m_launchTemplateVersionCount;
                    bool m_launchTemplateVersionCountHasBeenSet;

                    /**
                     * 创建该模板的用户UIN。
                     */
                    std::string m_createdBy;
                    bool m_createdByHasBeenSet;

                    /**
                     * 创建该模板的时间。
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_LAUNCHTEMPLATEINFO_H_
