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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTSESSIONREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTSESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * UpsertSession请求参数结构体
                */
                class UpsertSessionRequest : public AbstractModel
                {
                public:
                    UpsertSessionRequest();
                    ~UpsertSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
入参限制：必填，必须为合法域名格式
                     * @return Domain 域名
入参限制：必填，必须为合法域名格式
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
入参限制：必填，必须为合法域名格式
                     * @param _domain 域名
入参限制：必填，必须为合法域名格式
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取会话来源位置
取值说明：get-从URL查询参数中提取，post-从POST Body中提取，cookie-从Cookie中提取，header-从HTTP Header中提取
入参限制：必填，取值范围为get/post/cookie/header
                     * @return Source 会话来源位置
取值说明：get-从URL查询参数中提取，post-从POST Body中提取，cookie-从Cookie中提取，header-从HTTP Header中提取
入参限制：必填，取值范围为get/post/cookie/header
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置会话来源位置
取值说明：get-从URL查询参数中提取，post-从POST Body中提取，cookie-从Cookie中提取，header-从HTTP Header中提取
入参限制：必填，取值范围为get/post/cookie/header
                     * @param _source 会话来源位置
取值说明：get-从URL查询参数中提取，post-从POST Body中提取，cookie-从Cookie中提取，header-从HTTP Header中提取
入参限制：必填，取值范围为get/post/cookie/header
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取提取类别
取值说明：location-按位置提取（使用StartOffset和EndOffset），match-按字符串匹配提取（使用KeyOrStartMat和EndMat），exact_key-按精准Key提取（使用Key字段）
入参限制：必填，取值范围为location/match/exact_key
                     * @return Category 提取类别
取值说明：location-按位置提取（使用StartOffset和EndOffset），match-按字符串匹配提取（使用KeyOrStartMat和EndMat），exact_key-按精准Key提取（使用Key字段）
入参限制：必填，取值范围为location/match/exact_key
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置提取类别
取值说明：location-按位置提取（使用StartOffset和EndOffset），match-按字符串匹配提取（使用KeyOrStartMat和EndMat），exact_key-按精准Key提取（使用Key字段）
入参限制：必填，取值范围为location/match/exact_key
                     * @param _category 提取类别
取值说明：location-按位置提取（使用StartOffset和EndOffset），match-按字符串匹配提取（使用KeyOrStartMat和EndMat），exact_key-按精准Key提取（使用Key字段）
入参限制：必填，取值范围为location/match/exact_key
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取提取key或者起始匹配模式
入参限制：最长32个字符，不允许包含MongoDB注入字符
说明：当Category为match时，表示匹配的起始字符串；当Category为exact_key时，表示精确匹配的key名
                     * @return KeyOrStartMat 提取key或者起始匹配模式
入参限制：最长32个字符，不允许包含MongoDB注入字符
说明：当Category为match时，表示匹配的起始字符串；当Category为exact_key时，表示精确匹配的key名
                     * 
                     */
                    std::string GetKeyOrStartMat() const;

                    /**
                     * 设置提取key或者起始匹配模式
入参限制：最长32个字符，不允许包含MongoDB注入字符
说明：当Category为match时，表示匹配的起始字符串；当Category为exact_key时，表示精确匹配的key名
                     * @param _keyOrStartMat 提取key或者起始匹配模式
入参限制：最长32个字符，不允许包含MongoDB注入字符
说明：当Category为match时，表示匹配的起始字符串；当Category为exact_key时，表示精确匹配的key名
                     * 
                     */
                    void SetKeyOrStartMat(const std::string& _keyOrStartMat);

                    /**
                     * 判断参数 KeyOrStartMat 是否已赋值
                     * @return KeyOrStartMat 是否已赋值
                     * 
                     */
                    bool KeyOrStartMatHasBeenSet() const;

                    /**
                     * 获取结束匹配模式
入参限制：必填，最长32个字符，不允许包含MongoDB注入字符
说明：当Category为match时，表示匹配的结束字符串
                     * @return EndMat 结束匹配模式
入参限制：必填，最长32个字符，不允许包含MongoDB注入字符
说明：当Category为match时，表示匹配的结束字符串
                     * 
                     */
                    std::string GetEndMat() const;

                    /**
                     * 设置结束匹配模式
入参限制：必填，最长32个字符，不允许包含MongoDB注入字符
说明：当Category为match时，表示匹配的结束字符串
                     * @param _endMat 结束匹配模式
入参限制：必填，最长32个字符，不允许包含MongoDB注入字符
说明：当Category为match时，表示匹配的结束字符串
                     * 
                     */
                    void SetEndMat(const std::string& _endMat);

                    /**
                     * 判断参数 EndMat 是否已赋值
                     * @return EndMat 是否已赋值
                     * 
                     */
                    bool EndMatHasBeenSet() const;

                    /**
                     * 获取起始偏移位置
入参限制：必填，整数字符串
约束条件：EndOffset不能小于StartOffset，且EndOffset-StartOffset+1不能超过256
说明：当Category为location时生效，表示从会话值中提取的起始字节位置
                     * @return StartOffset 起始偏移位置
入参限制：必填，整数字符串
约束条件：EndOffset不能小于StartOffset，且EndOffset-StartOffset+1不能超过256
说明：当Category为location时生效，表示从会话值中提取的起始字节位置
                     * 
                     */
                    std::string GetStartOffset() const;

                    /**
                     * 设置起始偏移位置
入参限制：必填，整数字符串
约束条件：EndOffset不能小于StartOffset，且EndOffset-StartOffset+1不能超过256
说明：当Category为location时生效，表示从会话值中提取的起始字节位置
                     * @param _startOffset 起始偏移位置
入参限制：必填，整数字符串
约束条件：EndOffset不能小于StartOffset，且EndOffset-StartOffset+1不能超过256
说明：当Category为location时生效，表示从会话值中提取的起始字节位置
                     * 
                     */
                    void SetStartOffset(const std::string& _startOffset);

                    /**
                     * 判断参数 StartOffset 是否已赋值
                     * @return StartOffset 是否已赋值
                     * 
                     */
                    bool StartOffsetHasBeenSet() const;

                    /**
                     * 获取结束偏移位置
入参限制：必填，整数字符串
约束条件：不能小于StartOffset，且EndOffset-StartOffset+1不能超过256
说明：当Category为location时生效，表示从会话值中提取的结束字节位置
                     * @return EndOffset 结束偏移位置
入参限制：必填，整数字符串
约束条件：不能小于StartOffset，且EndOffset-StartOffset+1不能超过256
说明：当Category为location时生效，表示从会话值中提取的结束字节位置
                     * 
                     */
                    std::string GetEndOffset() const;

                    /**
                     * 设置结束偏移位置
入参限制：必填，整数字符串
约束条件：不能小于StartOffset，且EndOffset-StartOffset+1不能超过256
说明：当Category为location时生效，表示从会话值中提取的结束字节位置
                     * @param _endOffset 结束偏移位置
入参限制：必填，整数字符串
约束条件：不能小于StartOffset，且EndOffset-StartOffset+1不能超过256
说明：当Category为location时生效，表示从会话值中提取的结束字节位置
                     * 
                     */
                    void SetEndOffset(const std::string& _endOffset);

                    /**
                     * 判断参数 EndOffset 是否已赋值
                     * @return EndOffset 是否已赋值
                     * 
                     */
                    bool EndOffsetHasBeenSet() const;

                    /**
                     * 获取版本
                     * @return Edition 版本
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置版本
                     * @param _edition 版本
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取会话名称
说明：用于标识会话的可读名称
                     * @return SessionName 会话名称
说明：用于标识会话的可读名称
                     * 
                     */
                    std::string GetSessionName() const;

                    /**
                     * 设置会话名称
说明：用于标识会话的可读名称
                     * @param _sessionName 会话名称
说明：用于标识会话的可读名称
                     * 
                     */
                    void SetSessionName(const std::string& _sessionName);

                    /**
                     * 判断参数 SessionName 是否已赋值
                     * @return SessionName 是否已赋值
                     * 
                     */
                    bool SessionNameHasBeenSet() const;

                    /**
                     * 获取会话ID
说明：传-1表示新增会话（系统自动生成ID），传已有ID表示更新该会话配置
约束条件：新增时每个域名最多10条会话规则
                     * @return SessionID 会话ID
说明：传-1表示新增会话（系统自动生成ID），传已有ID表示更新该会话配置
约束条件：新增时每个域名最多10条会话规则
                     * 
                     */
                    int64_t GetSessionID() const;

                    /**
                     * 设置会话ID
说明：传-1表示新增会话（系统自动生成ID），传已有ID表示更新该会话配置
约束条件：新增时每个域名最多10条会话规则
                     * @param _sessionID 会话ID
说明：传-1表示新增会话（系统自动生成ID），传已有ID表示更新该会话配置
约束条件：新增时每个域名最多10条会话规则
                     * 
                     */
                    void SetSessionID(const int64_t& _sessionID);

                    /**
                     * 判断参数 SessionID 是否已赋值
                     * @return SessionID 是否已赋值
                     * 
                     */
                    bool SessionIDHasBeenSet() const;

                    /**
                     * 获取会话标识参数（精准匹配key）
入参限制：key中"."分隔的层级不超过2层
说明：当Category为exact_key时使用，表示要精确匹配的参数名
                     * @return Key 会话标识参数（精准匹配key）
入参限制：key中"."分隔的层级不超过2层
说明：当Category为exact_key时使用，表示要精确匹配的参数名
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置会话标识参数（精准匹配key）
入参限制：key中"."分隔的层级不超过2层
说明：当Category为exact_key时使用，表示要精确匹配的参数名
                     * @param _key 会话标识参数（精准匹配key）
入参限制：key中"."分隔的层级不超过2层
说明：当Category为exact_key时使用，表示要精确匹配的参数名
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                private:

                    /**
                     * 域名
入参限制：必填，必须为合法域名格式
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 会话来源位置
取值说明：get-从URL查询参数中提取，post-从POST Body中提取，cookie-从Cookie中提取，header-从HTTP Header中提取
入参限制：必填，取值范围为get/post/cookie/header
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 提取类别
取值说明：location-按位置提取（使用StartOffset和EndOffset），match-按字符串匹配提取（使用KeyOrStartMat和EndMat），exact_key-按精准Key提取（使用Key字段）
入参限制：必填，取值范围为location/match/exact_key
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 提取key或者起始匹配模式
入参限制：最长32个字符，不允许包含MongoDB注入字符
说明：当Category为match时，表示匹配的起始字符串；当Category为exact_key时，表示精确匹配的key名
                     */
                    std::string m_keyOrStartMat;
                    bool m_keyOrStartMatHasBeenSet;

                    /**
                     * 结束匹配模式
入参限制：必填，最长32个字符，不允许包含MongoDB注入字符
说明：当Category为match时，表示匹配的结束字符串
                     */
                    std::string m_endMat;
                    bool m_endMatHasBeenSet;

                    /**
                     * 起始偏移位置
入参限制：必填，整数字符串
约束条件：EndOffset不能小于StartOffset，且EndOffset-StartOffset+1不能超过256
说明：当Category为location时生效，表示从会话值中提取的起始字节位置
                     */
                    std::string m_startOffset;
                    bool m_startOffsetHasBeenSet;

                    /**
                     * 结束偏移位置
入参限制：必填，整数字符串
约束条件：不能小于StartOffset，且EndOffset-StartOffset+1不能超过256
说明：当Category为location时生效，表示从会话值中提取的结束字节位置
                     */
                    std::string m_endOffset;
                    bool m_endOffsetHasBeenSet;

                    /**
                     * 版本
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 会话名称
说明：用于标识会话的可读名称
                     */
                    std::string m_sessionName;
                    bool m_sessionNameHasBeenSet;

                    /**
                     * 会话ID
说明：传-1表示新增会话（系统自动生成ID），传已有ID表示更新该会话配置
约束条件：新增时每个域名最多10条会话规则
                     */
                    int64_t m_sessionID;
                    bool m_sessionIDHasBeenSet;

                    /**
                     * 会话标识参数（精准匹配key）
入参限制：key中"."分隔的层级不超过2层
说明：当Category为exact_key时使用，表示要精确匹配的参数名
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTSESSIONREQUEST_H_
