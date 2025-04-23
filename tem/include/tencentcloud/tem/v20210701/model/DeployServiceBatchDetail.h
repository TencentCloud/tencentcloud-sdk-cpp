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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_DEPLOYSERVICEBATCHDETAIL_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_DEPLOYSERVICEBATCHDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/DeployServicePodDetail.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 分批发布单批次详情
                */
                class DeployServiceBatchDetail : public AbstractModel
                {
                public:
                    DeployServiceBatchDetail();
                    ~DeployServiceBatchDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取旧实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OldPodList 旧实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DeployServicePodDetail GetOldPodList() const;

                    /**
                     * 设置旧实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oldPodList 旧实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOldPodList(const DeployServicePodDetail& _oldPodList);

                    /**
                     * 判断参数 OldPodList 是否已赋值
                     * @return OldPodList 是否已赋值
                     * 
                     */
                    bool OldPodListHasBeenSet() const;

                    /**
                     * 获取新实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewPodList 新实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DeployServicePodDetail GetNewPodList() const;

                    /**
                     * 设置新实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _newPodList 新实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNewPodList(const DeployServicePodDetail& _newPodList);

                    /**
                     * 判断参数 NewPodList 是否已赋值
                     * @return NewPodList 是否已赋值
                     * 
                     */
                    bool NewPodListHasBeenSet() const;

                    /**
                     * 获取当前批次状态："WaitForTimeExceed", "WaitForResume", "Deploying", "Finish", "NotStart"
                     * @return BatchStatus 当前批次状态："WaitForTimeExceed", "WaitForResume", "Deploying", "Finish", "NotStart"
                     * 
                     */
                    std::string GetBatchStatus() const;

                    /**
                     * 设置当前批次状态："WaitForTimeExceed", "WaitForResume", "Deploying", "Finish", "NotStart"
                     * @param _batchStatus 当前批次状态："WaitForTimeExceed", "WaitForResume", "Deploying", "Finish", "NotStart"
                     * 
                     */
                    void SetBatchStatus(const std::string& _batchStatus);

                    /**
                     * 判断参数 BatchStatus 是否已赋值
                     * @return BatchStatus 是否已赋值
                     * 
                     */
                    bool BatchStatusHasBeenSet() const;

                    /**
                     * 获取该批次预计旧实例数量
                     * @return PodNum 该批次预计旧实例数量
                     * 
                     */
                    int64_t GetPodNum() const;

                    /**
                     * 设置该批次预计旧实例数量
                     * @param _podNum 该批次预计旧实例数量
                     * 
                     */
                    void SetPodNum(const int64_t& _podNum);

                    /**
                     * 判断参数 PodNum 是否已赋值
                     * @return PodNum 是否已赋值
                     * 
                     */
                    bool PodNumHasBeenSet() const;

                    /**
                     * 获取批次id
                     * @return BatchIndex 批次id
                     * 
                     */
                    int64_t GetBatchIndex() const;

                    /**
                     * 设置批次id
                     * @param _batchIndex 批次id
                     * 
                     */
                    void SetBatchIndex(const int64_t& _batchIndex);

                    /**
                     * 判断参数 BatchIndex 是否已赋值
                     * @return BatchIndex 是否已赋值
                     * 
                     */
                    bool BatchIndexHasBeenSet() const;

                    /**
                     * 获取旧实例列表
                     * @return OldPods 旧实例列表
                     * 
                     */
                    std::vector<DeployServicePodDetail> GetOldPods() const;

                    /**
                     * 设置旧实例列表
                     * @param _oldPods 旧实例列表
                     * 
                     */
                    void SetOldPods(const std::vector<DeployServicePodDetail>& _oldPods);

                    /**
                     * 判断参数 OldPods 是否已赋值
                     * @return OldPods 是否已赋值
                     * 
                     */
                    bool OldPodsHasBeenSet() const;

                    /**
                     * 获取新实例列表
                     * @return NewPods 新实例列表
                     * 
                     */
                    std::vector<DeployServicePodDetail> GetNewPods() const;

                    /**
                     * 设置新实例列表
                     * @param _newPods 新实例列表
                     * 
                     */
                    void SetNewPods(const std::vector<DeployServicePodDetail>& _newPods);

                    /**
                     * 判断参数 NewPods 是否已赋值
                     * @return NewPods 是否已赋值
                     * 
                     */
                    bool NewPodsHasBeenSet() const;

                    /**
                     * 获取=0：手动确认批次；>0：下一批次开始时间戳
                     * @return NextBatchStartTime =0：手动确认批次；>0：下一批次开始时间戳
                     * 
                     */
                    int64_t GetNextBatchStartTime() const;

                    /**
                     * 设置=0：手动确认批次；>0：下一批次开始时间戳
                     * @param _nextBatchStartTime =0：手动确认批次；>0：下一批次开始时间戳
                     * 
                     */
                    void SetNextBatchStartTime(const int64_t& _nextBatchStartTime);

                    /**
                     * 判断参数 NextBatchStartTime 是否已赋值
                     * @return NextBatchStartTime 是否已赋值
                     * 
                     */
                    bool NextBatchStartTimeHasBeenSet() const;

                private:

                    /**
                     * 旧实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DeployServicePodDetail m_oldPodList;
                    bool m_oldPodListHasBeenSet;

                    /**
                     * 新实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DeployServicePodDetail m_newPodList;
                    bool m_newPodListHasBeenSet;

                    /**
                     * 当前批次状态："WaitForTimeExceed", "WaitForResume", "Deploying", "Finish", "NotStart"
                     */
                    std::string m_batchStatus;
                    bool m_batchStatusHasBeenSet;

                    /**
                     * 该批次预计旧实例数量
                     */
                    int64_t m_podNum;
                    bool m_podNumHasBeenSet;

                    /**
                     * 批次id
                     */
                    int64_t m_batchIndex;
                    bool m_batchIndexHasBeenSet;

                    /**
                     * 旧实例列表
                     */
                    std::vector<DeployServicePodDetail> m_oldPods;
                    bool m_oldPodsHasBeenSet;

                    /**
                     * 新实例列表
                     */
                    std::vector<DeployServicePodDetail> m_newPods;
                    bool m_newPodsHasBeenSet;

                    /**
                     * =0：手动确认批次；>0：下一批次开始时间戳
                     */
                    int64_t m_nextBatchStartTime;
                    bool m_nextBatchStartTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_DEPLOYSERVICEBATCHDETAIL_H_
