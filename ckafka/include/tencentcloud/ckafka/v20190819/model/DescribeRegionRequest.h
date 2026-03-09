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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEREGIONREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEREGIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeRegion请求参数结构体
                */
                class DescribeRegionRequest : public AbstractModel
                {
                public:
                    DescribeRegionRequest();
                    ~DescribeRegionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>偏移量</p>
                     * @return Offset <p>偏移量</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量</p>
                     * @param _offset <p>偏移量</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>返回最大结果数</p>
                     * @return Limit <p>返回最大结果数</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回最大结果数</p>
                     * @param _limit <p>返回最大结果数</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>业务字段，可忽略</p><p>枚举值：</p><ul><li>ckafka： ckafka业务</li><li>cmq： cmq业务</li></ul><p>默认值：ckafka</p>
                     * @return Business <p>业务字段，可忽略</p><p>枚举值：</p><ul><li>ckafka： ckafka业务</li><li>cmq： cmq业务</li></ul><p>默认值：ckafka</p>
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置<p>业务字段，可忽略</p><p>枚举值：</p><ul><li>ckafka： ckafka业务</li><li>cmq： cmq业务</li></ul><p>默认值：ckafka</p>
                     * @param _business <p>业务字段，可忽略</p><p>枚举值：</p><ul><li>ckafka： ckafka业务</li><li>cmq： cmq业务</li></ul><p>默认值：ckafka</p>
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取<p>cdc专有集群业务字段，可忽略</p>
                     * @return CdcId <p>cdc专有集群业务字段，可忽略</p>
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置<p>cdc专有集群业务字段，可忽略</p>
                     * @param _cdcId <p>cdc专有集群业务字段，可忽略</p>
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                private:

                    /**
                     * <p>偏移量</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回最大结果数</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>业务字段，可忽略</p><p>枚举值：</p><ul><li>ckafka： ckafka业务</li><li>cmq： cmq业务</li></ul><p>默认值：ckafka</p>
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * <p>cdc专有集群业务字段，可忽略</p>
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEREGIONREQUEST_H_
