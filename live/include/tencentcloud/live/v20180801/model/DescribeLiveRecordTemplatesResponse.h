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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVERECORDTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVERECORDTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/RecordTemplateInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveRecordTemplates返回参数结构体
                */
                class DescribeLiveRecordTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeLiveRecordTemplatesResponse();
                    ~DescribeLiveRecordTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取录制模板信息列表。
                     * @return Templates 录制模板信息列表。
                     * 
                     */
                    std::vector<RecordTemplateInfo> GetTemplates() const;

                    /**
                     * 判断参数 Templates 是否已赋值
                     * @return Templates 是否已赋值
                     * 
                     */
                    bool TemplatesHasBeenSet() const;

                private:

                    /**
                     * 录制模板信息列表。
                     */
                    std::vector<RecordTemplateInfo> m_templates;
                    bool m_templatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVERECORDTEMPLATESRESPONSE_H_
