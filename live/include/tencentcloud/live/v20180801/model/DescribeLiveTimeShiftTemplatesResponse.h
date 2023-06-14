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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETIMESHIFTTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETIMESHIFTTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/TimeShiftTemplate.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveTimeShiftTemplates返回参数结构体
                */
                class DescribeLiveTimeShiftTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeLiveTimeShiftTemplatesResponse();
                    ~DescribeLiveTimeShiftTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取直播时移模板信息。
                     * @return Templates 直播时移模板信息。
                     * 
                     */
                    std::vector<TimeShiftTemplate> GetTemplates() const;

                    /**
                     * 判断参数 Templates 是否已赋值
                     * @return Templates 是否已赋值
                     * 
                     */
                    bool TemplatesHasBeenSet() const;

                private:

                    /**
                     * 直播时移模板信息。
                     */
                    std::vector<TimeShiftTemplate> m_templates;
                    bool m_templatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETIMESHIFTTEMPLATESRESPONSE_H_
