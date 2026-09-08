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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHENTITYDETAILREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHENTITYDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeResourceGraphEntityDetail请求参数结构体
                */
                class DescribeResourceGraphEntityDetailRequest : public AbstractModel
                {
                public:
                    DescribeResourceGraphEntityDetailRequest();
                    ~DescribeResourceGraphEntityDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实体 ID</p>
                     * @return EntityId <p>实体 ID</p>
                     * 
                     */
                    std::string GetEntityId() const;

                    /**
                     * 设置<p>实体 ID</p>
                     * @param _entityId <p>实体 ID</p>
                     * 
                     */
                    void SetEntityId(const std::string& _entityId);

                    /**
                     * 判断参数 EntityId 是否已赋值
                     * @return EntityId 是否已赋值
                     * 
                     */
                    bool EntityIdHasBeenSet() const;

                    /**
                     * 获取<p>资源图谱id</p>
                     * @return ResourceGraphId <p>资源图谱id</p>
                     * 
                     */
                    std::string GetResourceGraphId() const;

                    /**
                     * 设置<p>资源图谱id</p>
                     * @param _resourceGraphId <p>资源图谱id</p>
                     * 
                     */
                    void SetResourceGraphId(const std::string& _resourceGraphId);

                    /**
                     * 判断参数 ResourceGraphId 是否已赋值
                     * @return ResourceGraphId 是否已赋值
                     * 
                     */
                    bool ResourceGraphIdHasBeenSet() const;

                    /**
                     * 获取<p>查询范围-开始时间</p><p>单位：毫秒</p>
                     * @return FromTime <p>查询范围-开始时间</p><p>单位：毫秒</p>
                     * 
                     */
                    uint64_t GetFromTime() const;

                    /**
                     * 设置<p>查询范围-开始时间</p><p>单位：毫秒</p>
                     * @param _fromTime <p>查询范围-开始时间</p><p>单位：毫秒</p>
                     * 
                     */
                    void SetFromTime(const uint64_t& _fromTime);

                    /**
                     * 判断参数 FromTime 是否已赋值
                     * @return FromTime 是否已赋值
                     * 
                     */
                    bool FromTimeHasBeenSet() const;

                    /**
                     * 获取<p>查询范围-结束时间</p><p>单位：毫秒</p>
                     * @return ToTime <p>查询范围-结束时间</p><p>单位：毫秒</p>
                     * 
                     */
                    uint64_t GetToTime() const;

                    /**
                     * 设置<p>查询范围-结束时间</p><p>单位：毫秒</p>
                     * @param _toTime <p>查询范围-结束时间</p><p>单位：毫秒</p>
                     * 
                     */
                    void SetToTime(const uint64_t& _toTime);

                    /**
                     * 判断参数 ToTime 是否已赋值
                     * @return ToTime 是否已赋值
                     * 
                     */
                    bool ToTimeHasBeenSet() const;

                private:

                    /**
                     * <p>实体 ID</p>
                     */
                    std::string m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * <p>资源图谱id</p>
                     */
                    std::string m_resourceGraphId;
                    bool m_resourceGraphIdHasBeenSet;

                    /**
                     * <p>查询范围-开始时间</p><p>单位：毫秒</p>
                     */
                    uint64_t m_fromTime;
                    bool m_fromTimeHasBeenSet;

                    /**
                     * <p>查询范围-结束时间</p><p>单位：毫秒</p>
                     */
                    uint64_t m_toTime;
                    bool m_toTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHENTITYDETAILREQUEST_H_
