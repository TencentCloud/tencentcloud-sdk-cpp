/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_SLOWLOGHOST_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_SLOWLOGHOST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * 慢日志来源地址详情。
                */
                class SlowLogHost : public AbstractModel
                {
                public:
                    SlowLogHost();
                    ~SlowLogHost() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取来源地址。
                     * @return UserHost 来源地址。
                     * 
                     */
                    std::string GetUserHost() const;

                    /**
                     * 设置来源地址。
                     * @param _userHost 来源地址。
                     * 
                     */
                    void SetUserHost(const std::string& _userHost);

                    /**
                     * 判断参数 UserHost 是否已赋值
                     * @return UserHost 是否已赋值
                     * 
                     */
                    bool UserHostHasBeenSet() const;

                    /**
                     * 获取该来源地址的慢日志数目占总数目的比例，单位%。
                     * @return Ratio 该来源地址的慢日志数目占总数目的比例，单位%。
                     * 
                     */
                    double GetRatio() const;

                    /**
                     * 设置该来源地址的慢日志数目占总数目的比例，单位%。
                     * @param _ratio 该来源地址的慢日志数目占总数目的比例，单位%。
                     * 
                     */
                    void SetRatio(const double& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                    /**
                     * 获取该来源地址的慢日志数目。
                     * @return Count 该来源地址的慢日志数目。
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置该来源地址的慢日志数目。
                     * @param _count 该来源地址的慢日志数目。
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 来源地址。
                     */
                    std::string m_userHost;
                    bool m_userHostHasBeenSet;

                    /**
                     * 该来源地址的慢日志数目占总数目的比例，单位%。
                     */
                    double m_ratio;
                    bool m_ratioHasBeenSet;

                    /**
                     * 该来源地址的慢日志数目。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_SLOWLOGHOST_H_
