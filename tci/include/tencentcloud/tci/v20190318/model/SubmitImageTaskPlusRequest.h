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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITIMAGETASKPLUSREQUEST_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITIMAGETASKPLUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/ImageTaskFunction.h>
#include <tencentcloud/tci/v20190318/model/LightStandard.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * SubmitImageTaskPlus请求参数结构体
                */
                class SubmitImageTaskPlusRequest : public AbstractModel
                {
                public:
                    SubmitImageTaskPlusRequest();
                    ~SubmitImageTaskPlusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取输入分析对象内容，输入数据格式参考FileType参数释义
                     * @return FileContent 输入分析对象内容，输入数据格式参考FileType参数释义
                     * 
                     */
                    std::vector<std::string> GetFileContent() const;

                    /**
                     * 设置输入分析对象内容，输入数据格式参考FileType参数释义
                     * @param _fileContent 输入分析对象内容，输入数据格式参考FileType参数释义
                     * 
                     */
                    void SetFileContent(const std::vector<std::string>& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                    /**
                     * 获取输入分析对象类型，picture：二进制图片的 base64 编码字符串，picture_url:图片地址，vod_url：视频地址，live_url：直播地址
                     * @return FileType 输入分析对象类型，picture：二进制图片的 base64 编码字符串，picture_url:图片地址，vod_url：视频地址，live_url：直播地址
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置输入分析对象类型，picture：二进制图片的 base64 编码字符串，picture_url:图片地址，vod_url：视频地址，live_url：直播地址
                     * @param _fileType 输入分析对象类型，picture：二进制图片的 base64 编码字符串，picture_url:图片地址，vod_url：视频地址，live_url：直播地址
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取任务控制选项
                     * @return Functions 任务控制选项
                     * 
                     */
                    ImageTaskFunction GetFunctions() const;

                    /**
                     * 设置任务控制选项
                     * @param _functions 任务控制选项
                     * 
                     */
                    void SetFunctions(const ImageTaskFunction& _functions);

                    /**
                     * 判断参数 Functions 是否已赋值
                     * @return Functions 是否已赋值
                     * 
                     */
                    bool FunctionsHasBeenSet() const;

                    /**
                     * 获取光照标准列表
                     * @return LightStandardSet 光照标准列表
                     * 
                     */
                    std::vector<LightStandard> GetLightStandardSet() const;

                    /**
                     * 设置光照标准列表
                     * @param _lightStandardSet 光照标准列表
                     * 
                     */
                    void SetLightStandardSet(const std::vector<LightStandard>& _lightStandardSet);

                    /**
                     * 判断参数 LightStandardSet 是否已赋值
                     * @return LightStandardSet 是否已赋值
                     * 
                     */
                    bool LightStandardSetHasBeenSet() const;

                    /**
                     * 获取抽帧的时间间隔，单位毫秒，默认值1000，保留字段，当前不支持填写。
                     * @return FrameInterval 抽帧的时间间隔，单位毫秒，默认值1000，保留字段，当前不支持填写。
                     * 
                     */
                    int64_t GetFrameInterval() const;

                    /**
                     * 设置抽帧的时间间隔，单位毫秒，默认值1000，保留字段，当前不支持填写。
                     * @param _frameInterval 抽帧的时间间隔，单位毫秒，默认值1000，保留字段，当前不支持填写。
                     * 
                     */
                    void SetFrameInterval(const int64_t& _frameInterval);

                    /**
                     * 判断参数 FrameInterval 是否已赋值
                     * @return FrameInterval 是否已赋值
                     * 
                     */
                    bool FrameIntervalHasBeenSet() const;

                    /**
                     * 获取查询人员库列表
                     * @return LibrarySet 查询人员库列表
                     * 
                     */
                    std::vector<std::string> GetLibrarySet() const;

                    /**
                     * 设置查询人员库列表
                     * @param _librarySet 查询人员库列表
                     * 
                     */
                    void SetLibrarySet(const std::vector<std::string>& _librarySet);

                    /**
                     * 判断参数 LibrarySet 是否已赋值
                     * @return LibrarySet 是否已赋值
                     * 
                     */
                    bool LibrarySetHasBeenSet() const;

                    /**
                     * 获取视频评估时间，单位秒，点播场景默认值为2小时（无法探测长度时）或完整视频，直播场景默认值为10分钟或直播提前结束
                     * @return MaxVideoDuration 视频评估时间，单位秒，点播场景默认值为2小时（无法探测长度时）或完整视频，直播场景默认值为10分钟或直播提前结束
                     * 
                     */
                    int64_t GetMaxVideoDuration() const;

                    /**
                     * 设置视频评估时间，单位秒，点播场景默认值为2小时（无法探测长度时）或完整视频，直播场景默认值为10分钟或直播提前结束
                     * @param _maxVideoDuration 视频评估时间，单位秒，点播场景默认值为2小时（无法探测长度时）或完整视频，直播场景默认值为10分钟或直播提前结束
                     * 
                     */
                    void SetMaxVideoDuration(const int64_t& _maxVideoDuration);

                    /**
                     * 判断参数 MaxVideoDuration 是否已赋值
                     * @return MaxVideoDuration 是否已赋值
                     * 
                     */
                    bool MaxVideoDurationHasBeenSet() const;

                    /**
                     * 获取人脸识别中的相似度阈值，默认值为0.89，保留字段，当前不支持填写。
                     * @return SimThreshold 人脸识别中的相似度阈值，默认值为0.89，保留字段，当前不支持填写。
                     * 
                     */
                    double GetSimThreshold() const;

                    /**
                     * 设置人脸识别中的相似度阈值，默认值为0.89，保留字段，当前不支持填写。
                     * @param _simThreshold 人脸识别中的相似度阈值，默认值为0.89，保留字段，当前不支持填写。
                     * 
                     */
                    void SetSimThreshold(const double& _simThreshold);

                    /**
                     * 判断参数 SimThreshold 是否已赋值
                     * @return SimThreshold 是否已赋值
                     * 
                     */
                    bool SimThresholdHasBeenSet() const;

                private:

                    /**
                     * 输入分析对象内容，输入数据格式参考FileType参数释义
                     */
                    std::vector<std::string> m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * 输入分析对象类型，picture：二进制图片的 base64 编码字符串，picture_url:图片地址，vod_url：视频地址，live_url：直播地址
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 任务控制选项
                     */
                    ImageTaskFunction m_functions;
                    bool m_functionsHasBeenSet;

                    /**
                     * 光照标准列表
                     */
                    std::vector<LightStandard> m_lightStandardSet;
                    bool m_lightStandardSetHasBeenSet;

                    /**
                     * 抽帧的时间间隔，单位毫秒，默认值1000，保留字段，当前不支持填写。
                     */
                    int64_t m_frameInterval;
                    bool m_frameIntervalHasBeenSet;

                    /**
                     * 查询人员库列表
                     */
                    std::vector<std::string> m_librarySet;
                    bool m_librarySetHasBeenSet;

                    /**
                     * 视频评估时间，单位秒，点播场景默认值为2小时（无法探测长度时）或完整视频，直播场景默认值为10分钟或直播提前结束
                     */
                    int64_t m_maxVideoDuration;
                    bool m_maxVideoDurationHasBeenSet;

                    /**
                     * 人脸识别中的相似度阈值，默认值为0.89，保留字段，当前不支持填写。
                     */
                    double m_simThreshold;
                    bool m_simThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITIMAGETASKPLUSREQUEST_H_
