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
                     * 获取记录ID数组。可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId。单次最多修改5000条记录。
                     * @return RecordIdList 记录ID数组。可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId。单次最多修改5000条记录。
                     * 
                     */
                    std::vector<uint64_t> GetRecordIdList() const;

                    /**
                     * 设置记录ID数组。可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId。单次最多修改5000条记录。
                     * @param _recordIdList 记录ID数组。可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId。单次最多修改5000条记录。
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
                     * 获取要修改的字段，可选值为 [“sub_domain”、”record_type”、”area”、”value”、”mx”、”ttl”、”status”] 中的某一个。
                     * @return Change 要修改的字段，可选值为 [“sub_domain”、”record_type”、”area”、”value”、”mx”、”ttl”、”status”] 中的某一个。
                     * 
                     */
                    std::string GetChange() const;

                    /**
                     * 设置要修改的字段，可选值为 [“sub_domain”、”record_type”、”area”、”value”、”mx”、”ttl”、”status”] 中的某一个。
                     * @param _change 要修改的字段，可选值为 [“sub_domain”、”record_type”、”area”、”value”、”mx”、”ttl”、”status”] 中的某一个。
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
                     * 获取修改为，具体依赖 change 字段，必填参数。
                     * @return ChangeTo 修改为，具体依赖 change 字段，必填参数。
                     * 
                     */
                    std::string GetChangeTo() const;

                    /**
                     * 设置修改为，具体依赖 change 字段，必填参数。
                     * @param _changeTo 修改为，具体依赖 change 字段，必填参数。
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
                     * 获取要修改到的记录值，仅当 change 字段为 “record_type” 时为必填参数。
                     * @return Value 要修改到的记录值，仅当 change 字段为 “record_type” 时为必填参数。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置要修改到的记录值，仅当 change 字段为 “record_type” 时为必填参数。
                     * @param _value 要修改到的记录值，仅当 change 字段为 “record_type” 时为必填参数。
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
                     * 获取MX 优先级，当记录类型是 MX、HTTPS、SVCB 时必填，范围1-65535。
                     * @return MX MX 优先级，当记录类型是 MX、HTTPS、SVCB 时必填，范围1-65535。
                     * 
                     */
                    std::string GetMX() const;

                    /**
                     * 设置MX 优先级，当记录类型是 MX、HTTPS、SVCB 时必填，范围1-65535。
                     * @param _mX MX 优先级，当记录类型是 MX、HTTPS、SVCB 时必填，范围1-65535。
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
                     * 记录ID数组。可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId。单次最多修改5000条记录。
                     */
                    std::vector<uint64_t> m_recordIdList;
                    bool m_recordIdListHasBeenSet;

                    /**
                     * 要修改的字段，可选值为 [“sub_domain”、”record_type”、”area”、”value”、”mx”、”ttl”、”status”] 中的某一个。
                     */
                    std::string m_change;
                    bool m_changeHasBeenSet;

                    /**
                     * 修改为，具体依赖 change 字段，必填参数。
                     */
                    std::string m_changeTo;
                    bool m_changeToHasBeenSet;

                    /**
                     * 要修改到的记录值，仅当 change 字段为 “record_type” 时为必填参数。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * MX 优先级，当记录类型是 MX、HTTPS、SVCB 时必填，范围1-65535。
                     */
                    std::string m_mX;
                    bool m_mXHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYRECORDBATCHREQUEST_H_
