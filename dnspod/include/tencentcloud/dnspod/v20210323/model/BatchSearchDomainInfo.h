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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_BATCHSEARCHDOMAININFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_BATCHSEARCHDOMAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/BatchSearchRecordInfo.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 批量操作筛选域名信息
                */
                class BatchSearchDomainInfo : public AbstractModel
                {
                public:
                    BatchSearchDomainInfo();
                    ~BatchSearchDomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取域名 ID
                     * @return DomainId 域名 ID
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置域名 ID
                     * @param _domainId 域名 ID
                     * 
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取域名套餐等级
                     * @return DomainGrade 域名套餐等级
                     * 
                     */
                    std::string GetDomainGrade() const;

                    /**
                     * 设置域名套餐等级
                     * @param _domainGrade 域名套餐等级
                     * 
                     */
                    void SetDomainGrade(const std::string& _domainGrade);

                    /**
                     * 判断参数 DomainGrade 是否已赋值
                     * @return DomainGrade 是否已赋值
                     * 
                     */
                    bool DomainGradeHasBeenSet() const;

                    /**
                     * 获取记录信息列表
                     * @return RecordList 记录信息列表
                     * 
                     */
                    std::vector<BatchSearchRecordInfo> GetRecordList() const;

                    /**
                     * 设置记录信息列表
                     * @param _recordList 记录信息列表
                     * 
                     */
                    void SetRecordList(const std::vector<BatchSearchRecordInfo>& _recordList);

                    /**
                     * 判断参数 RecordList 是否已赋值
                     * @return RecordList 是否已赋值
                     * 
                     */
                    bool RecordListHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名 ID
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 域名套餐等级
                     */
                    std::string m_domainGrade;
                    bool m_domainGradeHasBeenSet;

                    /**
                     * 记录信息列表
                     */
                    std::vector<BatchSearchRecordInfo> m_recordList;
                    bool m_recordListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_BATCHSEARCHDOMAININFO_H_
