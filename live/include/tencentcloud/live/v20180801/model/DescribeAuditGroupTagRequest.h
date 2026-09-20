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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAUDITGROUPTAGREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAUDITGROUPTAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeAuditGroupTag请求参数结构体
                */
                class DescribeAuditGroupTagRequest : public AbstractModel
                {
                public:
                    DescribeAuditGroupTagRequest();
                    ~DescribeAuditGroupTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>标签类别。<br>Other：全量，TagText：文字，TagImage：图片，TagAudio：音频。</p>
                     * @return TagType <p>标签类别。<br>Other：全量，TagText：文字，TagImage：图片，TagAudio：音频。</p>
                     * 
                     */
                    std::string GetTagType() const;

                    /**
                     * 设置<p>标签类别。<br>Other：全量，TagText：文字，TagImage：图片，TagAudio：音频。</p>
                     * @param _tagType <p>标签类别。<br>Other：全量，TagText：文字，TagImage：图片，TagAudio：音频。</p>
                     * 
                     */
                    void SetTagType(const std::string& _tagType);

                    /**
                     * 判断参数 TagType 是否已赋值
                     * @return TagType 是否已赋值
                     * 
                     */
                    bool TagTypeHasBeenSet() const;

                private:

                    /**
                     * <p>标签类别。<br>Other：全量，TagText：文字，TagImage：图片，TagAudio：音频。</p>
                     */
                    std::string m_tagType;
                    bool m_tagTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAUDITGROUPTAGREQUEST_H_
