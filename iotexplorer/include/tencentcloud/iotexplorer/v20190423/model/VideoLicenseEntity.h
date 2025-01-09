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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_VIDEOLICENSEENTITY_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_VIDEOLICENSEENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 视频设备激活码统计
                */
                class VideoLicenseEntity : public AbstractModel
                {
                public:
                    VideoLicenseEntity();
                    ~VideoLicenseEntity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取激活码类型，取值范围如下：0_5_mbps、1_mbps、1_5_mbps、2_mbps
                     * @return Type 激活码类型，取值范围如下：0_5_mbps、1_mbps、1_5_mbps、2_mbps
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置激活码类型，取值范围如下：0_5_mbps、1_mbps、1_5_mbps、2_mbps
                     * @param _type 激活码类型，取值范围如下：0_5_mbps、1_mbps、1_5_mbps、2_mbps
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取有效激活码总数
                     * @return TotalCount 有效激活码总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置有效激活码总数
                     * @param _totalCount 有效激活码总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取待使用的激活码数量
                     * @return UsedCount 待使用的激活码数量
                     * 
                     */
                    int64_t GetUsedCount() const;

                    /**
                     * 设置待使用的激活码数量
                     * @param _usedCount 待使用的激活码数量
                     * 
                     */
                    void SetUsedCount(const int64_t& _usedCount);

                    /**
                     * 判断参数 UsedCount 是否已赋值
                     * @return UsedCount 是否已赋值
                     * 
                     */
                    bool UsedCountHasBeenSet() const;

                    /**
                     * 获取即将过期的激活码数量
                     * @return ExpiresSoonCount 即将过期的激活码数量
                     * 
                     */
                    int64_t GetExpiresSoonCount() const;

                    /**
                     * 设置即将过期的激活码数量
                     * @param _expiresSoonCount 即将过期的激活码数量
                     * 
                     */
                    void SetExpiresSoonCount(const int64_t& _expiresSoonCount);

                    /**
                     * 判断参数 ExpiresSoonCount 是否已赋值
                     * @return ExpiresSoonCount 是否已赋值
                     * 
                     */
                    bool ExpiresSoonCountHasBeenSet() const;

                private:

                    /**
                     * 激活码类型，取值范围如下：0_5_mbps、1_mbps、1_5_mbps、2_mbps
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 有效激活码总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 待使用的激活码数量
                     */
                    int64_t m_usedCount;
                    bool m_usedCountHasBeenSet;

                    /**
                     * 即将过期的激活码数量
                     */
                    int64_t m_expiresSoonCount;
                    bool m_expiresSoonCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_VIDEOLICENSEENTITY_H_
