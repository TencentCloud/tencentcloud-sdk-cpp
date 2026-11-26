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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ISOLATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ISOLATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * IsolateInstance请求参数结构体
                */
                class IsolateInstanceRequest : public AbstractModel
                {
                public:
                    IsolateInstanceRequest();
                    ~IsolateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
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
                     * 获取<p>实例ID数组，例如[&quot;cynosdbbmysql-ins-asd&quot;,&quot;cynosdbmysql-ins-zxc&quot;]</p>
                     * @return InstanceIdList <p>实例ID数组，例如[&quot;cynosdbbmysql-ins-asd&quot;,&quot;cynosdbmysql-ins-zxc&quot;]</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置<p>实例ID数组，例如[&quot;cynosdbbmysql-ins-asd&quot;,&quot;cynosdbmysql-ins-zxc&quot;]</p>
                     * @param _instanceIdList <p>实例ID数组，例如[&quot;cynosdbbmysql-ins-asd&quot;,&quot;cynosdbmysql-ins-zxc&quot;]</p>
                     * 
                     */
                    void SetInstanceIdList(const std::vector<std::string>& _instanceIdList);

                    /**
                     * 判断参数 InstanceIdList 是否已赋值
                     * @return InstanceIdList 是否已赋值
                     * 
                     */
                    bool InstanceIdListHasBeenSet() const;

                    /**
                     * 获取<p>该参数已废弃</p>
                     * @return DbType <p>该参数已废弃</p>
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置<p>该参数已废弃</p>
                     * @param _dbType <p>该参数已废弃</p>
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例退还原因类型</p>
                     * @return IsolateReasonTypes <p>实例退还原因类型</p>
                     * 
                     */
                    std::vector<int64_t> GetIsolateReasonTypes() const;

                    /**
                     * 设置<p>实例退还原因类型</p>
                     * @param _isolateReasonTypes <p>实例退还原因类型</p>
                     * 
                     */
                    void SetIsolateReasonTypes(const std::vector<int64_t>& _isolateReasonTypes);

                    /**
                     * 判断参数 IsolateReasonTypes 是否已赋值
                     * @return IsolateReasonTypes 是否已赋值
                     * 
                     */
                    bool IsolateReasonTypesHasBeenSet() const;

                    /**
                     * 获取<p>实例退还原因补充</p>
                     * @return IsolateReason <p>实例退还原因补充</p>
                     * 
                     */
                    std::string GetIsolateReason() const;

                    /**
                     * 设置<p>实例退还原因补充</p>
                     * @param _isolateReason <p>实例退还原因补充</p>
                     * 
                     */
                    void SetIsolateReason(const std::string& _isolateReason);

                    /**
                     * 判断参数 IsolateReason 是否已赋值
                     * @return IsolateReason 是否已赋值
                     * 
                     */
                    bool IsolateReasonHasBeenSet() const;

                    /**
                     * 获取<p>保留备份</p>
                     * @return SaveBackup <p>保留备份</p>
                     * 
                     */
                    bool GetSaveBackup() const;

                    /**
                     * 设置<p>保留备份</p>
                     * @param _saveBackup <p>保留备份</p>
                     * 
                     */
                    void SetSaveBackup(const bool& _saveBackup);

                    /**
                     * 判断参数 SaveBackup 是否已赋值
                     * @return SaveBackup 是否已赋值
                     * 
                     */
                    bool SaveBackupHasBeenSet() const;

                    /**
                     * 获取<p>立即彻底删除RO实例</p>
                     * @return ImmediateRecycleRo <p>立即彻底删除RO实例</p>
                     * 
                     */
                    bool GetImmediateRecycleRo() const;

                    /**
                     * 设置<p>立即彻底删除RO实例</p>
                     * @param _immediateRecycleRo <p>立即彻底删除RO实例</p>
                     * 
                     */
                    void SetImmediateRecycleRo(const bool& _immediateRecycleRo);

                    /**
                     * 判断参数 ImmediateRecycleRo 是否已赋值
                     * @return ImmediateRecycleRo 是否已赋值
                     * 
                     */
                    bool ImmediateRecycleRoHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>实例ID数组，例如[&quot;cynosdbbmysql-ins-asd&quot;,&quot;cynosdbmysql-ins-zxc&quot;]</p>
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                    /**
                     * <p>该参数已废弃</p>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * <p>实例退还原因类型</p>
                     */
                    std::vector<int64_t> m_isolateReasonTypes;
                    bool m_isolateReasonTypesHasBeenSet;

                    /**
                     * <p>实例退还原因补充</p>
                     */
                    std::string m_isolateReason;
                    bool m_isolateReasonHasBeenSet;

                    /**
                     * <p>保留备份</p>
                     */
                    bool m_saveBackup;
                    bool m_saveBackupHasBeenSet;

                    /**
                     * <p>立即彻底删除RO实例</p>
                     */
                    bool m_immediateRecycleRo;
                    bool m_immediateRecycleRoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ISOLATEINSTANCEREQUEST_H_
