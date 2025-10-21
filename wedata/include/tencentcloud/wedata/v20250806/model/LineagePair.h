/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGEPAIR_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGEPAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/LineageResouce.h>
#include <tencentcloud/wedata/v20250806/model/LineageProcess.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 血缘Pair对象
                */
                class LineagePair : public AbstractModel
                {
                public:
                    LineagePair();
                    ~LineagePair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取来源
                     * @return Source 来源
                     * 
                     */
                    LineageResouce GetSource() const;

                    /**
                     * 设置来源
                     * @param _source 来源
                     * 
                     */
                    void SetSource(const LineageResouce& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取目标
                     * @return Target 目标
                     * 
                     */
                    LineageResouce GetTarget() const;

                    /**
                     * 设置目标
                     * @param _target 目标
                     * 
                     */
                    void SetTarget(const LineageResouce& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取血缘加工过程
                     * @return Processes 血缘加工过程
                     * 
                     */
                    std::vector<LineageProcess> GetProcesses() const;

                    /**
                     * 设置血缘加工过程
                     * @param _processes 血缘加工过程
                     * 
                     */
                    void SetProcesses(const std::vector<LineageProcess>& _processes);

                    /**
                     * 判断参数 Processes 是否已赋值
                     * @return Processes 是否已赋值
                     * 
                     */
                    bool ProcessesHasBeenSet() const;

                private:

                    /**
                     * 来源
                     */
                    LineageResouce m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 目标
                     */
                    LineageResouce m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 血缘加工过程
                     */
                    std::vector<LineageProcess> m_processes;
                    bool m_processesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGEPAIR_H_
