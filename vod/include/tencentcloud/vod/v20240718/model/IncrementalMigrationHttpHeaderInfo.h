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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPHEADERINFO_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPHEADERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationHttpHeader.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * 增量迁移回源 HTTP Header 信息。
                */
                class IncrementalMigrationHttpHeaderInfo : public AbstractModel
                {
                public:
                    IncrementalMigrationHttpHeaderInfo();
                    ~IncrementalMigrationHttpHeaderInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Http Header 透传模式。取值有：
<li>FOLLOW_ALL：透传所有头部信息；</li>
<li>FOLLOW_PART：透传部分头部信息；</li>
<li>IGNORE_PART：忽略部分头部信息。</li>参数必填。
                     * @return HeaderFollowMode Http Header 透传模式。取值有：
<li>FOLLOW_ALL：透传所有头部信息；</li>
<li>FOLLOW_PART：透传部分头部信息；</li>
<li>IGNORE_PART：忽略部分头部信息。</li>参数必填。
                     * 
                     */
                    std::string GetHeaderFollowMode() const;

                    /**
                     * 设置Http Header 透传模式。取值有：
<li>FOLLOW_ALL：透传所有头部信息；</li>
<li>FOLLOW_PART：透传部分头部信息；</li>
<li>IGNORE_PART：忽略部分头部信息。</li>参数必填。
                     * @param _headerFollowMode Http Header 透传模式。取值有：
<li>FOLLOW_ALL：透传所有头部信息；</li>
<li>FOLLOW_PART：透传部分头部信息；</li>
<li>IGNORE_PART：忽略部分头部信息。</li>参数必填。
                     * 
                     */
                    void SetHeaderFollowMode(const std::string& _headerFollowMode);

                    /**
                     * 判断参数 HeaderFollowMode 是否已赋值
                     * @return HeaderFollowMode 是否已赋值
                     * 
                     */
                    bool HeaderFollowModeHasBeenSet() const;

                    /**
                     * 获取需透传 Header Key 集合，仅当 HeaderFollowMode 取值 `FOLLOW_PART` 时需要填充。
                     * @return FollowHttpHeaderKeySet 需透传 Header Key 集合，仅当 HeaderFollowMode 取值 `FOLLOW_PART` 时需要填充。
                     * 
                     */
                    std::vector<std::string> GetFollowHttpHeaderKeySet() const;

                    /**
                     * 设置需透传 Header Key 集合，仅当 HeaderFollowMode 取值 `FOLLOW_PART` 时需要填充。
                     * @param _followHttpHeaderKeySet 需透传 Header Key 集合，仅当 HeaderFollowMode 取值 `FOLLOW_PART` 时需要填充。
                     * 
                     */
                    void SetFollowHttpHeaderKeySet(const std::vector<std::string>& _followHttpHeaderKeySet);

                    /**
                     * 判断参数 FollowHttpHeaderKeySet 是否已赋值
                     * @return FollowHttpHeaderKeySet 是否已赋值
                     * 
                     */
                    bool FollowHttpHeaderKeySetHasBeenSet() const;

                    /**
                     * 获取新增 Header 键值对集合。
                     * @return NewHttpHeaderSet 新增 Header 键值对集合。
                     * 
                     */
                    std::vector<IncrementalMigrationHttpHeader> GetNewHttpHeaderSet() const;

                    /**
                     * 设置新增 Header 键值对集合。
                     * @param _newHttpHeaderSet 新增 Header 键值对集合。
                     * 
                     */
                    void SetNewHttpHeaderSet(const std::vector<IncrementalMigrationHttpHeader>& _newHttpHeaderSet);

                    /**
                     * 判断参数 NewHttpHeaderSet 是否已赋值
                     * @return NewHttpHeaderSet 是否已赋值
                     * 
                     */
                    bool NewHttpHeaderSetHasBeenSet() const;

                private:

                    /**
                     * Http Header 透传模式。取值有：
<li>FOLLOW_ALL：透传所有头部信息；</li>
<li>FOLLOW_PART：透传部分头部信息；</li>
<li>IGNORE_PART：忽略部分头部信息。</li>参数必填。
                     */
                    std::string m_headerFollowMode;
                    bool m_headerFollowModeHasBeenSet;

                    /**
                     * 需透传 Header Key 集合，仅当 HeaderFollowMode 取值 `FOLLOW_PART` 时需要填充。
                     */
                    std::vector<std::string> m_followHttpHeaderKeySet;
                    bool m_followHttpHeaderKeySetHasBeenSet;

                    /**
                     * 新增 Header 键值对集合。
                     */
                    std::vector<IncrementalMigrationHttpHeader> m_newHttpHeaderSet;
                    bool m_newHttpHeaderSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPHEADERINFO_H_
