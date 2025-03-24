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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERCONDITION_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 集群创建过程
                */
                class ClusterCondition : public AbstractModel
                {
                public:
                    ClusterCondition();
                    ~ClusterCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群创建过程类型
                     * @return Type 集群创建过程类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置集群创建过程类型
                     * @param _type 集群创建过程类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取集群创建过程状态
                     * @return Status 集群创建过程状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置集群创建过程状态
                     * @param _status 集群创建过程状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取最后一次探测到该状态的时间
                     * @return LastProbeTime 最后一次探测到该状态的时间
                     * 
                     */
                    std::string GetLastProbeTime() const;

                    /**
                     * 设置最后一次探测到该状态的时间
                     * @param _lastProbeTime 最后一次探测到该状态的时间
                     * 
                     */
                    void SetLastProbeTime(const std::string& _lastProbeTime);

                    /**
                     * 判断参数 LastProbeTime 是否已赋值
                     * @return LastProbeTime 是否已赋值
                     * 
                     */
                    bool LastProbeTimeHasBeenSet() const;

                    /**
                     * 获取最后一次转换到该过程的时间
                     * @return LastTransitionTime 最后一次转换到该过程的时间
                     * 
                     */
                    std::string GetLastTransitionTime() const;

                    /**
                     * 设置最后一次转换到该过程的时间
                     * @param _lastTransitionTime 最后一次转换到该过程的时间
                     * 
                     */
                    void SetLastTransitionTime(const std::string& _lastTransitionTime);

                    /**
                     * 判断参数 LastTransitionTime 是否已赋值
                     * @return LastTransitionTime 是否已赋值
                     * 
                     */
                    bool LastTransitionTimeHasBeenSet() const;

                    /**
                     * 获取转换到该过程的简明原因
                     * @return Reason 转换到该过程的简明原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置转换到该过程的简明原因
                     * @param _reason 转换到该过程的简明原因
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取转换到该过程的更多信息
                     * @return Message 转换到该过程的更多信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置转换到该过程的更多信息
                     * @param _message 转换到该过程的更多信息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 集群创建过程类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 集群创建过程状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 最后一次探测到该状态的时间
                     */
                    std::string m_lastProbeTime;
                    bool m_lastProbeTimeHasBeenSet;

                    /**
                     * 最后一次转换到该过程的时间
                     */
                    std::string m_lastTransitionTime;
                    bool m_lastTransitionTimeHasBeenSet;

                    /**
                     * 转换到该过程的简明原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 转换到该过程的更多信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERCONDITION_H_
