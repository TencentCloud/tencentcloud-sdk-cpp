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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_HTTPSTATUSDATA_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_HTTPSTATUSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/HttpStatusInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 播放错误码信息
                */
                class HttpStatusData : public AbstractModel
                {
                public:
                    HttpStatusData();
                    ~HttpStatusData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据时间点，
格式：yyyy-mm-dd HH:MM:SS。
                     * @return Time 数据时间点，
格式：yyyy-mm-dd HH:MM:SS。
                     */
                    std::string GetTime() const;

                    /**
                     * 设置数据时间点，
格式：yyyy-mm-dd HH:MM:SS。
                     * @param Time 数据时间点，
格式：yyyy-mm-dd HH:MM:SS。
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取播放状态码详细信息。
                     * @return HttpStatusInfoList 播放状态码详细信息。
                     */
                    std::vector<HttpStatusInfo> GetHttpStatusInfoList() const;

                    /**
                     * 设置播放状态码详细信息。
                     * @param HttpStatusInfoList 播放状态码详细信息。
                     */
                    void SetHttpStatusInfoList(const std::vector<HttpStatusInfo>& _httpStatusInfoList);

                    /**
                     * 判断参数 HttpStatusInfoList 是否已赋值
                     * @return HttpStatusInfoList 是否已赋值
                     */
                    bool HttpStatusInfoListHasBeenSet() const;

                private:

                    /**
                     * 数据时间点，
格式：yyyy-mm-dd HH:MM:SS。
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 播放状态码详细信息。
                     */
                    std::vector<HttpStatusInfo> m_httpStatusInfoList;
                    bool m_httpStatusInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_HTTPSTATUSDATA_H_
