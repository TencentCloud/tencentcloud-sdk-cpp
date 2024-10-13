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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DSPACOSMETADATAINFO_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DSPACOSMETADATAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * COS元数据信息
                */
                class DSPACosMetaDataInfo : public AbstractModel
                {
                public:
                    DSPACosMetaDataInfo();
                    ~DSPACosMetaDataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取COS桶名
                     * @return Bucket COS桶名
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置COS桶名
                     * @param _bucket COS桶名
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
                     * 获取COS桶创建时间
                     * @return CreateTime COS桶创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置COS桶创建时间
                     * @param _createTime COS桶创建时间
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
                     * 获取1 -- 有效，0 -- 无效，资源可能已被删除。
                     * @return Valid 1 -- 有效，0 -- 无效，资源可能已被删除。
                     * 
                     */
                    int64_t GetValid() const;

                    /**
                     * 设置1 -- 有效，0 -- 无效，资源可能已被删除。
                     * @param _valid 1 -- 有效，0 -- 无效，资源可能已被删除。
                     * 
                     */
                    void SetValid(const int64_t& _valid);

                    /**
                     * 判断参数 Valid 是否已赋值
                     * @return Valid 是否已赋值
                     * 
                     */
                    bool ValidHasBeenSet() const;

                    /**
                     * 获取DSPA为COS资源生成的资源ID
                     * @return ResourceId DSPA为COS资源生成的资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置DSPA为COS资源生成的资源ID
                     * @param _resourceId DSPA为COS资源生成的资源ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取COS资源所处的地域
                     * @return ResourceRegion COS资源所处的地域
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置COS资源所处的地域
                     * @param _resourceRegion COS资源所处的地域
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取COS桶绑定状态
                     * @return BindStatus COS桶绑定状态
                     * 
                     */
                    std::string GetBindStatus() const;

                    /**
                     * 设置COS桶绑定状态
                     * @param _bindStatus COS桶绑定状态
                     * 
                     */
                    void SetBindStatus(const std::string& _bindStatus);

                    /**
                     * 判断参数 BindStatus 是否已赋值
                     * @return BindStatus 是否已赋值
                     * 
                     */
                    bool BindStatusHasBeenSet() const;

                    /**
                     * 获取COS桶存储量
                     * @return Storage COS桶存储量
                     * 
                     */
                    double GetStorage() const;

                    /**
                     * 设置COS桶存储量
                     * @param _storage COS桶存储量
                     * 
                     */
                    void SetStorage(const double& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取治理授权状态，0:关闭 1：开启
                     * @return GovernAuthStatus 治理授权状态，0:关闭 1：开启
                     * 
                     */
                    int64_t GetGovernAuthStatus() const;

                    /**
                     * 设置治理授权状态，0:关闭 1：开启
                     * @param _governAuthStatus 治理授权状态，0:关闭 1：开启
                     * 
                     */
                    void SetGovernAuthStatus(const int64_t& _governAuthStatus);

                    /**
                     * 判断参数 GovernAuthStatus 是否已赋值
                     * @return GovernAuthStatus 是否已赋值
                     * 
                     */
                    bool GovernAuthStatusHasBeenSet() const;

                private:

                    /**
                     * COS桶名
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * COS桶创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 1 -- 有效，0 -- 无效，资源可能已被删除。
                     */
                    int64_t m_valid;
                    bool m_validHasBeenSet;

                    /**
                     * DSPA为COS资源生成的资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * COS资源所处的地域
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * COS桶绑定状态
                     */
                    std::string m_bindStatus;
                    bool m_bindStatusHasBeenSet;

                    /**
                     * COS桶存储量
                     */
                    double m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 治理授权状态，0:关闭 1：开启
                     */
                    int64_t m_governAuthStatus;
                    bool m_governAuthStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DSPACOSMETADATAINFO_H_
