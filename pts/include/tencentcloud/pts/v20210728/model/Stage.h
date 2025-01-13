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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_STAGE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_STAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 分阶段施压时，对单个阶段的配置
                */
                class Stage : public AbstractModel
                {
                public:
                    Stage();
                    ~Stage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取施压时间
                     * @return DurationSeconds 施压时间
                     * 
                     */
                    int64_t GetDurationSeconds() const;

                    /**
                     * 设置施压时间
                     * @param _durationSeconds 施压时间
                     * 
                     */
                    void SetDurationSeconds(const int64_t& _durationSeconds);

                    /**
                     * 判断参数 DurationSeconds 是否已赋值
                     * @return DurationSeconds 是否已赋值
                     * 
                     */
                    bool DurationSecondsHasBeenSet() const;

                    /**
                     * 获取虚拟用户数
                     * @return TargetVirtualUsers 虚拟用户数
                     * 
                     */
                    int64_t GetTargetVirtualUsers() const;

                    /**
                     * 设置虚拟用户数
                     * @param _targetVirtualUsers 虚拟用户数
                     * 
                     */
                    void SetTargetVirtualUsers(const int64_t& _targetVirtualUsers);

                    /**
                     * 判断参数 TargetVirtualUsers 是否已赋值
                     * @return TargetVirtualUsers 是否已赋值
                     * 
                     */
                    bool TargetVirtualUsersHasBeenSet() const;

                private:

                    /**
                     * 施压时间
                     */
                    int64_t m_durationSeconds;
                    bool m_durationSecondsHasBeenSet;

                    /**
                     * 虚拟用户数
                     */
                    int64_t m_targetVirtualUsers;
                    bool m_targetVirtualUsersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_STAGE_H_
