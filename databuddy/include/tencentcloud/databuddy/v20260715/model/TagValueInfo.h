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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TAGVALUEINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TAGVALUEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 标签值信息
                */
                class TagValueInfo : public AbstractModel
                {
                public:
                    TagValueInfo();
                    ~TagValueInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签值ID
                     * @return TagValueId 标签值ID
                     * 
                     */
                    std::string GetTagValueId() const;

                    /**
                     * 设置标签值ID
                     * @param _tagValueId 标签值ID
                     * 
                     */
                    void SetTagValueId(const std::string& _tagValueId);

                    /**
                     * 判断参数 TagValueId 是否已赋值
                     * @return TagValueId 是否已赋值
                     * 
                     */
                    bool TagValueIdHasBeenSet() const;

                    /**
                     * 获取标签值内容，查询时填充，写入时不传
                     * @return TagValue 标签值内容，查询时填充，写入时不传
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置标签值内容，查询时填充，写入时不传
                     * @param _tagValue 标签值内容，查询时填充，写入时不传
                     * 
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     * 
                     */
                    bool TagValueHasBeenSet() const;

                    /**
                     * 获取标签来源，参考 web_enum_standard.proto -> TagSource：0=未指定 1=用户直绑 2=用户组继承 3=两者都有，查询时填充，写入时不传
                     * @return Source 标签来源，参考 web_enum_standard.proto -> TagSource：0=未指定 1=用户直绑 2=用户组继承 3=两者都有，查询时填充，写入时不传
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置标签来源，参考 web_enum_standard.proto -> TagSource：0=未指定 1=用户直绑 2=用户组继承 3=两者都有，查询时填充，写入时不传
                     * @param _source 标签来源，参考 web_enum_standard.proto -> TagSource：0=未指定 1=用户直绑 2=用户组继承 3=两者都有，查询时填充，写入时不传
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取继承来源的用户组名称列表，Source=1 时为空，查询时填充，写入时不传
                     * @return GroupNames 继承来源的用户组名称列表，Source=1 时为空，查询时填充，写入时不传
                     * 
                     */
                    std::vector<std::string> GetGroupNames() const;

                    /**
                     * 设置继承来源的用户组名称列表，Source=1 时为空，查询时填充，写入时不传
                     * @param _groupNames 继承来源的用户组名称列表，Source=1 时为空，查询时填充，写入时不传
                     * 
                     */
                    void SetGroupNames(const std::vector<std::string>& _groupNames);

                    /**
                     * 判断参数 GroupNames 是否已赋值
                     * @return GroupNames 是否已赋值
                     * 
                     */
                    bool GroupNamesHasBeenSet() const;

                private:

                    /**
                     * 标签值ID
                     */
                    std::string m_tagValueId;
                    bool m_tagValueIdHasBeenSet;

                    /**
                     * 标签值内容，查询时填充，写入时不传
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * 标签来源，参考 web_enum_standard.proto -> TagSource：0=未指定 1=用户直绑 2=用户组继承 3=两者都有，查询时填充，写入时不传
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 继承来源的用户组名称列表，Source=1 时为空，查询时填充，写入时不传
                     */
                    std::vector<std::string> m_groupNames;
                    bool m_groupNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TAGVALUEINFO_H_
