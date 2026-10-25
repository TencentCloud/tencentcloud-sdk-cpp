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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FEATURETABLEDETAIL_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FEATURETABLEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * catalog特征表详情
                */
                class FeatureTableDetail : public AbstractModel
                {
                public:
                    FeatureTableDetail();
                    ~FeatureTableDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>特征表主键字段列表</p>
                     * @return PrimaryKeys <p>特征表主键字段列表</p>
                     * 
                     */
                    std::vector<std::string> GetPrimaryKeys() const;

                    /**
                     * 设置<p>特征表主键字段列表</p>
                     * @param _primaryKeys <p>特征表主键字段列表</p>
                     * 
                     */
                    void SetPrimaryKeys(const std::vector<std::string>& _primaryKeys);

                    /**
                     * 判断参数 PrimaryKeys 是否已赋值
                     * @return PrimaryKeys 是否已赋值
                     * 
                     */
                    bool PrimaryKeysHasBeenSet() const;

                    /**
                     * 获取<p>特征表时间戳字段名称</p>
                     * @return TimestampField <p>特征表时间戳字段名称</p>
                     * 
                     */
                    std::string GetTimestampField() const;

                    /**
                     * 设置<p>特征表时间戳字段名称</p>
                     * @param _timestampField <p>特征表时间戳字段名称</p>
                     * 
                     */
                    void SetTimestampField(const std::string& _timestampField);

                    /**
                     * 判断参数 TimestampField 是否已赋值
                     * @return TimestampField 是否已赋值
                     * 
                     */
                    bool TimestampFieldHasBeenSet() const;

                    /**
                     * 获取<p>在线特征表对应的来源表名称（离线表）</p>
                     * @return SourceTableName <p>在线特征表对应的来源表名称（离线表）</p>
                     * 
                     */
                    std::string GetSourceTableName() const;

                    /**
                     * 设置<p>在线特征表对应的来源表名称（离线表）</p>
                     * @param _sourceTableName <p>在线特征表对应的来源表名称（离线表）</p>
                     * 
                     */
                    void SetSourceTableName(const std::string& _sourceTableName);

                    /**
                     * 判断参数 SourceTableName 是否已赋值
                     * @return SourceTableName 是否已赋值
                     * 
                     */
                    bool SourceTableNameHasBeenSet() const;

                    /**
                     * 获取<p>在线特征表关联的工作流ID</p>
                     * @return WorkflowId <p>在线特征表关联的工作流ID</p>
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>在线特征表关联的工作流ID</p>
                     * @param _workflowId <p>在线特征表关联的工作流ID</p>
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取<p>离线特征表对应生成的在线特征表名称</p>
                     * @return OnlineTableName <p>离线特征表对应生成的在线特征表名称</p>
                     * 
                     */
                    std::string GetOnlineTableName() const;

                    /**
                     * 设置<p>离线特征表对应生成的在线特征表名称</p>
                     * @param _onlineTableName <p>离线特征表对应生成的在线特征表名称</p>
                     * 
                     */
                    void SetOnlineTableName(const std::string& _onlineTableName);

                    /**
                     * 判断参数 OnlineTableName 是否已赋值
                     * @return OnlineTableName 是否已赋值
                     * 
                     */
                    bool OnlineTableNameHasBeenSet() const;

                    /**
                     * 获取<p>离线特征表对应生成的在线特征表类型，取值：TENCENT_POSTGRESQL | REDIS），缺省 TENCENT_POSTGRESQL</p>
                     * @return OnlineTableType <p>离线特征表对应生成的在线特征表类型，取值：TENCENT_POSTGRESQL | REDIS），缺省 TENCENT_POSTGRESQL</p>
                     * 
                     */
                    std::string GetOnlineTableType() const;

                    /**
                     * 设置<p>离线特征表对应生成的在线特征表类型，取值：TENCENT_POSTGRESQL | REDIS），缺省 TENCENT_POSTGRESQL</p>
                     * @param _onlineTableType <p>离线特征表对应生成的在线特征表类型，取值：TENCENT_POSTGRESQL | REDIS），缺省 TENCENT_POSTGRESQL</p>
                     * 
                     */
                    void SetOnlineTableType(const std::string& _onlineTableType);

                    /**
                     * 判断参数 OnlineTableType 是否已赋值
                     * @return OnlineTableType 是否已赋值
                     * 
                     */
                    bool OnlineTableTypeHasBeenSet() const;

                    /**
                     * 获取<p>离线特征表对应生成的在线特征表ConnectionId</p>
                     * @return ConnectionId <p>离线特征表对应生成的在线特征表ConnectionId</p>
                     * 
                     */
                    std::string GetConnectionId() const;

                    /**
                     * 设置<p>离线特征表对应生成的在线特征表ConnectionId</p>
                     * @param _connectionId <p>离线特征表对应生成的在线特征表ConnectionId</p>
                     * 
                     */
                    void SetConnectionId(const std::string& _connectionId);

                    /**
                     * 判断参数 ConnectionId 是否已赋值
                     * @return ConnectionId 是否已赋值
                     * 
                     */
                    bool ConnectionIdHasBeenSet() const;

                private:

                    /**
                     * <p>特征表主键字段列表</p>
                     */
                    std::vector<std::string> m_primaryKeys;
                    bool m_primaryKeysHasBeenSet;

                    /**
                     * <p>特征表时间戳字段名称</p>
                     */
                    std::string m_timestampField;
                    bool m_timestampFieldHasBeenSet;

                    /**
                     * <p>在线特征表对应的来源表名称（离线表）</p>
                     */
                    std::string m_sourceTableName;
                    bool m_sourceTableNameHasBeenSet;

                    /**
                     * <p>在线特征表关联的工作流ID</p>
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>离线特征表对应生成的在线特征表名称</p>
                     */
                    std::string m_onlineTableName;
                    bool m_onlineTableNameHasBeenSet;

                    /**
                     * <p>离线特征表对应生成的在线特征表类型，取值：TENCENT_POSTGRESQL | REDIS），缺省 TENCENT_POSTGRESQL</p>
                     */
                    std::string m_onlineTableType;
                    bool m_onlineTableTypeHasBeenSet;

                    /**
                     * <p>离线特征表对应生成的在线特征表ConnectionId</p>
                     */
                    std::string m_connectionId;
                    bool m_connectionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FEATURETABLEDETAIL_H_
