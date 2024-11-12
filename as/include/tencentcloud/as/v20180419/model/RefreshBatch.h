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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_REFRESHBATCH_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_REFRESHBATCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/RefreshBatchRelatedInstance.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 实例刷新批次信息，包含该批次的刷新状态、实例、起止时间等信息。
                */
                class RefreshBatch : public AbstractModel
                {
                public:
                    RefreshBatch();
                    ~RefreshBatch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取刷新批次序号。例如，2 表示当前批次实例会在第二批次进行实例刷新。
                     * @return RefreshBatchNum 刷新批次序号。例如，2 表示当前批次实例会在第二批次进行实例刷新。
                     * 
                     */
                    uint64_t GetRefreshBatchNum() const;

                    /**
                     * 设置刷新批次序号。例如，2 表示当前批次实例会在第二批次进行实例刷新。
                     * @param _refreshBatchNum 刷新批次序号。例如，2 表示当前批次实例会在第二批次进行实例刷新。
                     * 
                     */
                    void SetRefreshBatchNum(const uint64_t& _refreshBatchNum);

                    /**
                     * 判断参数 RefreshBatchNum 是否已赋值
                     * @return RefreshBatchNum 是否已赋值
                     * 
                     */
                    bool RefreshBatchNumHasBeenSet() const;

                    /**
                     * 获取刷新批次状态。取值如下：<li>WAITING：待刷新</li><li>INIT：初始化中</li><li>RUNNING：刷新中</li><li>FAILED:  刷新失败</li><li>PARTIALLY_SUCCESSFUL：批次部分成功</li><li>CANCELLED：已取消</li><li>SUCCESSFUL：刷新成功</li>
                     * @return RefreshBatchStatus 刷新批次状态。取值如下：<li>WAITING：待刷新</li><li>INIT：初始化中</li><li>RUNNING：刷新中</li><li>FAILED:  刷新失败</li><li>PARTIALLY_SUCCESSFUL：批次部分成功</li><li>CANCELLED：已取消</li><li>SUCCESSFUL：刷新成功</li>
                     * 
                     */
                    std::string GetRefreshBatchStatus() const;

                    /**
                     * 设置刷新批次状态。取值如下：<li>WAITING：待刷新</li><li>INIT：初始化中</li><li>RUNNING：刷新中</li><li>FAILED:  刷新失败</li><li>PARTIALLY_SUCCESSFUL：批次部分成功</li><li>CANCELLED：已取消</li><li>SUCCESSFUL：刷新成功</li>
                     * @param _refreshBatchStatus 刷新批次状态。取值如下：<li>WAITING：待刷新</li><li>INIT：初始化中</li><li>RUNNING：刷新中</li><li>FAILED:  刷新失败</li><li>PARTIALLY_SUCCESSFUL：批次部分成功</li><li>CANCELLED：已取消</li><li>SUCCESSFUL：刷新成功</li>
                     * 
                     */
                    void SetRefreshBatchStatus(const std::string& _refreshBatchStatus);

                    /**
                     * 判断参数 RefreshBatchStatus 是否已赋值
                     * @return RefreshBatchStatus 是否已赋值
                     * 
                     */
                    bool RefreshBatchStatusHasBeenSet() const;

                    /**
                     * 获取刷新批次关联实例列表。
                     * @return RefreshBatchRelatedInstanceSet 刷新批次关联实例列表。
                     * 
                     */
                    std::vector<RefreshBatchRelatedInstance> GetRefreshBatchRelatedInstanceSet() const;

                    /**
                     * 设置刷新批次关联实例列表。
                     * @param _refreshBatchRelatedInstanceSet 刷新批次关联实例列表。
                     * 
                     */
                    void SetRefreshBatchRelatedInstanceSet(const std::vector<RefreshBatchRelatedInstance>& _refreshBatchRelatedInstanceSet);

                    /**
                     * 判断参数 RefreshBatchRelatedInstanceSet 是否已赋值
                     * @return RefreshBatchRelatedInstanceSet 是否已赋值
                     * 
                     */
                    bool RefreshBatchRelatedInstanceSetHasBeenSet() const;

                    /**
                     * 获取刷新批次开始时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 刷新批次开始时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置刷新批次开始时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 刷新批次开始时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取刷新批次结束时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 刷新批次结束时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置刷新批次结束时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 刷新批次结束时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 刷新批次序号。例如，2 表示当前批次实例会在第二批次进行实例刷新。
                     */
                    uint64_t m_refreshBatchNum;
                    bool m_refreshBatchNumHasBeenSet;

                    /**
                     * 刷新批次状态。取值如下：<li>WAITING：待刷新</li><li>INIT：初始化中</li><li>RUNNING：刷新中</li><li>FAILED:  刷新失败</li><li>PARTIALLY_SUCCESSFUL：批次部分成功</li><li>CANCELLED：已取消</li><li>SUCCESSFUL：刷新成功</li>
                     */
                    std::string m_refreshBatchStatus;
                    bool m_refreshBatchStatusHasBeenSet;

                    /**
                     * 刷新批次关联实例列表。
                     */
                    std::vector<RefreshBatchRelatedInstance> m_refreshBatchRelatedInstanceSet;
                    bool m_refreshBatchRelatedInstanceSetHasBeenSet;

                    /**
                     * 刷新批次开始时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 刷新批次结束时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_REFRESHBATCH_H_
