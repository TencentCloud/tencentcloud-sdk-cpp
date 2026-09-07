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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ComplianceRestriction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 边缘函数详情
                */
                class Function : public AbstractModel
                {
                public:
                    Function();
                    ~Function() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>函数 ID。</p>
                     * @return FunctionId <p>函数 ID。</p>
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置<p>函数 ID。</p>
                     * @param _functionId <p>函数 ID。</p>
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取<p>站点 ID。</p>
                     * @return ZoneId <p>站点 ID。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点 ID。</p>
                     * @param _zoneId <p>站点 ID。</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>函数名字。</p>
                     * @return Name <p>函数名字。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>函数名字。</p>
                     * @param _name <p>函数名字。</p>
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
                     * 获取<p>函数描述。</p>
                     * @return Remark <p>函数描述。</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>函数描述。</p>
                     * @param _remark <p>函数描述。</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>函数内容。</p>
                     * @return Content <p>函数内容。</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>函数内容。</p>
                     * @param _content <p>函数内容。</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>函数默认域名。</p>
                     * @return Domain <p>函数默认域名。</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>函数默认域名。</p>
                     * @param _domain <p>函数默认域名。</p>
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
                     * 获取<p>边缘函数默认域名因合规问题产生的地区访问限制列表。</p>
                     * @return DomainComplianceRestrictions <p>边缘函数默认域名因合规问题产生的地区访问限制列表。</p>
                     * 
                     */
                    std::vector<ComplianceRestriction> GetDomainComplianceRestrictions() const;

                    /**
                     * 设置<p>边缘函数默认域名因合规问题产生的地区访问限制列表。</p>
                     * @param _domainComplianceRestrictions <p>边缘函数默认域名因合规问题产生的地区访问限制列表。</p>
                     * 
                     */
                    void SetDomainComplianceRestrictions(const std::vector<ComplianceRestriction>& _domainComplianceRestrictions);

                    /**
                     * 判断参数 DomainComplianceRestrictions 是否已赋值
                     * @return DomainComplianceRestrictions 是否已赋值
                     * 
                     */
                    bool DomainComplianceRestrictionsHasBeenSet() const;

                    /**
                     * 获取<p>创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。</p>
                     * @return CreateTime <p>创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。</p>
                     * @param _createTime <p>创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>修改时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。</p>
                     * @return UpdateTime <p>修改时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>修改时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。</p>
                     * @param _updateTime <p>修改时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>函数 ID。</p>
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * <p>站点 ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>函数名字。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>函数描述。</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>函数内容。</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>函数默认域名。</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>边缘函数默认域名因合规问题产生的地区访问限制列表。</p>
                     */
                    std::vector<ComplianceRestriction> m_domainComplianceRestrictions;
                    bool m_domainComplianceRestrictionsHasBeenSet;

                    /**
                     * <p>创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>修改时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTION_H_
