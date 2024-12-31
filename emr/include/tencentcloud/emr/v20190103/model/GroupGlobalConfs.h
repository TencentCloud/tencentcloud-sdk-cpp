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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_GROUPGLOBALCONFS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_GROUPGLOBALCONFS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/AutoScaleResourceConf.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 集群所有伸缩组全局参数信息
                */
                class GroupGlobalConfs : public AbstractModel
                {
                public:
                    GroupGlobalConfs();
                    ~GroupGlobalConfs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取伸缩组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupGlobalConf 伸缩组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AutoScaleResourceConf GetGroupGlobalConf() const;

                    /**
                     * 设置伸缩组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupGlobalConf 伸缩组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupGlobalConf(const AutoScaleResourceConf& _groupGlobalConf);

                    /**
                     * 判断参数 GroupGlobalConf 是否已赋值
                     * @return GroupGlobalConf 是否已赋值
                     * 
                     */
                    bool GroupGlobalConfHasBeenSet() const;

                    /**
                     * 获取当前伸缩组扩容出来的节点数量。
                     * @return CurrentNodes 当前伸缩组扩容出来的节点数量。
                     * 
                     */
                    int64_t GetCurrentNodes() const;

                    /**
                     * 设置当前伸缩组扩容出来的节点数量。
                     * @param _currentNodes 当前伸缩组扩容出来的节点数量。
                     * 
                     */
                    void SetCurrentNodes(const int64_t& _currentNodes);

                    /**
                     * 判断参数 CurrentNodes 是否已赋值
                     * @return CurrentNodes 是否已赋值
                     * 
                     */
                    bool CurrentNodesHasBeenSet() const;

                    /**
                     * 获取当前伸缩组扩容出来的后付费节点数量。
                     * @return CurrentPostPaidNodes 当前伸缩组扩容出来的后付费节点数量。
                     * 
                     */
                    int64_t GetCurrentPostPaidNodes() const;

                    /**
                     * 设置当前伸缩组扩容出来的后付费节点数量。
                     * @param _currentPostPaidNodes 当前伸缩组扩容出来的后付费节点数量。
                     * 
                     */
                    void SetCurrentPostPaidNodes(const int64_t& _currentPostPaidNodes);

                    /**
                     * 判断参数 CurrentPostPaidNodes 是否已赋值
                     * @return CurrentPostPaidNodes 是否已赋值
                     * 
                     */
                    bool CurrentPostPaidNodesHasBeenSet() const;

                    /**
                     * 获取当前伸缩组扩容出来的竞价实例节点数量。
                     * @return CurrentSpotPaidNodes 当前伸缩组扩容出来的竞价实例节点数量。
                     * 
                     */
                    int64_t GetCurrentSpotPaidNodes() const;

                    /**
                     * 设置当前伸缩组扩容出来的竞价实例节点数量。
                     * @param _currentSpotPaidNodes 当前伸缩组扩容出来的竞价实例节点数量。
                     * 
                     */
                    void SetCurrentSpotPaidNodes(const int64_t& _currentSpotPaidNodes);

                    /**
                     * 判断参数 CurrentSpotPaidNodes 是否已赋值
                     * @return CurrentSpotPaidNodes 是否已赋值
                     * 
                     */
                    bool CurrentSpotPaidNodesHasBeenSet() const;

                private:

                    /**
                     * 伸缩组信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AutoScaleResourceConf m_groupGlobalConf;
                    bool m_groupGlobalConfHasBeenSet;

                    /**
                     * 当前伸缩组扩容出来的节点数量。
                     */
                    int64_t m_currentNodes;
                    bool m_currentNodesHasBeenSet;

                    /**
                     * 当前伸缩组扩容出来的后付费节点数量。
                     */
                    int64_t m_currentPostPaidNodes;
                    bool m_currentPostPaidNodesHasBeenSet;

                    /**
                     * 当前伸缩组扩容出来的竞价实例节点数量。
                     */
                    int64_t m_currentSpotPaidNodes;
                    bool m_currentSpotPaidNodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_GROUPGLOBALCONFS_H_
