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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_XP2PDETAILINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_XP2PDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * P2P流信息。
                */
                class XP2PDetailInfo : public AbstractModel
                {
                public:
                    XP2PDetailInfo();
                    ~XP2PDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CDN流量。
                     * @return CdnBytes CDN流量。
                     * 
                     */
                    int64_t GetCdnBytes() const;

                    /**
                     * 设置CDN流量。
                     * @param _cdnBytes CDN流量。
                     * 
                     */
                    void SetCdnBytes(const int64_t& _cdnBytes);

                    /**
                     * 判断参数 CdnBytes 是否已赋值
                     * @return CdnBytes 是否已赋值
                     * 
                     */
                    bool CdnBytesHasBeenSet() const;

                    /**
                     * 获取P2P流量。
                     * @return P2pBytes P2P流量。
                     * 
                     */
                    int64_t GetP2pBytes() const;

                    /**
                     * 设置P2P流量。
                     * @param _p2pBytes P2P流量。
                     * 
                     */
                    void SetP2pBytes(const int64_t& _p2pBytes);

                    /**
                     * 判断参数 P2pBytes 是否已赋值
                     * @return P2pBytes 是否已赋值
                     * 
                     */
                    bool P2pBytesHasBeenSet() const;

                    /**
                     * 获取卡播人数。
                     * @return StuckPeople 卡播人数。
                     * 
                     */
                    int64_t GetStuckPeople() const;

                    /**
                     * 设置卡播人数。
                     * @param _stuckPeople 卡播人数。
                     * 
                     */
                    void SetStuckPeople(const int64_t& _stuckPeople);

                    /**
                     * 判断参数 StuckPeople 是否已赋值
                     * @return StuckPeople 是否已赋值
                     * 
                     */
                    bool StuckPeopleHasBeenSet() const;

                    /**
                     * 获取卡播次数。
                     * @return StuckTimes 卡播次数。
                     * 
                     */
                    int64_t GetStuckTimes() const;

                    /**
                     * 设置卡播次数。
                     * @param _stuckTimes 卡播次数。
                     * 
                     */
                    void SetStuckTimes(const int64_t& _stuckTimes);

                    /**
                     * 判断参数 StuckTimes 是否已赋值
                     * @return StuckTimes 是否已赋值
                     * 
                     */
                    bool StuckTimesHasBeenSet() const;

                    /**
                     * 获取在线人数。
                     * @return OnlinePeople 在线人数。
                     * 
                     */
                    int64_t GetOnlinePeople() const;

                    /**
                     * 设置在线人数。
                     * @param _onlinePeople 在线人数。
                     * 
                     */
                    void SetOnlinePeople(const int64_t& _onlinePeople);

                    /**
                     * 判断参数 OnlinePeople 是否已赋值
                     * @return OnlinePeople 是否已赋值
                     * 
                     */
                    bool OnlinePeopleHasBeenSet() const;

                    /**
                     * 获取起播请求次数
                     * @return Request 起播请求次数
                     * 
                     */
                    int64_t GetRequest() const;

                    /**
                     * 设置起播请求次数
                     * @param _request 起播请求次数
                     * 
                     */
                    void SetRequest(const int64_t& _request);

                    /**
                     * 判断参数 Request 是否已赋值
                     * @return Request 是否已赋值
                     * 
                     */
                    bool RequestHasBeenSet() const;

                    /**
                     * 获取起播成功次数
                     * @return RequestSuccess 起播成功次数
                     * 
                     */
                    int64_t GetRequestSuccess() const;

                    /**
                     * 设置起播成功次数
                     * @param _requestSuccess 起播成功次数
                     * 
                     */
                    void SetRequestSuccess(const int64_t& _requestSuccess);

                    /**
                     * 判断参数 RequestSuccess 是否已赋值
                     * @return RequestSuccess 是否已赋值
                     * 
                     */
                    bool RequestSuccessHasBeenSet() const;

                    /**
                     * 获取时间，一分钟粒度，utc格式：yyyy-mm-ddTHH:MM:SSZ，参考https://cloud.tencent.com/document/product/266/11732#I。。
                     * @return Time 时间，一分钟粒度，utc格式：yyyy-mm-ddTHH:MM:SSZ，参考https://cloud.tencent.com/document/product/266/11732#I。。
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置时间，一分钟粒度，utc格式：yyyy-mm-ddTHH:MM:SSZ，参考https://cloud.tencent.com/document/product/266/11732#I。。
                     * @param _time 时间，一分钟粒度，utc格式：yyyy-mm-ddTHH:MM:SSZ，参考https://cloud.tencent.com/document/product/266/11732#I。。
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取类型，分live和vod两种。
                     * @return Type 类型，分live和vod两种。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型，分live和vod两种。
                     * @param _type 类型，分live和vod两种。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取流ID。
                     * @return StreamName 流ID。
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流ID。
                     * @param _streamName 流ID。
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取AppId。
                     * @return AppId AppId。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置AppId。
                     * @param _appId AppId。
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * CDN流量。
                     */
                    int64_t m_cdnBytes;
                    bool m_cdnBytesHasBeenSet;

                    /**
                     * P2P流量。
                     */
                    int64_t m_p2pBytes;
                    bool m_p2pBytesHasBeenSet;

                    /**
                     * 卡播人数。
                     */
                    int64_t m_stuckPeople;
                    bool m_stuckPeopleHasBeenSet;

                    /**
                     * 卡播次数。
                     */
                    int64_t m_stuckTimes;
                    bool m_stuckTimesHasBeenSet;

                    /**
                     * 在线人数。
                     */
                    int64_t m_onlinePeople;
                    bool m_onlinePeopleHasBeenSet;

                    /**
                     * 起播请求次数
                     */
                    int64_t m_request;
                    bool m_requestHasBeenSet;

                    /**
                     * 起播成功次数
                     */
                    int64_t m_requestSuccess;
                    bool m_requestSuccessHasBeenSet;

                    /**
                     * 时间，一分钟粒度，utc格式：yyyy-mm-ddTHH:MM:SSZ，参考https://cloud.tencent.com/document/product/266/11732#I。。
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 类型，分live和vod两种。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 流ID。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * AppId。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_XP2PDETAILINFO_H_
