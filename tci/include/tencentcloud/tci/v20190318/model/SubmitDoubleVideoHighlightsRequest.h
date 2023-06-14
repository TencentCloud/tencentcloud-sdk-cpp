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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITDOUBLEVIDEOHIGHLIGHTSREQUEST_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITDOUBLEVIDEOHIGHLIGHTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/DoubleVideoFunction.h>
#include <tencentcloud/tci/v20190318/model/PersonInfo.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * SubmitDoubleVideoHighlights请求参数结构体
                */
                class SubmitDoubleVideoHighlightsRequest : public AbstractModel
                {
                public:
                    SubmitDoubleVideoHighlightsRequest();
                    ~SubmitDoubleVideoHighlightsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取学生视频url
                     * @return FileContent 学生视频url
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置学生视频url
                     * @param _fileContent 学生视频url
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
                     * 获取需要检索的人脸合集库，不在库中的人脸将不参与精彩集锦；目前仅支持输入一个人脸库。
                     * @return LibIds 需要检索的人脸合集库，不在库中的人脸将不参与精彩集锦；目前仅支持输入一个人脸库。
                     * 
                     */
                    std::vector<std::string> GetLibIds() const;

                    /**
                     * 设置需要检索的人脸合集库，不在库中的人脸将不参与精彩集锦；目前仅支持输入一个人脸库。
                     * @param _libIds 需要检索的人脸合集库，不在库中的人脸将不参与精彩集锦；目前仅支持输入一个人脸库。
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
                     * 获取详细功能开关配置项
                     * @return Functions 详细功能开关配置项
                     * 
                     */
                    DoubleVideoFunction GetFunctions() const;

                    /**
                     * 设置详细功能开关配置项
                     * @param _functions 详细功能开关配置项
                     * 
                     */
                    void SetFunctions(const DoubleVideoFunction& _functions);

                    /**
                     * 判断参数 Functions 是否已赋值
                     * @return Functions 是否已赋值
                     * 
                     */
                    bool FunctionsHasBeenSet() const;

                    /**
                     * 获取需要匹配的人员信息列表。
                     * @return PersonInfoList 需要匹配的人员信息列表。
                     * 
                     */
                    std::vector<PersonInfo> GetPersonInfoList() const;

                    /**
                     * 设置需要匹配的人员信息列表。
                     * @param _personInfoList 需要匹配的人员信息列表。
                     * 
                     */
                    void SetPersonInfoList(const std::vector<PersonInfo>& _personInfoList);

                    /**
                     * 判断参数 PersonInfoList 是否已赋值
                     * @return PersonInfoList 是否已赋值
                     * 
                     */
                    bool PersonInfoListHasBeenSet() const;

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
                     * 获取旧版本需要匹配的人员信息列表。
                     * @return PersonIds 旧版本需要匹配的人员信息列表。
                     * 
                     */
                    std::vector<std::string> GetPersonIds() const;

                    /**
                     * 设置旧版本需要匹配的人员信息列表。
                     * @param _personIds 旧版本需要匹配的人员信息列表。
                     * 
                     */
                    void SetPersonIds(const std::vector<std::string>& _personIds);

                    /**
                     * 判断参数 PersonIds 是否已赋值
                     * @return PersonIds 是否已赋值
                     * 
                     */
                    bool PersonIdsHasBeenSet() const;

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

                    /**
                     * 获取老师视频url
                     * @return TeacherFileContent 老师视频url
                     * 
                     */
                    std::string GetTeacherFileContent() const;

                    /**
                     * 设置老师视频url
                     * @param _teacherFileContent 老师视频url
                     * 
                     */
                    void SetTeacherFileContent(const std::string& _teacherFileContent);

                    /**
                     * 判断参数 TeacherFileContent 是否已赋值
                     * @return TeacherFileContent 是否已赋值
                     * 
                     */
                    bool TeacherFileContentHasBeenSet() const;

                private:

                    /**
                     * 学生视频url
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * 需要检索的人脸合集库，不在库中的人脸将不参与精彩集锦；目前仅支持输入一个人脸库。
                     */
                    std::vector<std::string> m_libIds;
                    bool m_libIdsHasBeenSet;

                    /**
                     * 详细功能开关配置项
                     */
                    DoubleVideoFunction m_functions;
                    bool m_functionsHasBeenSet;

                    /**
                     * 需要匹配的人员信息列表。
                     */
                    std::vector<PersonInfo> m_personInfoList;
                    bool m_personInfoListHasBeenSet;

                    /**
                     * 视频处理的抽帧间隔，单位毫秒。建议留空。
                     */
                    int64_t m_frameInterval;
                    bool m_frameIntervalHasBeenSet;

                    /**
                     * 旧版本需要匹配的人员信息列表。
                     */
                    std::vector<std::string> m_personIds;
                    bool m_personIdsHasBeenSet;

                    /**
                     * 人脸检索的相似度阈值，默认值0.89。建议留空。
                     */
                    double m_simThreshold;
                    bool m_simThresholdHasBeenSet;

                    /**
                     * 老师视频url
                     */
                    std::string m_teacherFileContent;
                    bool m_teacherFileContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITDOUBLEVIDEOHIGHLIGHTSREQUEST_H_
