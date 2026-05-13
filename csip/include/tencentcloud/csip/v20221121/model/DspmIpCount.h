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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIPCOUNT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIPCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dspm ip 统计数
                */
                class DspmIpCount : public AbstractModel
                {
                public:
                    DspmIpCount();
                    ~DspmIpCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问Ip个数
                     * @return IpCount 访问Ip个数
                     * 
                     */
                    int64_t GetIpCount() const;

                    /**
                     * 设置访问Ip个数
                     * @param _ipCount 访问Ip个数
                     * 
                     */
                    void SetIpCount(const int64_t& _ipCount);

                    /**
                     * 判断参数 IpCount 是否已赋值
                     * @return IpCount 是否已赋值
                     * 
                     */
                    bool IpCountHasBeenSet() const;

                    /**
                     * 获取未打标公网Ip个数
                     * @return UnmarkedPublicIpCount 未打标公网Ip个数
                     * 
                     */
                    int64_t GetUnmarkedPublicIpCount() const;

                    /**
                     * 设置未打标公网Ip个数
                     * @param _unmarkedPublicIpCount 未打标公网Ip个数
                     * 
                     */
                    void SetUnmarkedPublicIpCount(const int64_t& _unmarkedPublicIpCount);

                    /**
                     * 判断参数 UnmarkedPublicIpCount 是否已赋值
                     * @return UnmarkedPublicIpCount 是否已赋值
                     * 
                     */
                    bool UnmarkedPublicIpCountHasBeenSet() const;

                    /**
                     * 获取内网Ip个数
                     * @return PrivateIpCount 内网Ip个数
                     * 
                     */
                    int64_t GetPrivateIpCount() const;

                    /**
                     * 设置内网Ip个数
                     * @param _privateIpCount 内网Ip个数
                     * 
                     */
                    void SetPrivateIpCount(const int64_t& _privateIpCount);

                    /**
                     * 判断参数 PrivateIpCount 是否已赋值
                     * @return PrivateIpCount 是否已赋值
                     * 
                     */
                    bool PrivateIpCountHasBeenSet() const;

                private:

                    /**
                     * 访问Ip个数
                     */
                    int64_t m_ipCount;
                    bool m_ipCountHasBeenSet;

                    /**
                     * 未打标公网Ip个数
                     */
                    int64_t m_unmarkedPublicIpCount;
                    bool m_unmarkedPublicIpCountHasBeenSet;

                    /**
                     * 内网Ip个数
                     */
                    int64_t m_privateIpCount;
                    bool m_privateIpCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIPCOUNT_H_
