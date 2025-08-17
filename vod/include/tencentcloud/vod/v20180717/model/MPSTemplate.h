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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSTEMPLATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * MPS 任务模板详情。
                */
                class MPSTemplate : public AbstractModel
                {
                public:
                    MPSTemplate();
                    ~MPSTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MPS 模板的类型。取值：
<li>Transcode: 转码模板。</li>
                     * @return TaskType MPS 模板的类型。取值：
<li>Transcode: 转码模板。</li>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置MPS 模板的类型。取值：
<li>Transcode: 转码模板。</li>
                     * @param _taskType MPS 模板的类型。取值：
<li>Transcode: 转码模板。</li>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取MPS 任务模板详情内容。
示例：{"Definition":24214,"Name":"test","Comment":"","Type":"Preset","EnhanceConfig":{"VideoEnhance":{"FrameRate":{"Switch":"ON","Fps":50},"SuperResolution":{"Switch":"ON","Type":"lq"}}}}
                     * @return MPSTemplateInfo MPS 任务模板详情内容。
示例：{"Definition":24214,"Name":"test","Comment":"","Type":"Preset","EnhanceConfig":{"VideoEnhance":{"FrameRate":{"Switch":"ON","Fps":50},"SuperResolution":{"Switch":"ON","Type":"lq"}}}}
                     * 
                     */
                    std::string GetMPSTemplateInfo() const;

                    /**
                     * 设置MPS 任务模板详情内容。
示例：{"Definition":24214,"Name":"test","Comment":"","Type":"Preset","EnhanceConfig":{"VideoEnhance":{"FrameRate":{"Switch":"ON","Fps":50},"SuperResolution":{"Switch":"ON","Type":"lq"}}}}
                     * @param _mPSTemplateInfo MPS 任务模板详情内容。
示例：{"Definition":24214,"Name":"test","Comment":"","Type":"Preset","EnhanceConfig":{"VideoEnhance":{"FrameRate":{"Switch":"ON","Fps":50},"SuperResolution":{"Switch":"ON","Type":"lq"}}}}
                     * 
                     */
                    void SetMPSTemplateInfo(const std::string& _mPSTemplateInfo);

                    /**
                     * 判断参数 MPSTemplateInfo 是否已赋值
                     * @return MPSTemplateInfo 是否已赋值
                     * 
                     */
                    bool MPSTemplateInfoHasBeenSet() const;

                private:

                    /**
                     * MPS 模板的类型。取值：
<li>Transcode: 转码模板。</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * MPS 任务模板详情内容。
示例：{"Definition":24214,"Name":"test","Comment":"","Type":"Preset","EnhanceConfig":{"VideoEnhance":{"FrameRate":{"Switch":"ON","Fps":50},"SuperResolution":{"Switch":"ON","Type":"lq"}}}}
                     */
                    std::string m_mPSTemplateInfo;
                    bool m_mPSTemplateInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSTEMPLATE_H_
