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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBETABLEGROUPTAGSREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBETABLEGROUPTAGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DescribeTableGroupTags请求参数结构体
                */
                class DescribeTableGroupTagsRequest : public AbstractModel
                {
                public:
                    DescribeTableGroupTagsRequest();
                    ~DescribeTableGroupTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待查询标签表格组所属集群ID
                     * @return ClusterId 待查询标签表格组所属集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置待查询标签表格组所属集群ID
                     * @param _clusterId 待查询标签表格组所属集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取待查询标签表格组ID列表
                     * @return TableGroupIds 待查询标签表格组ID列表
                     * 
                     */
                    std::vector<std::string> GetTableGroupIds() const;

                    /**
                     * 设置待查询标签表格组ID列表
                     * @param _tableGroupIds 待查询标签表格组ID列表
                     * 
                     */
                    void SetTableGroupIds(const std::vector<std::string>& _tableGroupIds);

                    /**
                     * 判断参数 TableGroupIds 是否已赋值
                     * @return TableGroupIds 是否已赋值
                     * 
                     */
                    bool TableGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 待查询标签表格组所属集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 待查询标签表格组ID列表
                     */
                    std::vector<std::string> m_tableGroupIds;
                    bool m_tableGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBETABLEGROUPTAGSREQUEST_H_
