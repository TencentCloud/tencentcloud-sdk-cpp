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
                     * 获取<p>标签值ID。ID 模式写接口（UpdateWorkspaceUsersTags / UpdateWorkspaceGroupsTags）中必填，可通过 ListTags 接口出参 Items[].TagValues[].TagValueId 获取，也可通过 CreateTagValues 创建后获取；按名称模式接口（AttachWorkspaceUserTags / DetachWorkspaceUserTags）中无需传入；查询接口出参中回填。ID 不存在或已删除时接口报错 TagValueNotExist</p>
                     * @return TagValueId <p>标签值ID。ID 模式写接口（UpdateWorkspaceUsersTags / UpdateWorkspaceGroupsTags）中必填，可通过 ListTags 接口出参 Items[].TagValues[].TagValueId 获取，也可通过 CreateTagValues 创建后获取；按名称模式接口（AttachWorkspaceUserTags / DetachWorkspaceUserTags）中无需传入；查询接口出参中回填。ID 不存在或已删除时接口报错 TagValueNotExist</p>
                     * 
                     */
                    std::string GetTagValueId() const;

                    /**
                     * 设置<p>标签值ID。ID 模式写接口（UpdateWorkspaceUsersTags / UpdateWorkspaceGroupsTags）中必填，可通过 ListTags 接口出参 Items[].TagValues[].TagValueId 获取，也可通过 CreateTagValues 创建后获取；按名称模式接口（AttachWorkspaceUserTags / DetachWorkspaceUserTags）中无需传入；查询接口出参中回填。ID 不存在或已删除时接口报错 TagValueNotExist</p>
                     * @param _tagValueId <p>标签值ID。ID 模式写接口（UpdateWorkspaceUsersTags / UpdateWorkspaceGroupsTags）中必填，可通过 ListTags 接口出参 Items[].TagValues[].TagValueId 获取，也可通过 CreateTagValues 创建后获取；按名称模式接口（AttachWorkspaceUserTags / DetachWorkspaceUserTags）中无需传入；查询接口出参中回填。ID 不存在或已删除时接口报错 TagValueNotExist</p>
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
                     * 获取<p>标签值内容。按名称模式接口（AttachWorkspaceUserTags / DetachWorkspaceUserTags）中必填；ID 模式写接口（UpdateWorkspaceUsersTags / UpdateWorkspaceGroupsTags）中无需传入，服务端忽略；查询接口出参中回填</p>
                     * @return TagValue <p>标签值内容。按名称模式接口（AttachWorkspaceUserTags / DetachWorkspaceUserTags）中必填；ID 模式写接口（UpdateWorkspaceUsersTags / UpdateWorkspaceGroupsTags）中无需传入，服务端忽略；查询接口出参中回填</p>
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置<p>标签值内容。按名称模式接口（AttachWorkspaceUserTags / DetachWorkspaceUserTags）中必填；ID 模式写接口（UpdateWorkspaceUsersTags / UpdateWorkspaceGroupsTags）中无需传入，服务端忽略；查询接口出参中回填</p>
                     * @param _tagValue <p>标签值内容。按名称模式接口（AttachWorkspaceUserTags / DetachWorkspaceUserTags）中必填；ID 模式写接口（UpdateWorkspaceUsersTags / UpdateWorkspaceGroupsTags）中无需传入，服务端忽略；查询接口出参中回填</p>
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
                     * 获取<p>标签来源，枚举值：0=未指定 1=用户直绑 2=用户组继承 3=两者都有。仅查询接口出参中返回；所有写接口均无需传入，服务端忽略</p>
                     * @return Source <p>标签来源，枚举值：0=未指定 1=用户直绑 2=用户组继承 3=两者都有。仅查询接口出参中返回；所有写接口均无需传入，服务端忽略</p>
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置<p>标签来源，枚举值：0=未指定 1=用户直绑 2=用户组继承 3=两者都有。仅查询接口出参中返回；所有写接口均无需传入，服务端忽略</p>
                     * @param _source <p>标签来源，枚举值：0=未指定 1=用户直绑 2=用户组继承 3=两者都有。仅查询接口出参中返回；所有写接口均无需传入，服务端忽略</p>
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
                     * 获取<p>继承来源的用户组名称列表（标签来源 Source=1 用户直绑时为空）。仅查询接口出参中返回；所有写接口均无需传入，服务端忽略</p>
                     * @return GroupNames <p>继承来源的用户组名称列表（标签来源 Source=1 用户直绑时为空）。仅查询接口出参中返回；所有写接口均无需传入，服务端忽略</p>
                     * 
                     */
                    std::vector<std::string> GetGroupNames() const;

                    /**
                     * 设置<p>继承来源的用户组名称列表（标签来源 Source=1 用户直绑时为空）。仅查询接口出参中返回；所有写接口均无需传入，服务端忽略</p>
                     * @param _groupNames <p>继承来源的用户组名称列表（标签来源 Source=1 用户直绑时为空）。仅查询接口出参中返回；所有写接口均无需传入，服务端忽略</p>
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
                     * <p>标签值ID。ID 模式写接口（UpdateWorkspaceUsersTags / UpdateWorkspaceGroupsTags）中必填，可通过 ListTags 接口出参 Items[].TagValues[].TagValueId 获取，也可通过 CreateTagValues 创建后获取；按名称模式接口（AttachWorkspaceUserTags / DetachWorkspaceUserTags）中无需传入；查询接口出参中回填。ID 不存在或已删除时接口报错 TagValueNotExist</p>
                     */
                    std::string m_tagValueId;
                    bool m_tagValueIdHasBeenSet;

                    /**
                     * <p>标签值内容。按名称模式接口（AttachWorkspaceUserTags / DetachWorkspaceUserTags）中必填；ID 模式写接口（UpdateWorkspaceUsersTags / UpdateWorkspaceGroupsTags）中无需传入，服务端忽略；查询接口出参中回填</p>
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * <p>标签来源，枚举值：0=未指定 1=用户直绑 2=用户组继承 3=两者都有。仅查询接口出参中返回；所有写接口均无需传入，服务端忽略</p>
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>继承来源的用户组名称列表（标签来源 Source=1 用户直绑时为空）。仅查询接口出参中返回；所有写接口均无需传入，服务端忽略</p>
                     */
                    std::vector<std::string> m_groupNames;
                    bool m_groupNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TAGVALUEINFO_H_
