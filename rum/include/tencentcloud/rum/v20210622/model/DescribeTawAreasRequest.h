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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETAWAREASREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETAWAREASREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeTawAreas请求参数结构体
                */
                class DescribeTawAreasRequest : public AbstractModel
                {
                public:
                    DescribeTawAreasRequest();
                    ~DescribeTawAreasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取片区Id
                     * @return AreaIds 片区Id
                     * 
                     */
                    std::vector<int64_t> GetAreaIds() const;

                    /**
                     * 设置片区Id
                     * @param _areaIds 片区Id
                     * 
                     */
                    void SetAreaIds(const std::vector<int64_t>& _areaIds);

                    /**
                     * 判断参数 AreaIds 是否已赋值
                     * @return AreaIds 是否已赋值
                     * 
                     */
                    bool AreaIdsHasBeenSet() const;

                    /**
                     * 获取片区Key
                     * @return AreaKeys 片区Key
                     * 
                     */
                    std::vector<std::string> GetAreaKeys() const;

                    /**
                     * 设置片区Key
                     * @param _areaKeys 片区Key
                     * 
                     */
                    void SetAreaKeys(const std::vector<std::string>& _areaKeys);

                    /**
                     * 判断参数 AreaKeys 是否已赋值
                     * @return AreaKeys 是否已赋值
                     * 
                     */
                    bool AreaKeysHasBeenSet() const;

                    /**
                     * 获取分页Limit，默认根据AreaKeys和AreaStatuses参数查询所有。
                     * @return Limit 分页Limit，默认根据AreaKeys和AreaStatuses参数查询所有。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页Limit，默认根据AreaKeys和AreaStatuses参数查询所有。
                     * @param _limit 分页Limit，默认根据AreaKeys和AreaStatuses参数查询所有。
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
                     * 获取片区状态(1=有效，2=无效)
                     * @return AreaStatuses 片区状态(1=有效，2=无效)
                     * 
                     */
                    std::vector<int64_t> GetAreaStatuses() const;

                    /**
                     * 设置片区状态(1=有效，2=无效)
                     * @param _areaStatuses 片区状态(1=有效，2=无效)
                     * 
                     */
                    void SetAreaStatuses(const std::vector<int64_t>& _areaStatuses);

                    /**
                     * 判断参数 AreaStatuses 是否已赋值
                     * @return AreaStatuses 是否已赋值
                     * 
                     */
                    bool AreaStatusesHasBeenSet() const;

                    /**
                     * 获取分页Offset，默认根据AreaKeys和AreaStatuses参数查询所有。
                     * @return Offset 分页Offset，默认根据AreaKeys和AreaStatuses参数查询所有。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页Offset，默认根据AreaKeys和AreaStatuses参数查询所有。
                     * @param _offset 分页Offset，默认根据AreaKeys和AreaStatuses参数查询所有。
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
                     * 片区Id
                     */
                    std::vector<int64_t> m_areaIds;
                    bool m_areaIdsHasBeenSet;

                    /**
                     * 片区Key
                     */
                    std::vector<std::string> m_areaKeys;
                    bool m_areaKeysHasBeenSet;

                    /**
                     * 分页Limit，默认根据AreaKeys和AreaStatuses参数查询所有。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 片区状态(1=有效，2=无效)
                     */
                    std::vector<int64_t> m_areaStatuses;
                    bool m_areaStatusesHasBeenSet;

                    /**
                     * 分页Offset，默认根据AreaKeys和AreaStatuses参数查询所有。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETAWAREASREQUEST_H_
