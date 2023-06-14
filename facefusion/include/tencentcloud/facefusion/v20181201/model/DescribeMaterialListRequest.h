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

#ifndef TENCENTCLOUD_FACEFUSION_V20181201_MODEL_DESCRIBEMATERIALLISTREQUEST_H_
#define TENCENTCLOUD_FACEFUSION_V20181201_MODEL_DESCRIBEMATERIALLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20181201
        {
            namespace Model
            {
                /**
                * DescribeMaterialList请求参数结构体
                */
                class DescribeMaterialListRequest : public AbstractModel
                {
                public:
                    DescribeMaterialListRequest();
                    ~DescribeMaterialListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取活动Id
                     * @return ActivityId 活动Id
                     * 
                     */
                    int64_t GetActivityId() const;

                    /**
                     * 设置活动Id
                     * @param _activityId 活动Id
                     * 
                     */
                    void SetActivityId(const int64_t& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     * 
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取素材Id
                     * @return MaterialId 素材Id
                     * 
                     */
                    std::string GetMaterialId() const;

                    /**
                     * 设置素材Id
                     * @param _materialId 素材Id
                     * 
                     */
                    void SetMaterialId(const std::string& _materialId);

                    /**
                     * 判断参数 MaterialId 是否已赋值
                     * @return MaterialId 是否已赋值
                     * 
                     */
                    bool MaterialIdHasBeenSet() const;

                    /**
                     * 获取每次拉取条数
                     * @return Limit 每次拉取条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每次拉取条数
                     * @param _limit 每次拉取条数
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
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 活动Id
                     */
                    int64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * 素材Id
                     */
                    std::string m_materialId;
                    bool m_materialIdHasBeenSet;

                    /**
                     * 每次拉取条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20181201_MODEL_DESCRIBEMATERIALLISTREQUEST_H_
