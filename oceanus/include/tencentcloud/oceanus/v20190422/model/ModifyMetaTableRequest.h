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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_MODIFYMETATABLEREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_MODIFYMETATABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * ModifyMetaTable请求参数结构体
                */
                class ModifyMetaTableRequest : public AbstractModel
                {
                public:
                    ModifyMetaTableRequest();
                    ~ModifyMetaTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群唯一id</p>
                     * @return ClusterId <p>集群唯一id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群唯一id</p>
                     * @param _clusterId <p>集群唯一id</p>
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
                     * 获取<p>元数据表唯一id</p>
                     * @return TableId <p>元数据表唯一id</p>
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置<p>元数据表唯一id</p>
                     * @param _tableId <p>元数据表唯一id</p>
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取<p>SQL</p><p>参数格式：base64加密</p>
                     * @return SqlCode <p>SQL</p><p>参数格式：base64加密</p>
                     * 
                     */
                    std::string GetSqlCode() const;

                    /**
                     * 设置<p>SQL</p><p>参数格式：base64加密</p>
                     * @param _sqlCode <p>SQL</p><p>参数格式：base64加密</p>
                     * 
                     */
                    void SetSqlCode(const std::string& _sqlCode);

                    /**
                     * 判断参数 SqlCode 是否已赋值
                     * @return SqlCode 是否已赋值
                     * 
                     */
                    bool SqlCodeHasBeenSet() const;

                    /**
                     * 获取<p>Flink版本</p>
                     * @return FlinkVersion <p>Flink版本</p>
                     * 
                     */
                    std::string GetFlinkVersion() const;

                    /**
                     * 设置<p>Flink版本</p>
                     * @param _flinkVersion <p>Flink版本</p>
                     * 
                     */
                    void SetFlinkVersion(const std::string& _flinkVersion);

                    /**
                     * 判断参数 FlinkVersion 是否已赋值
                     * @return FlinkVersion 是否已赋值
                     * 
                     */
                    bool FlinkVersionHasBeenSet() const;

                    /**
                     * 获取<p>空间唯一id</p>
                     * @return WorkSpaceId <p>空间唯一id</p>
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置<p>空间唯一id</p>
                     * @param _workSpaceId <p>空间唯一id</p>
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * <p>集群唯一id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>元数据表唯一id</p>
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * <p>SQL</p><p>参数格式：base64加密</p>
                     */
                    std::string m_sqlCode;
                    bool m_sqlCodeHasBeenSet;

                    /**
                     * <p>Flink版本</p>
                     */
                    std::string m_flinkVersion;
                    bool m_flinkVersionHasBeenSet;

                    /**
                     * <p>空间唯一id</p>
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_MODIFYMETATABLEREQUEST_H_
