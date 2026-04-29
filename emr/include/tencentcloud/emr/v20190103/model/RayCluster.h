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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_RAYCLUSTER_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_RAYCLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * RayCluster
                */
                class RayCluster : public AbstractModel
                {
                public:
                    RayCluster();
                    ~RayCluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>RayCluster 集群名</p>
                     * @return RayClusterName <p>RayCluster 集群名</p>
                     * 
                     */
                    std::string GetRayClusterName() const;

                    /**
                     * 设置<p>RayCluster 集群名</p>
                     * @param _rayClusterName <p>RayCluster 集群名</p>
                     * 
                     */
                    void SetRayClusterName(const std::string& _rayClusterName);

                    /**
                     * 判断参数 RayClusterName 是否已赋值
                     * @return RayClusterName 是否已赋值
                     * 
                     */
                    bool RayClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>RayCluster 集群 id</p>
                     * @return RayClusterId <p>RayCluster 集群 id</p>
                     * 
                     */
                    int64_t GetRayClusterId() const;

                    /**
                     * 设置<p>RayCluster 集群 id</p>
                     * @param _rayClusterId <p>RayCluster 集群 id</p>
                     * 
                     */
                    void SetRayClusterId(const int64_t& _rayClusterId);

                    /**
                     * 判断参数 RayClusterId 是否已赋值
                     * @return RayClusterId 是否已赋值
                     * 
                     */
                    bool RayClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>pod 数量</p>
                     * @return PodCount <p>pod 数量</p>
                     * 
                     */
                    int64_t GetPodCount() const;

                    /**
                     * 设置<p>pod 数量</p>
                     * @param _podCount <p>pod 数量</p>
                     * 
                     */
                    void SetPodCount(const int64_t& _podCount);

                    /**
                     * 判断参数 PodCount 是否已赋值
                     * @return PodCount 是否已赋值
                     * 
                     */
                    bool PodCountHasBeenSet() const;

                    /**
                     * 获取<p>集群创建时间</p>
                     * @return CreateTime <p>集群创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>集群创建时间</p>
                     * @param _createTime <p>集群创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>redis 实例数量</p>
                     * @return RedisCount <p>redis 实例数量</p>
                     * 
                     */
                    int64_t GetRedisCount() const;

                    /**
                     * 设置<p>redis 实例数量</p>
                     * @param _redisCount <p>redis 实例数量</p>
                     * 
                     */
                    void SetRedisCount(const int64_t& _redisCount);

                    /**
                     * 判断参数 RedisCount 是否已赋值
                     * @return RedisCount 是否已赋值
                     * 
                     */
                    bool RedisCountHasBeenSet() const;

                    /**
                     * 获取<p>创建类型</p><p>枚举值：</p><ul><li>1： 表单创建</li><li>2： yaml创建</li></ul>
                     * @return SubmitType <p>创建类型</p><p>枚举值：</p><ul><li>1： 表单创建</li><li>2： yaml创建</li></ul>
                     * 
                     */
                    int64_t GetSubmitType() const;

                    /**
                     * 设置<p>创建类型</p><p>枚举值：</p><ul><li>1： 表单创建</li><li>2： yaml创建</li></ul>
                     * @param _submitType <p>创建类型</p><p>枚举值：</p><ul><li>1： 表单创建</li><li>2： yaml创建</li></ul>
                     * 
                     */
                    void SetSubmitType(const int64_t& _submitType);

                    /**
                     * 判断参数 SubmitType 是否已赋值
                     * @return SubmitType 是否已赋值
                     * 
                     */
                    bool SubmitTypeHasBeenSet() const;

                    /**
                     * 获取<p>head访问地址,也是dashboard地址</p>
                     * @return DashboardUrl <p>head访问地址,也是dashboard地址</p>
                     * 
                     */
                    std::string GetDashboardUrl() const;

                    /**
                     * 设置<p>head访问地址,也是dashboard地址</p>
                     * @param _dashboardUrl <p>head访问地址,也是dashboard地址</p>
                     * 
                     */
                    void SetDashboardUrl(const std::string& _dashboardUrl);

                    /**
                     * 判断参数 DashboardUrl 是否已赋值
                     * @return DashboardUrl 是否已赋值
                     * 
                     */
                    bool DashboardUrlHasBeenSet() const;

                private:

                    /**
                     * <p>RayCluster 集群名</p>
                     */
                    std::string m_rayClusterName;
                    bool m_rayClusterNameHasBeenSet;

                    /**
                     * <p>RayCluster 集群 id</p>
                     */
                    int64_t m_rayClusterId;
                    bool m_rayClusterIdHasBeenSet;

                    /**
                     * <p>pod 数量</p>
                     */
                    int64_t m_podCount;
                    bool m_podCountHasBeenSet;

                    /**
                     * <p>集群创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>redis 实例数量</p>
                     */
                    int64_t m_redisCount;
                    bool m_redisCountHasBeenSet;

                    /**
                     * <p>创建类型</p><p>枚举值：</p><ul><li>1： 表单创建</li><li>2： yaml创建</li></ul>
                     */
                    int64_t m_submitType;
                    bool m_submitTypeHasBeenSet;

                    /**
                     * <p>head访问地址,也是dashboard地址</p>
                     */
                    std::string m_dashboardUrl;
                    bool m_dashboardUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_RAYCLUSTER_H_
