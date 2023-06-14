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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVTAGSRESPONSE_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVTAGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yinsuda/v20220527/model/KTVTagGroupInfo.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * DescribeKTVTags返回参数结构体
                */
                class DescribeKTVTagsResponse : public AbstractModel
                {
                public:
                    DescribeKTVTagsResponse();
                    ~DescribeKTVTagsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取标签分组列表。
                     * @return TagGroupInfoSet 标签分组列表。
                     * 
                     */
                    std::vector<KTVTagGroupInfo> GetTagGroupInfoSet() const;

                    /**
                     * 判断参数 TagGroupInfoSet 是否已赋值
                     * @return TagGroupInfoSet 是否已赋值
                     * 
                     */
                    bool TagGroupInfoSetHasBeenSet() const;

                private:

                    /**
                     * 标签分组列表。
                     */
                    std::vector<KTVTagGroupInfo> m_tagGroupInfoSet;
                    bool m_tagGroupInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVTAGSRESPONSE_H_
