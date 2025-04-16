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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DOMAIN_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DOMAIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/TagPair.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 统一域名信息
                */
                class Domain : public AbstractModel
                {
                public:
                    Domain();
                    ~Domain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名ID
                     * @return DomainId 域名ID
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置域名ID
                     * @param _domainId 域名ID
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取完整域名记录
                     * @return FullDomain 完整域名记录
                     * 
                     */
                    std::string GetFullDomain() const;

                    /**
                     * 设置完整域名记录
                     * @param _fullDomain 完整域名记录
                     * 
                     */
                    void SetFullDomain(const std::string& _fullDomain);

                    /**
                     * 判断参数 FullDomain 是否已赋值
                     * @return FullDomain 是否已赋值
                     * 
                     */
                    bool FullDomainHasBeenSet() const;

                    /**
                     * 获取别名
                     * @return Alias 别名
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置别名
                     * @param _alias 别名
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return Type 类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
                     * @param _type 类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取状态，1表示关闭，0表示开启，2表示关闭中，3表示开启中
                     * @return Status 状态，1表示关闭，0表示开启，2表示关闭中，3表示开启中
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态，1表示关闭，0表示开启，2表示关闭中，3表示开启中
                     * @param _status 状态，1表示关闭，0表示开启，2表示关闭中，3表示开启中
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
                     * 获取所属项目
                     * @return ProjectId 所属项目
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置所属项目
                     * @param _projectId 所属项目
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取默认入口
                     * @return DefaultValue 默认入口
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置默认入口
                     * @param _defaultValue 默认入口
                     * 
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     * 
                     */
                    bool DefaultValueHasBeenSet() const;

                    /**
                     * 获取通道数量
                     * @return ProxyCount 通道数量
                     * 
                     */
                    uint64_t GetProxyCount() const;

                    /**
                     * 设置通道数量
                     * @param _proxyCount 通道数量
                     * 
                     */
                    void SetProxyCount(const uint64_t& _proxyCount);

                    /**
                     * 判断参数 ProxyCount 是否已赋值
                     * @return ProxyCount 是否已赋值
                     * 
                     */
                    bool ProxyCountHasBeenSet() const;

                    /**
                     * 获取创建时间，使用UNIX时间戳
                     * @return CreateTime 创建时间，使用UNIX时间戳
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，使用UNIX时间戳
                     * @param _createTime 创建时间，使用UNIX时间戳
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间，使用UNIX时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间，使用UNIX时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间，使用UNIX时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间，使用UNIX时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return TagSet 标签列表
                     * 
                     */
                    std::vector<TagPair> GetTagSet() const;

                    /**
                     * 设置标签列表
                     * @param _tagSet 标签列表
                     * 
                     */
                    void SetTagSet(const std::vector<TagPair>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取封禁解封状态：BANNED表示已封禁，RECOVER表示已解封或未封禁，BANNING表示封禁中，RECOVERING表示解封中，BAN_FAILED表示封禁失败，RECOVER_FAILED表示解封失败。
                     * @return BanStatus 封禁解封状态：BANNED表示已封禁，RECOVER表示已解封或未封禁，BANNING表示封禁中，RECOVERING表示解封中，BAN_FAILED表示封禁失败，RECOVER_FAILED表示解封失败。
                     * 
                     */
                    std::string GetBanStatus() const;

                    /**
                     * 设置封禁解封状态：BANNED表示已封禁，RECOVER表示已解封或未封禁，BANNING表示封禁中，RECOVERING表示解封中，BAN_FAILED表示封禁失败，RECOVER_FAILED表示解封失败。
                     * @param _banStatus 封禁解封状态：BANNED表示已封禁，RECOVER表示已解封或未封禁，BANNING表示封禁中，RECOVERING表示解封中，BAN_FAILED表示封禁失败，RECOVER_FAILED表示解封失败。
                     * 
                     */
                    void SetBanStatus(const std::string& _banStatus);

                    /**
                     * 判断参数 BanStatus 是否已赋值
                     * @return BanStatus 是否已赋值
                     * 
                     */
                    bool BanStatusHasBeenSet() const;

                private:

                    /**
                     * 域名ID
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 完整域名记录
                     */
                    std::string m_fullDomain;
                    bool m_fullDomainHasBeenSet;

                    /**
                     * 别名
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 状态，1表示关闭，0表示开启，2表示关闭中，3表示开启中
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 所属项目
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 默认入口
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * 通道数量
                     */
                    uint64_t m_proxyCount;
                    bool m_proxyCountHasBeenSet;

                    /**
                     * 创建时间，使用UNIX时间戳
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间，使用UNIX时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<TagPair> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 封禁解封状态：BANNED表示已封禁，RECOVER表示已解封或未封禁，BANNING表示封禁中，RECOVERING表示解封中，BAN_FAILED表示封禁失败，RECOVER_FAILED表示解封失败。
                     */
                    std::string m_banStatus;
                    bool m_banStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DOMAIN_H_
