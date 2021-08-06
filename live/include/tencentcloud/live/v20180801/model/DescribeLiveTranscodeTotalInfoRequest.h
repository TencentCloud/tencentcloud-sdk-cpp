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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODETOTALINFOREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODETOTALINFOREQUEST_H_

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
                * DescribeLiveTranscodeTotalInfo请求参数结构体
                */
                class DescribeLiveTranscodeTotalInfoRequest : public AbstractModel
                {
                public:
                    DescribeLiveTranscodeTotalInfoRequest();
                    ~DescribeLiveTranscodeTotalInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间，北京时间。
格式：yyyy-mm-dd HH:MM:SS。
                     * @return StartTime 开始时间，北京时间。
格式：yyyy-mm-dd HH:MM:SS。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，北京时间。
格式：yyyy-mm-dd HH:MM:SS。
                     * @param StartTime 开始时间，北京时间。
格式：yyyy-mm-dd HH:MM:SS。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，北京时间。
格式：yyyy-mm-dd HH:MM:SS。
                     * @return EndTime 结束时间，北京时间。
格式：yyyy-mm-dd HH:MM:SS。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，北京时间。
格式：yyyy-mm-dd HH:MM:SS。
                     * @param EndTime 结束时间，北京时间。
格式：yyyy-mm-dd HH:MM:SS。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取推流域名列表，若不填，表示查询所有域名总体数据。
指定域名时返回1小时粒度数据。
                     * @return PushDomains 推流域名列表，若不填，表示查询所有域名总体数据。
指定域名时返回1小时粒度数据。
                     */
                    std::vector<std::string> GetPushDomains() const;

                    /**
                     * 设置推流域名列表，若不填，表示查询所有域名总体数据。
指定域名时返回1小时粒度数据。
                     * @param PushDomains 推流域名列表，若不填，表示查询所有域名总体数据。
指定域名时返回1小时粒度数据。
                     */
                    void SetPushDomains(const std::vector<std::string>& _pushDomains);

                    /**
                     * 判断参数 PushDomains 是否已赋值
                     * @return PushDomains 是否已赋值
                     */
                    bool PushDomainsHasBeenSet() const;

                    /**
                     * 获取可选值：
Mainland：查询中国大陆（境内）数据，
Oversea：则查询国际/港澳台（境外）数据，
默认：查询全球地区（境内+境外）的数据。
                     * @return MainlandOrOversea 可选值：
Mainland：查询中国大陆（境内）数据，
Oversea：则查询国际/港澳台（境外）数据，
默认：查询全球地区（境内+境外）的数据。
                     */
                    std::string GetMainlandOrOversea() const;

                    /**
                     * 设置可选值：
Mainland：查询中国大陆（境内）数据，
Oversea：则查询国际/港澳台（境外）数据，
默认：查询全球地区（境内+境外）的数据。
                     * @param MainlandOrOversea 可选值：
Mainland：查询中国大陆（境内）数据，
Oversea：则查询国际/港澳台（境外）数据，
默认：查询全球地区（境内+境外）的数据。
                     */
                    void SetMainlandOrOversea(const std::string& _mainlandOrOversea);

                    /**
                     * 判断参数 MainlandOrOversea 是否已赋值
                     * @return MainlandOrOversea 是否已赋值
                     */
                    bool MainlandOrOverseaHasBeenSet() const;

                private:

                    /**
                     * 开始时间，北京时间。
格式：yyyy-mm-dd HH:MM:SS。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，北京时间。
格式：yyyy-mm-dd HH:MM:SS。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 推流域名列表，若不填，表示查询所有域名总体数据。
指定域名时返回1小时粒度数据。
                     */
                    std::vector<std::string> m_pushDomains;
                    bool m_pushDomainsHasBeenSet;

                    /**
                     * 可选值：
Mainland：查询中国大陆（境内）数据，
Oversea：则查询国际/港澳台（境外）数据，
默认：查询全球地区（境内+境外）的数据。
                     */
                    std::string m_mainlandOrOversea;
                    bool m_mainlandOrOverseaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODETOTALINFOREQUEST_H_
