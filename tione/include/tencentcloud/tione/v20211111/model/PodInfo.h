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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_PODINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_PODINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ResourceConfigInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 任务建模Pod信息
                */
                class PodInfo : public AbstractModel
                {
                public:
                    PodInfo();
                    ~PodInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取pod名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name pod名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置pod名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name pod名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取pod的IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IP pod的IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置pod的IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iP pod的IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取pod状态。eg：SUBMITTING提交中、PENDING排队中、RUNNING运行中、SUCCEEDED已完成、FAILED异常、TERMINATING停止中、TERMINATED已停止
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status pod状态。eg：SUBMITTING提交中、PENDING排队中、RUNNING运行中、SUCCEEDED已完成、FAILED异常、TERMINATING停止中、TERMINATED已停止
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置pod状态。eg：SUBMITTING提交中、PENDING排队中、RUNNING运行中、SUCCEEDED已完成、FAILED异常、TERMINATING停止中、TERMINATED已停止
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status pod状态。eg：SUBMITTING提交中、PENDING排队中、RUNNING运行中、SUCCEEDED已完成、FAILED异常、TERMINATING停止中、TERMINATED已停止
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取pod启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime pod启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置pod启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime pod启动时间
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
                     * 获取pod结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime pod结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置pod结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime pod结束时间
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

                    /**
                     * 获取pod资源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceConfigInfo pod资源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResourceConfigInfo GetResourceConfigInfo() const;

                    /**
                     * 设置pod资源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceConfigInfo pod资源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceConfigInfo(const ResourceConfigInfo& _resourceConfigInfo);

                    /**
                     * 判断参数 ResourceConfigInfo 是否已赋值
                     * @return ResourceConfigInfo 是否已赋值
                     * 
                     */
                    bool ResourceConfigInfoHasBeenSet() const;

                    /**
                     * 获取Pod所属任务的SubUin信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubUin Pod所属任务的SubUin信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置Pod所属任务的SubUin信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subUin Pod所属任务的SubUin信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubUin(const std::string& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                private:

                    /**
                     * pod名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * pod的IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * pod状态。eg：SUBMITTING提交中、PENDING排队中、RUNNING运行中、SUCCEEDED已完成、FAILED异常、TERMINATING停止中、TERMINATED已停止
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * pod启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * pod结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * pod资源配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResourceConfigInfo m_resourceConfigInfo;
                    bool m_resourceConfigInfoHasBeenSet;

                    /**
                     * Pod所属任务的SubUin信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_PODINFO_H_
