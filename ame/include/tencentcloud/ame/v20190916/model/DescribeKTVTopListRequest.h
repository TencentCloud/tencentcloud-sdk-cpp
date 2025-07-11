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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVTOPLISTREQUEST_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVTOPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * DescribeKTVTopList请求参数结构体
                */
                class DescribeKTVTopListRequest : public AbstractModel
                {
                public:
                    DescribeKTVTopListRequest();
                    ~DescribeKTVTopListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取榜单类型。默认Hot
<li> Hot, 热歌榜。</li>
                     * @return Type 榜单类型。默认Hot
<li> Hot, 热歌榜。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置榜单类型。默认Hot
<li> Hot, 热歌榜。</li>
                     * @param _type 榜单类型。默认Hot
<li> Hot, 热歌榜。</li>
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
                     * 获取榜单周期 默认为Week
<li> Week, 周榜。</li>
<li> Month, 月榜。</li>
                     * @return Period 榜单周期 默认为Week
<li> Week, 周榜。</li>
<li> Month, 月榜。</li>
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置榜单周期 默认为Week
<li> Week, 周榜。</li>
<li> Month, 月榜。</li>
                     * @param _period 榜单周期 默认为Week
<li> Week, 周榜。</li>
<li> Month, 月榜。</li>
                     * 
                     */
                    void SetPeriod(const std::string& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * 榜单类型。默认Hot
<li> Hot, 热歌榜。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 榜单周期 默认为Week
<li> Week, 周榜。</li>
<li> Month, 月榜。</li>
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVTOPLISTREQUEST_H_
