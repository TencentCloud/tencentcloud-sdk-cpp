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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECASTERDISPLAYINFORESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECASTERDISPLAYINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/CasterDisplayInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeCasterDisplayInfo返回参数结构体
                */
                class DescribeCasterDisplayInfoResponse : public AbstractModel
                {
                public:
                    DescribeCasterDisplayInfoResponse();
                    ~DescribeCasterDisplayInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取导播台状态
0：停止状态，无预监，无主监 
1：无预监，有主监 
2：有预监，无主监 
3：有预监，有主监
                     * @return Status 导播台状态
0：停止状态，无预监，无主监 
1：无预监，有主监 
2：有预监，无主监 
3：有预监，有主监
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取预监使用的展示参数。
                     * @return PvwDisplayInfo 预监使用的展示参数。
                     * 
                     */
                    CasterDisplayInfo GetPvwDisplayInfo() const;

                    /**
                     * 判断参数 PvwDisplayInfo 是否已赋值
                     * @return PvwDisplayInfo 是否已赋值
                     * 
                     */
                    bool PvwDisplayInfoHasBeenSet() const;

                    /**
                     * 获取主监使用的展示参数。
                     * @return PgmDisplayInfo 主监使用的展示参数。
                     * 
                     */
                    CasterDisplayInfo GetPgmDisplayInfo() const;

                    /**
                     * 判断参数 PgmDisplayInfo 是否已赋值
                     * @return PgmDisplayInfo 是否已赋值
                     * 
                     */
                    bool PgmDisplayInfoHasBeenSet() const;

                    /**
                     * 获取启动直播的时间，值为unix时间戳。
                     * @return StartLiveTime 启动直播的时间，值为unix时间戳。
                     * 
                     */
                    uint64_t GetStartLiveTime() const;

                    /**
                     * 判断参数 StartLiveTime 是否已赋值
                     * @return StartLiveTime 是否已赋值
                     * 
                     */
                    bool StartLiveTimeHasBeenSet() const;

                private:

                    /**
                     * 导播台状态
0：停止状态，无预监，无主监 
1：无预监，有主监 
2：有预监，无主监 
3：有预监，有主监
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 预监使用的展示参数。
                     */
                    CasterDisplayInfo m_pvwDisplayInfo;
                    bool m_pvwDisplayInfoHasBeenSet;

                    /**
                     * 主监使用的展示参数。
                     */
                    CasterDisplayInfo m_pgmDisplayInfo;
                    bool m_pgmDisplayInfoHasBeenSet;

                    /**
                     * 启动直播的时间，值为unix时间戳。
                     */
                    uint64_t m_startLiveTime;
                    bool m_startLiveTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECASTERDISPLAYINFORESPONSE_H_
