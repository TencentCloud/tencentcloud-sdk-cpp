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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVERTEXDETAILREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVERTEXDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVertexDetail请求参数结构体
                */
                class DescribeVertexDetailRequest : public AbstractModel
                {
                public:
                    DescribeVertexDetailRequest();
                    ~DescribeVertexDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取点id列表
                     * @return VertexIds 点id列表
                     * 
                     */
                    std::vector<std::string> GetVertexIds() const;

                    /**
                     * 设置点id列表
                     * @param _vertexIds 点id列表
                     * 
                     */
                    void SetVertexIds(const std::vector<std::string>& _vertexIds);

                    /**
                     * 判断参数 VertexIds 是否已赋值
                     * @return VertexIds 是否已赋值
                     * 
                     */
                    bool VertexIdsHasBeenSet() const;

                    /**
                     * 获取事件id
                     * @return IncidentId 事件id
                     * 
                     */
                    std::string GetIncidentId() const;

                    /**
                     * 设置事件id
                     * @param _incidentId 事件id
                     * 
                     */
                    void SetIncidentId(const std::string& _incidentId);

                    /**
                     * 判断参数 IncidentId 是否已赋值
                     * @return IncidentId 是否已赋值
                     * 
                     */
                    bool IncidentIdHasBeenSet() const;

                    /**
                     * 获取事件所在表名
                     * @return TableName 事件所在表名
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置事件所在表名
                     * @param _tableName 事件所在表名
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                private:

                    /**
                     * 点id列表
                     */
                    std::vector<std::string> m_vertexIds;
                    bool m_vertexIdsHasBeenSet;

                    /**
                     * 事件id
                     */
                    std::string m_incidentId;
                    bool m_incidentIdHasBeenSet;

                    /**
                     * 事件所在表名
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVERTEXDETAILREQUEST_H_
