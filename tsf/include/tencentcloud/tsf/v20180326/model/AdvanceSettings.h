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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_ADVANCESETTINGS_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_ADVANCESETTINGS_H_

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
                * 高级选项设置
                */
                class AdvanceSettings : public AbstractModel
                {
                public:
                    AdvanceSettings();
                    ~AdvanceSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子任务单机并发数限制，默认值为2
                     * @return SubTaskConcurrency 子任务单机并发数限制，默认值为2
                     * 
                     */
                    int64_t GetSubTaskConcurrency() const;

                    /**
                     * 设置子任务单机并发数限制，默认值为2
                     * @param _subTaskConcurrency 子任务单机并发数限制，默认值为2
                     * 
                     */
                    void SetSubTaskConcurrency(const int64_t& _subTaskConcurrency);

                    /**
                     * 判断参数 SubTaskConcurrency 是否已赋值
                     * @return SubTaskConcurrency 是否已赋值
                     * 
                     */
                    bool SubTaskConcurrencyHasBeenSet() const;

                private:

                    /**
                     * 子任务单机并发数限制，默认值为2
                     */
                    int64_t m_subTaskConcurrency;
                    bool m_subTaskConcurrencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_ADVANCESETTINGS_H_
