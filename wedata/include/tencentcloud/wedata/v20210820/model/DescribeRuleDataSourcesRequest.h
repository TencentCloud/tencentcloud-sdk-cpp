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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULEDATASOURCESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULEDATASOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeRuleDataSources请求参数结构体
                */
                class DescribeRuleDataSourcesRequest : public AbstractModel
                {
                public:
                    DescribeRuleDataSourcesRequest();
                    ~DescribeRuleDataSourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param ProjectId 项目Id
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取数据来源Id
                     * @return DatasourceId 数据来源Id
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据来源Id
                     * @param DatasourceId 数据来源Id
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取数据源类型
                     * @return DsTypes 数据源类型
                     */
                    std::vector<uint64_t> GetDsTypes() const;

                    /**
                     * 设置数据源类型
                     * @param DsTypes 数据源类型
                     */
                    void SetDsTypes(const std::vector<uint64_t>& _dsTypes);

                    /**
                     * 判断参数 DsTypes 是否已赋值
                     * @return DsTypes 是否已赋值
                     */
                    bool DsTypesHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 数据来源Id
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 数据源类型
                     */
                    std::vector<uint64_t> m_dsTypes;
                    bool m_dsTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULEDATASOURCESREQUEST_H_
