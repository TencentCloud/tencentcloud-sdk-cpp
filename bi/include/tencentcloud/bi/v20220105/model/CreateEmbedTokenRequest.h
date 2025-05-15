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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_CREATEEMBEDTOKENREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_CREATEEMBEDTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateEmbedToken请求参数结构体
                */
                class CreateEmbedTokenRequest : public AbstractModel
                {
                public:
                    CreateEmbedTokenRequest();
                    ~CreateEmbedTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分享项目id
                     * @return ProjectId 分享项目id
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置分享项目id
                     * @param _projectId 分享项目id
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取分享页面id，嵌出看板时此为空值0，ChatBI嵌出时不传
                     * @return PageId 分享页面id，嵌出看板时此为空值0，ChatBI嵌出时不传
                     * 
                     */
                    uint64_t GetPageId() const;

                    /**
                     * 设置分享页面id，嵌出看板时此为空值0，ChatBI嵌出时不传
                     * @param _pageId 分享页面id，嵌出看板时此为空值0，ChatBI嵌出时不传
                     * 
                     */
                    void SetPageId(const uint64_t& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取embed表示页面看板嵌出，chatBIEmbed表示ChatBI嵌出
                     * @return Intention embed表示页面看板嵌出，chatBIEmbed表示ChatBI嵌出
                     * 
                     */
                    std::string GetIntention() const;

                    /**
                     * 设置embed表示页面看板嵌出，chatBIEmbed表示ChatBI嵌出
                     * @param _intention embed表示页面看板嵌出，chatBIEmbed表示ChatBI嵌出
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
                     * 获取page表示嵌出页面，panel表示嵌出整个看板，ChatBI嵌出时使用project
                     * @return Scope page表示嵌出页面，panel表示嵌出整个看板，ChatBI嵌出时使用project
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置page表示嵌出页面，panel表示嵌出整个看板，ChatBI嵌出时使用project
                     * @param _scope page表示嵌出页面，panel表示嵌出整个看板，ChatBI嵌出时使用project
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
                     * 获取过期时间。 单位：分钟 最大值：240。即，4小时 默认值：240
                     * @return ExpireTime 过期时间。 单位：分钟 最大值：240。即，4小时 默认值：240
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间。 单位：分钟 最大值：240。即，4小时 默认值：240
                     * @param _expireTime 过期时间。 单位：分钟 最大值：240。即，4小时 默认值：240
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取备用字段
                     * @return ExtraParam 备用字段
                     * 
                     */
                    std::string GetExtraParam() const;

                    /**
                     * 设置备用字段
                     * @param _extraParam 备用字段
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
                     * 获取使用者企业Id(仅用于多用户)
                     * @return UserCorpId 使用者企业Id(仅用于多用户)
                     * 
                     */
                    std::string GetUserCorpId() const;

                    /**
                     * 设置使用者企业Id(仅用于多用户)
                     * @param _userCorpId 使用者企业Id(仅用于多用户)
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
                     * @return UserId 使用者Id(仅用于多用户)
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置使用者Id(仅用于多用户)
                     * @param _userId 使用者Id(仅用于多用户)
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
                     * @return TicketNum 访问次数限制，限制范围1-99999，为空则不设置访问次数限制
                     * 
                     */
                    int64_t GetTicketNum() const;

                    /**
                     * 设置访问次数限制，限制范围1-99999，为空则不设置访问次数限制
                     * @param _ticketNum 访问次数限制，限制范围1-99999，为空则不设置访问次数限制
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
                     * 获取全局筛选参数 报表过滤条件的全局参数。 格式为JSON格式的字符串
**目前仅支持字符类型页面参数绑定到全局参数
**
[
    {
        "ParamKey": "name",  //页面参数名称
        "JoinType": "AND",     // 连接方式,目前仅支持AND
        "WhereList": [
            {
                "Operator": "-neq",   // 操作符，参考以下说明
                "Value": [                   //操作值，单值数组只传一个值
                    "zZWJMD",
                    "ZzVGHX",
                    "湖南省",
                    "河北省"
                ]
            }
        ]
    },
    {
        "ParamKey": "genderParam",
        "JoinType": "AND",
        "WhereList": [
            {
                "Operator": "-neq",
                "Value": [
                    "男"
                ]
            }
        ]
    }
]



Operator 目前支持
-neq  不等于!=操作符
-eq  等于=操作符
-is     in操作符

                     * @return GlobalParam 全局筛选参数 报表过滤条件的全局参数。 格式为JSON格式的字符串
**目前仅支持字符类型页面参数绑定到全局参数
**
[
    {
        "ParamKey": "name",  //页面参数名称
        "JoinType": "AND",     // 连接方式,目前仅支持AND
        "WhereList": [
            {
                "Operator": "-neq",   // 操作符，参考以下说明
                "Value": [                   //操作值，单值数组只传一个值
                    "zZWJMD",
                    "ZzVGHX",
                    "湖南省",
                    "河北省"
                ]
            }
        ]
    },
    {
        "ParamKey": "genderParam",
        "JoinType": "AND",
        "WhereList": [
            {
                "Operator": "-neq",
                "Value": [
                    "男"
                ]
            }
        ]
    }
]



Operator 目前支持
-neq  不等于!=操作符
-eq  等于=操作符
-is     in操作符

                     * 
                     */
                    std::string GetGlobalParam() const;

                    /**
                     * 设置全局筛选参数 报表过滤条件的全局参数。 格式为JSON格式的字符串
**目前仅支持字符类型页面参数绑定到全局参数
**
[
    {
        "ParamKey": "name",  //页面参数名称
        "JoinType": "AND",     // 连接方式,目前仅支持AND
        "WhereList": [
            {
                "Operator": "-neq",   // 操作符，参考以下说明
                "Value": [                   //操作值，单值数组只传一个值
                    "zZWJMD",
                    "ZzVGHX",
                    "湖南省",
                    "河北省"
                ]
            }
        ]
    },
    {
        "ParamKey": "genderParam",
        "JoinType": "AND",
        "WhereList": [
            {
                "Operator": "-neq",
                "Value": [
                    "男"
                ]
            }
        ]
    }
]



Operator 目前支持
-neq  不等于!=操作符
-eq  等于=操作符
-is     in操作符

                     * @param _globalParam 全局筛选参数 报表过滤条件的全局参数。 格式为JSON格式的字符串
**目前仅支持字符类型页面参数绑定到全局参数
**
[
    {
        "ParamKey": "name",  //页面参数名称
        "JoinType": "AND",     // 连接方式,目前仅支持AND
        "WhereList": [
            {
                "Operator": "-neq",   // 操作符，参考以下说明
                "Value": [                   //操作值，单值数组只传一个值
                    "zZWJMD",
                    "ZzVGHX",
                    "湖南省",
                    "河北省"
                ]
            }
        ]
    },
    {
        "ParamKey": "genderParam",
        "JoinType": "AND",
        "WhereList": [
            {
                "Operator": "-neq",
                "Value": [
                    "男"
                ]
            }
        ]
    }
]



Operator 目前支持
-neq  不等于!=操作符
-eq  等于=操作符
-is     in操作符

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
                     * 获取100 不绑定用户, 一次创建一个token，UserCorpId和UserId 非必填，不支持 ChatBI 嵌出
200 单用户单token , 一次创建一个token， UserCorpId和UserId 必填
300 单用户多token, 一次创建多个token，UserCorpId和UserId 必填
                     * @return TokenType 100 不绑定用户, 一次创建一个token，UserCorpId和UserId 非必填，不支持 ChatBI 嵌出
200 单用户单token , 一次创建一个token， UserCorpId和UserId 必填
300 单用户多token, 一次创建多个token，UserCorpId和UserId 必填
                     * 
                     */
                    int64_t GetTokenType() const;

                    /**
                     * 设置100 不绑定用户, 一次创建一个token，UserCorpId和UserId 非必填，不支持 ChatBI 嵌出
200 单用户单token , 一次创建一个token， UserCorpId和UserId 必填
300 单用户多token, 一次创建多个token，UserCorpId和UserId 必填
                     * @param _tokenType 100 不绑定用户, 一次创建一个token，UserCorpId和UserId 非必填，不支持 ChatBI 嵌出
200 单用户单token , 一次创建一个token， UserCorpId和UserId 必填
300 单用户多token, 一次创建多个token，UserCorpId和UserId 必填
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
                     * 获取一次创建的token数
                     * @return TokenNum 一次创建的token数
                     * 
                     */
                    int64_t GetTokenNum() const;

                    /**
                     * 设置一次创建的token数
                     * @param _tokenNum 一次创建的token数
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
                     * 获取嵌出显示配置，目前为ChatBI嵌出场景用，TableFilter表示数据表列表过滤，SqlView表示sql查看功能
                     * @return ConfigParam 嵌出显示配置，目前为ChatBI嵌出场景用，TableFilter表示数据表列表过滤，SqlView表示sql查看功能
                     * 
                     */
                    std::string GetConfigParam() const;

                    /**
                     * 设置嵌出显示配置，目前为ChatBI嵌出场景用，TableFilter表示数据表列表过滤，SqlView表示sql查看功能
                     * @param _configParam 嵌出显示配置，目前为ChatBI嵌出场景用，TableFilter表示数据表列表过滤，SqlView表示sql查看功能
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
                     * 分享项目id
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 分享页面id，嵌出看板时此为空值0，ChatBI嵌出时不传
                     */
                    uint64_t m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * embed表示页面看板嵌出，chatBIEmbed表示ChatBI嵌出
                     */
                    std::string m_intention;
                    bool m_intentionHasBeenSet;

                    /**
                     * page表示嵌出页面，panel表示嵌出整个看板，ChatBI嵌出时使用project
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 过期时间。 单位：分钟 最大值：240。即，4小时 默认值：240
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 备用字段
                     */
                    std::string m_extraParam;
                    bool m_extraParamHasBeenSet;

                    /**
                     * 使用者企业Id(仅用于多用户)
                     */
                    std::string m_userCorpId;
                    bool m_userCorpIdHasBeenSet;

                    /**
                     * 使用者Id(仅用于多用户)
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 访问次数限制，限制范围1-99999，为空则不设置访问次数限制
                     */
                    int64_t m_ticketNum;
                    bool m_ticketNumHasBeenSet;

                    /**
                     * 全局筛选参数 报表过滤条件的全局参数。 格式为JSON格式的字符串
**目前仅支持字符类型页面参数绑定到全局参数
**
[
    {
        "ParamKey": "name",  //页面参数名称
        "JoinType": "AND",     // 连接方式,目前仅支持AND
        "WhereList": [
            {
                "Operator": "-neq",   // 操作符，参考以下说明
                "Value": [                   //操作值，单值数组只传一个值
                    "zZWJMD",
                    "ZzVGHX",
                    "湖南省",
                    "河北省"
                ]
            }
        ]
    },
    {
        "ParamKey": "genderParam",
        "JoinType": "AND",
        "WhereList": [
            {
                "Operator": "-neq",
                "Value": [
                    "男"
                ]
            }
        ]
    }
]



Operator 目前支持
-neq  不等于!=操作符
-eq  等于=操作符
-is     in操作符

                     */
                    std::string m_globalParam;
                    bool m_globalParamHasBeenSet;

                    /**
                     * 100 不绑定用户, 一次创建一个token，UserCorpId和UserId 非必填，不支持 ChatBI 嵌出
200 单用户单token , 一次创建一个token， UserCorpId和UserId 必填
300 单用户多token, 一次创建多个token，UserCorpId和UserId 必填
                     */
                    int64_t m_tokenType;
                    bool m_tokenTypeHasBeenSet;

                    /**
                     * 一次创建的token数
                     */
                    int64_t m_tokenNum;
                    bool m_tokenNumHasBeenSet;

                    /**
                     * 嵌出显示配置，目前为ChatBI嵌出场景用，TableFilter表示数据表列表过滤，SqlView表示sql查看功能
                     */
                    std::string m_configParam;
                    bool m_configParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_CREATEEMBEDTOKENREQUEST_H_
