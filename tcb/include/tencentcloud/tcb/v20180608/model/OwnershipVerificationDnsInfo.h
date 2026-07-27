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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_OWNERSHIPVERIFICATIONDNSINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_OWNERSHIPVERIFICATIONDNSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 域名归属权验证指引DNS验证信息
                */
                class OwnershipVerificationDnsInfo : public AbstractModel
                {
                public:
                    OwnershipVerificationDnsInfo();
                    ~OwnershipVerificationDnsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>归属权校验dns子域名</p>
                     * @return Subdomain <p>归属权校验dns子域名</p>
                     * 
                     */
                    std::string GetSubdomain() const;

                    /**
                     * 设置<p>归属权校验dns子域名</p>
                     * @param _subdomain <p>归属权校验dns子域名</p>
                     * 
                     */
                    void SetSubdomain(const std::string& _subdomain);

                    /**
                     * 判断参数 Subdomain 是否已赋值
                     * @return Subdomain 是否已赋值
                     * 
                     */
                    bool SubdomainHasBeenSet() const;

                    /**
                     * 获取<p>归属权校验dns记录类型</p>
                     * @return RecordType <p>归属权校验dns记录类型</p>
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置<p>归属权校验dns记录类型</p>
                     * @param _recordType <p>归属权校验dns记录类型</p>
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
                     * 获取<p>归属权校验dns记录值</p>
                     * @return RecordValue <p>归属权校验dns记录值</p>
                     * 
                     */
                    std::string GetRecordValue() const;

                    /**
                     * 设置<p>归属权校验dns记录值</p>
                     * @param _recordValue <p>归属权校验dns记录值</p>
                     * 
                     */
                    void SetRecordValue(const std::string& _recordValue);

                    /**
                     * 判断参数 RecordValue 是否已赋值
                     * @return RecordValue 是否已赋值
                     * 
                     */
                    bool RecordValueHasBeenSet() const;

                private:

                    /**
                     * <p>归属权校验dns子域名</p>
                     */
                    std::string m_subdomain;
                    bool m_subdomainHasBeenSet;

                    /**
                     * <p>归属权校验dns记录类型</p>
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * <p>归属权校验dns记录值</p>
                     */
                    std::string m_recordValue;
                    bool m_recordValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_OWNERSHIPVERIFICATIONDNSINFO_H_
