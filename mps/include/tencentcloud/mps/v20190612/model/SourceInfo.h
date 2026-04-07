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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SOURCEINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SourcePackageConf.h>
#include <tencentcloud/mps/v20190612/model/SourceTag.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 源信息。
                */
                class SourceInfo : public AbstractModel
                {
                public:
                    SourceInfo();
                    ~SourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称。
                     * @return Name 名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称。
                     * @param _name 名称。
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
                     * 获取source类型，区分直播Live和点播Vod。
                     * @return Type source类型，区分直播Live和点播Vod。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置source类型，区分直播Live和点播Vod。
                     * @param _type source类型，区分直播Live和点播Vod。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取源配置。
                     * @return PackageConf 源配置。
                     * 
                     */
                    std::vector<SourcePackageConf> GetPackageConf() const;

                    /**
                     * 设置源配置。
                     * @param _packageConf 源配置。
                     * 
                     */
                    void SetPackageConf(const std::vector<SourcePackageConf>& _packageConf);

                    /**
                     * 判断参数 PackageConf 是否已赋值
                     * @return PackageConf 是否已赋值
                     * 
                     */
                    bool PackageConfHasBeenSet() const;

                    /**
                     * 获取ID。
                     * @return Id ID。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置ID。
                     * @param _id ID。
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
                     * 获取创建时间戳。
                     * @return CreateTime 创建时间戳。
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间戳。
                     * @param _createTime 创建时间戳。
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
                     * 获取更新时间戳。
                     * @return UpdateTime 更新时间戳。
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间戳。
                     * @param _updateTime 更新时间戳。
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
                     * 获取Region。
                     * @return Region Region。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region。
                     * @param _region Region。
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
                     * 获取源标签
                     * @return SourceTags 源标签
                     * 
                     */
                    std::vector<SourceTag> GetSourceTags() const;

                    /**
                     * 设置源标签
                     * @param _sourceTags 源标签
                     * 
                     */
                    void SetSourceTags(const std::vector<SourceTag>& _sourceTags);

                    /**
                     * 判断参数 SourceTags 是否已赋值
                     * @return SourceTags 是否已赋值
                     * 
                     */
                    bool SourceTagsHasBeenSet() const;

                private:

                    /**
                     * 名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * source类型，区分直播Live和点播Vod。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 源配置。
                     */
                    std::vector<SourcePackageConf> m_packageConf;
                    bool m_packageConfHasBeenSet;

                    /**
                     * ID。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 创建时间戳。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间戳。
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Region。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 源标签
                     */
                    std::vector<SourceTag> m_sourceTags;
                    bool m_sourceTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SOURCEINFO_H_
