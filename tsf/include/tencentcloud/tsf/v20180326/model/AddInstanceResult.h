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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_ADDINSTANCERESULT_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_ADDINSTANCERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 添加实例到集群的结果
                */
                class AddInstanceResult : public AbstractModel
                {
                public:
                    AddInstanceResult();
                    ~AddInstanceResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取添加集群失败的节点列表
                     * @return FailedInstanceIds 添加集群失败的节点列表
                     * 
                     */
                    std::vector<std::string> GetFailedInstanceIds() const;

                    /**
                     * 设置添加集群失败的节点列表
                     * @param _failedInstanceIds 添加集群失败的节点列表
                     * 
                     */
                    void SetFailedInstanceIds(const std::vector<std::string>& _failedInstanceIds);

                    /**
                     * 判断参数 FailedInstanceIds 是否已赋值
                     * @return FailedInstanceIds 是否已赋值
                     * 
                     */
                    bool FailedInstanceIdsHasBeenSet() const;

                    /**
                     * 获取添加集群成功的节点列表
                     * @return SuccInstanceIds 添加集群成功的节点列表
                     * 
                     */
                    std::vector<std::string> GetSuccInstanceIds() const;

                    /**
                     * 设置添加集群成功的节点列表
                     * @param _succInstanceIds 添加集群成功的节点列表
                     * 
                     */
                    void SetSuccInstanceIds(const std::vector<std::string>& _succInstanceIds);

                    /**
                     * 判断参数 SuccInstanceIds 是否已赋值
                     * @return SuccInstanceIds 是否已赋值
                     * 
                     */
                    bool SuccInstanceIdsHasBeenSet() const;

                    /**
                     * 获取添加集群超时的节点列表
                     * @return TimeoutInstanceIds 添加集群超时的节点列表
                     * 
                     */
                    std::vector<std::string> GetTimeoutInstanceIds() const;

                    /**
                     * 设置添加集群超时的节点列表
                     * @param _timeoutInstanceIds 添加集群超时的节点列表
                     * 
                     */
                    void SetTimeoutInstanceIds(const std::vector<std::string>& _timeoutInstanceIds);

                    /**
                     * 判断参数 TimeoutInstanceIds 是否已赋值
                     * @return TimeoutInstanceIds 是否已赋值
                     * 
                     */
                    bool TimeoutInstanceIdsHasBeenSet() const;

                    /**
                     * 获取失败的节点的失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedReasons 失败的节点的失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetFailedReasons() const;

                    /**
                     * 设置失败的节点的失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failedReasons 失败的节点的失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailedReasons(const std::vector<std::string>& _failedReasons);

                    /**
                     * 判断参数 FailedReasons 是否已赋值
                     * @return FailedReasons 是否已赋值
                     * 
                     */
                    bool FailedReasonsHasBeenSet() const;

                private:

                    /**
                     * 添加集群失败的节点列表
                     */
                    std::vector<std::string> m_failedInstanceIds;
                    bool m_failedInstanceIdsHasBeenSet;

                    /**
                     * 添加集群成功的节点列表
                     */
                    std::vector<std::string> m_succInstanceIds;
                    bool m_succInstanceIdsHasBeenSet;

                    /**
                     * 添加集群超时的节点列表
                     */
                    std::vector<std::string> m_timeoutInstanceIds;
                    bool m_timeoutInstanceIdsHasBeenSet;

                    /**
                     * 失败的节点的失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_failedReasons;
                    bool m_failedReasonsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_ADDINSTANCERESULT_H_
