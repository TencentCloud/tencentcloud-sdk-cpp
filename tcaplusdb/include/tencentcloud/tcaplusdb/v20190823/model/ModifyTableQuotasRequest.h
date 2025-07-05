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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYTABLEQUOTASREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYTABLEQUOTASREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SelectedTableInfoNew.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * ModifyTableQuotas请求参数结构体
                */
                class ModifyTableQuotasRequest : public AbstractModel
                {
                public:
                    ModifyTableQuotasRequest();
                    ~ModifyTableQuotasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取带扩缩容表所属集群ID
                     * @return ClusterId 带扩缩容表所属集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置带扩缩容表所属集群ID
                     * @param _clusterId 带扩缩容表所属集群ID
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
                     * 获取已选中待修改的表配额列表
                     * @return TableQuotas 已选中待修改的表配额列表
                     * 
                     */
                    std::vector<SelectedTableInfoNew> GetTableQuotas() const;

                    /**
                     * 设置已选中待修改的表配额列表
                     * @param _tableQuotas 已选中待修改的表配额列表
                     * 
                     */
                    void SetTableQuotas(const std::vector<SelectedTableInfoNew>& _tableQuotas);

                    /**
                     * 判断参数 TableQuotas 是否已赋值
                     * @return TableQuotas 是否已赋值
                     * 
                     */
                    bool TableQuotasHasBeenSet() const;

                private:

                    /**
                     * 带扩缩容表所属集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 已选中待修改的表配额列表
                     */
                    std::vector<SelectedTableInfoNew> m_tableQuotas;
                    bool m_tableQuotasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYTABLEQUOTASREQUEST_H_
