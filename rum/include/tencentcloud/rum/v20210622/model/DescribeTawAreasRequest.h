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
                     * 获取<p>片区Id</p>
                     * @return AreaIds <p>片区Id</p>
                     * 
                     */
                    std::vector<int64_t> GetAreaIds() const;

                    /**
                     * 设置<p>片区Id</p>
                     * @param _areaIds <p>片区Id</p>
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
                     * 获取<p>片区Key</p>
                     * @return AreaKeys <p>片区Key</p>
                     * 
                     */
                    std::vector<std::string> GetAreaKeys() const;

                    /**
                     * 设置<p>片区Key</p>
                     * @param _areaKeys <p>片区Key</p>
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
                     * 获取<p>分页Limit，默认根据AreaKeys和AreaStatuses参数查询所有。</p>
                     * @return Limit <p>分页Limit，默认根据AreaKeys和AreaStatuses参数查询所有。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页Limit，默认根据AreaKeys和AreaStatuses参数查询所有。</p>
                     * @param _limit <p>分页Limit，默认根据AreaKeys和AreaStatuses参数查询所有。</p>
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
                     * 获取<p>片区状态(1=有效，2=无效)</p>
                     * @return AreaStatuses <p>片区状态(1=有效，2=无效)</p>
                     * 
                     */
                    std::vector<int64_t> GetAreaStatuses() const;

                    /**
                     * 设置<p>片区状态(1=有效，2=无效)</p>
                     * @param _areaStatuses <p>片区状态(1=有效，2=无效)</p>
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
                     * 获取<p>分页Offset，默认根据AreaKeys和AreaStatuses参数查询所有。</p>
                     * @return Offset <p>分页Offset，默认根据AreaKeys和AreaStatuses参数查询所有。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页Offset，默认根据AreaKeys和AreaStatuses参数查询所有。</p>
                     * @param _offset <p>分页Offset，默认根据AreaKeys和AreaStatuses参数查询所有。</p>
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
                     * <p>片区Id</p>
                     */
                    std::vector<int64_t> m_areaIds;
                    bool m_areaIdsHasBeenSet;

                    /**
                     * <p>片区Key</p>
                     */
                    std::vector<std::string> m_areaKeys;
                    bool m_areaKeysHasBeenSet;

                    /**
                     * <p>分页Limit，默认根据AreaKeys和AreaStatuses参数查询所有。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>片区状态(1=有效，2=无效)</p>
                     */
                    std::vector<int64_t> m_areaStatuses;
                    bool m_areaStatusesHasBeenSet;

                    /**
                     * <p>分页Offset，默认根据AreaKeys和AreaStatuses参数查询所有。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETAWAREASREQUEST_H_
