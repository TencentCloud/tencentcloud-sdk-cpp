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

#ifndef TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_ORGINVITATION_H_
#define TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_ORGINVITATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20181225
        {
            namespace Model
            {
                /**
                * 企业组织邀请
                */
                class OrgInvitation : public AbstractModel
                {
                public:
                    OrgInvitation();
                    ~OrgInvitation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取邀请ID
                     * @return Id 邀请ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置邀请ID
                     * @param _id 邀请ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取被邀请UIN
                     * @return Uin 被邀请UIN
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置被邀请UIN
                     * @param _uin 被邀请UIN
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取创建者UIN
                     * @return HostUin 创建者UIN
                     * 
                     */
                    uint64_t GetHostUin() const;

                    /**
                     * 设置创建者UIN
                     * @param _hostUin 创建者UIN
                     * 
                     */
                    void SetHostUin(const uint64_t& _hostUin);

                    /**
                     * 判断参数 HostUin 是否已赋值
                     * @return HostUin 是否已赋值
                     * 
                     */
                    bool HostUinHasBeenSet() const;

                    /**
                     * 获取创建者名称
                     * @return HostName 创建者名称
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置创建者名称
                     * @param _hostName 创建者名称
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取创建者邮箱
                     * @return HostMail 创建者邮箱
                     * 
                     */
                    std::string GetHostMail() const;

                    /**
                     * 设置创建者邮箱
                     * @param _hostMail 创建者邮箱
                     * 
                     */
                    void SetHostMail(const std::string& _hostMail);

                    /**
                     * 判断参数 HostMail 是否已赋值
                     * @return HostMail 是否已赋值
                     * 
                     */
                    bool HostMailHasBeenSet() const;

                    /**
                     * 获取邀请状态。-1：已过期，0：正常，1：已接受，2：已失效，3：已取消
                     * @return Status 邀请状态。-1：已过期，0：正常，1：已接受，2：已失效，3：已取消
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置邀请状态。-1：已过期，0：正常，1：已接受，2：已失效，3：已取消
                     * @param _status 邀请状态。-1：已过期，0：正常，1：已接受，2：已失效，3：已取消
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取企业组织类型
                     * @return OrgType 企业组织类型
                     * 
                     */
                    uint64_t GetOrgType() const;

                    /**
                     * 设置企业组织类型
                     * @param _orgType 企业组织类型
                     * 
                     */
                    void SetOrgType(const uint64_t& _orgType);

                    /**
                     * 判断参数 OrgType 是否已赋值
                     * @return OrgType 是否已赋值
                     * 
                     */
                    bool OrgTypeHasBeenSet() const;

                    /**
                     * 获取邀请时间
                     * @return InviteTime 邀请时间
                     * 
                     */
                    std::string GetInviteTime() const;

                    /**
                     * 设置邀请时间
                     * @param _inviteTime 邀请时间
                     * 
                     */
                    void SetInviteTime(const std::string& _inviteTime);

                    /**
                     * 判断参数 InviteTime 是否已赋值
                     * @return InviteTime 是否已赋值
                     * 
                     */
                    bool InviteTimeHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpireTime 过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间
                     * @param _expireTime 过期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 邀请ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 被邀请UIN
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 创建者UIN
                     */
                    uint64_t m_hostUin;
                    bool m_hostUinHasBeenSet;

                    /**
                     * 创建者名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 创建者邮箱
                     */
                    std::string m_hostMail;
                    bool m_hostMailHasBeenSet;

                    /**
                     * 邀请状态。-1：已过期，0：正常，1：已接受，2：已失效，3：已取消
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 企业组织类型
                     */
                    uint64_t m_orgType;
                    bool m_orgTypeHasBeenSet;

                    /**
                     * 邀请时间
                     */
                    std::string m_inviteTime;
                    bool m_inviteTimeHasBeenSet;

                    /**
                     * 过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_ORGINVITATION_H_
