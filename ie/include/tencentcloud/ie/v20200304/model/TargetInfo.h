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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_TARGETINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_TARGETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/SegmentInfo.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 输出文件信息
                */
                class TargetInfo : public AbstractModel
                {
                public:
                    TargetInfo();
                    ~TargetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标文件名
                     * @return FileName 目标文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置目标文件名
                     * @param _fileName 目标文件名
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
                     * 获取目标文件切片信息
                     * @return SegmentInfo 目标文件切片信息
                     * 
                     */
                    SegmentInfo GetSegmentInfo() const;

                    /**
                     * 设置目标文件切片信息
                     * @param _segmentInfo 目标文件切片信息
                     * 
                     */
                    void SetSegmentInfo(const SegmentInfo& _segmentInfo);

                    /**
                     * 判断参数 SegmentInfo 是否已赋值
                     * @return SegmentInfo 是否已赋值
                     * 
                     */
                    bool SegmentInfoHasBeenSet() const;

                private:

                    /**
                     * 目标文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 目标文件切片信息
                     */
                    SegmentInfo m_segmentInfo;
                    bool m_segmentInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_TARGETINFO_H_
