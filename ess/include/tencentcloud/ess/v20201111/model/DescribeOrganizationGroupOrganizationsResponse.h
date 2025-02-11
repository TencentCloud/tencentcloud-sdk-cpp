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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEORGANIZATIONGROUPORGANIZATIONSRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEORGANIZATIONGROUPORGANIZATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/GroupOrganization.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeOrganizationGroupOrganizations返回参数结构体
                */
                class DescribeOrganizationGroupOrganizationsResponse : public AbstractModel
                {
                public:
                    DescribeOrganizationGroupOrganizationsResponse();
                    ~DescribeOrganizationGroupOrganizationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合查询条件的资源实例总数量。
                     * @return Total 符合查询条件的资源实例总数量。
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取已授权待激活的子企业总数量
                     * @return JoinedTotal 已授权待激活的子企业总数量
                     * 
                     */
                    uint64_t GetJoinedTotal() const;

                    /**
                     * 判断参数 JoinedTotal 是否已赋值
                     * @return JoinedTotal 是否已赋值
                     * 
                     */
                    bool JoinedTotalHasBeenSet() const;

                    /**
                     * 获取已加入的企业数量(废弃,请使用ActivatedTotal)
                     * @return ActivedTotal 已加入的企业数量(废弃,请使用ActivatedTotal)
                     * @deprecated
                     */
                    uint64_t GetActivedTotal() const;

                    /**
                     * 判断参数 ActivedTotal 是否已赋值
                     * @return ActivedTotal 是否已赋值
                     * @deprecated
                     */
                    bool ActivedTotalHasBeenSet() const;

                    /**
                     * 获取如果入参Export为 true 时使用，表示导出Excel的url
                     * @return ExportUrl 如果入参Export为 true 时使用，表示导出Excel的url
                     * 
                     */
                    std::string GetExportUrl() const;

                    /**
                     * 判断参数 ExportUrl 是否已赋值
                     * @return ExportUrl 是否已赋值
                     * 
                     */
                    bool ExportUrlHasBeenSet() const;

                    /**
                     * 获取成员企业信息列表
                     * @return List 成员企业信息列表
                     * 
                     */
                    std::vector<GroupOrganization> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取已加入的子企业总数量
                     * @return ActivatedTotal 已加入的子企业总数量
                     * 
                     */
                    uint64_t GetActivatedTotal() const;

                    /**
                     * 判断参数 ActivatedTotal 是否已赋值
                     * @return ActivatedTotal 是否已赋值
                     * 
                     */
                    bool ActivatedTotalHasBeenSet() const;

                private:

                    /**
                     * 符合查询条件的资源实例总数量。
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 已授权待激活的子企业总数量
                     */
                    uint64_t m_joinedTotal;
                    bool m_joinedTotalHasBeenSet;

                    /**
                     * 已加入的企业数量(废弃,请使用ActivatedTotal)
                     */
                    uint64_t m_activedTotal;
                    bool m_activedTotalHasBeenSet;

                    /**
                     * 如果入参Export为 true 时使用，表示导出Excel的url
                     */
                    std::string m_exportUrl;
                    bool m_exportUrlHasBeenSet;

                    /**
                     * 成员企业信息列表
                     */
                    std::vector<GroupOrganization> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * 已加入的子企业总数量
                     */
                    uint64_t m_activatedTotal;
                    bool m_activatedTotalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEORGANIZATIONGROUPORGANIZATIONSRESPONSE_H_
