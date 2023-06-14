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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASAMPLESNAPSHOTINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASAMPLESNAPSHOTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaSampleSnapshotItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 点播文件采样截图信息
                */
                class MediaSampleSnapshotInfo : public AbstractModel
                {
                public:
                    MediaSampleSnapshotInfo();
                    ~MediaSampleSnapshotInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取特定规格的采样截图信息集合，每个元素代表一套相同规格的采样截图。
                     * @return SampleSnapshotSet 特定规格的采样截图信息集合，每个元素代表一套相同规格的采样截图。
                     * 
                     */
                    std::vector<MediaSampleSnapshotItem> GetSampleSnapshotSet() const;

                    /**
                     * 设置特定规格的采样截图信息集合，每个元素代表一套相同规格的采样截图。
                     * @param _sampleSnapshotSet 特定规格的采样截图信息集合，每个元素代表一套相同规格的采样截图。
                     * 
                     */
                    void SetSampleSnapshotSet(const std::vector<MediaSampleSnapshotItem>& _sampleSnapshotSet);

                    /**
                     * 判断参数 SampleSnapshotSet 是否已赋值
                     * @return SampleSnapshotSet 是否已赋值
                     * 
                     */
                    bool SampleSnapshotSetHasBeenSet() const;

                private:

                    /**
                     * 特定规格的采样截图信息集合，每个元素代表一套相同规格的采样截图。
                     */
                    std::vector<MediaSampleSnapshotItem> m_sampleSnapshotSet;
                    bool m_sampleSnapshotSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASAMPLESNAPSHOTINFO_H_
