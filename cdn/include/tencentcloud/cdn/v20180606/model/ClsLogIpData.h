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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CLSLOGIPDATA_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CLSLOGIPDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 通过Cls日志，计算出来的IP每秒访问数量
                */
                class ClsLogIpData : public AbstractModel
                {
                public:
                    ClsLogIpData();
                    ~ClsLogIpData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP
                     * @return ClientIp IP
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置IP
                     * @param _clientIp IP
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取在给定的时间段中，1秒内的最大请求量
                     * @return Request 在给定的时间段中，1秒内的最大请求量
                     * 
                     */
                    uint64_t GetRequest() const;

                    /**
                     * 设置在给定的时间段中，1秒内的最大请求量
                     * @param _request 在给定的时间段中，1秒内的最大请求量
                     * 
                     */
                    void SetRequest(const uint64_t& _request);

                    /**
                     * 判断参数 Request 是否已赋值
                     * @return Request 是否已赋值
                     * 
                     */
                    bool RequestHasBeenSet() const;

                    /**
                     * 获取在获取的Top信息中，IP出现的次数
                     * @return Count 在获取的Top信息中，IP出现的次数
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置在获取的Top信息中，IP出现的次数
                     * @param _count 在获取的Top信息中，IP出现的次数
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取在给定的时间段中，1秒内的最大请求量对应的时间
                     * @return Time 在给定的时间段中，1秒内的最大请求量对应的时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置在给定的时间段中，1秒内的最大请求量对应的时间
                     * @param _time 在给定的时间段中，1秒内的最大请求量对应的时间
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                private:

                    /**
                     * IP
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * 在给定的时间段中，1秒内的最大请求量
                     */
                    uint64_t m_request;
                    bool m_requestHasBeenSet;

                    /**
                     * 在获取的Top信息中，IP出现的次数
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 在给定的时间段中，1秒内的最大请求量对应的时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CLSLOGIPDATA_H_
