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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINSHAREUSERINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINSHAREUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 域名共享信息
                */
                class DomainShareUserInfo : public AbstractModel
                {
                public:
                    DomainShareUserInfo();
                    ~DomainShareUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取共享记录ID
                     * @return DomainShareId 共享记录ID
                     * 
                     */
                    uint64_t GetDomainShareId() const;

                    /**
                     * 设置共享记录ID
                     * @param _domainShareId 共享记录ID
                     * 
                     */
                    void SetDomainShareId(const uint64_t& _domainShareId);

                    /**
                     * 判断参数 DomainShareId 是否已赋值
                     * @return DomainShareId 是否已赋值
                     * 
                     */
                    bool DomainShareIdHasBeenSet() const;

                    /**
                     * 获取共享模式。r-只读；w-可写；rw-可读写。
                     * @return Mode 共享模式。r-只读；w-可写；rw-可读写。
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置共享模式。r-只读；w-可写；rw-可读写。
                     * @param _mode 共享模式。r-只读；w-可写；rw-可读写。
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取共享到的用户昵称
                     * @return Nickname 共享到的用户昵称
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置共享到的用户昵称
                     * @param _nickname 共享到的用户昵称
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取共享到的用户UIN
                     * @return QCloudUIN 共享到的用户UIN
                     * 
                     */
                    std::string GetQCloudUIN() const;

                    /**
                     * 设置共享到的用户UIN
                     * @param _qCloudUIN 共享到的用户UIN
                     * 
                     */
                    void SetQCloudUIN(const std::string& _qCloudUIN);

                    /**
                     * 判断参数 QCloudUIN 是否已赋值
                     * @return QCloudUIN 是否已赋值
                     * 
                     */
                    bool QCloudUINHasBeenSet() const;

                    /**
                     * 获取共享状态。enabled-有效；pause-无效。
                     * @return Status 共享状态。enabled-有效；pause-无效。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置共享状态。enabled-有效；pause-无效。
                     * @param _status 共享状态。enabled-有效；pause-无效。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取共享的子域名
                     * @return SubDomain 共享的子域名
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置共享的子域名
                     * @param _subDomain 共享的子域名
                     * 
                     */
                    void SetSubDomain(const std::string& _subDomain);

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     * 
                     */
                    bool SubDomainHasBeenSet() const;

                private:

                    /**
                     * 共享记录ID
                     */
                    uint64_t m_domainShareId;
                    bool m_domainShareIdHasBeenSet;

                    /**
                     * 共享模式。r-只读；w-可写；rw-可读写。
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 共享到的用户昵称
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 共享到的用户UIN
                     */
                    std::string m_qCloudUIN;
                    bool m_qCloudUINHasBeenSet;

                    /**
                     * 共享状态。enabled-有效；pause-无效。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 共享的子域名
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINSHAREUSERINFO_H_
