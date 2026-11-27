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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECAGELISTREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECAGELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeCageList请求参数结构体
                */
                class DescribeCageListRequest : public AbstractModel
                {
                public:
                    DescribeCageListRequest();
                    ~DescribeCageListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>金融围拢ID、或者独享集群ID</p>
                     * @return CageIds <p>金融围拢ID、或者独享集群ID</p>
                     * 
                     */
                    std::vector<std::string> GetCageIds() const;

                    /**
                     * 设置<p>金融围拢ID、或者独享集群ID</p>
                     * @param _cageIds <p>金融围拢ID、或者独享集群ID</p>
                     * 
                     */
                    void SetCageIds(const std::vector<std::string>& _cageIds);

                    /**
                     * 判断参数 CageIds 是否已赋值
                     * @return CageIds 是否已赋值
                     * 
                     */
                    bool CageIdsHasBeenSet() const;

                    /**
                     * 获取<p>金融围拢名称/独享集群名称</p>
                     * @return CageName <p>金融围拢名称/独享集群名称</p>
                     * 
                     */
                    std::string GetCageName() const;

                    /**
                     * 设置<p>金融围拢名称/独享集群名称</p>
                     * @param _cageName <p>金融围拢名称/独享集群名称</p>
                     * 
                     */
                    void SetCageName(const std::string& _cageName);

                    /**
                     * 判断参数 CageName 是否已赋值
                     * @return CageName 是否已赋值
                     * 
                     */
                    bool CageNameHasBeenSet() const;

                    /**
                     * 获取<p>本地专属集群所在可用用ID</p>
                     * @return ZoneId <p>本地专属集群所在可用用ID</p>
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置<p>本地专属集群所在可用用ID</p>
                     * @param _zoneId <p>本地专属集群所在可用用ID</p>
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>查询本地专属集群列表LIMIT</p>
                     * @return Limit <p>查询本地专属集群列表LIMIT</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>查询本地专属集群列表LIMIT</p>
                     * @param _limit <p>查询本地专属集群列表LIMIT</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>分页</p>
                     * @return Offset <p>分页</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页</p>
                     * @param _offset <p>分页</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>金融围拢ID、或者独享集群ID</p>
                     */
                    std::vector<std::string> m_cageIds;
                    bool m_cageIdsHasBeenSet;

                    /**
                     * <p>金融围拢名称/独享集群名称</p>
                     */
                    std::string m_cageName;
                    bool m_cageNameHasBeenSet;

                    /**
                     * <p>本地专属集群所在可用用ID</p>
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>查询本地专属集群列表LIMIT</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECAGELISTREQUEST_H_
