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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_ADDRECORDBATCH_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_ADDRECORDBATCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 批量添加的记录
                */
                class AddRecordBatch : public AbstractModel
                {
                public:
                    AddRecordBatch();
                    ~AddRecordBatch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录类型, 详见 DescribeRecordType 接口。
                     * @return RecordType 记录类型, 详见 DescribeRecordType 接口。
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置记录类型, 详见 DescribeRecordType 接口。
                     * @param _recordType 记录类型, 详见 DescribeRecordType 接口。
                     * 
                     */
                    void SetRecordType(const std::string& _recordType);

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     * 
                     */
                    bool RecordTypeHasBeenSet() const;

                    /**
                     * 获取记录值。
                     * @return Value 记录值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置记录值。
                     * @param _value 记录值。
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
                     * 获取子域名(主机记录)，默认为@。
                     * @return SubDomain 子域名(主机记录)，默认为@。
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置子域名(主机记录)，默认为@。
                     * @param _subDomain 子域名(主机记录)，默认为@。
                     * 
                     */
                    void SetSubDomain(const std::string& _subDomain);

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     * 
                     */
                    bool SubDomainHasBeenSet() const;

                    /**
                     * 获取解析记录的线路，详见 DescribeRecordLineList 接口，RecordLine和RecordLineId都未填时，默认为「默认」线路。
                     * @return RecordLine 解析记录的线路，详见 DescribeRecordLineList 接口，RecordLine和RecordLineId都未填时，默认为「默认」线路。
                     * 
                     */
                    std::string GetRecordLine() const;

                    /**
                     * 设置解析记录的线路，详见 DescribeRecordLineList 接口，RecordLine和RecordLineId都未填时，默认为「默认」线路。
                     * @param _recordLine 解析记录的线路，详见 DescribeRecordLineList 接口，RecordLine和RecordLineId都未填时，默认为「默认」线路。
                     * 
                     */
                    void SetRecordLine(const std::string& _recordLine);

                    /**
                     * 判断参数 RecordLine 是否已赋值
                     * @return RecordLine 是否已赋值
                     * 
                     */
                    bool RecordLineHasBeenSet() const;

                    /**
                     * 获取解析记录的线路 ID，RecordLine和RecordLineId都有时，系统优先取 RecordLineId。
                     * @return RecordLineId 解析记录的线路 ID，RecordLine和RecordLineId都有时，系统优先取 RecordLineId。
                     * 
                     */
                    std::string GetRecordLineId() const;

                    /**
                     * 设置解析记录的线路 ID，RecordLine和RecordLineId都有时，系统优先取 RecordLineId。
                     * @param _recordLineId 解析记录的线路 ID，RecordLine和RecordLineId都有时，系统优先取 RecordLineId。
                     * 
                     */
                    void SetRecordLineId(const std::string& _recordLineId);

                    /**
                     * 判断参数 RecordLineId 是否已赋值
                     * @return RecordLineId 是否已赋值
                     * 
                     */
                    bool RecordLineIdHasBeenSet() const;

                    /**
                     * 获取记录的 MX 记录值，非 MX 记录类型，默认为 0，MX记录则必选。
                     * @return MX 记录的 MX 记录值，非 MX 记录类型，默认为 0，MX记录则必选。
                     * 
                     */
                    uint64_t GetMX() const;

                    /**
                     * 设置记录的 MX 记录值，非 MX 记录类型，默认为 0，MX记录则必选。
                     * @param _mX 记录的 MX 记录值，非 MX 记录类型，默认为 0，MX记录则必选。
                     * 
                     */
                    void SetMX(const uint64_t& _mX);

                    /**
                     * 判断参数 MX 是否已赋值
                     * @return MX 是否已赋值
                     * 
                     */
                    bool MXHasBeenSet() const;

                    /**
                     * 获取记录的 TTL 值，默认600。
                     * @return TTL 记录的 TTL 值，默认600。
                     * 
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置记录的 TTL 值，默认600。
                     * @param _tTL 记录的 TTL 值，默认600。
                     * 
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     * 
                     */
                    bool TTLHasBeenSet() const;

                private:

                    /**
                     * 记录类型, 详见 DescribeRecordType 接口。
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * 记录值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 子域名(主机记录)，默认为@。
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * 解析记录的线路，详见 DescribeRecordLineList 接口，RecordLine和RecordLineId都未填时，默认为「默认」线路。
                     */
                    std::string m_recordLine;
                    bool m_recordLineHasBeenSet;

                    /**
                     * 解析记录的线路 ID，RecordLine和RecordLineId都有时，系统优先取 RecordLineId。
                     */
                    std::string m_recordLineId;
                    bool m_recordLineIdHasBeenSet;

                    /**
                     * 记录的 MX 记录值，非 MX 记录类型，默认为 0，MX记录则必选。
                     */
                    uint64_t m_mX;
                    bool m_mXHasBeenSet;

                    /**
                     * 记录的 TTL 值，默认600。
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_ADDRECORDBATCH_H_
