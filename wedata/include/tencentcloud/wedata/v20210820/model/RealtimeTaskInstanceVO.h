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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_REALTIMETASKINSTANCEVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_REALTIMETASKINSTANCEVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 历史实例信息
                */
                class RealtimeTaskInstanceVO : public AbstractModel
                {
                public:
                    RealtimeTaskInstanceVO();
                    ~RealtimeTaskInstanceVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例生成时间</p>
                     * @return InstanceDate <p>实例生成时间</p>
                     * 
                     */
                    std::string GetInstanceDate() const;

                    /**
                     * 设置<p>实例生成时间</p>
                     * @param _instanceDate <p>实例生成时间</p>
                     * 
                     */
                    void SetInstanceDate(const std::string& _instanceDate);

                    /**
                     * 判断参数 InstanceDate 是否已赋值
                     * @return InstanceDate 是否已赋值
                     * 
                     */
                    bool InstanceDateHasBeenSet() const;

                    /**
                     * 获取<p>实例id</p>
                     * @return RunningOrderId <p>实例id</p>
                     * 
                     */
                    int64_t GetRunningOrderId() const;

                    /**
                     * 设置<p>实例id</p>
                     * @param _runningOrderId <p>实例id</p>
                     * 
                     */
                    void SetRunningOrderId(const int64_t& _runningOrderId);

                    /**
                     * 判断参数 RunningOrderId 是否已赋值
                     * @return RunningOrderId 是否已赋值
                     * 
                     */
                    bool RunningOrderIdHasBeenSet() const;

                private:

                    /**
                     * <p>实例生成时间</p>
                     */
                    std::string m_instanceDate;
                    bool m_instanceDateHasBeenSet;

                    /**
                     * <p>实例id</p>
                     */
                    int64_t m_runningOrderId;
                    bool m_runningOrderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_REALTIMETASKINSTANCEVO_H_
