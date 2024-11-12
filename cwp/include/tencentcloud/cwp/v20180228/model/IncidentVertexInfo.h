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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_INCIDENTVERTEXINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_INCIDENTVERTEXINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VertexInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 事件点信息
                */
                class IncidentVertexInfo : public AbstractModel
                {
                public:
                    IncidentVertexInfo();
                    ~IncidentVertexInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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

                    /**
                     * 获取节点信息列表，数组项中包含节点详细信息
                     * @return Vertex 节点信息列表，数组项中包含节点详细信息
                     * 
                     */
                    std::vector<VertexInfo> GetVertex() const;

                    /**
                     * 设置节点信息列表，数组项中包含节点详细信息
                     * @param _vertex 节点信息列表，数组项中包含节点详细信息
                     * 
                     */
                    void SetVertex(const std::vector<VertexInfo>& _vertex);

                    /**
                     * 判断参数 Vertex 是否已赋值
                     * @return Vertex 是否已赋值
                     * 
                     */
                    bool VertexHasBeenSet() const;

                    /**
                     * 获取节点总个数
                     * @return VertexCount 节点总个数
                     * 
                     */
                    int64_t GetVertexCount() const;

                    /**
                     * 设置节点总个数
                     * @param _vertexCount 节点总个数
                     * 
                     */
                    void SetVertexCount(const int64_t& _vertexCount);

                    /**
                     * 判断参数 VertexCount 是否已赋值
                     * @return VertexCount 是否已赋值
                     * 
                     */
                    bool VertexCountHasBeenSet() const;

                private:

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

                    /**
                     * 节点信息列表，数组项中包含节点详细信息
                     */
                    std::vector<VertexInfo> m_vertex;
                    bool m_vertexHasBeenSet;

                    /**
                     * 节点总个数
                     */
                    int64_t m_vertexCount;
                    bool m_vertexCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_INCIDENTVERTEXINFO_H_
