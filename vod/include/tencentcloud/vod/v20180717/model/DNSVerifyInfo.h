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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DNSVERIFYINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DNSVERIFYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DNS解析验证信息
                */
                class DNSVerifyInfo : public AbstractModel
                {
                public:
                    DNSVerifyInfo();
                    ~DNSVerifyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子解析。
                     * @return SubDomain 子解析。
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置子解析。
                     * @param _subDomain 子解析。
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
                     * 获取解析值。
                     * @return Record 解析值。
                     * 
                     */
                    std::string GetRecord() const;

                    /**
                     * 设置解析值。
                     * @param _record 解析值。
                     * 
                     */
                    void SetRecord(const std::string& _record);

                    /**
                     * 判断参数 Record 是否已赋值
                     * @return Record 是否已赋值
                     * 
                     */
                    bool RecordHasBeenSet() const;

                    /**
                     * 获取解析类型。
                     * @return RecordType 解析类型。
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置解析类型。
                     * @param _recordType 解析类型。
                     * 
                     */
                    void SetRecordType(const std::string& _recordType);

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     * 
                     */
                    bool RecordTypeHasBeenSet() const;

                private:

                    /**
                     * 子解析。
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * 解析值。
                     */
                    std::string m_record;
                    bool m_recordHasBeenSet;

                    /**
                     * 解析类型。
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DNSVERIFYINFO_H_
