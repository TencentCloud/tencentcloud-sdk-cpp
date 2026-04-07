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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PROGRAMSCHEDULEINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PROGRAMSCHEDULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 该channel下面Program的调度信息。
                */
                class ProgramScheduleInfo : public AbstractModel
                {
                public:
                    ProgramScheduleInfo();
                    ~ProgramScheduleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>program名称。</p>
                     * @return ProgramName <p>program名称。</p>
                     * 
                     */
                    std::string GetProgramName() const;

                    /**
                     * 设置<p>program名称。</p>
                     * @param _programName <p>program名称。</p>
                     * 
                     */
                    void SetProgramName(const std::string& _programName);

                    /**
                     * 判断参数 ProgramName 是否已赋值
                     * @return ProgramName 是否已赋值
                     * 
                     */
                    bool ProgramNameHasBeenSet() const;

                    /**
                     * 获取<p>program id。</p>
                     * @return ProgramId <p>program id。</p>
                     * 
                     */
                    std::string GetProgramId() const;

                    /**
                     * 设置<p>program id。</p>
                     * @param _programId <p>program id。</p>
                     * 
                     */
                    void SetProgramId(const std::string& _programId);

                    /**
                     * 判断参数 ProgramId 是否已赋值
                     * @return ProgramId 是否已赋值
                     * 
                     */
                    bool ProgramIdHasBeenSet() const;

                    /**
                     * 获取<p>source类型。</p>
                     * @return SourceType <p>source类型。</p>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>source类型。</p>
                     * @param _sourceType <p>source类型。</p>
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>source id。</p>
                     * @return SourceId <p>source id。</p>
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置<p>source id。</p>
                     * @param _sourceId <p>source id。</p>
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取<p>source location的id。</p>
                     * @return SourceLocationId <p>source location的id。</p>
                     * 
                     */
                    std::string GetSourceLocationId() const;

                    /**
                     * 设置<p>source location的id。</p>
                     * @param _sourceLocationId <p>source location的id。</p>
                     * 
                     */
                    void SetSourceLocationId(const std::string& _sourceLocationId);

                    /**
                     * 判断参数 SourceLocationId 是否已赋值
                     * @return SourceLocationId 是否已赋值
                     * 
                     */
                    bool SourceLocationIdHasBeenSet() const;

                    /**
                     * 获取<p>开始时间戳。</p>
                     * @return StartTime <p>开始时间戳。</p>
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间戳。</p>
                     * @param _startTime <p>开始时间戳。</p>
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>持续时长。</p>
                     * @return Duration <p>持续时长。</p>
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置<p>持续时长。</p>
                     * @param _duration <p>持续时长。</p>
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * <p>program名称。</p>
                     */
                    std::string m_programName;
                    bool m_programNameHasBeenSet;

                    /**
                     * <p>program id。</p>
                     */
                    std::string m_programId;
                    bool m_programIdHasBeenSet;

                    /**
                     * <p>source类型。</p>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>source id。</p>
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * <p>source location的id。</p>
                     */
                    std::string m_sourceLocationId;
                    bool m_sourceLocationIdHasBeenSet;

                    /**
                     * <p>开始时间戳。</p>
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>持续时长。</p>
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PROGRAMSCHEDULEINFO_H_
