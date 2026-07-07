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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMIDENTIFYCOMPLIANCEGROUPREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMIDENTIFYCOMPLIANCEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateDspmIdentifyComplianceGroup请求参数结构体
                */
                class CreateDspmIdentifyComplianceGroupRequest : public AbstractModel
                {
                public:
                    CreateDspmIdentifyComplianceGroupRequest();
                    ~CreateDspmIdentifyComplianceGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>级别名称</p>
                     * @return Name <p>级别名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>级别名称</p>
                     * @param _name <p>级别名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>级别组ID</p>
                     * @return LevelGroupId <p>级别组ID</p>
                     * 
                     */
                    uint64_t GetLevelGroupId() const;

                    /**
                     * 设置<p>级别组ID</p>
                     * @param _levelGroupId <p>级别组ID</p>
                     * 
                     */
                    void SetLevelGroupId(const uint64_t& _levelGroupId);

                    /**
                     * 判断参数 LevelGroupId 是否已赋值
                     * @return LevelGroupId 是否已赋值
                     * 
                     */
                    bool LevelGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>状态</p><p>枚举值：</p><ul><li>0： 不启用</li><li>1： 启用</li></ul>
                     * @return Status <p>状态</p><p>枚举值：</p><ul><li>0： 不启用</li><li>1： 启用</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>状态</p><p>枚举值：</p><ul><li>0： 不启用</li><li>1： 启用</li></ul>
                     * @param _status <p>状态</p><p>枚举值：</p><ul><li>0： 不启用</li><li>1： 启用</li></ul>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>级别名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>级别组ID</p>
                     */
                    uint64_t m_levelGroupId;
                    bool m_levelGroupIdHasBeenSet;

                    /**
                     * <p>状态</p><p>枚举值：</p><ul><li>0： 不启用</li><li>1： 启用</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMIDENTIFYCOMPLIANCEGROUPREQUEST_H_
