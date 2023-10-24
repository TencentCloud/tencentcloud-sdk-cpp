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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBETREEJOBSRESPONSE_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBETREEJOBSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/TreeJobSets.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeTreeJobsRsp.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * DescribeTreeJobs返回参数结构体
                */
                class DescribeTreeJobsResponse : public AbstractModel
                {
                public:
                    DescribeTreeJobsResponse();
                    ~DescribeTreeJobsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取父节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentId 父节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取当前文件夹ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 当前文件夹ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取当前文件夹名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 当前文件夹名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取当前文件夹下的作业列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobSet 当前文件夹下的作业列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TreeJobSets> GetJobSet() const;

                    /**
                     * 判断参数 JobSet 是否已赋值
                     * @return JobSet 是否已赋值
                     * 
                     */
                    bool JobSetHasBeenSet() const;

                    /**
                     * 获取迭代子目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Children 迭代子目录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribeTreeJobsRsp> GetChildren() const;

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                private:

                    /**
                     * 父节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 当前文件夹ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 当前文件夹名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 当前文件夹下的作业列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TreeJobSets> m_jobSet;
                    bool m_jobSetHasBeenSet;

                    /**
                     * 迭代子目录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribeTreeJobsRsp> m_children;
                    bool m_childrenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBETREEJOBSRESPONSE_H_
