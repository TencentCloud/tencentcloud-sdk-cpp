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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_SECURITYGROUPMAPPING_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_SECURITYGROUPMAPPING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 安全组映射详情
                */
                class SecurityGroupMapping : public AbstractModel
                {
                public:
                    SecurityGroupMapping();
                    ~SecurityGroupMapping() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取安全组映射ID
                     * @return SecurityGroupMappingId 安全组映射ID
                     * 
                     */
                    std::string GetSecurityGroupMappingId() const;

                    /**
                     * 设置安全组映射ID
                     * @param _securityGroupMappingId 安全组映射ID
                     * 
                     */
                    void SetSecurityGroupMappingId(const std::string& _securityGroupMappingId);

                    /**
                     * 判断参数 SecurityGroupMappingId 是否已赋值
                     * @return SecurityGroupMappingId 是否已赋值
                     * 
                     */
                    bool SecurityGroupMappingIdHasBeenSet() const;

                    /**
                     * 获取安全组映射所属的站点对ID
                     * @return SitePairId 安全组映射所属的站点对ID
                     * 
                     */
                    std::string GetSitePairId() const;

                    /**
                     * 设置安全组映射所属的站点对ID
                     * @param _sitePairId 安全组映射所属的站点对ID
                     * 
                     */
                    void SetSitePairId(const std::string& _sitePairId);

                    /**
                     * 判断参数 SitePairId 是否已赋值
                     * @return SitePairId 是否已赋值
                     * 
                     */
                    bool SitePairIdHasBeenSet() const;

                    /**
                     * 获取生产端安全组ID
                     * @return SourceSecurityGroupId 生产端安全组ID
                     * 
                     */
                    std::string GetSourceSecurityGroupId() const;

                    /**
                     * 设置生产端安全组ID
                     * @param _sourceSecurityGroupId 生产端安全组ID
                     * 
                     */
                    void SetSourceSecurityGroupId(const std::string& _sourceSecurityGroupId);

                    /**
                     * 判断参数 SourceSecurityGroupId 是否已赋值
                     * @return SourceSecurityGroupId 是否已赋值
                     * 
                     */
                    bool SourceSecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取容灾端安全组ID
                     * @return TargetSecurityGroupId 容灾端安全组ID
                     * 
                     */
                    std::string GetTargetSecurityGroupId() const;

                    /**
                     * 设置容灾端安全组ID
                     * @param _targetSecurityGroupId 容灾端安全组ID
                     * 
                     */
                    void SetTargetSecurityGroupId(const std::string& _targetSecurityGroupId);

                    /**
                     * 判断参数 TargetSecurityGroupId 是否已赋值
                     * @return TargetSecurityGroupId 是否已赋值
                     * 
                     */
                    bool TargetSecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取安全组映射的生命状态；NORMAL:正常。
                     * @return LifeState 安全组映射的生命状态；NORMAL:正常。
                     * 
                     */
                    std::string GetLifeState() const;

                    /**
                     * 设置安全组映射的生命状态；NORMAL:正常。
                     * @param _lifeState 安全组映射的生命状态；NORMAL:正常。
                     * 
                     */
                    void SetLifeState(const std::string& _lifeState);

                    /**
                     * 判断参数 LifeState 是否已赋值
                     * @return LifeState 是否已赋值
                     * 
                     */
                    bool LifeStateHasBeenSet() const;

                private:

                    /**
                     * 安全组映射ID
                     */
                    std::string m_securityGroupMappingId;
                    bool m_securityGroupMappingIdHasBeenSet;

                    /**
                     * 安全组映射所属的站点对ID
                     */
                    std::string m_sitePairId;
                    bool m_sitePairIdHasBeenSet;

                    /**
                     * 生产端安全组ID
                     */
                    std::string m_sourceSecurityGroupId;
                    bool m_sourceSecurityGroupIdHasBeenSet;

                    /**
                     * 容灾端安全组ID
                     */
                    std::string m_targetSecurityGroupId;
                    bool m_targetSecurityGroupIdHasBeenSet;

                    /**
                     * 安全组映射的生命状态；NORMAL:正常。
                     */
                    std::string m_lifeState;
                    bool m_lifeStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_SECURITYGROUPMAPPING_H_
