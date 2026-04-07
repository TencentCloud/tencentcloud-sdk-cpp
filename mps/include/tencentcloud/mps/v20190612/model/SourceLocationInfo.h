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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SOURCELOCATIONINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SOURCELOCATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SegmentDeliverInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * SourceLocation配置信息。
                */
                class SourceLocationInfo : public AbstractModel
                {
                public:
                    SourceLocationInfo();
                    ~SourceLocationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>ID，唯一标识。</p>
                     * @return Id <p>ID，唯一标识。</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>ID，唯一标识。</p>
                     * @param _id <p>ID，唯一标识。</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>SourceLocation名称。</p>
                     * @return Name <p>SourceLocation名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>SourceLocation名称。</p>
                     * @param _name <p>SourceLocation名称。</p>
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
                     * 获取<p>地域。</p>
                     * @return Region <p>地域。</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域。</p>
                     * @param _region <p>地域。</p>
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
                     * 获取<p>BaseUrl信息。</p>
                     * @return BaseUrl <p>BaseUrl信息。</p>
                     * 
                     */
                    std::string GetBaseUrl() const;

                    /**
                     * 设置<p>BaseUrl信息。</p>
                     * @param _baseUrl <p>BaseUrl信息。</p>
                     * 
                     */
                    void SetBaseUrl(const std::string& _baseUrl);

                    /**
                     * 判断参数 BaseUrl 是否已赋值
                     * @return BaseUrl 是否已赋值
                     * 
                     */
                    bool BaseUrlHasBeenSet() const;

                    /**
                     * 获取<p>是否开启补片。</p>
                     * @return SegmentDeliverEnable <p>是否开启补片。</p>
                     * 
                     */
                    bool GetSegmentDeliverEnable() const;

                    /**
                     * 设置<p>是否开启补片。</p>
                     * @param _segmentDeliverEnable <p>是否开启补片。</p>
                     * 
                     */
                    void SetSegmentDeliverEnable(const bool& _segmentDeliverEnable);

                    /**
                     * 判断参数 SegmentDeliverEnable 是否已赋值
                     * @return SegmentDeliverEnable 是否已赋值
                     * 
                     */
                    bool SegmentDeliverEnableHasBeenSet() const;

                    /**
                     * 获取<p>补片配置。</p>
                     * @return SegmentDeliverConf <p>补片配置。</p>
                     * 
                     */
                    SegmentDeliverInfo GetSegmentDeliverConf() const;

                    /**
                     * 设置<p>补片配置。</p>
                     * @param _segmentDeliverConf <p>补片配置。</p>
                     * 
                     */
                    void SetSegmentDeliverConf(const SegmentDeliverInfo& _segmentDeliverConf);

                    /**
                     * 判断参数 SegmentDeliverConf 是否已赋值
                     * @return SegmentDeliverConf 是否已赋值
                     * 
                     */
                    bool SegmentDeliverConfHasBeenSet() const;

                    /**
                     * 获取<p>绑定的直播source id列表。</p>
                     * @return AttachedLiveSources <p>绑定的直播source id列表。</p>
                     * 
                     */
                    std::vector<std::string> GetAttachedLiveSources() const;

                    /**
                     * 设置<p>绑定的直播source id列表。</p>
                     * @param _attachedLiveSources <p>绑定的直播source id列表。</p>
                     * 
                     */
                    void SetAttachedLiveSources(const std::vector<std::string>& _attachedLiveSources);

                    /**
                     * 判断参数 AttachedLiveSources 是否已赋值
                     * @return AttachedLiveSources 是否已赋值
                     * 
                     */
                    bool AttachedLiveSourcesHasBeenSet() const;

                    /**
                     * 获取<p>绑定的点播source id列表。</p>
                     * @return AttachedVodSources <p>绑定的点播source id列表。</p>
                     * 
                     */
                    std::vector<std::string> GetAttachedVodSources() const;

                    /**
                     * 设置<p>绑定的点播source id列表。</p>
                     * @param _attachedVodSources <p>绑定的点播source id列表。</p>
                     * 
                     */
                    void SetAttachedVodSources(const std::vector<std::string>& _attachedVodSources);

                    /**
                     * 判断参数 AttachedVodSources 是否已赋值
                     * @return AttachedVodSources 是否已赋值
                     * 
                     */
                    bool AttachedVodSourcesHasBeenSet() const;

                    /**
                     * 获取<p>source location创建时间，Unix时间戳。</p>
                     * @return CreateTime <p>source location创建时间，Unix时间戳。</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>source location创建时间，Unix时间戳。</p>
                     * @param _createTime <p>source location创建时间，Unix时间戳。</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>source location最近一次修改时间，Unix时间戳。</p>
                     * @return UpdateTime <p>source location最近一次修改时间，Unix时间戳。</p>
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置<p>source location最近一次修改时间，Unix时间戳。</p>
                     * @param _updateTime <p>source location最近一次修改时间，Unix时间戳。</p>
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启package分发分片，默认开启。</p>
                     * @return SegmentDeliverUsePackageEnable <p>是否开启package分发分片，默认开启。</p>
                     * 
                     */
                    bool GetSegmentDeliverUsePackageEnable() const;

                    /**
                     * 设置<p>是否开启package分发分片，默认开启。</p>
                     * @param _segmentDeliverUsePackageEnable <p>是否开启package分发分片，默认开启。</p>
                     * 
                     */
                    void SetSegmentDeliverUsePackageEnable(const bool& _segmentDeliverUsePackageEnable);

                    /**
                     * 判断参数 SegmentDeliverUsePackageEnable 是否已赋值
                     * @return SegmentDeliverUsePackageEnable 是否已赋值
                     * 
                     */
                    bool SegmentDeliverUsePackageEnableHasBeenSet() const;

                private:

                    /**
                     * <p>ID，唯一标识。</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>SourceLocation名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>地域。</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>BaseUrl信息。</p>
                     */
                    std::string m_baseUrl;
                    bool m_baseUrlHasBeenSet;

                    /**
                     * <p>是否开启补片。</p>
                     */
                    bool m_segmentDeliverEnable;
                    bool m_segmentDeliverEnableHasBeenSet;

                    /**
                     * <p>补片配置。</p>
                     */
                    SegmentDeliverInfo m_segmentDeliverConf;
                    bool m_segmentDeliverConfHasBeenSet;

                    /**
                     * <p>绑定的直播source id列表。</p>
                     */
                    std::vector<std::string> m_attachedLiveSources;
                    bool m_attachedLiveSourcesHasBeenSet;

                    /**
                     * <p>绑定的点播source id列表。</p>
                     */
                    std::vector<std::string> m_attachedVodSources;
                    bool m_attachedVodSourcesHasBeenSet;

                    /**
                     * <p>source location创建时间，Unix时间戳。</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>source location最近一次修改时间，Unix时间戳。</p>
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>是否开启package分发分片，默认开启。</p>
                     */
                    bool m_segmentDeliverUsePackageEnable;
                    bool m_segmentDeliverUsePackageEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SOURCELOCATIONINFO_H_
