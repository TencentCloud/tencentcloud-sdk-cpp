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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEIDLFILEINFOSREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEIDLFILEINFOSREQUEST_H_

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
                * DescribeIdlFileInfos请求参数结构体
                */
                class DescribeIdlFileInfosRequest : public AbstractModel
                {
                public:
                    DescribeIdlFileInfosRequest();
                    ~DescribeIdlFileInfosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件所属集群ID
                     * @return ClusterId 文件所属集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置文件所属集群ID
                     * @param _clusterId 文件所属集群ID
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
                     * 获取文件所属表格组ID
                     * @return TableGroupIds 文件所属表格组ID
                     * 
                     */
                    std::vector<std::string> GetTableGroupIds() const;

                    /**
                     * 设置文件所属表格组ID
                     * @param _tableGroupIds 文件所属表格组ID
                     * 
                     */
                    void SetTableGroupIds(const std::vector<std::string>& _tableGroupIds);

                    /**
                     * 判断参数 TableGroupIds 是否已赋值
                     * @return TableGroupIds 是否已赋值
                     * 
                     */
                    bool TableGroupIdsHasBeenSet() const;

                    /**
                     * 获取指定文件ID列表
                     * @return IdlFileIds 指定文件ID列表
                     * 
                     */
                    std::vector<std::string> GetIdlFileIds() const;

                    /**
                     * 设置指定文件ID列表
                     * @param _idlFileIds 指定文件ID列表
                     * 
                     */
                    void SetIdlFileIds(const std::vector<std::string>& _idlFileIds);

                    /**
                     * 判断参数 IdlFileIds 是否已赋值
                     * @return IdlFileIds 是否已赋值
                     * 
                     */
                    bool IdlFileIdsHasBeenSet() const;

                    /**
                     * 获取查询列表偏移量
                     * @return Offset 查询列表偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询列表偏移量
                     * @param _offset 查询列表偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询列表返回记录数
                     * @return Limit 查询列表返回记录数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询列表返回记录数
                     * @param _limit 查询列表返回记录数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 文件所属集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 文件所属表格组ID
                     */
                    std::vector<std::string> m_tableGroupIds;
                    bool m_tableGroupIdsHasBeenSet;

                    /**
                     * 指定文件ID列表
                     */
                    std::vector<std::string> m_idlFileIds;
                    bool m_idlFileIdsHasBeenSet;

                    /**
                     * 查询列表偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询列表返回记录数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEIDLFILEINFOSREQUEST_H_
