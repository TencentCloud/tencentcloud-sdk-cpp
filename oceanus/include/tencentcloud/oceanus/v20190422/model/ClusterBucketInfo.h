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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_CLUSTERBUCKETINFO_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_CLUSTERBUCKETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * ClusterBucketInfo 结构
                */
                class ClusterBucketInfo : public AbstractModel
                {
                public:
                    ClusterBucketInfo();
                    ~ClusterBucketInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>桶唯一id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SerialId <p>桶唯一id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSerialId() const;

                    /**
                     * 设置<p>桶唯一id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serialId <p>桶唯一id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSerialId(const std::string& _serialId);

                    /**
                     * 判断参数 SerialId 是否已赋值
                     * @return SerialId 是否已赋值
                     * 
                     */
                    bool SerialIdHasBeenSet() const;

                    /**
                     * 获取<p>集群id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId <p>集群id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetClusterId() const;

                    /**
                     * 设置<p>集群id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId <p>集群id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterId(const int64_t& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>桶名字</p>
                     * @return Bucket <p>桶名字</p>
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置<p>桶名字</p>
                     * @param _bucket <p>桶名字</p>
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取<p>桶类型</p><p>枚举值：</p><ul><li>0： 普通桶</li><li>1： 加速桶</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BucketType <p>桶类型</p><p>枚举值：</p><ul><li>0： 普通桶</li><li>1： 加速桶</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBucketType() const;

                    /**
                     * 设置<p>桶类型</p><p>枚举值：</p><ul><li>0： 普通桶</li><li>1： 加速桶</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bucketType <p>桶类型</p><p>枚举值：</p><ul><li>0： 普通桶</li><li>1： 加速桶</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBucketType(const int64_t& _bucketType);

                    /**
                     * 判断参数 BucketType 是否已赋值
                     * @return BucketType 是否已赋值
                     * 
                     */
                    bool BucketTypeHasBeenSet() const;

                    /**
                     * 获取<p>鉴权类型</p><p>枚举值：</p><ul><li>0： 不鉴权</li><li>1： 鉴权</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthMode <p>鉴权类型</p><p>枚举值：</p><ul><li>0： 不鉴权</li><li>1： 鉴权</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAuthMode() const;

                    /**
                     * 设置<p>鉴权类型</p><p>枚举值：</p><ul><li>0： 不鉴权</li><li>1： 鉴权</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authMode <p>鉴权类型</p><p>枚举值：</p><ul><li>0： 不鉴权</li><li>1： 鉴权</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthMode(const int64_t& _authMode);

                    /**
                     * 判断参数 AuthMode 是否已赋值
                     * @return AuthMode 是否已赋值
                     * 
                     */
                    bool AuthModeHasBeenSet() const;

                    /**
                     * 获取<p>是否默认属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDefault <p>是否默认属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置<p>是否默认属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDefault <p>是否默认属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsDefault(const int64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取<p>桶状态</p><p>枚举值：</p><ul><li>1： 正常</li><li>0： 禁用</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>桶状态</p><p>枚举值：</p><ul><li>1： 正常</li><li>0： 禁用</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>桶状态</p><p>枚举值：</p><ul><li>1： 正常</li><li>0： 禁用</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>桶状态</p><p>枚举值：</p><ul><li>1： 正常</li><li>0： 禁用</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>作业数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobCount <p>作业数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetJobCount() const;

                    /**
                     * 设置<p>作业数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobCount <p>作业数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobCount(const int64_t& _jobCount);

                    /**
                     * 判断参数 JobCount 是否已赋值
                     * @return JobCount 是否已赋值
                     * 
                     */
                    bool JobCountHasBeenSet() const;

                    /**
                     * 获取<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>创建时间</p><p>参数格式：yyyy-MM-dd HH:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间</p><p>参数格式：yyyy-MM-dd HH:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p><p>参数格式：yyyy-MM-dd HH:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间</p><p>参数格式：yyyy-MM-dd HH:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>更新时间</p><p>参数格式：yyyy-MM-dd HH:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>更新时间</p><p>参数格式：yyyy-MM-dd HH:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p><p>参数格式：yyyy-MM-dd HH:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>更新时间</p><p>参数格式：yyyy-MM-dd HH:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>桶唯一id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serialId;
                    bool m_serialIdHasBeenSet;

                    /**
                     * <p>集群id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>桶名字</p>
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * <p>桶类型</p><p>枚举值：</p><ul><li>0： 普通桶</li><li>1： 加速桶</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bucketType;
                    bool m_bucketTypeHasBeenSet;

                    /**
                     * <p>鉴权类型</p><p>枚举值：</p><ul><li>0： 不鉴权</li><li>1： 鉴权</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_authMode;
                    bool m_authModeHasBeenSet;

                    /**
                     * <p>是否默认属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * <p>桶状态</p><p>枚举值：</p><ul><li>1： 正常</li><li>0： 禁用</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>作业数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_jobCount;
                    bool m_jobCountHasBeenSet;

                    /**
                     * <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>创建时间</p><p>参数格式：yyyy-MM-dd HH:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p><p>参数格式：yyyy-MM-dd HH:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_CLUSTERBUCKETINFO_H_
