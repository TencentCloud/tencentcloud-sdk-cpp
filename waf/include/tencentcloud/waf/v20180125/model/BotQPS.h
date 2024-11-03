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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_BOTQPS_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_BOTQPS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * bot的qps详情
                */
                class BotQPS : public AbstractModel
                {
                public:
                    BotQPS();
                    ~BotQPS() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源id
                     * @return ResourceIds 资源id
                     * 
                     */
                    std::string GetResourceIds() const;

                    /**
                     * 设置资源id
                     * @param _resourceIds 资源id
                     * 
                     */
                    void SetResourceIds(const std::string& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取有效时间
                     * @return ValidTime 有效时间
                     * 
                     */
                    std::string GetValidTime() const;

                    /**
                     * 设置有效时间
                     * @param _validTime 有效时间
                     * 
                     */
                    void SetValidTime(const std::string& _validTime);

                    /**
                     * 判断参数 ValidTime 是否已赋值
                     * @return ValidTime 是否已赋值
                     * 
                     */
                    bool ValidTimeHasBeenSet() const;

                    /**
                     * 获取资源数量
                     * @return Count 资源数量
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置资源数量
                     * @param _count 资源数量
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
                     * 获取资源所在地区
                     * @return Region 资源所在地区
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置资源所在地区
                     * @param _region 资源所在地区
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
                     * 获取使用qps的最大值
                     * @return MaxBotQPS 使用qps的最大值
                     * 
                     */
                    uint64_t GetMaxBotQPS() const;

                    /**
                     * 设置使用qps的最大值
                     * @param _maxBotQPS 使用qps的最大值
                     * 
                     */
                    void SetMaxBotQPS(const uint64_t& _maxBotQPS);

                    /**
                     * 判断参数 MaxBotQPS 是否已赋值
                     * @return MaxBotQPS 是否已赋值
                     * 
                     */
                    bool MaxBotQPSHasBeenSet() const;

                    /**
                     * 获取续费标志
                     * @return RenewFlag 续费标志
                     * 
                     */
                    uint64_t GetRenewFlag() const;

                    /**
                     * 设置续费标志
                     * @param _renewFlag 续费标志
                     * 
                     */
                    void SetRenewFlag(const uint64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * 资源id
                     */
                    std::string m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * 有效时间
                     */
                    std::string m_validTime;
                    bool m_validTimeHasBeenSet;

                    /**
                     * 资源数量
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 资源所在地区
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 使用qps的最大值
                     */
                    uint64_t m_maxBotQPS;
                    bool m_maxBotQPSHasBeenSet;

                    /**
                     * 续费标志
                     */
                    uint64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_BOTQPS_H_
