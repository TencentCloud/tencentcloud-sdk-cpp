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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_COMPARETABLESINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_COMPARETABLESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 比较表格的Meta信息
                */
                class CompareTablesInfo : public AbstractModel
                {
                public:
                    CompareTablesInfo();
                    ~CompareTablesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源表格的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcTableClusterId 源表格的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSrcTableClusterId() const;

                    /**
                     * 设置源表格的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _srcTableClusterId 源表格的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSrcTableClusterId(const std::string& _srcTableClusterId);

                    /**
                     * 判断参数 SrcTableClusterId 是否已赋值
                     * @return SrcTableClusterId 是否已赋值
                     * 
                     */
                    bool SrcTableClusterIdHasBeenSet() const;

                    /**
                     * 获取源表格的表格组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcTableGroupId 源表格的表格组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSrcTableGroupId() const;

                    /**
                     * 设置源表格的表格组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _srcTableGroupId 源表格的表格组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSrcTableGroupId(const std::string& _srcTableGroupId);

                    /**
                     * 判断参数 SrcTableGroupId 是否已赋值
                     * @return SrcTableGroupId 是否已赋值
                     * 
                     */
                    bool SrcTableGroupIdHasBeenSet() const;

                    /**
                     * 获取源表格的表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcTableName 源表格的表名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSrcTableName() const;

                    /**
                     * 设置源表格的表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _srcTableName 源表格的表名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSrcTableName(const std::string& _srcTableName);

                    /**
                     * 判断参数 SrcTableName 是否已赋值
                     * @return SrcTableName 是否已赋值
                     * 
                     */
                    bool SrcTableNameHasBeenSet() const;

                    /**
                     * 获取目标表格的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DstTableClusterId 目标表格的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDstTableClusterId() const;

                    /**
                     * 设置目标表格的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dstTableClusterId 目标表格的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDstTableClusterId(const std::string& _dstTableClusterId);

                    /**
                     * 判断参数 DstTableClusterId 是否已赋值
                     * @return DstTableClusterId 是否已赋值
                     * 
                     */
                    bool DstTableClusterIdHasBeenSet() const;

                    /**
                     * 获取目标表格的表格组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DstTableGroupId 目标表格的表格组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDstTableGroupId() const;

                    /**
                     * 设置目标表格的表格组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dstTableGroupId 目标表格的表格组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDstTableGroupId(const std::string& _dstTableGroupId);

                    /**
                     * 判断参数 DstTableGroupId 是否已赋值
                     * @return DstTableGroupId 是否已赋值
                     * 
                     */
                    bool DstTableGroupIdHasBeenSet() const;

                    /**
                     * 获取目标表格的表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DstTableName 目标表格的表名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDstTableName() const;

                    /**
                     * 设置目标表格的表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dstTableName 目标表格的表名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDstTableName(const std::string& _dstTableName);

                    /**
                     * 判断参数 DstTableName 是否已赋值
                     * @return DstTableName 是否已赋值
                     * 
                     */
                    bool DstTableNameHasBeenSet() const;

                    /**
                     * 获取源表格的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcTableInstanceId 源表格的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSrcTableInstanceId() const;

                    /**
                     * 设置源表格的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _srcTableInstanceId 源表格的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSrcTableInstanceId(const std::string& _srcTableInstanceId);

                    /**
                     * 判断参数 SrcTableInstanceId 是否已赋值
                     * @return SrcTableInstanceId 是否已赋值
                     * 
                     */
                    bool SrcTableInstanceIdHasBeenSet() const;

                    /**
                     * 获取目标表格的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DstTableInstanceId 目标表格的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDstTableInstanceId() const;

                    /**
                     * 设置目标表格的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dstTableInstanceId 目标表格的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDstTableInstanceId(const std::string& _dstTableInstanceId);

                    /**
                     * 判断参数 DstTableInstanceId 是否已赋值
                     * @return DstTableInstanceId 是否已赋值
                     * 
                     */
                    bool DstTableInstanceIdHasBeenSet() const;

                private:

                    /**
                     * 源表格的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_srcTableClusterId;
                    bool m_srcTableClusterIdHasBeenSet;

                    /**
                     * 源表格的表格组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_srcTableGroupId;
                    bool m_srcTableGroupIdHasBeenSet;

                    /**
                     * 源表格的表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_srcTableName;
                    bool m_srcTableNameHasBeenSet;

                    /**
                     * 目标表格的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dstTableClusterId;
                    bool m_dstTableClusterIdHasBeenSet;

                    /**
                     * 目标表格的表格组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dstTableGroupId;
                    bool m_dstTableGroupIdHasBeenSet;

                    /**
                     * 目标表格的表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dstTableName;
                    bool m_dstTableNameHasBeenSet;

                    /**
                     * 源表格的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_srcTableInstanceId;
                    bool m_srcTableInstanceIdHasBeenSet;

                    /**
                     * 目标表格的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dstTableInstanceId;
                    bool m_dstTableInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_COMPARETABLESINFO_H_
