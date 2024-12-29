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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINSRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/DomainInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveDomains返回参数结构体
                */
                class DescribeLiveDomainsResponse : public AbstractModel
                {
                public:
                    DescribeLiveDomainsResponse();
                    ~DescribeLiveDomainsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总记录数。
                     * @return AllCount 总记录数。
                     * 
                     */
                    uint64_t GetAllCount() const;

                    /**
                     * 判断参数 AllCount 是否已赋值
                     * @return AllCount 是否已赋值
                     * 
                     */
                    bool AllCountHasBeenSet() const;

                    /**
                     * 获取域名详细信息列表。
                     * @return DomainList 域名详细信息列表。
                     * 
                     */
                    std::vector<DomainInfo> GetDomainList() const;

                    /**
                     * 判断参数 DomainList 是否已赋值
                     * @return DomainList 是否已赋值
                     * 
                     */
                    bool DomainListHasBeenSet() const;

                    /**
                     * 获取可继续添加域名数量。
                     * @return CreateLimitCount 可继续添加域名数量。
                     * 
                     */
                    int64_t GetCreateLimitCount() const;

                    /**
                     * 判断参数 CreateLimitCount 是否已赋值
                     * @return CreateLimitCount 是否已赋值
                     * 
                     */
                    bool CreateLimitCountHasBeenSet() const;

                    /**
                     * 获取启用的播放域名加速区域统计，数组元素分别为：中国大陆（境内），全球地区，国际/港澳台（境外）域名数量。
                     * @return PlayTypeCount 启用的播放域名加速区域统计，数组元素分别为：中国大陆（境内），全球地区，国际/港澳台（境外）域名数量。
                     * 
                     */
                    std::vector<int64_t> GetPlayTypeCount() const;

                    /**
                     * 判断参数 PlayTypeCount 是否已赋值
                     * @return PlayTypeCount 是否已赋值
                     * 
                     */
                    bool PlayTypeCountHasBeenSet() const;

                private:

                    /**
                     * 总记录数。
                     */
                    uint64_t m_allCount;
                    bool m_allCountHasBeenSet;

                    /**
                     * 域名详细信息列表。
                     */
                    std::vector<DomainInfo> m_domainList;
                    bool m_domainListHasBeenSet;

                    /**
                     * 可继续添加域名数量。
                     */
                    int64_t m_createLimitCount;
                    bool m_createLimitCountHasBeenSet;

                    /**
                     * 启用的播放域名加速区域统计，数组元素分别为：中国大陆（境内），全球地区，国际/港澳台（境外）域名数量。
                     */
                    std::vector<int64_t> m_playTypeCount;
                    bool m_playTypeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINSRESPONSE_H_
