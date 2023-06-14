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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_SEGMENTINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_SEGMENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 输出文件切片信息
                */
                class SegmentInfo : public AbstractModel
                {
                public:
                    SegmentInfo();
                    ~SegmentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取每个切片平均时长，默认10s。
                     * @return FragmentTime 每个切片平均时长，默认10s。
                     * 
                     */
                    int64_t GetFragmentTime() const;

                    /**
                     * 设置每个切片平均时长，默认10s。
                     * @param _fragmentTime 每个切片平均时长，默认10s。
                     * 
                     */
                    void SetFragmentTime(const int64_t& _fragmentTime);

                    /**
                     * 判断参数 FragmentTime 是否已赋值
                     * @return FragmentTime 是否已赋值
                     * 
                     */
                    bool FragmentTimeHasBeenSet() const;

                    /**
                     * 获取切片类型，可选项：hls，不填时默认hls。
                     * @return SegmentType 切片类型，可选项：hls，不填时默认hls。
                     * 
                     */
                    std::string GetSegmentType() const;

                    /**
                     * 设置切片类型，可选项：hls，不填时默认hls。
                     * @param _segmentType 切片类型，可选项：hls，不填时默认hls。
                     * 
                     */
                    void SetSegmentType(const std::string& _segmentType);

                    /**
                     * 判断参数 SegmentType 是否已赋值
                     * @return SegmentType 是否已赋值
                     * 
                     */
                    bool SegmentTypeHasBeenSet() const;

                    /**
                     * 获取切片文件名字。注意：
1.不填切片文件名时，默认按照按照如下格式命名：m3u8文件名{order}。
2.若填了切片文件名字，则会按照如下格式命名：用户指定文件名{order}。
                     * @return FragmentName 切片文件名字。注意：
1.不填切片文件名时，默认按照按照如下格式命名：m3u8文件名{order}。
2.若填了切片文件名字，则会按照如下格式命名：用户指定文件名{order}。
                     * 
                     */
                    std::string GetFragmentName() const;

                    /**
                     * 设置切片文件名字。注意：
1.不填切片文件名时，默认按照按照如下格式命名：m3u8文件名{order}。
2.若填了切片文件名字，则会按照如下格式命名：用户指定文件名{order}。
                     * @param _fragmentName 切片文件名字。注意：
1.不填切片文件名时，默认按照按照如下格式命名：m3u8文件名{order}。
2.若填了切片文件名字，则会按照如下格式命名：用户指定文件名{order}。
                     * 
                     */
                    void SetFragmentName(const std::string& _fragmentName);

                    /**
                     * 判断参数 FragmentName 是否已赋值
                     * @return FragmentName 是否已赋值
                     * 
                     */
                    bool FragmentNameHasBeenSet() const;

                private:

                    /**
                     * 每个切片平均时长，默认10s。
                     */
                    int64_t m_fragmentTime;
                    bool m_fragmentTimeHasBeenSet;

                    /**
                     * 切片类型，可选项：hls，不填时默认hls。
                     */
                    std::string m_segmentType;
                    bool m_segmentTypeHasBeenSet;

                    /**
                     * 切片文件名字。注意：
1.不填切片文件名时，默认按照按照如下格式命名：m3u8文件名{order}。
2.若填了切片文件名字，则会按照如下格式命名：用户指定文件名{order}。
                     */
                    std::string m_fragmentName;
                    bool m_fragmentNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_SEGMENTINFO_H_
