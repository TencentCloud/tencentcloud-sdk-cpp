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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEECOMPREHENSIONCONFIG_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEECOMPREHENSIONCONFIG_H_

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
                * TWeSee 视觉理解配置
                */
                class SeeComprehensionConfig : public AbstractModel
                {
                public:
                    SeeComprehensionConfig();
                    ~SeeComprehensionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取拓展的目标及事件检测类别
                     * @return DetectTypes 拓展的目标及事件检测类别
                     * 
                     */
                    std::vector<std::string> GetDetectTypes() const;

                    /**
                     * 设置拓展的目标及事件检测类别
                     * @param _detectTypes 拓展的目标及事件检测类别
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
                     * 获取使该视频 / 图片录入搜索库，后续可进行搜索
                     * @return EnableSearch 使该视频 / 图片录入搜索库，后续可进行搜索
                     * 
                     */
                    bool GetEnableSearch() const;

                    /**
                     * 设置使该视频 / 图片录入搜索库，后续可进行搜索
                     * @param _enableSearch 使该视频 / 图片录入搜索库，后续可进行搜索
                     * 
                     */
                    void SetEnableSearch(const bool& _enableSearch);

                    /**
                     * 判断参数 EnableSearch 是否已赋值
                     * @return EnableSearch 是否已赋值
                     * 
                     */
                    bool EnableSearchHasBeenSet() const;

                    /**
                     * 获取主输出语言，可选值包括：
- `zh` 中文（默认值）
- `en` 英语
- `ja` 日语
- `ko` 韩文
- `pt-BR` 葡萄牙语（巴西）
- `th` 泰语
- `ms` 马来语
                     * @return OutputLang 主输出语言，可选值包括：
- `zh` 中文（默认值）
- `en` 英语
- `ja` 日语
- `ko` 韩文
- `pt-BR` 葡萄牙语（巴西）
- `th` 泰语
- `ms` 马来语
                     * 
                     */
                    std::string GetOutputLang() const;

                    /**
                     * 设置主输出语言，可选值包括：
- `zh` 中文（默认值）
- `en` 英语
- `ja` 日语
- `ko` 韩文
- `pt-BR` 葡萄牙语（巴西）
- `th` 泰语
- `ms` 马来语
                     * @param _outputLang 主输出语言，可选值包括：
- `zh` 中文（默认值）
- `en` 英语
- `ja` 日语
- `ko` 韩文
- `pt-BR` 葡萄牙语（巴西）
- `th` 泰语
- `ms` 马来语
                     * 
                     */
                    void SetOutputLang(const std::string& _outputLang);

                    /**
                     * 判断参数 OutputLang 是否已赋值
                     * @return OutputLang 是否已赋值
                     * 
                     */
                    bool OutputLangHasBeenSet() const;

                    /**
                     * 获取次选输出语言，可选值包括：
- `zh` 中文
- `en` 英语
- `ja` 日语
- `ko` 韩文
- `pt-BR` 葡萄牙语（巴西）
- `th` 泰语
- `ms` 马来语

                     * @return AlternativeOutputLang 次选输出语言，可选值包括：
- `zh` 中文
- `en` 英语
- `ja` 日语
- `ko` 韩文
- `pt-BR` 葡萄牙语（巴西）
- `th` 泰语
- `ms` 马来语

                     * 
                     */
                    std::string GetAlternativeOutputLang() const;

                    /**
                     * 设置次选输出语言，可选值包括：
- `zh` 中文
- `en` 英语
- `ja` 日语
- `ko` 韩文
- `pt-BR` 葡萄牙语（巴西）
- `th` 泰语
- `ms` 马来语

                     * @param _alternativeOutputLang 次选输出语言，可选值包括：
- `zh` 中文
- `en` 英语
- `ja` 日语
- `ko` 韩文
- `pt-BR` 葡萄牙语（巴西）
- `th` 泰语
- `ms` 马来语

                     * 
                     */
                    void SetAlternativeOutputLang(const std::string& _alternativeOutputLang);

                    /**
                     * 判断参数 AlternativeOutputLang 是否已赋值
                     * @return AlternativeOutputLang 是否已赋值
                     * 
                     */
                    bool AlternativeOutputLangHasBeenSet() const;

                    /**
                     * 获取多摄像头布局定义。可选值包括：

- 单摄（默认值）：`Single`

- 双摄（纵向排列）- 全部画面：`Vertical,Num=2,Index=0;1`
- 双摄（纵向排列）- 画面1：`Vertical,Num=2,Index=0`
- 双摄（纵向排列）- 画面2：`Vertical,Num=2,Index=1`

- 三摄（纵向排列）- 全部画面：`Vertical,Num=3,Index=0;1;2`
- 三摄（纵向排列）- 画面1：`Vertical,Num=3,Index=0`
- 三摄（纵向排列）- 画面2：`Vertical,Num=3,Index=1`
- 三摄（纵向排列）- 画面3：`Vertical,Num=3,Index=2`
- 三摄（纵向排列）- 画面1+2：`Vertical,Num=3,Index=0;1`
- 三摄（纵向排列）- 画面1+3：`Vertical,Num=3,Index=0;2`
- 三摄（纵向排列）- 画面2+3：`Vertical,Num=3,Index=1;2`
                     * @return MultiCameraLayout 多摄像头布局定义。可选值包括：

- 单摄（默认值）：`Single`

- 双摄（纵向排列）- 全部画面：`Vertical,Num=2,Index=0;1`
- 双摄（纵向排列）- 画面1：`Vertical,Num=2,Index=0`
- 双摄（纵向排列）- 画面2：`Vertical,Num=2,Index=1`

- 三摄（纵向排列）- 全部画面：`Vertical,Num=3,Index=0;1;2`
- 三摄（纵向排列）- 画面1：`Vertical,Num=3,Index=0`
- 三摄（纵向排列）- 画面2：`Vertical,Num=3,Index=1`
- 三摄（纵向排列）- 画面3：`Vertical,Num=3,Index=2`
- 三摄（纵向排列）- 画面1+2：`Vertical,Num=3,Index=0;1`
- 三摄（纵向排列）- 画面1+3：`Vertical,Num=3,Index=0;2`
- 三摄（纵向排列）- 画面2+3：`Vertical,Num=3,Index=1;2`
                     * 
                     */
                    std::string GetMultiCameraLayout() const;

                    /**
                     * 设置多摄像头布局定义。可选值包括：

- 单摄（默认值）：`Single`

- 双摄（纵向排列）- 全部画面：`Vertical,Num=2,Index=0;1`
- 双摄（纵向排列）- 画面1：`Vertical,Num=2,Index=0`
- 双摄（纵向排列）- 画面2：`Vertical,Num=2,Index=1`

- 三摄（纵向排列）- 全部画面：`Vertical,Num=3,Index=0;1;2`
- 三摄（纵向排列）- 画面1：`Vertical,Num=3,Index=0`
- 三摄（纵向排列）- 画面2：`Vertical,Num=3,Index=1`
- 三摄（纵向排列）- 画面3：`Vertical,Num=3,Index=2`
- 三摄（纵向排列）- 画面1+2：`Vertical,Num=3,Index=0;1`
- 三摄（纵向排列）- 画面1+3：`Vertical,Num=3,Index=0;2`
- 三摄（纵向排列）- 画面2+3：`Vertical,Num=3,Index=1;2`
                     * @param _multiCameraLayout 多摄像头布局定义。可选值包括：

- 单摄（默认值）：`Single`

- 双摄（纵向排列）- 全部画面：`Vertical,Num=2,Index=0;1`
- 双摄（纵向排列）- 画面1：`Vertical,Num=2,Index=0`
- 双摄（纵向排列）- 画面2：`Vertical,Num=2,Index=1`

- 三摄（纵向排列）- 全部画面：`Vertical,Num=3,Index=0;1;2`
- 三摄（纵向排列）- 画面1：`Vertical,Num=3,Index=0`
- 三摄（纵向排列）- 画面2：`Vertical,Num=3,Index=1`
- 三摄（纵向排列）- 画面3：`Vertical,Num=3,Index=2`
- 三摄（纵向排列）- 画面1+2：`Vertical,Num=3,Index=0;1`
- 三摄（纵向排列）- 画面1+3：`Vertical,Num=3,Index=0;2`
- 三摄（纵向排列）- 画面2+3：`Vertical,Num=3,Index=1;2`
                     * 
                     */
                    void SetMultiCameraLayout(const std::string& _multiCameraLayout);

                    /**
                     * 判断参数 MultiCameraLayout 是否已赋值
                     * @return MultiCameraLayout 是否已赋值
                     * 
                     */
                    bool MultiCameraLayoutHasBeenSet() const;

                    /**
                     * 获取最大处理的输入视频时长，单位：秒（仅对视频输入生效）
                     * @return MaxDuration 最大处理的输入视频时长，单位：秒（仅对视频输入生效）
                     * 
                     */
                    int64_t GetMaxDuration() const;

                    /**
                     * 设置最大处理的输入视频时长，单位：秒（仅对视频输入生效）
                     * @param _maxDuration 最大处理的输入视频时长，单位：秒（仅对视频输入生效）
                     * 
                     */
                    void SetMaxDuration(const int64_t& _maxDuration);

                    /**
                     * 判断参数 MaxDuration 是否已赋值
                     * @return MaxDuration 是否已赋值
                     * 
                     */
                    bool MaxDurationHasBeenSet() const;

                private:

                    /**
                     * 拓展的目标及事件检测类别
                     */
                    std::vector<std::string> m_detectTypes;
                    bool m_detectTypesHasBeenSet;

                    /**
                     * 使该视频 / 图片录入搜索库，后续可进行搜索
                     */
                    bool m_enableSearch;
                    bool m_enableSearchHasBeenSet;

                    /**
                     * 主输出语言，可选值包括：
- `zh` 中文（默认值）
- `en` 英语
- `ja` 日语
- `ko` 韩文
- `pt-BR` 葡萄牙语（巴西）
- `th` 泰语
- `ms` 马来语
                     */
                    std::string m_outputLang;
                    bool m_outputLangHasBeenSet;

                    /**
                     * 次选输出语言，可选值包括：
- `zh` 中文
- `en` 英语
- `ja` 日语
- `ko` 韩文
- `pt-BR` 葡萄牙语（巴西）
- `th` 泰语
- `ms` 马来语

                     */
                    std::string m_alternativeOutputLang;
                    bool m_alternativeOutputLangHasBeenSet;

                    /**
                     * 多摄像头布局定义。可选值包括：

- 单摄（默认值）：`Single`

- 双摄（纵向排列）- 全部画面：`Vertical,Num=2,Index=0;1`
- 双摄（纵向排列）- 画面1：`Vertical,Num=2,Index=0`
- 双摄（纵向排列）- 画面2：`Vertical,Num=2,Index=1`

- 三摄（纵向排列）- 全部画面：`Vertical,Num=3,Index=0;1;2`
- 三摄（纵向排列）- 画面1：`Vertical,Num=3,Index=0`
- 三摄（纵向排列）- 画面2：`Vertical,Num=3,Index=1`
- 三摄（纵向排列）- 画面3：`Vertical,Num=3,Index=2`
- 三摄（纵向排列）- 画面1+2：`Vertical,Num=3,Index=0;1`
- 三摄（纵向排列）- 画面1+3：`Vertical,Num=3,Index=0;2`
- 三摄（纵向排列）- 画面2+3：`Vertical,Num=3,Index=1;2`
                     */
                    std::string m_multiCameraLayout;
                    bool m_multiCameraLayoutHasBeenSet;

                    /**
                     * 最大处理的输入视频时长，单位：秒（仅对视频输入生效）
                     */
                    int64_t m_maxDuration;
                    bool m_maxDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEECOMPREHENSIONCONFIG_H_
