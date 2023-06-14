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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_MEDIATARGETINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_MEDIATARGETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/TargetVideoInfo.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 目标媒体信息。
                */
                class MediaTargetInfo : public AbstractModel
                {
                public:
                    MediaTargetInfo();
                    ~MediaTargetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标文件名，不能带特殊字符（如/等），无需后缀名，最长200字符。

注1：部分子服务支持占位符，形式为： {parameter}
预设parameter有：
index：序号；
                     * @return FileName 目标文件名，不能带特殊字符（如/等），无需后缀名，最长200字符。

注1：部分子服务支持占位符，形式为： {parameter}
预设parameter有：
index：序号；
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置目标文件名，不能带特殊字符（如/等），无需后缀名，最长200字符。

注1：部分子服务支持占位符，形式为： {parameter}
预设parameter有：
index：序号；
                     * @param _fileName 目标文件名，不能带特殊字符（如/等），无需后缀名，最长200字符。

注1：部分子服务支持占位符，形式为： {parameter}
预设parameter有：
index：序号；
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取媒体封装格式，最长5字符，具体格式支持根据子任务确定。
                     * @return Format 媒体封装格式，最长5字符，具体格式支持根据子任务确定。
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置媒体封装格式，最长5字符，具体格式支持根据子任务确定。
                     * @param _format 媒体封装格式，最长5字符，具体格式支持根据子任务确定。
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取视频流信息。
                     * @return TargetVideoInfo 视频流信息。
                     * 
                     */
                    TargetVideoInfo GetTargetVideoInfo() const;

                    /**
                     * 设置视频流信息。
                     * @param _targetVideoInfo 视频流信息。
                     * 
                     */
                    void SetTargetVideoInfo(const TargetVideoInfo& _targetVideoInfo);

                    /**
                     * 判断参数 TargetVideoInfo 是否已赋值
                     * @return TargetVideoInfo 是否已赋值
                     * 
                     */
                    bool TargetVideoInfoHasBeenSet() const;

                    /**
                     * 获取【不再使用】
                     * @return ResultListSaveType 【不再使用】
                     * 
                     */
                    std::string GetResultListSaveType() const;

                    /**
                     * 设置【不再使用】
                     * @param _resultListSaveType 【不再使用】
                     * 
                     */
                    void SetResultListSaveType(const std::string& _resultListSaveType);

                    /**
                     * 判断参数 ResultListSaveType 是否已赋值
                     * @return ResultListSaveType 是否已赋值
                     * 
                     */
                    bool ResultListSaveTypeHasBeenSet() const;

                private:

                    /**
                     * 目标文件名，不能带特殊字符（如/等），无需后缀名，最长200字符。

注1：部分子服务支持占位符，形式为： {parameter}
预设parameter有：
index：序号；
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 媒体封装格式，最长5字符，具体格式支持根据子任务确定。
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 视频流信息。
                     */
                    TargetVideoInfo m_targetVideoInfo;
                    bool m_targetVideoInfoHasBeenSet;

                    /**
                     * 【不再使用】
                     */
                    std::string m_resultListSaveType;
                    bool m_resultListSaveTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_MEDIATARGETINFO_H_
