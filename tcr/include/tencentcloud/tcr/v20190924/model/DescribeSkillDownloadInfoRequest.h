/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBESKILLDOWNLOADINFOREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBESKILLDOWNLOADINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeSkillDownloadInfo请求参数结构体
                */
                class DescribeSkillDownloadInfoRequest : public AbstractModel
                {
                public:
                    DescribeSkillDownloadInfoRequest();
                    ~DescribeSkillDownloadInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>TCR实例ID</p>
                     * @return RegistryId <p>TCR实例ID</p>
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置<p>TCR实例ID</p>
                     * @param _registryId <p>TCR实例ID</p>
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取<p>技能名称</p>
                     * @return SkillName <p>技能名称</p>
                     * 
                     */
                    std::string GetSkillName() const;

                    /**
                     * 设置<p>技能名称</p>
                     * @param _skillName <p>技能名称</p>
                     * 
                     */
                    void SetSkillName(const std::string& _skillName);

                    /**
                     * 判断参数 SkillName 是否已赋值
                     * @return SkillName 是否已赋值
                     * 
                     */
                    bool SkillNameHasBeenSet() const;

                    /**
                     * 获取<p>技能版本</p>
                     * @return SkillVersion <p>技能版本</p>
                     * 
                     */
                    std::string GetSkillVersion() const;

                    /**
                     * 设置<p>技能版本</p>
                     * @param _skillVersion <p>技能版本</p>
                     * 
                     */
                    void SetSkillVersion(const std::string& _skillVersion);

                    /**
                     * 判断参数 SkillVersion 是否已赋值
                     * @return SkillVersion 是否已赋值
                     * 
                     */
                    bool SkillVersionHasBeenSet() const;

                private:

                    /**
                     * <p>TCR实例ID</p>
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>技能名称</p>
                     */
                    std::string m_skillName;
                    bool m_skillNameHasBeenSet;

                    /**
                     * <p>技能版本</p>
                     */
                    std::string m_skillVersion;
                    bool m_skillVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBESKILLDOWNLOADINFOREQUEST_H_
