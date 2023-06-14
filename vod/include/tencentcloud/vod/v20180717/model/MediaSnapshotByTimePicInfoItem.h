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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASNAPSHOTBYTIMEPICINFOITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASNAPSHOTBYTIMEPICINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 指定时间点截图信息
                */
                class MediaSnapshotByTimePicInfoItem : public AbstractModel
                {
                public:
                    MediaSnapshotByTimePicInfoItem();
                    ~MediaSnapshotByTimePicInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该张截图对应视频文件中的时间偏移，单位为<font color=red>毫秒</font>。
                     * @return TimeOffset 该张截图对应视频文件中的时间偏移，单位为<font color=red>毫秒</font>。
                     * 
                     */
                    double GetTimeOffset() const;

                    /**
                     * 设置该张截图对应视频文件中的时间偏移，单位为<font color=red>毫秒</font>。
                     * @param _timeOffset 该张截图对应视频文件中的时间偏移，单位为<font color=red>毫秒</font>。
                     * 
                     */
                    void SetTimeOffset(const double& _timeOffset);

                    /**
                     * 判断参数 TimeOffset 是否已赋值
                     * @return TimeOffset 是否已赋值
                     * 
                     */
                    bool TimeOffsetHasBeenSet() const;

                    /**
                     * 获取该张截图的 URL 地址。
                     * @return Url 该张截图的 URL 地址。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置该张截图的 URL 地址。
                     * @param _url 该张截图的 URL 地址。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取截图如果被打上了水印，被打水印的模板 ID 列表。
                     * @return WaterMarkDefinition 截图如果被打上了水印，被打水印的模板 ID 列表。
                     * 
                     */
                    std::vector<int64_t> GetWaterMarkDefinition() const;

                    /**
                     * 设置截图如果被打上了水印，被打水印的模板 ID 列表。
                     * @param _waterMarkDefinition 截图如果被打上了水印，被打水印的模板 ID 列表。
                     * 
                     */
                    void SetWaterMarkDefinition(const std::vector<int64_t>& _waterMarkDefinition);

                    /**
                     * 判断参数 WaterMarkDefinition 是否已赋值
                     * @return WaterMarkDefinition 是否已赋值
                     * 
                     */
                    bool WaterMarkDefinitionHasBeenSet() const;

                private:

                    /**
                     * 该张截图对应视频文件中的时间偏移，单位为<font color=red>毫秒</font>。
                     */
                    double m_timeOffset;
                    bool m_timeOffsetHasBeenSet;

                    /**
                     * 该张截图的 URL 地址。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 截图如果被打上了水印，被打水印的模板 ID 列表。
                     */
                    std::vector<int64_t> m_waterMarkDefinition;
                    bool m_waterMarkDefinitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASNAPSHOTBYTIMEPICINFOITEM_H_
