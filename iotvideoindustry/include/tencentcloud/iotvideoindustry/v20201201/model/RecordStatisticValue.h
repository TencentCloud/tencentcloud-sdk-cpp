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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_RECORDSTATISTICVALUE_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_RECORDSTATISTICVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * 大盘统计-录像存储统计 出参Value
                */
                class RecordStatisticValue : public AbstractModel
                {
                public:
                    RecordStatisticValue();
                    ~RecordStatisticValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取期望执行时间 秒
                     * @return ExpectTimeLen 期望执行时间 秒
                     * 
                     */
                    int64_t GetExpectTimeLen() const;

                    /**
                     * 设置期望执行时间 秒
                     * @param _expectTimeLen 期望执行时间 秒
                     * 
                     */
                    void SetExpectTimeLen(const int64_t& _expectTimeLen);

                    /**
                     * 判断参数 ExpectTimeLen 是否已赋值
                     * @return ExpectTimeLen 是否已赋值
                     * 
                     */
                    bool ExpectTimeLenHasBeenSet() const;

                    /**
                     * 获取实际执行时间 秒
                     * @return RecordTimeLen 实际执行时间 秒
                     * 
                     */
                    int64_t GetRecordTimeLen() const;

                    /**
                     * 设置实际执行时间 秒
                     * @param _recordTimeLen 实际执行时间 秒
                     * 
                     */
                    void SetRecordTimeLen(const int64_t& _recordTimeLen);

                    /**
                     * 判断参数 RecordTimeLen 是否已赋值
                     * @return RecordTimeLen 是否已赋值
                     * 
                     */
                    bool RecordTimeLenHasBeenSet() const;

                    /**
                     * 获取存储大小 G
                     * @return FileSize 存储大小 G
                     * 
                     */
                    double GetFileSize() const;

                    /**
                     * 设置存储大小 G
                     * @param _fileSize 存储大小 G
                     * 
                     */
                    void SetFileSize(const double& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                private:

                    /**
                     * 期望执行时间 秒
                     */
                    int64_t m_expectTimeLen;
                    bool m_expectTimeLenHasBeenSet;

                    /**
                     * 实际执行时间 秒
                     */
                    int64_t m_recordTimeLen;
                    bool m_recordTimeLenHasBeenSet;

                    /**
                     * 存储大小 G
                     */
                    double m_fileSize;
                    bool m_fileSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_RECORDSTATISTICVALUE_H_
