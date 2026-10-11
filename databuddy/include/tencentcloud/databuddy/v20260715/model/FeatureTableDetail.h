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
                     * 获取特征表主键字段列表
                     * @return PrimaryKeys 特征表主键字段列表
                     * 
                     */
                    std::vector<std::string> GetPrimaryKeys() const;

                    /**
                     * 设置特征表主键字段列表
                     * @param _primaryKeys 特征表主键字段列表
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
                     * 获取特征表时间戳字段名称
                     * @return TimestampField 特征表时间戳字段名称
                     * 
                     */
                    std::string GetTimestampField() const;

                    /**
                     * 设置特征表时间戳字段名称
                     * @param _timestampField 特征表时间戳字段名称
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
                     * 获取在线特征表对应的来源表名称（离线表）
                     * @return SourceTableName 在线特征表对应的来源表名称（离线表）
                     * 
                     */
                    std::string GetSourceTableName() const;

                    /**
                     * 设置在线特征表对应的来源表名称（离线表）
                     * @param _sourceTableName 在线特征表对应的来源表名称（离线表）
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
                     * 获取在线特征表关联的工作流ID
                     * @return WorkflowId 在线特征表关联的工作流ID
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置在线特征表关联的工作流ID
                     * @param _workflowId 在线特征表关联的工作流ID
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
                     * 获取离线特征表对应生成的在线特征表名称
                     * @return OnlineTableName 离线特征表对应生成的在线特征表名称
                     * 
                     */
                    std::string GetOnlineTableName() const;

                    /**
                     * 设置离线特征表对应生成的在线特征表名称
                     * @param _onlineTableName 离线特征表对应生成的在线特征表名称
                     * 
                     */
                    void SetOnlineTableName(const std::string& _onlineTableName);

                    /**
                     * 判断参数 OnlineTableName 是否已赋值
                     * @return OnlineTableName 是否已赋值
                     * 
                     */
                    bool OnlineTableNameHasBeenSet() const;

                private:

                    /**
                     * 特征表主键字段列表
                     */
                    std::vector<std::string> m_primaryKeys;
                    bool m_primaryKeysHasBeenSet;

                    /**
                     * 特征表时间戳字段名称
                     */
                    std::string m_timestampField;
                    bool m_timestampFieldHasBeenSet;

                    /**
                     * 在线特征表对应的来源表名称（离线表）
                     */
                    std::string m_sourceTableName;
                    bool m_sourceTableNameHasBeenSet;

                    /**
                     * 在线特征表关联的工作流ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 离线特征表对应生成的在线特征表名称
                     */
                    std::string m_onlineTableName;
                    bool m_onlineTableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FEATURETABLEDETAIL_H_
