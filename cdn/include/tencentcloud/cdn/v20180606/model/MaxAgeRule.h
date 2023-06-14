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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_MAXAGERULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_MAXAGERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * MagAge 规则配置
                */
                class MaxAgeRule : public AbstractModel
                {
                public:
                    MaxAgeRule();
                    ~MaxAgeRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
index: 指定主页生效
                     * @return MaxAgeType 规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
index: 指定主页生效
                     * 
                     */
                    std::string GetMaxAgeType() const;

                    /**
                     * 设置规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
index: 指定主页生效
                     * @param _maxAgeType 规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
index: 指定主页生效
                     * 
                     */
                    void SetMaxAgeType(const std::string& _maxAgeType);

                    /**
                     * 判断参数 MaxAgeType 是否已赋值
                     * @return MaxAgeType 是否已赋值
                     * 
                     */
                    bool MaxAgeTypeHasBeenSet() const;

                    /**
                     * 获取MaxAgeType 对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test/
path 时填充绝对路径，如 /xxx/test.html
index 时填充 /
注意：all规则不可删除，默认遵循源站，可修改。
                     * @return MaxAgeContents MaxAgeType 对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test/
path 时填充绝对路径，如 /xxx/test.html
index 时填充 /
注意：all规则不可删除，默认遵循源站，可修改。
                     * 
                     */
                    std::vector<std::string> GetMaxAgeContents() const;

                    /**
                     * 设置MaxAgeType 对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test/
path 时填充绝对路径，如 /xxx/test.html
index 时填充 /
注意：all规则不可删除，默认遵循源站，可修改。
                     * @param _maxAgeContents MaxAgeType 对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test/
path 时填充绝对路径，如 /xxx/test.html
index 时填充 /
注意：all规则不可删除，默认遵循源站，可修改。
                     * 
                     */
                    void SetMaxAgeContents(const std::vector<std::string>& _maxAgeContents);

                    /**
                     * 判断参数 MaxAgeContents 是否已赋值
                     * @return MaxAgeContents 是否已赋值
                     * 
                     */
                    bool MaxAgeContentsHasBeenSet() const;

                    /**
                     * 获取MaxAge 时间设置，单位秒
注意：时间为0，即不缓存。
                     * @return MaxAgeTime MaxAge 时间设置，单位秒
注意：时间为0，即不缓存。
                     * 
                     */
                    int64_t GetMaxAgeTime() const;

                    /**
                     * 设置MaxAge 时间设置，单位秒
注意：时间为0，即不缓存。
                     * @param _maxAgeTime MaxAge 时间设置，单位秒
注意：时间为0，即不缓存。
                     * 
                     */
                    void SetMaxAgeTime(const int64_t& _maxAgeTime);

                    /**
                     * 判断参数 MaxAgeTime 是否已赋值
                     * @return MaxAgeTime 是否已赋值
                     * 
                     */
                    bool MaxAgeTimeHasBeenSet() const;

                    /**
                     * 获取是否遵循源站，on或off，开启时忽略时间设置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FollowOrigin 是否遵循源站，on或off，开启时忽略时间设置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFollowOrigin() const;

                    /**
                     * 设置是否遵循源站，on或off，开启时忽略时间设置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _followOrigin 是否遵循源站，on或off，开启时忽略时间设置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFollowOrigin(const std::string& _followOrigin);

                    /**
                     * 判断参数 FollowOrigin 是否已赋值
                     * @return FollowOrigin 是否已赋值
                     * 
                     */
                    bool FollowOriginHasBeenSet() const;

                private:

                    /**
                     * 规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
index: 指定主页生效
                     */
                    std::string m_maxAgeType;
                    bool m_maxAgeTypeHasBeenSet;

                    /**
                     * MaxAgeType 对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test/
path 时填充绝对路径，如 /xxx/test.html
index 时填充 /
注意：all规则不可删除，默认遵循源站，可修改。
                     */
                    std::vector<std::string> m_maxAgeContents;
                    bool m_maxAgeContentsHasBeenSet;

                    /**
                     * MaxAge 时间设置，单位秒
注意：时间为0，即不缓存。
                     */
                    int64_t m_maxAgeTime;
                    bool m_maxAgeTimeHasBeenSet;

                    /**
                     * 是否遵循源站，on或off，开启时忽略时间设置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_followOrigin;
                    bool m_followOriginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_MAXAGERULE_H_
