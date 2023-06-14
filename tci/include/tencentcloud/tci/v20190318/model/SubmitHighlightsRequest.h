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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITHIGHLIGHTSREQUEST_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITHIGHLIGHTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/HLFunction.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * SubmitHighlights请求参数结构体
                */
                class SubmitHighlightsRequest : public AbstractModel
                {
                public:
                    SubmitHighlightsRequest();
                    ~SubmitHighlightsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取表情配置开关项。
                     * @return Functions 表情配置开关项。
                     * 
                     */
                    HLFunction GetFunctions() const;

                    /**
                     * 设置表情配置开关项。
                     * @param _functions 表情配置开关项。
                     * 
                     */
                    void SetFunctions(const HLFunction& _functions);

                    /**
                     * 判断参数 Functions 是否已赋值
                     * @return Functions 是否已赋值
                     * 
                     */
                    bool FunctionsHasBeenSet() const;

                    /**
                     * 获取视频url。
                     * @return FileContent 视频url。
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置视频url。
                     * @param _fileContent 视频url。
                     * 
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                    /**
                     * 获取视频类型及来源，目前只支持点播类型："vod_url"。
                     * @return FileType 视频类型及来源，目前只支持点播类型："vod_url"。
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置视频类型及来源，目前只支持点播类型："vod_url"。
                     * @param _fileType 视频类型及来源，目前只支持点播类型："vod_url"。
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
                     * 获取需要检索的人脸合集库，不在库中的人脸将不参与精彩集锦。
                     * @return LibIds 需要检索的人脸合集库，不在库中的人脸将不参与精彩集锦。
                     * 
                     */
                    std::vector<std::string> GetLibIds() const;

                    /**
                     * 设置需要检索的人脸合集库，不在库中的人脸将不参与精彩集锦。
                     * @param _libIds 需要检索的人脸合集库，不在库中的人脸将不参与精彩集锦。
                     * 
                     */
                    void SetLibIds(const std::vector<std::string>& _libIds);

                    /**
                     * 判断参数 LibIds 是否已赋值
                     * @return LibIds 是否已赋值
                     * 
                     */
                    bool LibIdsHasBeenSet() const;

                    /**
                     * 获取视频处理的抽帧间隔，单位毫秒。建议留空。
                     * @return FrameInterval 视频处理的抽帧间隔，单位毫秒。建议留空。
                     * 
                     */
                    int64_t GetFrameInterval() const;

                    /**
                     * 设置视频处理的抽帧间隔，单位毫秒。建议留空。
                     * @param _frameInterval 视频处理的抽帧间隔，单位毫秒。建议留空。
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
                     * 获取关键词语言类型，0为英文，1为中文。
                     * @return KeywordsLanguage 关键词语言类型，0为英文，1为中文。
                     * 
                     */
                    int64_t GetKeywordsLanguage() const;

                    /**
                     * 设置关键词语言类型，0为英文，1为中文。
                     * @param _keywordsLanguage 关键词语言类型，0为英文，1为中文。
                     * 
                     */
                    void SetKeywordsLanguage(const int64_t& _keywordsLanguage);

                    /**
                     * 判断参数 KeywordsLanguage 是否已赋值
                     * @return KeywordsLanguage 是否已赋值
                     * 
                     */
                    bool KeywordsLanguageHasBeenSet() const;

                    /**
                     * 获取关键词数组，当且仅当Funtions中的EnableKeywordWonderfulTime为true时有意义，匹配相应的关键字。
                     * @return KeywordsStrings 关键词数组，当且仅当Funtions中的EnableKeywordWonderfulTime为true时有意义，匹配相应的关键字。
                     * 
                     */
                    std::vector<std::string> GetKeywordsStrings() const;

                    /**
                     * 设置关键词数组，当且仅当Funtions中的EnableKeywordWonderfulTime为true时有意义，匹配相应的关键字。
                     * @param _keywordsStrings 关键词数组，当且仅当Funtions中的EnableKeywordWonderfulTime为true时有意义，匹配相应的关键字。
                     * 
                     */
                    void SetKeywordsStrings(const std::vector<std::string>& _keywordsStrings);

                    /**
                     * 判断参数 KeywordsStrings 是否已赋值
                     * @return KeywordsStrings 是否已赋值
                     * 
                     */
                    bool KeywordsStringsHasBeenSet() const;

                    /**
                     * 获取处理视频的总时长，单位毫秒。该值为0或未设置时，默认值两小时生效；当该值大于视频实际时长时，视频实际时长生效；当该值小于视频实际时长时，该值生效；当获取视频实际时长失败时，若该值设置则生效，否则默认值生效。建议留空。
                     * @return MaxVideoDuration 处理视频的总时长，单位毫秒。该值为0或未设置时，默认值两小时生效；当该值大于视频实际时长时，视频实际时长生效；当该值小于视频实际时长时，该值生效；当获取视频实际时长失败时，若该值设置则生效，否则默认值生效。建议留空。
                     * 
                     */
                    int64_t GetMaxVideoDuration() const;

                    /**
                     * 设置处理视频的总时长，单位毫秒。该值为0或未设置时，默认值两小时生效；当该值大于视频实际时长时，视频实际时长生效；当该值小于视频实际时长时，该值生效；当获取视频实际时长失败时，若该值设置则生效，否则默认值生效。建议留空。
                     * @param _maxVideoDuration 处理视频的总时长，单位毫秒。该值为0或未设置时，默认值两小时生效；当该值大于视频实际时长时，视频实际时长生效；当该值小于视频实际时长时，该值生效；当获取视频实际时长失败时，若该值设置则生效，否则默认值生效。建议留空。
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
                     * 获取人脸检索的相似度阈值，默认值0.89。建议留空。
                     * @return SimThreshold 人脸检索的相似度阈值，默认值0.89。建议留空。
                     * 
                     */
                    double GetSimThreshold() const;

                    /**
                     * 设置人脸检索的相似度阈值，默认值0.89。建议留空。
                     * @param _simThreshold 人脸检索的相似度阈值，默认值0.89。建议留空。
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
                     * 表情配置开关项。
                     */
                    HLFunction m_functions;
                    bool m_functionsHasBeenSet;

                    /**
                     * 视频url。
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * 视频类型及来源，目前只支持点播类型："vod_url"。
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 需要检索的人脸合集库，不在库中的人脸将不参与精彩集锦。
                     */
                    std::vector<std::string> m_libIds;
                    bool m_libIdsHasBeenSet;

                    /**
                     * 视频处理的抽帧间隔，单位毫秒。建议留空。
                     */
                    int64_t m_frameInterval;
                    bool m_frameIntervalHasBeenSet;

                    /**
                     * 关键词语言类型，0为英文，1为中文。
                     */
                    int64_t m_keywordsLanguage;
                    bool m_keywordsLanguageHasBeenSet;

                    /**
                     * 关键词数组，当且仅当Funtions中的EnableKeywordWonderfulTime为true时有意义，匹配相应的关键字。
                     */
                    std::vector<std::string> m_keywordsStrings;
                    bool m_keywordsStringsHasBeenSet;

                    /**
                     * 处理视频的总时长，单位毫秒。该值为0或未设置时，默认值两小时生效；当该值大于视频实际时长时，视频实际时长生效；当该值小于视频实际时长时，该值生效；当获取视频实际时长失败时，若该值设置则生效，否则默认值生效。建议留空。
                     */
                    int64_t m_maxVideoDuration;
                    bool m_maxVideoDurationHasBeenSet;

                    /**
                     * 人脸检索的相似度阈值，默认值0.89。建议留空。
                     */
                    double m_simThreshold;
                    bool m_simThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITHIGHLIGHTSREQUEST_H_
