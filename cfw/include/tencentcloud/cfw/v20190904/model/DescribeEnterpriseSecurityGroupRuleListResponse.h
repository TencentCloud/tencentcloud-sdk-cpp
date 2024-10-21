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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEENTERPRISESECURITYGROUPRULELISTRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEENTERPRISESECURITYGROUPRULELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/EnterpriseSecurityGroupRuleRuleInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeEnterpriseSecurityGroupRuleList返回参数结构体
                */
                class DescribeEnterpriseSecurityGroupRuleListResponse : public AbstractModel
                {
                public:
                    DescribeEnterpriseSecurityGroupRuleListResponse();
                    ~DescribeEnterpriseSecurityGroupRuleListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询结果总数
                     * @return Total 查询结果总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取规则总数
                     * @return AllTotal 规则总数
                     * 
                     */
                    int64_t GetAllTotal() const;

                    /**
                     * 判断参数 AllTotal 是否已赋值
                     * @return AllTotal 是否已赋值
                     * 
                     */
                    bool AllTotalHasBeenSet() const;

                    /**
                     * 获取规则列表
                     * @return Data 规则列表
                     * 
                     */
                    std::vector<EnterpriseSecurityGroupRuleRuleInfo> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取规则列表整体启用状态 
取值范围 0/1/2
0.表示没有启用的(可以批量启用)  
1.表示没有禁用的(可以批量禁用)    
2 表示混合情况（不可批量操作）
                     * @return Enable 规则列表整体启用状态 
取值范围 0/1/2
0.表示没有启用的(可以批量启用)  
1.表示没有禁用的(可以批量禁用)    
2 表示混合情况（不可批量操作）
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * 查询结果总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 规则总数
                     */
                    int64_t m_allTotal;
                    bool m_allTotalHasBeenSet;

                    /**
                     * 规则列表
                     */
                    std::vector<EnterpriseSecurityGroupRuleRuleInfo> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 规则列表整体启用状态 
取值范围 0/1/2
0.表示没有启用的(可以批量启用)  
1.表示没有禁用的(可以批量禁用)    
2 表示混合情况（不可批量操作）
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEENTERPRISESECURITYGROUPRULELISTRESPONSE_H_
