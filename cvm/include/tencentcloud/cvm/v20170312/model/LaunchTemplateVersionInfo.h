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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_LAUNCHTEMPLATEVERSIONINFO_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_LAUNCHTEMPLATEVERSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/LaunchTemplateVersionData.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 实例启动模板版本集合
                */
                class LaunchTemplateVersionInfo : public AbstractModel
                {
                public:
                    LaunchTemplateVersionInfo();
                    ~LaunchTemplateVersionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例启动模板版本号。
                     * @return LaunchTemplateVersion 实例启动模板版本号。
                     * 
                     */
                    uint64_t GetLaunchTemplateVersion() const;

                    /**
                     * 设置实例启动模板版本号。
                     * @param _launchTemplateVersion 实例启动模板版本号。
                     * 
                     */
                    void SetLaunchTemplateVersion(const uint64_t& _launchTemplateVersion);

                    /**
                     * 判断参数 LaunchTemplateVersion 是否已赋值
                     * @return LaunchTemplateVersion 是否已赋值
                     * 
                     */
                    bool LaunchTemplateVersionHasBeenSet() const;

                    /**
                     * 获取实例启动模板版本数据详情。
                     * @return LaunchTemplateVersionData 实例启动模板版本数据详情。
                     * 
                     */
                    LaunchTemplateVersionData GetLaunchTemplateVersionData() const;

                    /**
                     * 设置实例启动模板版本数据详情。
                     * @param _launchTemplateVersionData 实例启动模板版本数据详情。
                     * 
                     */
                    void SetLaunchTemplateVersionData(const LaunchTemplateVersionData& _launchTemplateVersionData);

                    /**
                     * 判断参数 LaunchTemplateVersionData 是否已赋值
                     * @return LaunchTemplateVersionData 是否已赋值
                     * 
                     */
                    bool LaunchTemplateVersionDataHasBeenSet() const;

                    /**
                     * 获取实例启动模板版本创建时间。
                     * @return CreationTime 实例启动模板版本创建时间。
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置实例启动模板版本创建时间。
                     * @param _creationTime 实例启动模板版本创建时间。
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

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
                     * 获取是否为默认启动模板版本。
                     * @return IsDefaultVersion 是否为默认启动模板版本。
                     * 
                     */
                    bool GetIsDefaultVersion() const;

                    /**
                     * 设置是否为默认启动模板版本。
                     * @param _isDefaultVersion 是否为默认启动模板版本。
                     * 
                     */
                    void SetIsDefaultVersion(const bool& _isDefaultVersion);

                    /**
                     * 判断参数 IsDefaultVersion 是否已赋值
                     * @return IsDefaultVersion 是否已赋值
                     * 
                     */
                    bool IsDefaultVersionHasBeenSet() const;

                    /**
                     * 获取实例启动模板版本描述信息。
                     * @return LaunchTemplateVersionDescription 实例启动模板版本描述信息。
                     * 
                     */
                    std::string GetLaunchTemplateVersionDescription() const;

                    /**
                     * 设置实例启动模板版本描述信息。
                     * @param _launchTemplateVersionDescription 实例启动模板版本描述信息。
                     * 
                     */
                    void SetLaunchTemplateVersionDescription(const std::string& _launchTemplateVersionDescription);

                    /**
                     * 判断参数 LaunchTemplateVersionDescription 是否已赋值
                     * @return LaunchTemplateVersionDescription 是否已赋值
                     * 
                     */
                    bool LaunchTemplateVersionDescriptionHasBeenSet() const;

                    /**
                     * 获取创建者的AppId。
                     * @return CreatedBy 创建者的AppId。
                     * 
                     */
                    std::string GetCreatedBy() const;

                    /**
                     * 设置创建者的AppId。
                     * @param _createdBy 创建者的AppId。
                     * 
                     */
                    void SetCreatedBy(const std::string& _createdBy);

                    /**
                     * 判断参数 CreatedBy 是否已赋值
                     * @return CreatedBy 是否已赋值
                     * 
                     */
                    bool CreatedByHasBeenSet() const;

                private:

                    /**
                     * 实例启动模板版本号。
                     */
                    uint64_t m_launchTemplateVersion;
                    bool m_launchTemplateVersionHasBeenSet;

                    /**
                     * 实例启动模板版本数据详情。
                     */
                    LaunchTemplateVersionData m_launchTemplateVersionData;
                    bool m_launchTemplateVersionDataHasBeenSet;

                    /**
                     * 实例启动模板版本创建时间。
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 实例启动模板ID。
                     */
                    std::string m_launchTemplateId;
                    bool m_launchTemplateIdHasBeenSet;

                    /**
                     * 是否为默认启动模板版本。
                     */
                    bool m_isDefaultVersion;
                    bool m_isDefaultVersionHasBeenSet;

                    /**
                     * 实例启动模板版本描述信息。
                     */
                    std::string m_launchTemplateVersionDescription;
                    bool m_launchTemplateVersionDescriptionHasBeenSet;

                    /**
                     * 创建者的AppId。
                     */
                    std::string m_createdBy;
                    bool m_createdByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_LAUNCHTEMPLATEVERSIONINFO_H_
