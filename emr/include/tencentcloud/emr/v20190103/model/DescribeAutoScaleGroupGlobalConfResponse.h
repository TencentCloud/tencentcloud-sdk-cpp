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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEAUTOSCALEGROUPGLOBALCONFRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEAUTOSCALEGROUPGLOBALCONFRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/GroupGlobalConfs.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeAutoScaleGroupGlobalConf返回参数结构体
                */
                class DescribeAutoScaleGroupGlobalConfResponse : public AbstractModel
                {
                public:
                    DescribeAutoScaleGroupGlobalConfResponse();
                    ~DescribeAutoScaleGroupGlobalConfResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群所有伸缩组全局信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupGlobalConfs 集群所有伸缩组全局信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GroupGlobalConfs> GetGroupGlobalConfs() const;

                    /**
                     * 判断参数 GroupGlobalConfs 是否已赋值
                     * @return GroupGlobalConfs 是否已赋值
                     * 
                     */
                    bool GroupGlobalConfsHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return TotalCount 总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 集群所有伸缩组全局信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GroupGlobalConfs> m_groupGlobalConfs;
                    bool m_groupGlobalConfsHasBeenSet;

                    /**
                     * 总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEAUTOSCALEGROUPGLOBALCONFRESPONSE_H_
