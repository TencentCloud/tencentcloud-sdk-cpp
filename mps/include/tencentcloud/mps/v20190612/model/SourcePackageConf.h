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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SOURCEPACKAGECONF_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SOURCEPACKAGECONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 源文件信息。
                */
                class SourcePackageConf : public AbstractModel
                {
                public:
                    SourcePackageConf();
                    ~SourcePackageConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取group名称，当channel为Linear模式并且选择了vod source的时候，该group 名称和channel output的输出组名称对应。
                     * @return GroupName group名称，当channel为Linear模式并且选择了vod source的时候，该group 名称和channel output的输出组名称对应。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置group名称，当channel为Linear模式并且选择了vod source的时候，该group 名称和channel output的输出组名称对应。
                     * @param _groupName group名称，当channel为Linear模式并且选择了vod source的时候，该group 名称和channel output的输出组名称对应。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取类型，区分HLS和DASH，可选值：HLS、DASH。
                     * @return Type 类型，区分HLS和DASH，可选值：HLS、DASH。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型，区分HLS和DASH，可选值：HLS、DASH。
                     * @param _type 类型，区分HLS和DASH，可选值：HLS、DASH。
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
                     * 获取访问路径。
                     * @return Path 访问路径。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置访问路径。
                     * @param _path 访问路径。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                private:

                    /**
                     * group名称，当channel为Linear模式并且选择了vod source的时候，该group 名称和channel output的输出组名称对应。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 类型，区分HLS和DASH，可选值：HLS、DASH。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 访问路径。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SOURCEPACKAGECONF_H_
