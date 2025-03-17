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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_VIRTUALHOSTQUOTA_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_VIRTUALHOSTQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * vhost使用配额信息
                */
                class VirtualHostQuota : public AbstractModel
                {
                public:
                    VirtualHostQuota();
                    ~VirtualHostQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取允许创建最大vhost数
                     * @return MaxVirtualHost 允许创建最大vhost数
                     * 
                     */
                    int64_t GetMaxVirtualHost() const;

                    /**
                     * 设置允许创建最大vhost数
                     * @param _maxVirtualHost 允许创建最大vhost数
                     * 
                     */
                    void SetMaxVirtualHost(const int64_t& _maxVirtualHost);

                    /**
                     * 判断参数 MaxVirtualHost 是否已赋值
                     * @return MaxVirtualHost 是否已赋值
                     * 
                     */
                    bool MaxVirtualHostHasBeenSet() const;

                    /**
                     * 获取已创建vhost数
                     * @return UsedVirtualHost 已创建vhost数
                     * 
                     */
                    int64_t GetUsedVirtualHost() const;

                    /**
                     * 设置已创建vhost数
                     * @param _usedVirtualHost 已创建vhost数
                     * 
                     */
                    void SetUsedVirtualHost(const int64_t& _usedVirtualHost);

                    /**
                     * 判断参数 UsedVirtualHost 是否已赋值
                     * @return UsedVirtualHost 是否已赋值
                     * 
                     */
                    bool UsedVirtualHostHasBeenSet() const;

                private:

                    /**
                     * 允许创建最大vhost数
                     */
                    int64_t m_maxVirtualHost;
                    bool m_maxVirtualHostHasBeenSet;

                    /**
                     * 已创建vhost数
                     */
                    int64_t m_usedVirtualHost;
                    bool m_usedVirtualHostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_VIRTUALHOSTQUOTA_H_
