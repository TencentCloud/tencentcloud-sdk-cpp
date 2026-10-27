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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CERTDETAIL_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CERTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 证书详情
                */
                class CertDetail : public AbstractModel
                {
                public:
                    CertDetail();
                    ~CertDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>证书ID</p>
                     * @return CertId <p>证书ID</p>
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置<p>证书ID</p>
                     * @param _certId <p>证书ID</p>
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取<p>证书备注名</p>
                     * @return Alias <p>证书备注名</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>证书备注名</p>
                     * @param _alias <p>证书备注名</p>
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
                     * 获取<p>证书绑定的主域名</p>
                     * @return Domain <p>证书绑定的主域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>证书绑定的主域名</p>
                     * @param _domain <p>证书绑定的主域名</p>
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
                     * 获取<p>证书来源</p>
                     * @return Source <p>证书来源</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>证书来源</p>
                     * @param _source <p>证书来源</p>
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
                     * 获取<p>有效期结束（秒级时间戳）</p><p>单位：秒</p>
                     * @return EndTime <p>有效期结束（秒级时间戳）</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>有效期结束（秒级时间戳）</p><p>单位：秒</p>
                     * @param _endTime <p>有效期结束（秒级时间戳）</p><p>单位：秒</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>证书到期剩余天数</p>
                     * @return RemainDays <p>证书到期剩余天数</p>
                     * 
                     */
                    int64_t GetRemainDays() const;

                    /**
                     * 设置<p>证书到期剩余天数</p>
                     * @param _remainDays <p>证书到期剩余天数</p>
                     * 
                     */
                    void SetRemainDays(const int64_t& _remainDays);

                    /**
                     * 判断参数 RemainDays 是否已赋值
                     * @return RemainDays 是否已赋值
                     * 
                     */
                    bool RemainDaysHasBeenSet() const;

                    /**
                     * 获取<p>证书状态，1为已通过</p>
                     * @return CertStatus <p>证书状态，1为已通过</p>
                     * 
                     */
                    int64_t GetCertStatus() const;

                    /**
                     * 设置<p>证书状态，1为已通过</p>
                     * @param _certStatus <p>证书状态，1为已通过</p>
                     * 
                     */
                    void SetCertStatus(const int64_t& _certStatus);

                    /**
                     * 判断参数 CertStatus 是否已赋值
                     * @return CertStatus 是否已赋值
                     * 
                     */
                    bool CertStatusHasBeenSet() const;

                private:

                    /**
                     * <p>证书ID</p>
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * <p>证书备注名</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>证书绑定的主域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>证书来源</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>有效期结束（秒级时间戳）</p><p>单位：秒</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>证书到期剩余天数</p>
                     */
                    int64_t m_remainDays;
                    bool m_remainDaysHasBeenSet;

                    /**
                     * <p>证书状态，1为已通过</p>
                     */
                    int64_t m_certStatus;
                    bool m_certStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CERTDETAIL_H_
