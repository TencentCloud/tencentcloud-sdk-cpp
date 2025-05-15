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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_EMBEDTOKENINFO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_EMBEDTOKENINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 报表嵌出数据结构-强鉴权
                */
                class EmbedTokenInfo : public AbstractModel
                {
                public:
                    EmbedTokenInfo();
                    ~EmbedTokenInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取信息标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 信息标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置信息标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 信息标识
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取令牌
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BIToken 令牌
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBIToken() const;

                    /**
                     * 设置令牌
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bIToken 令牌
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBIToken(const std::string& _bIToken);

                    /**
                     * 判断参数 BIToken 是否已赋值
                     * @return BIToken 是否已赋值
                     * 
                     */
                    bool BITokenHasBeenSet() const;

                    /**
                     * 获取项目Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedUser 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedUser() const;

                    /**
                     * 设置创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdUser 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedUser(const std::string& _createdUser);

                    /**
                     * 判断参数 CreatedUser 是否已赋值
                     * @return CreatedUser 是否已赋值
                     * 
                     */
                    bool CreatedUserHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取更新人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedUser 更新人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedUser() const;

                    /**
                     * 设置更新人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedUser 更新人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedUser(const std::string& _updatedUser);

                    /**
                     * 判断参数 UpdatedUser 是否已赋值
                     * @return UpdatedUser 是否已赋值
                     * 
                     */
                    bool UpdatedUserHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedAt 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取页面Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageId 页面Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPageId() const;

                    /**
                     * 设置页面Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageId 页面Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageId(const std::string& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取备用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraParam 备用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtraParam() const;

                    /**
                     * 设置备用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraParam 备用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraParam(const std::string& _extraParam);

                    /**
                     * 判断参数 ExtraParam 是否已赋值
                     * @return ExtraParam 是否已赋值
                     * 
                     */
                    bool ExtraParamHasBeenSet() const;

                    /**
                     * 获取嵌出类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Scope 嵌出类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置嵌出类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scope 嵌出类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取过期时间，分钟为单位，最大240
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 过期时间，分钟为单位，最大240
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置过期时间，分钟为单位，最大240
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 过期时间，分钟为单位，最大240
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取使用者企业Id(仅用于多用户)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserCorpId 使用者企业Id(仅用于多用户)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserCorpId() const;

                    /**
                     * 设置使用者企业Id(仅用于多用户)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userCorpId 使用者企业Id(仅用于多用户)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserCorpId(const std::string& _userCorpId);

                    /**
                     * 判断参数 UserCorpId 是否已赋值
                     * @return UserCorpId 是否已赋值
                     * 
                     */
                    bool UserCorpIdHasBeenSet() const;

                    /**
                     * 获取使用者Id(仅用于多用户)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId 使用者Id(仅用于多用户)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置使用者Id(仅用于多用户)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userId 使用者Id(仅用于多用户)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取访问次数限制，限制范围1-99999，为空则不设置访问次数限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TicketNum 访问次数限制，限制范围1-99999，为空则不设置访问次数限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTicketNum() const;

                    /**
                     * 设置访问次数限制，限制范围1-99999，为空则不设置访问次数限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ticketNum 访问次数限制，限制范围1-99999，为空则不设置访问次数限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTicketNum(const int64_t& _ticketNum);

                    /**
                     * 判断参数 TicketNum 是否已赋值
                     * @return TicketNum 是否已赋值
                     * 
                     */
                    bool TicketNumHasBeenSet() const;

                    /**
                     * 获取全局参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GlobalParam 全局参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGlobalParam() const;

                    /**
                     * 设置全局参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _globalParam 全局参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGlobalParam(const std::string& _globalParam);

                    /**
                     * 判断参数 GlobalParam 是否已赋值
                     * @return GlobalParam 是否已赋值
                     * 
                     */
                    bool GlobalParamHasBeenSet() const;

                    /**
                     * 获取embed表示页面看板嵌出，chatBIEmbed表示ChatBI嵌出
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Intention embed表示页面看板嵌出，chatBIEmbed表示ChatBI嵌出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIntention() const;

                    /**
                     * 设置embed表示页面看板嵌出，chatBIEmbed表示ChatBI嵌出
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intention embed表示页面看板嵌出，chatBIEmbed表示ChatBI嵌出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntention(const std::string& _intention);

                    /**
                     * 判断参数 Intention 是否已赋值
                     * @return Intention 是否已赋值
                     * 
                     */
                    bool IntentionHasBeenSet() const;

                    /**
                     * 获取100 无绑定用户
200 单用户单token
300 单用户 多token
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TokenType 100 无绑定用户
200 单用户单token
300 单用户 多token
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTokenType() const;

                    /**
                     * 设置100 无绑定用户
200 单用户单token
300 单用户 多token
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tokenType 100 无绑定用户
200 单用户单token
300 单用户 多token
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTokenType(const int64_t& _tokenType);

                    /**
                     * 判断参数 TokenType 是否已赋值
                     * @return TokenType 是否已赋值
                     * 
                     */
                    bool TokenTypeHasBeenSet() const;

                    /**
                     * 获取token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TokenNum token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTokenNum() const;

                    /**
                     * 设置token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tokenNum token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTokenNum(const int64_t& _tokenNum);

                    /**
                     * 判断参数 TokenNum 是否已赋值
                     * @return TokenNum 是否已赋值
                     * 
                     */
                    bool TokenNumHasBeenSet() const;

                    /**
                     * 获取是否单用户多token
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SingleUserMultiToken 是否单用户多token
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSingleUserMultiToken() const;

                    /**
                     * 设置是否单用户多token
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _singleUserMultiToken 是否单用户多token
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSingleUserMultiToken(const bool& _singleUserMultiToken);

                    /**
                     * 判断参数 SingleUserMultiToken 是否已赋值
                     * @return SingleUserMultiToken 是否已赋值
                     * 
                     */
                    bool SingleUserMultiTokenHasBeenSet() const;

                    /**
                     * 获取嵌出显示配置，目前为ChatBI嵌出场景用，TableFilter表示数据表列表过滤，SqlView表示sql查看功能
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigParam 嵌出显示配置，目前为ChatBI嵌出场景用，TableFilter表示数据表列表过滤，SqlView表示sql查看功能
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigParam() const;

                    /**
                     * 设置嵌出显示配置，目前为ChatBI嵌出场景用，TableFilter表示数据表列表过滤，SqlView表示sql查看功能
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configParam 嵌出显示配置，目前为ChatBI嵌出场景用，TableFilter表示数据表列表过滤，SqlView表示sql查看功能
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigParam(const std::string& _configParam);

                    /**
                     * 判断参数 ConfigParam 是否已赋值
                     * @return ConfigParam 是否已赋值
                     * 
                     */
                    bool ConfigParamHasBeenSet() const;

                private:

                    /**
                     * 信息标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 令牌
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bIToken;
                    bool m_bITokenHasBeenSet;

                    /**
                     * 项目Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdUser;
                    bool m_createdUserHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 更新人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedUser;
                    bool m_updatedUserHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 页面Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * 备用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extraParam;
                    bool m_extraParamHasBeenSet;

                    /**
                     * 嵌出类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 过期时间，分钟为单位，最大240
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 使用者企业Id(仅用于多用户)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userCorpId;
                    bool m_userCorpIdHasBeenSet;

                    /**
                     * 使用者Id(仅用于多用户)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 访问次数限制，限制范围1-99999，为空则不设置访问次数限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ticketNum;
                    bool m_ticketNumHasBeenSet;

                    /**
                     * 全局参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_globalParam;
                    bool m_globalParamHasBeenSet;

                    /**
                     * embed表示页面看板嵌出，chatBIEmbed表示ChatBI嵌出
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_intention;
                    bool m_intentionHasBeenSet;

                    /**
                     * 100 无绑定用户
200 单用户单token
300 单用户 多token
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tokenType;
                    bool m_tokenTypeHasBeenSet;

                    /**
                     * token 数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tokenNum;
                    bool m_tokenNumHasBeenSet;

                    /**
                     * 是否单用户多token
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_singleUserMultiToken;
                    bool m_singleUserMultiTokenHasBeenSet;

                    /**
                     * 嵌出显示配置，目前为ChatBI嵌出场景用，TableFilter表示数据表列表过滤，SqlView表示sql查看功能
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configParam;
                    bool m_configParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_EMBEDTOKENINFO_H_
