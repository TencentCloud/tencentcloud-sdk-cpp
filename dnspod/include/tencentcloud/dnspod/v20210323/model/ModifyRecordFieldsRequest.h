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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYRECORDFIELDSREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYRECORDFIELDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/KeyValue.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * ModifyRecordFields请求参数结构体
                */
                class ModifyRecordFieldsRequest : public AbstractModel
                {
                public:
                    ModifyRecordFieldsRequest();
                    ~ModifyRecordFieldsRequest() = default;
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
                     * 获取记录 ID 。
                     * @return RecordId 记录 ID 。
                     * 
                     */
                    uint64_t GetRecordId() const;

                    /**
                     * 设置记录 ID 。
                     * @param _recordId 记录 ID 。
                     * 
                     */
                    void SetRecordId(const uint64_t& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取要修改的记录属性和值，支持：sub_domain，record_line，record_line_id，record_type，value，ttl，status，mx，weight
                     * @return FieldList 要修改的记录属性和值，支持：sub_domain，record_line，record_line_id，record_type，value，ttl，status，mx，weight
                     * 
                     */
                    std::vector<KeyValue> GetFieldList() const;

                    /**
                     * 设置要修改的记录属性和值，支持：sub_domain，record_line，record_line_id，record_type，value，ttl，status，mx，weight
                     * @param _fieldList 要修改的记录属性和值，支持：sub_domain，record_line，record_line_id，record_type，value，ttl，status，mx，weight
                     * 
                     */
                    void SetFieldList(const std::vector<KeyValue>& _fieldList);

                    /**
                     * 判断参数 FieldList 是否已赋值
                     * @return FieldList 是否已赋值
                     * 
                     */
                    bool FieldListHasBeenSet() const;

                    /**
                     * 获取域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。
                     * @return DomainId 域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。
                     * @param _domainId 域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。
                     * 
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 记录 ID 。
                     */
                    uint64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 要修改的记录属性和值，支持：sub_domain，record_line，record_line_id，record_type，value，ttl，status，mx，weight
                     */
                    std::vector<KeyValue> m_fieldList;
                    bool m_fieldListHasBeenSet;

                    /**
                     * 域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYRECORDFIELDSREQUEST_H_
