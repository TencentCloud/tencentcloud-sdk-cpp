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
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
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
                     * 获取session来源位置
                     * @return Source session来源位置
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置session来源位置
                     * @param _source session来源位置
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
                     * @return Category 提取类别
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置提取类别
                     * @param _category 提取类别
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
                     * @return KeyOrStartMat 提取key或者起始匹配模式
                     * 
                     */
                    std::string GetKeyOrStartMat() const;

                    /**
                     * 设置提取key或者起始匹配模式
                     * @param _keyOrStartMat 提取key或者起始匹配模式
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
                     * @return EndMat 结束匹配模式
                     * 
                     */
                    std::string GetEndMat() const;

                    /**
                     * 设置结束匹配模式
                     * @param _endMat 结束匹配模式
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
                     * @return StartOffset 起始偏移位置
                     * 
                     */
                    std::string GetStartOffset() const;

                    /**
                     * 设置起始偏移位置
                     * @param _startOffset 起始偏移位置
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
                     * @return EndOffset 结束偏移位置
                     * 
                     */
                    std::string GetEndOffset() const;

                    /**
                     * 设置结束偏移位置
                     * @param _endOffset 结束偏移位置
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
                     * 获取Session名
                     * @return SessionName Session名
                     * 
                     */
                    std::string GetSessionName() const;

                    /**
                     * 设置Session名
                     * @param _sessionName Session名
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
                     * 获取Session对应ID
                     * @return SessionID Session对应ID
                     * 
                     */
                    int64_t GetSessionID() const;

                    /**
                     * 设置Session对应ID
                     * @param _sessionID Session对应ID
                     * 
                     */
                    void SetSessionID(const int64_t& _sessionID);

                    /**
                     * 判断参数 SessionID 是否已赋值
                     * @return SessionID 是否已赋值
                     * 
                     */
                    bool SessionIDHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * session来源位置
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 提取类别
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 提取key或者起始匹配模式
                     */
                    std::string m_keyOrStartMat;
                    bool m_keyOrStartMatHasBeenSet;

                    /**
                     * 结束匹配模式
                     */
                    std::string m_endMat;
                    bool m_endMatHasBeenSet;

                    /**
                     * 起始偏移位置
                     */
                    std::string m_startOffset;
                    bool m_startOffsetHasBeenSet;

                    /**
                     * 结束偏移位置
                     */
                    std::string m_endOffset;
                    bool m_endOffsetHasBeenSet;

                    /**
                     * 版本
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * Session名
                     */
                    std::string m_sessionName;
                    bool m_sessionNameHasBeenSet;

                    /**
                     * Session对应ID
                     */
                    int64_t m_sessionID;
                    bool m_sessionIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTSESSIONREQUEST_H_
