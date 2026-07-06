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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SKILLREFERENCESUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SKILLREFERENCESUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 引用摘要（用于详情页展示，对应DB t_skill_reference）
                */
                class SkillReferenceSummary : public AbstractModel
                {
                public:
                    SkillReferenceSummary();
                    ~SkillReferenceSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>关联ID</p>
                     * @return ReferenceId <p>关联ID</p>
                     * 
                     */
                    std::string GetReferenceId() const;

                    /**
                     * 设置<p>关联ID</p>
                     * @param _referenceId <p>关联ID</p>
                     * 
                     */
                    void SetReferenceId(const std::string& _referenceId);

                    /**
                     * 判断参数 ReferenceId 是否已赋值
                     * @return ReferenceId 是否已赋值
                     * 
                     */
                    bool ReferenceIdHasBeenSet() const;

                    /**
                     * 获取<p>关联名称</p>
                     * @return ReferenceName <p>关联名称</p>
                     * 
                     */
                    std::string GetReferenceName() const;

                    /**
                     * 设置<p>关联名称</p>
                     * @param _referenceName <p>关联名称</p>
                     * 
                     */
                    void SetReferenceName(const std::string& _referenceName);

                    /**
                     * 判断参数 ReferenceName 是否已赋值
                     * @return ReferenceName 是否已赋值
                     * 
                     */
                    bool ReferenceNameHasBeenSet() const;

                    /**
                     * 获取<p>关联类型</p><p>枚举值:<br>| uint | 描述 |<br>| --- | --- |<br>| 0 | 占位 |<br>| 1 | ClawPro |<br>| 2 | agent |</p>
                     * @return ReferenceType <p>关联类型</p><p>枚举值:<br>| uint | 描述 |<br>| --- | --- |<br>| 0 | 占位 |<br>| 1 | ClawPro |<br>| 2 | agent |</p>
                     * 
                     */
                    int64_t GetReferenceType() const;

                    /**
                     * 设置<p>关联类型</p><p>枚举值:<br>| uint | 描述 |<br>| --- | --- |<br>| 0 | 占位 |<br>| 1 | ClawPro |<br>| 2 | agent |</p>
                     * @param _referenceType <p>关联类型</p><p>枚举值:<br>| uint | 描述 |<br>| --- | --- |<br>| 0 | 占位 |<br>| 1 | ClawPro |<br>| 2 | agent |</p>
                     * 
                     */
                    void SetReferenceType(const int64_t& _referenceType);

                    /**
                     * 判断参数 ReferenceType 是否已赋值
                     * @return ReferenceType 是否已赋值
                     * 
                     */
                    bool ReferenceTypeHasBeenSet() const;

                    /**
                     * 获取<p>空间ID</p>
                     * @return SpaceId <p>空间ID</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>空间ID</p>
                     * @param _spaceId <p>空间ID</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>空间名称</p>
                     * @return SpaceName <p>空间名称</p>
                     * 
                     */
                    std::string GetSpaceName() const;

                    /**
                     * 设置<p>空间名称</p>
                     * @param _spaceName <p>空间名称</p>
                     * 
                     */
                    void SetSpaceName(const std::string& _spaceName);

                    /**
                     * 判断参数 SpaceName 是否已赋值
                     * @return SpaceName 是否已赋值
                     * 
                     */
                    bool SpaceNameHasBeenSet() const;

                    /**
                     * 获取<p>Reference实例拥有者</p>
                     * @return Owner <p>Reference实例拥有者</p>
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置<p>Reference实例拥有者</p>
                     * @param _owner <p>Reference实例拥有者</p>
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                private:

                    /**
                     * <p>关联ID</p>
                     */
                    std::string m_referenceId;
                    bool m_referenceIdHasBeenSet;

                    /**
                     * <p>关联名称</p>
                     */
                    std::string m_referenceName;
                    bool m_referenceNameHasBeenSet;

                    /**
                     * <p>关联类型</p><p>枚举值:<br>| uint | 描述 |<br>| --- | --- |<br>| 0 | 占位 |<br>| 1 | ClawPro |<br>| 2 | agent |</p>
                     */
                    int64_t m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                    /**
                     * <p>空间ID</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>空间名称</p>
                     */
                    std::string m_spaceName;
                    bool m_spaceNameHasBeenSet;

                    /**
                     * <p>Reference实例拥有者</p>
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SKILLREFERENCESUMMARY_H_
