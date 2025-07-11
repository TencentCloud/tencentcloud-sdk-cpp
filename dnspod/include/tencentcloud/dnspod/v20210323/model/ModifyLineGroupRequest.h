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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYLINEGROUPREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYLINEGROUPREQUEST_H_

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
                * ModifyLineGroup请求参数结构体
                */
                class ModifyLineGroupRequest : public AbstractModel
                {
                public:
                    ModifyLineGroupRequest();
                    ~ModifyLineGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义线路分组的名称。
                     * @return Name 自定义线路分组的名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定义线路分组的名称。
                     * @param _name 自定义线路分组的名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取自定义线路分组包含的线路列表，包含多个线路时用英文逗号分隔。例如，铁通,奇虎
                     * @return Lines 自定义线路分组包含的线路列表，包含多个线路时用英文逗号分隔。例如，铁通,奇虎
                     * 
                     */
                    std::string GetLines() const;

                    /**
                     * 设置自定义线路分组包含的线路列表，包含多个线路时用英文逗号分隔。例如，铁通,奇虎
                     * @param _lines 自定义线路分组包含的线路列表，包含多个线路时用英文逗号分隔。例如，铁通,奇虎
                     * 
                     */
                    void SetLines(const std::string& _lines);

                    /**
                     * 判断参数 Lines 是否已赋值
                     * @return Lines 是否已赋值
                     * 
                     */
                    bool LinesHasBeenSet() const;

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
                     * 获取自定义线路分组ID
                     * @return LineGroupId 自定义线路分组ID
                     * 
                     */
                    uint64_t GetLineGroupId() const;

                    /**
                     * 设置自定义线路分组ID
                     * @param _lineGroupId 自定义线路分组ID
                     * 
                     */
                    void SetLineGroupId(const uint64_t& _lineGroupId);

                    /**
                     * 判断参数 LineGroupId 是否已赋值
                     * @return LineGroupId 是否已赋值
                     * 
                     */
                    bool LineGroupIdHasBeenSet() const;

                    /**
                     * 获取域名ID，如果传了DomainId，系统将会忽略Domain参数，优先使用DomainId
                     * @return DomainId 域名ID，如果传了DomainId，系统将会忽略Domain参数，优先使用DomainId
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置域名ID，如果传了DomainId，系统将会忽略Domain参数，优先使用DomainId
                     * @param _domainId 域名ID，如果传了DomainId，系统将会忽略Domain参数，优先使用DomainId
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
                     * 自定义线路分组的名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 自定义线路分组包含的线路列表，包含多个线路时用英文逗号分隔。例如，铁通,奇虎
                     */
                    std::string m_lines;
                    bool m_linesHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 自定义线路分组ID
                     */
                    uint64_t m_lineGroupId;
                    bool m_lineGroupIdHasBeenSet;

                    /**
                     * 域名ID，如果传了DomainId，系统将会忽略Domain参数，优先使用DomainId
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYLINEGROUPREQUEST_H_
