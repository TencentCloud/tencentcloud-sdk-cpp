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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SUBAPPIDINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SUBAPPIDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SUBAPPIDINFO_H_
