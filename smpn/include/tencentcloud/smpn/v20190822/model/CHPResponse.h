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

#ifndef TENCENTCLOUD_SMPN_V20190822_MODEL_CHPRESPONSE_H_
#define TENCENTCLOUD_SMPN_V20190822_MODEL_CHPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smpn
    {
        namespace V20190822
        {
            namespace Model
            {
                /**
                * 终端骚扰保护
                */
                class CHPResponse : public AbstractModel
                {
                public:
                    CHPResponse();
                    ~CHPResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标记类型
 0: 无标记
 50:骚扰电话
 51:房产中介
 52:保险理财
 53:广告推销
 54:诈骗电话
 55:快递电话
 56:出租车专车
                     * @return TagType 标记类型
 0: 无标记
 50:骚扰电话
 51:房产中介
 52:保险理财
 53:广告推销
 54:诈骗电话
 55:快递电话
 56:出租车专车
                     * 
                     */
                    int64_t GetTagType() const;

                    /**
                     * 设置标记类型
 0: 无标记
 50:骚扰电话
 51:房产中介
 52:保险理财
 53:广告推销
 54:诈骗电话
 55:快递电话
 56:出租车专车
                     * @param _tagType 标记类型
 0: 无标记
 50:骚扰电话
 51:房产中介
 52:保险理财
 53:广告推销
 54:诈骗电话
 55:快递电话
 56:出租车专车
                     * 
                     */
                    void SetTagType(const int64_t& _tagType);

                    /**
                     * 判断参数 TagType 是否已赋值
                     * @return TagType 是否已赋值
                     * 
                     */
                    bool TagTypeHasBeenSet() const;

                    /**
                     * 获取标记次数
                     * @return TagCount 标记次数
                     * 
                     */
                    int64_t GetTagCount() const;

                    /**
                     * 设置标记次数
                     * @param _tagCount 标记次数
                     * 
                     */
                    void SetTagCount(const int64_t& _tagCount);

                    /**
                     * 判断参数 TagCount 是否已赋值
                     * @return TagCount 是否已赋值
                     * 
                     */
                    bool TagCountHasBeenSet() const;

                private:

                    /**
                     * 标记类型
 0: 无标记
 50:骚扰电话
 51:房产中介
 52:保险理财
 53:广告推销
 54:诈骗电话
 55:快递电话
 56:出租车专车
                     */
                    int64_t m_tagType;
                    bool m_tagTypeHasBeenSet;

                    /**
                     * 标记次数
                     */
                    int64_t m_tagCount;
                    bool m_tagCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMPN_V20190822_MODEL_CHPRESPONSE_H_
