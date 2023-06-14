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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEPERSONSAMPLESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEPERSONSAMPLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribePersonSamples请求参数结构体
                */
                class DescribePersonSamplesRequest : public AbstractModel
                {
                public:
                    DescribePersonSamplesRequest();
                    ~DescribePersonSamplesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取拉取的素材类型，可选值：
<li>UserDefine：用户自定义素材库；</li>
<li>Default：系统默认素材库。</li>

默认值：UserDefine，拉取用户自定义素材库素材。
说明：如果是拉取系统默认素材库，只能使用素材名字或者素材 ID + 素材名字的方式进行拉取，且人脸图片只返回一张。
                     * @return Type 拉取的素材类型，可选值：
<li>UserDefine：用户自定义素材库；</li>
<li>Default：系统默认素材库。</li>

默认值：UserDefine，拉取用户自定义素材库素材。
说明：如果是拉取系统默认素材库，只能使用素材名字或者素材 ID + 素材名字的方式进行拉取，且人脸图片只返回一张。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置拉取的素材类型，可选值：
<li>UserDefine：用户自定义素材库；</li>
<li>Default：系统默认素材库。</li>

默认值：UserDefine，拉取用户自定义素材库素材。
说明：如果是拉取系统默认素材库，只能使用素材名字或者素材 ID + 素材名字的方式进行拉取，且人脸图片只返回一张。
                     * @param _type 拉取的素材类型，可选值：
<li>UserDefine：用户自定义素材库；</li>
<li>Default：系统默认素材库。</li>

默认值：UserDefine，拉取用户自定义素材库素材。
说明：如果是拉取系统默认素材库，只能使用素材名字或者素材 ID + 素材名字的方式进行拉取，且人脸图片只返回一张。
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
                     * 获取素材 ID，数组长度限制：100。
                     * @return PersonIds 素材 ID，数组长度限制：100。
                     * 
                     */
                    std::vector<std::string> GetPersonIds() const;

                    /**
                     * 设置素材 ID，数组长度限制：100。
                     * @param _personIds 素材 ID，数组长度限制：100。
                     * 
                     */
                    void SetPersonIds(const std::vector<std::string>& _personIds);

                    /**
                     * 判断参数 PersonIds 是否已赋值
                     * @return PersonIds 是否已赋值
                     * 
                     */
                    bool PersonIdsHasBeenSet() const;

                    /**
                     * 获取素材名称，数组长度限制：20。
                     * @return Names 素材名称，数组长度限制：20。
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置素材名称，数组长度限制：20。
                     * @param _names 素材名称，数组长度限制：20。
                     * 
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     * 
                     */
                    bool NamesHasBeenSet() const;

                    /**
                     * 获取素材标签，数组长度限制：20。
                     * @return Tags 素材标签，数组长度限制：20。
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置素材标签，数组长度限制：20。
                     * @param _tags 素材标签，数组长度限制：20。
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取分页偏移量，默认值：0。
                     * @return Offset 分页偏移量，默认值：0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认值：0。
                     * @param _offset 分页偏移量，默认值：0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回记录条数，默认值：100，最大值：100。
                     * @return Limit 返回记录条数，默认值：100，最大值：100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回记录条数，默认值：100，最大值：100。
                     * @param _limit 返回记录条数，默认值：100，最大值：100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 拉取的素材类型，可选值：
<li>UserDefine：用户自定义素材库；</li>
<li>Default：系统默认素材库。</li>

默认值：UserDefine，拉取用户自定义素材库素材。
说明：如果是拉取系统默认素材库，只能使用素材名字或者素材 ID + 素材名字的方式进行拉取，且人脸图片只返回一张。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 素材 ID，数组长度限制：100。
                     */
                    std::vector<std::string> m_personIds;
                    bool m_personIdsHasBeenSet;

                    /**
                     * 素材名称，数组长度限制：20。
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * 素材标签，数组长度限制：20。
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 分页偏移量，默认值：0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回记录条数，默认值：100，最大值：100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEPERSONSAMPLESREQUEST_H_
