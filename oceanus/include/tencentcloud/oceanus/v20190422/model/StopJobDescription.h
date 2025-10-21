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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_STOPJOBDESCRIPTION_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_STOPJOBDESCRIPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 停止作业的描述信息
                */
                class StopJobDescription : public AbstractModel
                {
                public:
                    StopJobDescription();
                    ~StopJobDescription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取作业Id
                     * @return JobId 作业Id
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业Id
                     * @param _jobId 作业Id
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取停止类型，1 停止 2 暂停
                     * @return StopType 停止类型，1 停止 2 暂停
                     * 
                     */
                    int64_t GetStopType() const;

                    /**
                     * 设置停止类型，1 停止 2 暂停
                     * @param _stopType 停止类型，1 停止 2 暂停
                     * 
                     */
                    void SetStopType(const int64_t& _stopType);

                    /**
                     * 判断参数 StopType 是否已赋值
                     * @return StopType 是否已赋值
                     * 
                     */
                    bool StopTypeHasBeenSet() const;

                private:

                    /**
                     * 作业Id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 停止类型，1 停止 2 暂停
                     */
                    int64_t m_stopType;
                    bool m_stopTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_STOPJOBDESCRIPTION_H_
