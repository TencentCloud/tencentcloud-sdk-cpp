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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_SNAPSHOTCOS_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_SNAPSHOTCOS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * 板书文件存储cos参数
                */
                class SnapshotCOS : public AbstractModel
                {
                public:
                    SnapshotCOS();
                    ~SnapshotCOS() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cos所在腾讯云账号uin
                     * @return Uin cos所在腾讯云账号uin
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置cos所在腾讯云账号uin
                     * @param _uin cos所在腾讯云账号uin
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取cos所在地区
                     * @return Region cos所在地区
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置cos所在地区
                     * @param _region cos所在地区
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
                     * 获取cos存储桶名称
                     * @return Bucket cos存储桶名称
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置cos存储桶名称
                     * @param _bucket cos存储桶名称
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
                     * 获取板书文件存储根目录
                     * @return TargetDir 板书文件存储根目录
                     * 
                     */
                    std::string GetTargetDir() const;

                    /**
                     * 设置板书文件存储根目录
                     * @param _targetDir 板书文件存储根目录
                     * 
                     */
                    void SetTargetDir(const std::string& _targetDir);

                    /**
                     * 判断参数 TargetDir 是否已赋值
                     * @return TargetDir 是否已赋值
                     * 
                     */
                    bool TargetDirHasBeenSet() const;

                    /**
                     * 获取CDN加速域名
                     * @return Domain CDN加速域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置CDN加速域名
                     * @param _domain CDN加速域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * cos所在腾讯云账号uin
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * cos所在地区
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * cos存储桶名称
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 板书文件存储根目录
                     */
                    std::string m_targetDir;
                    bool m_targetDirHasBeenSet;

                    /**
                     * CDN加速域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_SNAPSHOTCOS_H_
