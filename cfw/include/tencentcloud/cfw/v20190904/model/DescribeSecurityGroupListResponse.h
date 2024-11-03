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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESECURITYGROUPLISTRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESECURITYGROUPLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/SecurityGroupListData.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeSecurityGroupList返回参数结构体
                */
                class DescribeSecurityGroupListResponse : public AbstractModel
                {
                public:
                    DescribeSecurityGroupListResponse();
                    ~DescribeSecurityGroupListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取列表当前规则总条数
                     * @return Total 列表当前规则总条数
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
                     * 获取安全组规则列表数据
                     * @return Data 安全组规则列表数据
                     * 
                     */
                    std::vector<SecurityGroupListData> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取不算筛选条数的总条数
                     * @return AllTotal 不算筛选条数的总条数
                     * 
                     */
                    uint64_t GetAllTotal() const;

                    /**
                     * 判断参数 AllTotal 是否已赋值
                     * @return AllTotal 是否已赋值
                     * 
                     */
                    bool AllTotalHasBeenSet() const;

                    /**
                     * 获取访问控制规则全部启用/全部停用
                     * @return Enable 访问控制规则全部启用/全部停用
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * 列表当前规则总条数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 安全组规则列表数据
                     */
                    std::vector<SecurityGroupListData> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 不算筛选条数的总条数
                     */
                    uint64_t m_allTotal;
                    bool m_allTotalHasBeenSet;

                    /**
                     * 访问控制规则全部启用/全部停用
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESECURITYGROUPLISTRESPONSE_H_
