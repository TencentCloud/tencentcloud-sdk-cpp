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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SUBAPPIDINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SUBAPPIDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 子应用信息。
                */
                class SubAppIdInfo : public AbstractModel
                {
                public:
                    SubAppIdInfo();
                    ~SubAppIdInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子应用 ID。
                     * @return SubAppId 子应用 ID。
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置子应用 ID。
                     * @param _subAppId 子应用 ID。
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取子应用名称。
                     * @return SubAppIdName 子应用名称。
                     * 
                     */
                    std::string GetSubAppIdName() const;

                    /**
                     * 设置子应用名称。
                     * @param _subAppIdName 子应用名称。
                     * 
                     */
                    void SetSubAppIdName(const std::string& _subAppIdName);

                    /**
                     * 判断参数 SubAppIdName 是否已赋值
                     * @return SubAppIdName 是否已赋值
                     * 
                     */
                    bool SubAppIdNameHasBeenSet() const;

                    /**
                     * 获取子应用简介。
                     * @return Description 子应用简介。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置子应用简介。
                     * @param _description 子应用简介。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取子应用创建时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return CreateTime 子应用创建时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置子应用创建时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _createTime 子应用创建时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
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
                     * 获取子应用状态，有效值：
<li>On：启用；</li>
<li>Off：停用。</li>
<li>Destroying：销毁中。</li>
<li>Destroyed：销毁完成。</li>
                     * @return Status 子应用状态，有效值：
<li>On：启用；</li>
<li>Off：停用。</li>
<li>Destroying：销毁中。</li>
<li>Destroyed：销毁完成。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置子应用状态，有效值：
<li>On：启用；</li>
<li>Off：停用。</li>
<li>Destroying：销毁中。</li>
<li>Destroyed：销毁完成。</li>
                     * @param _status 子应用状态，有效值：
<li>On：启用；</li>
<li>Off：停用。</li>
<li>Destroying：销毁中。</li>
<li>Destroyed：销毁完成。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取子应用名称（该字段已不推荐使用，建议使用新的子应用名称字段 SubAppIdName）。
                     * @return Name 子应用名称（该字段已不推荐使用，建议使用新的子应用名称字段 SubAppIdName）。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置子应用名称（该字段已不推荐使用，建议使用新的子应用名称字段 SubAppIdName）。
                     * @param _name 子应用名称（该字段已不推荐使用，建议使用新的子应用名称字段 SubAppIdName）。
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
                     * 获取此应用的模式，可选值为：
- fileid：仅FileID模式
- - fileid+path：FileID & Path模式
留空时默认选择仅FileID模式
                     * @return Mode 此应用的模式，可选值为：
- fileid：仅FileID模式
- - fileid+path：FileID & Path模式
留空时默认选择仅FileID模式
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置此应用的模式，可选值为：
- fileid：仅FileID模式
- - fileid+path：FileID & Path模式
留空时默认选择仅FileID模式
                     * @param _mode 此应用的模式，可选值为：
- fileid：仅FileID模式
- - fileid+path：FileID & Path模式
留空时默认选择仅FileID模式
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取子应用已启用的存储地域。
                     * @return StorageRegions 子应用已启用的存储地域。
                     * 
                     */
                    std::vector<std::string> GetStorageRegions() const;

                    /**
                     * 设置子应用已启用的存储地域。
                     * @param _storageRegions 子应用已启用的存储地域。
                     * 
                     */
                    void SetStorageRegions(const std::vector<std::string>& _storageRegions);

                    /**
                     * 判断参数 StorageRegions 是否已赋值
                     * @return StorageRegions 是否已赋值
                     * 
                     */
                    bool StorageRegionsHasBeenSet() const;

                    /**
                     * 获取子应用绑定的tag。
                     * @return Tags 子应用绑定的tag。
                     * 
                     */
                    std::vector<ResourceTag> GetTags() const;

                    /**
                     * 设置子应用绑定的tag。
                     * @param _tags 子应用绑定的tag。
                     * 
                     */
                    void SetTags(const std::vector<ResourceTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 子应用 ID。
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 子应用名称。
                     */
                    std::string m_subAppIdName;
                    bool m_subAppIdNameHasBeenSet;

                    /**
                     * 子应用简介。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 子应用创建时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 子应用状态，有效值：
<li>On：启用；</li>
<li>Off：停用。</li>
<li>Destroying：销毁中。</li>
<li>Destroyed：销毁完成。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 子应用名称（该字段已不推荐使用，建议使用新的子应用名称字段 SubAppIdName）。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 此应用的模式，可选值为：
- fileid：仅FileID模式
- - fileid+path：FileID & Path模式
留空时默认选择仅FileID模式
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 子应用已启用的存储地域。
                     */
                    std::vector<std::string> m_storageRegions;
                    bool m_storageRegionsHasBeenSet;

                    /**
                     * 子应用绑定的tag。
                     */
                    std::vector<ResourceTag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SUBAPPIDINFO_H_
