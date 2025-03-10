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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADEPROGRESSITEM_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADEPROGRESSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/InstanceUpgradePreCheckResult.h>
#include <tencentcloud/tke/v20180525/model/TaskStepInfo.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 某个节点的升级进度
                */
                class InstanceUpgradeProgressItem : public AbstractModel
                {
                public:
                    InstanceUpgradeProgressItem();
                    ~InstanceUpgradeProgressItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点instanceID
                     * @return InstanceID 节点instanceID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置节点instanceID
                     * @param _instanceID 节点instanceID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取任务生命周期
process 运行中
paused 已停止
pauing 正在停止
done  已完成
timeout 已超时
aborted 已取消
pending 还未开始
                     * @return LifeState 任务生命周期
process 运行中
paused 已停止
pauing 正在停止
done  已完成
timeout 已超时
aborted 已取消
pending 还未开始
                     * 
                     */
                    std::string GetLifeState() const;

                    /**
                     * 设置任务生命周期
process 运行中
paused 已停止
pauing 正在停止
done  已完成
timeout 已超时
aborted 已取消
pending 还未开始
                     * @param _lifeState 任务生命周期
process 运行中
paused 已停止
pauing 正在停止
done  已完成
timeout 已超时
aborted 已取消
pending 还未开始
                     * 
                     */
                    void SetLifeState(const std::string& _lifeState);

                    /**
                     * 判断参数 LifeState 是否已赋值
                     * @return LifeState 是否已赋值
                     * 
                     */
                    bool LifeStateHasBeenSet() const;

                    /**
                     * 获取升级开始时间
                     * @return StartAt 升级开始时间
                     * 
                     */
                    std::string GetStartAt() const;

                    /**
                     * 设置升级开始时间
                     * @param _startAt 升级开始时间
                     * 
                     */
                    void SetStartAt(const std::string& _startAt);

                    /**
                     * 判断参数 StartAt 是否已赋值
                     * @return StartAt 是否已赋值
                     * 
                     */
                    bool StartAtHasBeenSet() const;

                    /**
                     * 获取升级结束时间
                     * @return EndAt 升级结束时间
                     * 
                     */
                    std::string GetEndAt() const;

                    /**
                     * 设置升级结束时间
                     * @param _endAt 升级结束时间
                     * 
                     */
                    void SetEndAt(const std::string& _endAt);

                    /**
                     * 判断参数 EndAt 是否已赋值
                     * @return EndAt 是否已赋值
                     * 
                     */
                    bool EndAtHasBeenSet() const;

                    /**
                     * 获取升级前检查结果
                     * @return CheckResult 升级前检查结果
                     * 
                     */
                    InstanceUpgradePreCheckResult GetCheckResult() const;

                    /**
                     * 设置升级前检查结果
                     * @param _checkResult 升级前检查结果
                     * 
                     */
                    void SetCheckResult(const InstanceUpgradePreCheckResult& _checkResult);

                    /**
                     * 判断参数 CheckResult 是否已赋值
                     * @return CheckResult 是否已赋值
                     * 
                     */
                    bool CheckResultHasBeenSet() const;

                    /**
                     * 获取升级步骤详情
                     * @return Detail 升级步骤详情
                     * 
                     */
                    std::vector<TaskStepInfo> GetDetail() const;

                    /**
                     * 设置升级步骤详情
                     * @param _detail 升级步骤详情
                     * 
                     */
                    void SetDetail(const std::vector<TaskStepInfo>& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                private:

                    /**
                     * 节点instanceID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 任务生命周期
process 运行中
paused 已停止
pauing 正在停止
done  已完成
timeout 已超时
aborted 已取消
pending 还未开始
                     */
                    std::string m_lifeState;
                    bool m_lifeStateHasBeenSet;

                    /**
                     * 升级开始时间
                     */
                    std::string m_startAt;
                    bool m_startAtHasBeenSet;

                    /**
                     * 升级结束时间
                     */
                    std::string m_endAt;
                    bool m_endAtHasBeenSet;

                    /**
                     * 升级前检查结果
                     */
                    InstanceUpgradePreCheckResult m_checkResult;
                    bool m_checkResultHasBeenSet;

                    /**
                     * 升级步骤详情
                     */
                    std::vector<TaskStepInfo> m_detail;
                    bool m_detailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADEPROGRESSITEM_H_
