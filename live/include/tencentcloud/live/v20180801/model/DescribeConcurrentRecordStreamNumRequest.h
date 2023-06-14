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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECONCURRENTRECORDSTREAMNUMREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECONCURRENTRECORDSTREAMNUMREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeConcurrentRecordStreamNum请求参数结构体
                */
                class DescribeConcurrentRecordStreamNumRequest : public AbstractModel
                {
                public:
                    DescribeConcurrentRecordStreamNumRequest();
                    ~DescribeConcurrentRecordStreamNumRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取直播类型，SlowLive：慢直播。
NormalLive：普通直播。
                     * @return LiveType 直播类型，SlowLive：慢直播。
NormalLive：普通直播。
                     * 
                     */
                    std::string GetLiveType() const;

                    /**
                     * 设置直播类型，SlowLive：慢直播。
NormalLive：普通直播。
                     * @param _liveType 直播类型，SlowLive：慢直播。
NormalLive：普通直播。
                     * 
                     */
                    void SetLiveType(const std::string& _liveType);

                    /**
                     * 判断参数 LiveType 是否已赋值
                     * @return LiveType 是否已赋值
                     * 
                     */
                    bool LiveTypeHasBeenSet() const;

                    /**
                     * 获取起始时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
可以查询最近180天的数据。
                     * @return StartTime 起始时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
可以查询最近180天的数据。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
可以查询最近180天的数据。
                     * @param _startTime 起始时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
可以查询最近180天的数据。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
时间跨度最大支持31天。
                     * @return EndTime 结束时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
时间跨度最大支持31天。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
时间跨度最大支持31天。
                     * @param _endTime 结束时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
时间跨度最大支持31天。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取如果为空，查询所有地区数据；如果为“Mainland”，查询国内数据；如果为“Oversea”，则查询国外数据。
                     * @return MainlandOrOversea 如果为空，查询所有地区数据；如果为“Mainland”，查询国内数据；如果为“Oversea”，则查询国外数据。
                     * 
                     */
                    std::string GetMainlandOrOversea() const;

                    /**
                     * 设置如果为空，查询所有地区数据；如果为“Mainland”，查询国内数据；如果为“Oversea”，则查询国外数据。
                     * @param _mainlandOrOversea 如果为空，查询所有地区数据；如果为“Mainland”，查询国内数据；如果为“Oversea”，则查询国外数据。
                     * 
                     */
                    void SetMainlandOrOversea(const std::string& _mainlandOrOversea);

                    /**
                     * 判断参数 MainlandOrOversea 是否已赋值
                     * @return MainlandOrOversea 是否已赋值
                     * 
                     */
                    bool MainlandOrOverseaHasBeenSet() const;

                    /**
                     * 获取推流域名列表，不填表示总体数据。
                     * @return PushDomains 推流域名列表，不填表示总体数据。
                     * 
                     */
                    std::vector<std::string> GetPushDomains() const;

                    /**
                     * 设置推流域名列表，不填表示总体数据。
                     * @param _pushDomains 推流域名列表，不填表示总体数据。
                     * 
                     */
                    void SetPushDomains(const std::vector<std::string>& _pushDomains);

                    /**
                     * 判断参数 PushDomains 是否已赋值
                     * @return PushDomains 是否已赋值
                     * 
                     */
                    bool PushDomainsHasBeenSet() const;

                private:

                    /**
                     * 直播类型，SlowLive：慢直播。
NormalLive：普通直播。
                     */
                    std::string m_liveType;
                    bool m_liveTypeHasBeenSet;

                    /**
                     * 起始时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
可以查询最近180天的数据。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
时间跨度最大支持31天。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 如果为空，查询所有地区数据；如果为“Mainland”，查询国内数据；如果为“Oversea”，则查询国外数据。
                     */
                    std::string m_mainlandOrOversea;
                    bool m_mainlandOrOverseaHasBeenSet;

                    /**
                     * 推流域名列表，不填表示总体数据。
                     */
                    std::vector<std::string> m_pushDomains;
                    bool m_pushDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECONCURRENTRECORDSTREAMNUMREQUEST_H_
