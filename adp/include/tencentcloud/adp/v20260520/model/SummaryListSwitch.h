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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SUMMARYLISTSWITCH_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SUMMARYLISTSWITCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 摘要列表查询通用开关配置
                */
                class SummaryListSwitch : public AbstractModel
                {
                public:
                    SummaryListSwitch();
                    ~SummaryListSwitch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否显示元数据</p>
                     * @return ShowMetadataEnabled <p>是否显示元数据</p>
                     * 
                     */
                    bool GetShowMetadataEnabled() const;

                    /**
                     * 设置<p>是否显示元数据</p>
                     * @param _showMetadataEnabled <p>是否显示元数据</p>
                     * 
                     */
                    void SetShowMetadataEnabled(const bool& _showMetadataEnabled);

                    /**
                     * 判断参数 ShowMetadataEnabled 是否已赋值
                     * @return ShowMetadataEnabled 是否已赋值
                     * 
                     */
                    bool ShowMetadataEnabledHasBeenSet() const;

                private:

                    /**
                     * <p>是否显示元数据</p>
                     */
                    bool m_showMetadataEnabled;
                    bool m_showMetadataEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SUMMARYLISTSWITCH_H_
