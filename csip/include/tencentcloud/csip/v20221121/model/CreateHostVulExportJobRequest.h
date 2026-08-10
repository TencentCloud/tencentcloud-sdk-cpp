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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEHOSTVULEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEHOSTVULEXPORTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateHostVulExportJob请求参数结构体
                */
                class CreateHostVulExportJobRequest : public AbstractModel
                {
                public:
                    CreateHostVulExportJobRequest();
                    ~CreateHostVulExportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>导出的action</p><p>枚举值：</p><ul><li>LinuxHostVulRiskList： linux漏洞风险列表</li><li>WebCmsHostVulRiskList： WebCms漏洞风险列表</li><li>AppHostVulRiskList： App漏洞风险列表</li><li>EmergencyHostVulRiskList： 紧急漏洞风险列表</li><li>KBRiskList： Windows kb风险列表</li><li>RelateHostList： 关联主机列表</li><li>WhiteList： 漏洞白名单</li></ul>
                     * @return BusinessAction <p>导出的action</p><p>枚举值：</p><ul><li>LinuxHostVulRiskList： linux漏洞风险列表</li><li>WebCmsHostVulRiskList： WebCms漏洞风险列表</li><li>AppHostVulRiskList： App漏洞风险列表</li><li>EmergencyHostVulRiskList： 紧急漏洞风险列表</li><li>KBRiskList： Windows kb风险列表</li><li>RelateHostList： 关联主机列表</li><li>WhiteList： 漏洞白名单</li></ul>
                     * 
                     */
                    std::string GetBusinessAction() const;

                    /**
                     * 设置<p>导出的action</p><p>枚举值：</p><ul><li>LinuxHostVulRiskList： linux漏洞风险列表</li><li>WebCmsHostVulRiskList： WebCms漏洞风险列表</li><li>AppHostVulRiskList： App漏洞风险列表</li><li>EmergencyHostVulRiskList： 紧急漏洞风险列表</li><li>KBRiskList： Windows kb风险列表</li><li>RelateHostList： 关联主机列表</li><li>WhiteList： 漏洞白名单</li></ul>
                     * @param _businessAction <p>导出的action</p><p>枚举值：</p><ul><li>LinuxHostVulRiskList： linux漏洞风险列表</li><li>WebCmsHostVulRiskList： WebCms漏洞风险列表</li><li>AppHostVulRiskList： App漏洞风险列表</li><li>EmergencyHostVulRiskList： 紧急漏洞风险列表</li><li>KBRiskList： Windows kb风险列表</li><li>RelateHostList： 关联主机列表</li><li>WhiteList： 漏洞白名单</li></ul>
                     * 
                     */
                    void SetBusinessAction(const std::string& _businessAction);

                    /**
                     * 判断参数 BusinessAction 是否已赋值
                     * @return BusinessAction 是否已赋值
                     * 
                     */
                    bool BusinessActionHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>筛选条件数组，多条件之间为 AND 关系<br>支持的 Filter.Name：<br>KbID：KB风险关联主机情况下需要额外加入KB风险ID<br>VulID：漏洞风险关联主机情况下需要额外加入vul风险ID</p>
                     * @return Filters <p>筛选条件数组，多条件之间为 AND 关系<br>支持的 Filter.Name：<br>KbID：KB风险关联主机情况下需要额外加入KB风险ID<br>VulID：漏洞风险关联主机情况下需要额外加入vul风险ID</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>筛选条件数组，多条件之间为 AND 关系<br>支持的 Filter.Name：<br>KbID：KB风险关联主机情况下需要额外加入KB风险ID<br>VulID：漏洞风险关联主机情况下需要额外加入vul风险ID</p>
                     * @param _filters <p>筛选条件数组，多条件之间为 AND 关系<br>支持的 Filter.Name：<br>KbID：KB风险关联主机情况下需要额外加入KB风险ID<br>VulID：漏洞风险关联主机情况下需要额外加入vul风险ID</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>导出的action</p><p>枚举值：</p><ul><li>LinuxHostVulRiskList： linux漏洞风险列表</li><li>WebCmsHostVulRiskList： WebCms漏洞风险列表</li><li>AppHostVulRiskList： App漏洞风险列表</li><li>EmergencyHostVulRiskList： 紧急漏洞风险列表</li><li>KBRiskList： Windows kb风险列表</li><li>RelateHostList： 关联主机列表</li><li>WhiteList： 漏洞白名单</li></ul>
                     */
                    std::string m_businessAction;
                    bool m_businessActionHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>筛选条件数组，多条件之间为 AND 关系<br>支持的 Filter.Name：<br>KbID：KB风险关联主机情况下需要额外加入KB风险ID<br>VulID：漏洞风险关联主机情况下需要额外加入vul风险ID</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEHOSTVULEXPORTJOBREQUEST_H_
