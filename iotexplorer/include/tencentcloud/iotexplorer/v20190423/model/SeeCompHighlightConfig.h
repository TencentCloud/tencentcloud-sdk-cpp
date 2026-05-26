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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEECOMPHIGHLIGHTCONFIG_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEECOMPHIGHLIGHTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeSee 视频语义浓缩配置
                */
                class SeeCompHighlightConfig : public AbstractModel
                {
                public:
                    SeeCompHighlightConfig();
                    ~SeeCompHighlightConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否禁用视频浓缩
                     * @return DisableHighlight 是否禁用视频浓缩
                     * 
                     */
                    bool GetDisableHighlight() const;

                    /**
                     * 设置是否禁用视频浓缩
                     * @param _disableHighlight 是否禁用视频浓缩
                     * 
                     */
                    void SetDisableHighlight(const bool& _disableHighlight);

                    /**
                     * 判断参数 DisableHighlight 是否已赋值
                     * @return DisableHighlight 是否已赋值
                     * 
                     */
                    bool DisableHighlightHasBeenSet() const;

                    /**
                     * 获取包含在浓缩结果中的目标类别。可选值：

- `person`：人
- `pet`：宠物
- `vehicle`：车辆
                     * @return DetectTypes 包含在浓缩结果中的目标类别。可选值：

- `person`：人
- `pet`：宠物
- `vehicle`：车辆
                     * 
                     */
                    std::vector<std::string> GetDetectTypes() const;

                    /**
                     * 设置包含在浓缩结果中的目标类别。可选值：

- `person`：人
- `pet`：宠物
- `vehicle`：车辆
                     * @param _detectTypes 包含在浓缩结果中的目标类别。可选值：

- `person`：人
- `pet`：宠物
- `vehicle`：车辆
                     * 
                     */
                    void SetDetectTypes(const std::vector<std::string>& _detectTypes);

                    /**
                     * 判断参数 DetectTypes 是否已赋值
                     * @return DetectTypes 是否已赋值
                     * 
                     */
                    bool DetectTypesHasBeenSet() const;

                    /**
                     * 获取指定是否返回浓缩视频的摘要文本
                     * @return EnableSummary 指定是否返回浓缩视频的摘要文本
                     * 
                     */
                    bool GetEnableSummary() const;

                    /**
                     * 设置指定是否返回浓缩视频的摘要文本
                     * @param _enableSummary 指定是否返回浓缩视频的摘要文本
                     * 
                     */
                    void SetEnableSummary(const bool& _enableSummary);

                    /**
                     * 判断参数 EnableSummary 是否已赋值
                     * @return EnableSummary 是否已赋值
                     * 
                     */
                    bool EnableSummaryHasBeenSet() const;

                    /**
                     * 获取指定返回的关键帧图像数量
                     * @return KeyFramesNum 指定返回的关键帧图像数量
                     * 
                     */
                    int64_t GetKeyFramesNum() const;

                    /**
                     * 设置指定返回的关键帧图像数量
                     * @param _keyFramesNum 指定返回的关键帧图像数量
                     * 
                     */
                    void SetKeyFramesNum(const int64_t& _keyFramesNum);

                    /**
                     * 判断参数 KeyFramesNum 是否已赋值
                     * @return KeyFramesNum 是否已赋值
                     * 
                     */
                    bool KeyFramesNumHasBeenSet() const;

                private:

                    /**
                     * 是否禁用视频浓缩
                     */
                    bool m_disableHighlight;
                    bool m_disableHighlightHasBeenSet;

                    /**
                     * 包含在浓缩结果中的目标类别。可选值：

- `person`：人
- `pet`：宠物
- `vehicle`：车辆
                     */
                    std::vector<std::string> m_detectTypes;
                    bool m_detectTypesHasBeenSet;

                    /**
                     * 指定是否返回浓缩视频的摘要文本
                     */
                    bool m_enableSummary;
                    bool m_enableSummaryHasBeenSet;

                    /**
                     * 指定返回的关键帧图像数量
                     */
                    int64_t m_keyFramesNum;
                    bool m_keyFramesNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEECOMPHIGHLIGHTCONFIG_H_
