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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_LIFECYCLEACTIONRESULTINFO_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_LIFECYCLEACTIONRESULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 生命周期挂钩动作的执行结果信息。
                */
                class LifecycleActionResultInfo : public AbstractModel
                {
                public:
                    LifecycleActionResultInfo();
                    ~LifecycleActionResultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生命周期挂钩标识。
                     * @return LifecycleHookId 生命周期挂钩标识。
                     */
                    std::string GetLifecycleHookId() const;

                    /**
                     * 设置生命周期挂钩标识。
                     * @param LifecycleHookId 生命周期挂钩标识。
                     */
                    void SetLifecycleHookId(const std::string& _lifecycleHookId);

                    /**
                     * 判断参数 LifecycleHookId 是否已赋值
                     * @return LifecycleHookId 是否已赋值
                     */
                    bool LifecycleHookIdHasBeenSet() const;

                    /**
                     * 获取实例标识。
                     * @return InstanceId 实例标识。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例标识。
                     * @param InstanceId 实例标识。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取通知的结果，表示通知CMQ是否成功。
                     * @return NotificationResult 通知的结果，表示通知CMQ是否成功。
                     */
                    std::string GetNotificationResult() const;

                    /**
                     * 设置通知的结果，表示通知CMQ是否成功。
                     * @param NotificationResult 通知的结果，表示通知CMQ是否成功。
                     */
                    void SetNotificationResult(const std::string& _notificationResult);

                    /**
                     * 判断参数 NotificationResult 是否已赋值
                     * @return NotificationResult 是否已赋值
                     */
                    bool NotificationResultHasBeenSet() const;

                    /**
                     * 获取生命周期挂钩动作的执行结果，取值包括 CONTINUE、ABANDON。
                     * @return LifecycleActionResult 生命周期挂钩动作的执行结果，取值包括 CONTINUE、ABANDON。
                     */
                    std::string GetLifecycleActionResult() const;

                    /**
                     * 设置生命周期挂钩动作的执行结果，取值包括 CONTINUE、ABANDON。
                     * @param LifecycleActionResult 生命周期挂钩动作的执行结果，取值包括 CONTINUE、ABANDON。
                     */
                    void SetLifecycleActionResult(const std::string& _lifecycleActionResult);

                    /**
                     * 判断参数 LifecycleActionResult 是否已赋值
                     * @return LifecycleActionResult 是否已赋值
                     */
                    bool LifecycleActionResultHasBeenSet() const;

                    /**
                     * 获取结果的原因。
                     * @return ResultReason 结果的原因。
                     */
                    std::string GetResultReason() const;

                    /**
                     * 设置结果的原因。
                     * @param ResultReason 结果的原因。
                     */
                    void SetResultReason(const std::string& _resultReason);

                    /**
                     * 判断参数 ResultReason 是否已赋值
                     * @return ResultReason 是否已赋值
                     */
                    bool ResultReasonHasBeenSet() const;

                private:

                    /**
                     * 生命周期挂钩标识。
                     */
                    std::string m_lifecycleHookId;
                    bool m_lifecycleHookIdHasBeenSet;

                    /**
                     * 实例标识。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 通知的结果，表示通知CMQ是否成功。
                     */
                    std::string m_notificationResult;
                    bool m_notificationResultHasBeenSet;

                    /**
                     * 生命周期挂钩动作的执行结果，取值包括 CONTINUE、ABANDON。
                     */
                    std::string m_lifecycleActionResult;
                    bool m_lifecycleActionResultHasBeenSet;

                    /**
                     * 结果的原因。
                     */
                    std::string m_resultReason;
                    bool m_resultReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_LIFECYCLEACTIONRESULTINFO_H_
