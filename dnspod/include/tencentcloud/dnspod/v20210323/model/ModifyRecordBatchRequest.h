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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYRECORDBATCHREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYRECORDBATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyRecordBatch请求参数结构体
                */
                class ModifyRecordBatchRequest : public AbstractModel
                {
                public:
                    ModifyRecordBatchRequest();
                    ~ModifyRecordBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>记录ID数组。可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId。单次最多修改5000条记录。</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1427/56166">DescribeRecordList</a></p>
                     * @return RecordIdList <p>记录ID数组。可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId。单次最多修改5000条记录。</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1427/56166">DescribeRecordList</a></p>
                     * 
                     */
                    std::vector<uint64_t> GetRecordIdList() const;

                    /**
                     * 设置<p>记录ID数组。可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId。单次最多修改5000条记录。</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1427/56166">DescribeRecordList</a></p>
                     * @param _recordIdList <p>记录ID数组。可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId。单次最多修改5000条记录。</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1427/56166">DescribeRecordList</a></p>
                     * 
                     */
                    void SetRecordIdList(const std::vector<uint64_t>& _recordIdList);

                    /**
                     * 判断参数 RecordIdList 是否已赋值
                     * @return RecordIdList 是否已赋值
                     * 
                     */
                    bool RecordIdListHasBeenSet() const;

                    /**
                     * 获取<p>要修改的字段，可选值为 [“sub_domain”、”record_type”、”area”、”value”、”mx”、”ttl”、”status”] 中的某一个。</p>
                     * @return Change <p>要修改的字段，可选值为 [“sub_domain”、”record_type”、”area”、”value”、”mx”、”ttl”、”status”] 中的某一个。</p>
                     * 
                     */
                    std::string GetChange() const;

                    /**
                     * 设置<p>要修改的字段，可选值为 [“sub_domain”、”record_type”、”area”、”value”、”mx”、”ttl”、”status”] 中的某一个。</p>
                     * @param _change <p>要修改的字段，可选值为 [“sub_domain”、”record_type”、”area”、”value”、”mx”、”ttl”、”status”] 中的某一个。</p>
                     * 
                     */
                    void SetChange(const std::string& _change);

                    /**
                     * 判断参数 Change 是否已赋值
                     * @return Change 是否已赋值
                     * 
                     */
                    bool ChangeHasBeenSet() const;

                    /**
                     * 获取<p>修改为，具体依赖 change 字段，必填参数。</p>
                     * @return ChangeTo <p>修改为，具体依赖 change 字段，必填参数。</p>
                     * 
                     */
                    std::string GetChangeTo() const;

                    /**
                     * 设置<p>修改为，具体依赖 change 字段，必填参数。</p>
                     * @param _changeTo <p>修改为，具体依赖 change 字段，必填参数。</p>
                     * 
                     */
                    void SetChangeTo(const std::string& _changeTo);

                    /**
                     * 判断参数 ChangeTo 是否已赋值
                     * @return ChangeTo 是否已赋值
                     * 
                     */
                    bool ChangeToHasBeenSet() const;

                    /**
                     * 获取<p>要修改到的记录值，仅当 change 字段为 “record_type” 时为必填参数。</p>
                     * @return Value <p>要修改到的记录值，仅当 change 字段为 “record_type” 时为必填参数。</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>要修改到的记录值，仅当 change 字段为 “record_type” 时为必填参数。</p>
                     * @param _value <p>要修改到的记录值，仅当 change 字段为 “record_type” 时为必填参数。</p>
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取<p>MX 优先级，当记录类型是 MX、HTTPS、SVCB 时必填，范围0-65535。</p>
                     * @return MX <p>MX 优先级，当记录类型是 MX、HTTPS、SVCB 时必填，范围0-65535。</p>
                     * 
                     */
                    std::string GetMX() const;

                    /**
                     * 设置<p>MX 优先级，当记录类型是 MX、HTTPS、SVCB 时必填，范围0-65535。</p>
                     * @param _mX <p>MX 优先级，当记录类型是 MX、HTTPS、SVCB 时必填，范围0-65535。</p>
                     * 
                     */
                    void SetMX(const std::string& _mX);

                    /**
                     * 判断参数 MX 是否已赋值
                     * @return MX 是否已赋值
                     * 
                     */
                    bool MXHasBeenSet() const;

                private:

                    /**
                     * <p>记录ID数组。可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId。单次最多修改5000条记录。</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1427/56166">DescribeRecordList</a></p>
                     */
                    std::vector<uint64_t> m_recordIdList;
                    bool m_recordIdListHasBeenSet;

                    /**
                     * <p>要修改的字段，可选值为 [“sub_domain”、”record_type”、”area”、”value”、”mx”、”ttl”、”status”] 中的某一个。</p>
                     */
                    std::string m_change;
                    bool m_changeHasBeenSet;

                    /**
                     * <p>修改为，具体依赖 change 字段，必填参数。</p>
                     */
                    std::string m_changeTo;
                    bool m_changeToHasBeenSet;

                    /**
                     * <p>要修改到的记录值，仅当 change 字段为 “record_type” 时为必填参数。</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>MX 优先级，当记录类型是 MX、HTTPS、SVCB 时必填，范围0-65535。</p>
                     */
                    std::string m_mX;
                    bool m_mXHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYRECORDBATCHREQUEST_H_
