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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_TIMELINEINFORMATION_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_TIMELINEINFORMATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/TimelineEvent.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 时间轴
                */
                class TimelineInformation : public AbstractModel
                {
                public:
                    TimelineInformation();
                    ~TimelineInformation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间轴
                     * @return Timeline 时间轴
                     * 
                     */
                    std::vector<TimelineEvent> GetTimeline() const;

                    /**
                     * 设置时间轴
                     * @param _timeline 时间轴
                     * 
                     */
                    void SetTimeline(const std::vector<TimelineEvent>& _timeline);

                    /**
                     * 判断参数 Timeline 是否已赋值
                     * @return Timeline 是否已赋值
                     * 
                     */
                    bool TimelineHasBeenSet() const;

                    /**
                     * 获取数据在原PDF文件中的第几页
                     * @return Page 数据在原PDF文件中的第几页
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置数据在原PDF文件中的第几页
                     * @param _page 数据在原PDF文件中的第几页
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                private:

                    /**
                     * 时间轴
                     */
                    std::vector<TimelineEvent> m_timeline;
                    bool m_timelineHasBeenSet;

                    /**
                     * 数据在原PDF文件中的第几页
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_TIMELINEINFORMATION_H_
