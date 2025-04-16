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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDLPFILEDETECTRESULTDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDLPFILEDETECTRESULTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 查询文件检测结果响应数据
                */
                class DescribeDLPFileDetectResultData : public AbstractModel
                {
                public:
                    DescribeDLPFileDetectResultData();
                    ~DescribeDLPFileDetectResultData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取提交任务时的文件md5
                     * @return FileMd5 提交任务时的文件md5
                     * 
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 设置提交任务时的文件md5
                     * @param _fileMd5 提交任务时的文件md5
                     * 
                     */
                    void SetFileMd5(const std::string& _fileMd5);

                    /**
                     * 判断参数 FileMd5 是否已赋值
                     * @return FileMd5 是否已赋值
                     * 
                     */
                    bool FileMd5HasBeenSet() const;

                    /**
                     * 获取提交任务时的文件名
                     * @return FileName 提交任务时的文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置提交任务时的文件名
                     * @param _fileName 提交任务时的文件名
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
                     * 获取状态：等待检测->正在检测->检测失败/检测成功。或任务不存在
                     * @return Status 状态：等待检测->正在检测->检测失败/检测成功。或任务不存在
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态：等待检测->正在检测->检测失败/检测成功。或任务不存在
                     * @param _status 状态：等待检测->正在检测->检测失败/检测成功。或任务不存在
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取文件检测结果，json字符串。
                     * @return DetectResult 文件检测结果，json字符串。
                     * 
                     */
                    std::string GetDetectResult() const;

                    /**
                     * 设置文件检测结果，json字符串。
                     * @param _detectResult 文件检测结果，json字符串。
                     * 
                     */
                    void SetDetectResult(const std::string& _detectResult);

                    /**
                     * 判断参数 DetectResult 是否已赋值
                     * @return DetectResult 是否已赋值
                     * 
                     */
                    bool DetectResultHasBeenSet() const;

                private:

                    /**
                     * 提交任务时的文件md5
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * 提交任务时的文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 状态：等待检测->正在检测->检测失败/检测成功。或任务不存在
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 文件检测结果，json字符串。
                     */
                    std::string m_detectResult;
                    bool m_detectResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDLPFILEDETECTRESULTDATA_H_
