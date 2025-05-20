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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATERECORDBATCHREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATERECORDBATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/AddRecordBatch.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * CreateRecordBatch请求参数结构体
                */
                class CreateRecordBatchRequest : public AbstractModel
                {
                public:
                    CreateRecordBatchRequest();
                    ~CreateRecordBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名ID，多个域名ID用英文逗号进行分割。可以通过接口DescribeDomainList查到所有的Domain以及DomainId
                     * @return DomainIdList 域名ID，多个域名ID用英文逗号进行分割。可以通过接口DescribeDomainList查到所有的Domain以及DomainId
                     * 
                     */
                    std::vector<std::string> GetDomainIdList() const;

                    /**
                     * 设置域名ID，多个域名ID用英文逗号进行分割。可以通过接口DescribeDomainList查到所有的Domain以及DomainId
                     * @param _domainIdList 域名ID，多个域名ID用英文逗号进行分割。可以通过接口DescribeDomainList查到所有的Domain以及DomainId
                     * 
                     */
                    void SetDomainIdList(const std::vector<std::string>& _domainIdList);

                    /**
                     * 判断参数 DomainIdList 是否已赋值
                     * @return DomainIdList 是否已赋值
                     * 
                     */
                    bool DomainIdListHasBeenSet() const;

                    /**
                     * 获取记录数组
                     * @return RecordList 记录数组
                     * 
                     */
                    std::vector<AddRecordBatch> GetRecordList() const;

                    /**
                     * 设置记录数组
                     * @param _recordList 记录数组
                     * 
                     */
                    void SetRecordList(const std::vector<AddRecordBatch>& _recordList);

                    /**
                     * 判断参数 RecordList 是否已赋值
                     * @return RecordList 是否已赋值
                     * 
                     */
                    bool RecordListHasBeenSet() const;

                private:

                    /**
                     * 域名ID，多个域名ID用英文逗号进行分割。可以通过接口DescribeDomainList查到所有的Domain以及DomainId
                     */
                    std::vector<std::string> m_domainIdList;
                    bool m_domainIdListHasBeenSet;

                    /**
                     * 记录数组
                     */
                    std::vector<AddRecordBatch> m_recordList;
                    bool m_recordListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATERECORDBATCHREQUEST_H_
