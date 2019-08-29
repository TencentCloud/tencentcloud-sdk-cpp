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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSAMPLESNAPSHOTTEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSAMPLESNAPSHOTTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ModifySampleSnapshotTemplate请求参数结构体
                */
                class ModifySampleSnapshotTemplateRequest : public AbstractModel
                {
                public:
                    ModifySampleSnapshotTemplateRequest();
                    ~ModifySampleSnapshotTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取采样截图模板唯一标识。
                     * @return Definition 采样截图模板唯一标识。
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置采样截图模板唯一标识。
                     * @param Definition 采样截图模板唯一标识。
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取采样截图模板名称，长度限制：64 个字符。
                     * @return Name 采样截图模板名称，长度限制：64 个字符。
                     */
                    std::string GetName() const;

                    /**
                     * 设置采样截图模板名称，长度限制：64 个字符。
                     * @param Name 采样截图模板名称，长度限制：64 个字符。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取图片宽度，取值范围： [128, 4096]，单位：px。
                     * @return Width 图片宽度，取值范围： [128, 4096]，单位：px。
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置图片宽度，取值范围： [128, 4096]，单位：px。
                     * @param Width 图片宽度，取值范围： [128, 4096]，单位：px。
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取图片高度，取值范围： [128, 4096]，单位：px。
                     * @return Height 图片高度，取值范围： [128, 4096]，单位：px。
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置图片高度，取值范围： [128, 4096]，单位：px。
                     * @param Height 图片高度，取值范围： [128, 4096]，单位：px。
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取采样截图类型，取值：
<li>Percent：按百分比。</li>
<li>Time：按时间间隔。</li>
                     * @return SampleType 采样截图类型，取值：
<li>Percent：按百分比。</li>
<li>Time：按时间间隔。</li>
                     */
                    std::string GetSampleType() const;

                    /**
                     * 设置采样截图类型，取值：
<li>Percent：按百分比。</li>
<li>Time：按时间间隔。</li>
                     * @param SampleType 采样截图类型，取值：
<li>Percent：按百分比。</li>
<li>Time：按时间间隔。</li>
                     */
                    void SetSampleType(const std::string& _sampleType);

                    /**
                     * 判断参数 SampleType 是否已赋值
                     * @return SampleType 是否已赋值
                     */
                    bool SampleTypeHasBeenSet() const;

                    /**
                     * 获取采样间隔。
<li>当 SampleType 为 Percent 时，指定采样间隔的百分比。</li>
<li>当 SampleType 为 Time 时，指定采样间隔的时间，单位为秒。</li>
                     * @return SampleInterval 采样间隔。
<li>当 SampleType 为 Percent 时，指定采样间隔的百分比。</li>
<li>当 SampleType 为 Time 时，指定采样间隔的时间，单位为秒。</li>
                     */
                    uint64_t GetSampleInterval() const;

                    /**
                     * 设置采样间隔。
<li>当 SampleType 为 Percent 时，指定采样间隔的百分比。</li>
<li>当 SampleType 为 Time 时，指定采样间隔的时间，单位为秒。</li>
                     * @param SampleInterval 采样间隔。
<li>当 SampleType 为 Percent 时，指定采样间隔的百分比。</li>
<li>当 SampleType 为 Time 时，指定采样间隔的时间，单位为秒。</li>
                     */
                    void SetSampleInterval(const uint64_t& _sampleInterval);

                    /**
                     * 判断参数 SampleInterval 是否已赋值
                     * @return SampleInterval 是否已赋值
                     */
                    bool SampleIntervalHasBeenSet() const;

                    /**
                     * 获取图片格式，取值为 jpg 和 png。
                     * @return Format 图片格式，取值为 jpg 和 png。
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置图片格式，取值为 jpg 和 png。
                     * @param Format 图片格式，取值为 jpg 和 png。
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取模板描述信息，长度限制：256 个字符。
                     * @return Comment 模板描述信息，长度限制：256 个字符。
                     */
                    std::string GetComment() const;

                    /**
                     * 设置模板描述信息，长度限制：256 个字符。
                     * @param Comment 模板描述信息，长度限制：256 个字符。
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * 采样截图模板唯一标识。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 采样截图模板名称，长度限制：64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 图片宽度，取值范围： [128, 4096]，单位：px。
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 图片高度，取值范围： [128, 4096]，单位：px。
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 采样截图类型，取值：
<li>Percent：按百分比。</li>
<li>Time：按时间间隔。</li>
                     */
                    std::string m_sampleType;
                    bool m_sampleTypeHasBeenSet;

                    /**
                     * 采样间隔。
<li>当 SampleType 为 Percent 时，指定采样间隔的百分比。</li>
<li>当 SampleType 为 Time 时，指定采样间隔的时间，单位为秒。</li>
                     */
                    uint64_t m_sampleInterval;
                    bool m_sampleIntervalHasBeenSet;

                    /**
                     * 图片格式，取值为 jpg 和 png。
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 模板描述信息，长度限制：256 个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSAMPLESNAPSHOTTEMPLATEREQUEST_H_
