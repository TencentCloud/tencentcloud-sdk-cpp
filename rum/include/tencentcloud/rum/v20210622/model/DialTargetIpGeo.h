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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DIALTARGETIPGEO_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DIALTARGETIPGEO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 拨测目标 IP 的地区和运营商
                */
                class DialTargetIpGeo : public AbstractModel
                {
                public:
                    DialTargetIpGeo();
                    ~DialTargetIpGeo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>目标 IP，与 TargetIps 中的地址一致</p>
                     * @return Ip <p>目标 IP，与 TargetIps 中的地址一致</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>目标 IP，与 TargetIps 中的地址一致</p>
                     * @param _ip <p>目标 IP，与 TargetIps 中的地址一致</p>
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取<p>目标 IP 所在地区。无法解析时为未知。</p>
                     * @return Region <p>目标 IP 所在地区。无法解析时为未知。</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>目标 IP 所在地区。无法解析时为未知。</p>
                     * @param _region <p>目标 IP 所在地区。无法解析时为未知。</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>目标 IP 所属运营商。无法解析时为未知。</p>
                     * @return Operator <p>目标 IP 所属运营商。无法解析时为未知。</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>目标 IP 所属运营商。无法解析时为未知。</p>
                     * @param _operator <p>目标 IP 所属运营商。无法解析时为未知。</p>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * <p>目标 IP，与 TargetIps 中的地址一致</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>目标 IP 所在地区。无法解析时为未知。</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>目标 IP 所属运营商。无法解析时为未知。</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DIALTARGETIPGEO_H_
