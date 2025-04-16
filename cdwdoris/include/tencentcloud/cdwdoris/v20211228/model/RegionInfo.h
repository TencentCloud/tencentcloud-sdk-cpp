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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_REGIONINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_REGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/ZoneInfo.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 地域描述信息
                */
                class RegionInfo : public AbstractModel
                {
                public:
                    RegionInfo();
                    ~RegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域名称，例如“ap-guangzhou"
                     * @return Name 地域名称，例如“ap-guangzhou"
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置地域名称，例如“ap-guangzhou"
                     * @param _name 地域名称，例如“ap-guangzhou"
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取地域描述，例如"广州”
                     * @return Desc 地域描述，例如"广州”
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置地域描述，例如"广州”
                     * @param _desc 地域描述，例如"广州”
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取地域唯一标记
                     * @return RegionId 地域唯一标记
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域唯一标记
                     * @param _regionId 地域唯一标记
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取地域下所有可用区列表
                     * @return Zones 地域下所有可用区列表
                     * 
                     */
                    std::vector<ZoneInfo> GetZones() const;

                    /**
                     * 设置地域下所有可用区列表
                     * @param _zones 地域下所有可用区列表
                     * 
                     */
                    void SetZones(const std::vector<ZoneInfo>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取该地域下集群数目
                     * @return Count 该地域下集群数目
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置该地域下集群数目
                     * @param _count 该地域下集群数目
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取0代表是国际站 1代表不是
                     * @return IsInternationalSite 0代表是国际站 1代表不是
                     * 
                     */
                    uint64_t GetIsInternationalSite() const;

                    /**
                     * 设置0代表是国际站 1代表不是
                     * @param _isInternationalSite 0代表是国际站 1代表不是
                     * 
                     */
                    void SetIsInternationalSite(const uint64_t& _isInternationalSite);

                    /**
                     * 判断参数 IsInternationalSite 是否已赋值
                     * @return IsInternationalSite 是否已赋值
                     * 
                     */
                    bool IsInternationalSiteHasBeenSet() const;

                    /**
                     * 获取桶
                     * @return Bucket 桶
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置桶
                     * @param _bucket 桶
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
                     * 获取存算分离集群数
                     * @return SSCCount 存算分离集群数
                     * 
                     */
                    int64_t GetSSCCount() const;

                    /**
                     * 设置存算分离集群数
                     * @param _sSCCount 存算分离集群数
                     * 
                     */
                    void SetSSCCount(const int64_t& _sSCCount);

                    /**
                     * 判断参数 SSCCount 是否已赋值
                     * @return SSCCount 是否已赋值
                     * 
                     */
                    bool SSCCountHasBeenSet() const;

                    /**
                     * 获取是否开通存算分离
                     * @return EnableSSC 是否开通存算分离
                     * 
                     */
                    bool GetEnableSSC() const;

                    /**
                     * 设置是否开通存算分离
                     * @param _enableSSC 是否开通存算分离
                     * 
                     */
                    void SetEnableSSC(const bool& _enableSSC);

                    /**
                     * 判断参数 EnableSSC 是否已赋值
                     * @return EnableSSC 是否已赋值
                     * 
                     */
                    bool EnableSSCHasBeenSet() const;

                private:

                    /**
                     * 地域名称，例如“ap-guangzhou"
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 地域描述，例如"广州”
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 地域唯一标记
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 地域下所有可用区列表
                     */
                    std::vector<ZoneInfo> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * 该地域下集群数目
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 0代表是国际站 1代表不是
                     */
                    uint64_t m_isInternationalSite;
                    bool m_isInternationalSiteHasBeenSet;

                    /**
                     * 桶
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 存算分离集群数
                     */
                    int64_t m_sSCCount;
                    bool m_sSCCountHasBeenSet;

                    /**
                     * 是否开通存算分离
                     */
                    bool m_enableSSC;
                    bool m_enableSSCHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_REGIONINFO_H_
