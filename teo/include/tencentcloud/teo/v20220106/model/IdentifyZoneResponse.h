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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_IDENTIFYZONERESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_IDENTIFYZONERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * IdentifyZone返回参数结构体
                */
                class IdentifyZoneResponse : public AbstractModel
                {
                public:
                    IdentifyZoneResponse();
                    ~IdentifyZoneResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取站点名称
                     * @return Name 站点名称
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取子域
                     * @return Subdomain 子域
                     */
                    std::string GetSubdomain() const;

                    /**
                     * 判断参数 Subdomain 是否已赋值
                     * @return Subdomain 是否已赋值
                     */
                    bool SubdomainHasBeenSet() const;

                    /**
                     * 获取记录类型
                     * @return RecordType 记录类型
                     */
                    std::string GetRecordType() const;

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     */
                    bool RecordTypeHasBeenSet() const;

                    /**
                     * 获取记录值
                     * @return RecordValue 记录值
                     */
                    std::string GetRecordValue() const;

                    /**
                     * 判断参数 RecordValue 是否已赋值
                     * @return RecordValue 是否已赋值
                     */
                    bool RecordValueHasBeenSet() const;

                private:

                    /**
                     * 站点名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 子域
                     */
                    std::string m_subdomain;
                    bool m_subdomainHasBeenSet;

                    /**
                     * 记录类型
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * 记录值
                     */
                    std::string m_recordValue;
                    bool m_recordValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_IDENTIFYZONERESPONSE_H_
