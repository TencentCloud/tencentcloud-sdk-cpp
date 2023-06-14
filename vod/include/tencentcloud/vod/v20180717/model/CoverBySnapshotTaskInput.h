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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COVERBYSNAPSHOTTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COVERBYSNAPSHOTTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/WatermarkInput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 对视频截图做封面任务输入参数类型
                */
                class CoverBySnapshotTaskInput : public AbstractModel
                {
                public:
                    CoverBySnapshotTaskInput();
                    ~CoverBySnapshotTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指定时间点截图模板 ID。
                     * @return Definition 指定时间点截图模板 ID。
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置指定时间点截图模板 ID。
                     * @param _definition 指定时间点截图模板 ID。
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取截图方式。包含：
<li>Time：依照时间点截图</li>
<li>Percent：依照百分比截图</li>
                     * @return PositionType 截图方式。包含：
<li>Time：依照时间点截图</li>
<li>Percent：依照百分比截图</li>
                     * 
                     */
                    std::string GetPositionType() const;

                    /**
                     * 设置截图方式。包含：
<li>Time：依照时间点截图</li>
<li>Percent：依照百分比截图</li>
                     * @param _positionType 截图方式。包含：
<li>Time：依照时间点截图</li>
<li>Percent：依照百分比截图</li>
                     * 
                     */
                    void SetPositionType(const std::string& _positionType);

                    /**
                     * 判断参数 PositionType 是否已赋值
                     * @return PositionType 是否已赋值
                     * 
                     */
                    bool PositionTypeHasBeenSet() const;

                    /**
                     * 获取截图位置：
<li>对于依照时间点截图，该值表示指定视频第几秒的截图作为封面</li>
<li>对于依照百分比截图，该值表示使用视频百分之多少的截图作为封面</li>
                     * @return PositionValue 截图位置：
<li>对于依照时间点截图，该值表示指定视频第几秒的截图作为封面</li>
<li>对于依照百分比截图，该值表示使用视频百分之多少的截图作为封面</li>
                     * 
                     */
                    double GetPositionValue() const;

                    /**
                     * 设置截图位置：
<li>对于依照时间点截图，该值表示指定视频第几秒的截图作为封面</li>
<li>对于依照百分比截图，该值表示使用视频百分之多少的截图作为封面</li>
                     * @param _positionValue 截图位置：
<li>对于依照时间点截图，该值表示指定视频第几秒的截图作为封面</li>
<li>对于依照百分比截图，该值表示使用视频百分之多少的截图作为封面</li>
                     * 
                     */
                    void SetPositionValue(const double& _positionValue);

                    /**
                     * 判断参数 PositionValue 是否已赋值
                     * @return PositionValue 是否已赋值
                     * 
                     */
                    bool PositionValueHasBeenSet() const;

                    /**
                     * 获取水印列表，支持多张图片或文字水印，最大可支持 10 张。
                     * @return WatermarkSet 水印列表，支持多张图片或文字水印，最大可支持 10 张。
                     * 
                     */
                    std::vector<WatermarkInput> GetWatermarkSet() const;

                    /**
                     * 设置水印列表，支持多张图片或文字水印，最大可支持 10 张。
                     * @param _watermarkSet 水印列表，支持多张图片或文字水印，最大可支持 10 张。
                     * 
                     */
                    void SetWatermarkSet(const std::vector<WatermarkInput>& _watermarkSet);

                    /**
                     * 判断参数 WatermarkSet 是否已赋值
                     * @return WatermarkSet 是否已赋值
                     * 
                     */
                    bool WatermarkSetHasBeenSet() const;

                private:

                    /**
                     * 指定时间点截图模板 ID。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 截图方式。包含：
<li>Time：依照时间点截图</li>
<li>Percent：依照百分比截图</li>
                     */
                    std::string m_positionType;
                    bool m_positionTypeHasBeenSet;

                    /**
                     * 截图位置：
<li>对于依照时间点截图，该值表示指定视频第几秒的截图作为封面</li>
<li>对于依照百分比截图，该值表示使用视频百分之多少的截图作为封面</li>
                     */
                    double m_positionValue;
                    bool m_positionValueHasBeenSet;

                    /**
                     * 水印列表，支持多张图片或文字水印，最大可支持 10 张。
                     */
                    std::vector<WatermarkInput> m_watermarkSet;
                    bool m_watermarkSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COVERBYSNAPSHOTTASKINPUT_H_
